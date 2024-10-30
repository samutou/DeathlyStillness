#include "DX11.h"
#include "engine.h"
#include "Render.h"

typedef HRESULT(WINAPI* Present)(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);
typedef LRESULT(WINAPI* WndProc)(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
typedef HRESULT(WINAPI* ResizeBuffers)(
    IDXGISwapChain* This,
    /* [in] */ UINT BufferCount,
    /* [in] */ UINT Width,
    /* [in] */ UINT Height,
    /* [in] */ DXGI_FORMAT NewFormat,
    /* [in] */ UINT SwapChainFlags);

static ID3D11Device* g_pd3dDevice = nullptr;
static ID3D11DeviceContext* g_pd3dDeviceContext = nullptr;
static IDXGISwapChain* g_pSwapChain = nullptr;
static ID3D11RenderTargetView* g_mainRenderTargetView = nullptr;
static bool                     g_SwapChainOccluded = false;
static UINT    g_ResizeWidth = 0, g_ResizeHeight = 0;
float someFloatVariable = 0.5f; // 初始化为0.5


//函数声明 
HRESULT STDMETHODCALLTYPE  Imgui_Init(IDXGISwapChain* This, UINT SyncInterval, UINT Flags);


HWND g_hWnd = nullptr;
DWORD64* Vtable = nullptr;
Present oPresent = nullptr;
WndProc oWndProc = nullptr;
ResizeBuffers oResizeBuffers = nullptr;


HRESULT STDMETHODCALLTYPE hookResizeBuffers(
    IDXGISwapChain* This,
    /* [in] */ UINT BufferCount,
    /* [in] */ UINT Width,
    /* [in] */ UINT Height,
    /* [in] */ DXGI_FORMAT NewFormat,
    /* [in] */ UINT SwapChainFlags)
{

    if (g_pd3dDevice)
    {
        g_pd3dDevice->Release();
        g_pd3dDevice = nullptr;
        g_mainRenderTargetView->Release();
        ImGui_ImplDX11_Shutdown();
        Vtable[8] = (DWORD64)Imgui_Init;
    }


    return oResizeBuffers(This, BufferCount, Width, Height, NewFormat, SwapChainFlags);





}

HRESULT STDMETHODCALLTYPE  m_Present(IDXGISwapChain* This, UINT SyncInterval, UINT Flags)
{

    //开始一个新的帧
    ImGui_ImplDX11_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();
    UWorld* m_UWorld = GetWorld();
    //printf("m_UWorld:%p\n", m_UWorld);
    TArray<AActor*>& Actors = m_UWorld->PersistentLevel->Actors;
    //printf("Actors.Num:%d\n", Actors.Num);
    for (size_t i = 0; i < Actors.Num; i++)
    {
        AActor* m_Actor = Actors.Data[i];
        if (!m_Actor || !(m_Actor->RootComponent))
            continue;
        if (m_Actor->GetName().find("Zombie_BP") == string::npos)
            continue;
        
		Render m_Render(NULL, m_Actor);
		ImColor Color = ImColor(255, 255, 0);
		m_Render.DrawBone(Color);


        //BoneIdx Idx{ 0 };
        //GetBoneIdx(m_Actor,&Idx);
        //int Count = sizeof(BoneIdx)/4;

        //for (int j = 0; j < Count; j++)
        //{
        //    int* BoneIdx = (int*)&Idx;

        //    /* FMatrix m_Matrix = m_Actor->Mesh->BoneTransform.Data[BoneIdx[j]].ToMatrixWithScale()*
        //         m_Actor->Mesh->ComponentToWorld.ToMatrixWithScale();*/
        //    Vector3D pos = GetBoneMatrix(m_Actor->Mesh, j);

        //    string BoneName = GetName(m_Actor->Mesh->SkeletalMesh->Names.Data[BoneIdx[j]].BoneNmae);
        //    Vector2D Point = { 0 };
        //    if (ProjectWorldLocationToScreen(pos, Point))
        //    {
        //        ImGui::GetForegroundDrawList()->AddText({ Point.X, Point.Y }, ImColor(255, 255, 0), BoneName.c_str());

        //    }

        //    
        //    //FTransform& m_Transform = m_Actor->RootComponent->ComponentToWorld;

        //    //printf("%f,%f,%f\n", m_Transform.Translation.X, m_Transform.Translation.Y, m_Transform.Translation.Z);

        //    /*Vector2D Screen = { 0 };
        //    if(ProjectWorldLocationToScreen(m_Transform.Translation, Screen))
        //    {
        //        char buf[256];
        //        sprintf(buf, "% p", m_Actor);
        //        ImGui::GetForegroundDrawList()->AddText({ Screen.X, Screen.Y }, ImColor(255, 255, 0), buf);
        //    }*/
        //}

		

    }
    //ImGui::Begin("Test");
    //
    ////imgui功能绘制区域

    //ImGui::End();
    
    //将imgui内容提交到后台缓冲区
    ImGui::Render();
    g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, nullptr);
    ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
    return oPresent(This, SyncInterval, Flags);
}
// 获取 DirectX 11 指针并初始化渲染目标视图
void GetDx11Ptr(IDXGISwapChain* This)
{
    g_pSwapChain = This;
    //获取设备GUID和上下文
    g_pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&g_pd3dDevice);
    g_pd3dDevice->GetImmediateContext(&g_pd3dDeviceContext);

    ID3D11Texture2D* pBackBuffer;
    //获取后台缓冲区
    g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    //创建渲染目标视图
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, nullptr, &g_mainRenderTargetView);
    pBackBuffer->Release();

}

// 从imgui转发声明消息处理程序_impl_win32.cpp
extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
// 重写WndProc
LRESULT WINAPI hookWndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

   
    return CallWindowProc(oWndProc, hWnd, msg, wParam, lParam);
}


//初始化IMGUI
HRESULT STDMETHODCALLTYPE  Imgui_Init(IDXGISwapChain* This, UINT SyncInterval, UINT Flags)
{
    static bool isfirst = false;
    GetDx11Ptr(This);

    if (isfirst)
    {
        ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);
    }
    else
    {
        isfirst = true;
        oWndProc = (WndProc)SetWindowLongPtrA(g_hWnd, GWLP_WNDPROC, (LONG_PTR)hookWndProc);
        ImGui::CreateContext();//create imgui context
        ImGui::StyleColorsDark();
        ImGui_ImplWin32_Init(g_hWnd);
        ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);
        
    }

    Vtable[8] = (DWORD64)m_Present;
    return oPresent(This, SyncInterval, Flags);
}



//hook函数
void hookD3D11()
{

    g_hWnd = FindWindowA("UnrealWindow",NULL);
    printf("g_hWnd:%p", g_hWnd);
    // Setup swap chain
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = g_hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;

    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    HRESULT res = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext);
    if (res == DXGI_ERROR_UNSUPPORTED) // 如果创建失败且返回错误DXGI_ERROR_UNSUPPORTED，则使用WARP（窗口辅助渲染平台）进行软件渲染。
        res = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_WARP, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, nullptr, &featureLevel, nullptr);
    if (res != S_OK)
        return ;






    printf("g_pSwapChain:%p\n", g_pSwapChain);

    //获取虚表地址
    Vtable = *(DWORD64**)g_pSwapChain;
    //获取然后替换Present地址为自己的函数地址
    oPresent = (Present)Vtable[8];
    oResizeBuffers = (ResizeBuffers)Vtable[13];
    DWORD OldProtect;
    VirtualProtect(Vtable, 1, PAGE_EXECUTE_READWRITE, &OldProtect);
    Vtable[8] = (DWORD64)Imgui_Init;
    Vtable[13] = (DWORD64)hookResizeBuffers;
    //释放交换链
    g_pSwapChain->Release();
}