
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/Movies/introduce/StartUMG.StartUMG_C
/// Size: 0x02A1 (673 bytes) (0x000260 - 0x0002A1) align 8 MaxSize: 0x02A1
class UStartUMG_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UWidgetAnimation*                            Appear;                                                     // 0x0268   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0270   (0x0008)  
	class UImage*                                      Image0;                                                     // 0x0278   (0x0008)  
	class UImage*                                      Image1;                                                     // 0x0280   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0288   (0x0008)  
	FString                                            InvitationResult;                                           // 0x0290   (0x0010)  
	bool                                               _h__;                                                       // 0x02A0   (0x0001)  


	/// Functions
	// Function /Game/Movies/introduce/StartUMG.StartUMG_C.Construct
	// void Construct();                                                                                                        // [0xfa36a0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Movies/introduce/StartUMG.StartUMG_C.InvitationResult_Event1
	// void InvitationResult_Event1(TArray<FString>& data, TArray<FString>& Header, int32_t statusCode, TArray<char>& byteData, FString requestID); // [0xfa36a0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Movies/introduce/StartUMG.StartUMG_C.ExecuteUbergraph_StartUMG
	// void ExecuteUbergraph_StartUMG(int32_t EntryPoint);                                                                      // [0xfa36a0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(UStartUMG_C) == 0x02A1); // 673 bytes (0x000260 - 0x0002A1)
static_assert(offsetof(UStartUMG_C, UberGraphFrame) == 0x0260);
static_assert(offsetof(UStartUMG_C, Appear) == 0x0268);
static_assert(offsetof(UStartUMG_C, Image) == 0x0270);
static_assert(offsetof(UStartUMG_C, Image0) == 0x0278);
static_assert(offsetof(UStartUMG_C, Image1) == 0x0280);
static_assert(offsetof(UStartUMG_C, MediaPlayer) == 0x0288);
static_assert(offsetof(UStartUMG_C, InvitationResult) == 0x0290);
