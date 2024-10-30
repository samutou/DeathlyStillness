
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MRMesh

#pragma pack(push, 0x1)

/// Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMagicLeapHandMeshingComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals
	// void SetUseWeightedNormals(bool bInUseWeightedNormals);                                                                  // [0xb33c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh
	// bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0xb33b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh
	// bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0xb339b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapHandMeshingFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh
	// bool DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0xb33be0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient
	// bool DestroyClient();                                                                                                    // [0xb33b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient
	// bool CreateClient();                                                                                                     // [0xb33ae0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh
	// bool ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0xb33a50] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/MagicLeapHandMeshing.MagicLeapHandMeshBlock
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMagicLeapHandMeshBlock
{ 
	int32_t                                            IndexCount;                                                 // 0x0000   (0x0004)  
	int32_t                                            VertexCount;                                                // 0x0004   (0x0004)  
	TArray<FVector>                                    Vertex;                                                     // 0x0008   (0x0010)  
	TArray<int32_t>                                    Index;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/MagicLeapHandMeshing.MagicLeapHandMesh
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMagicLeapHandMesh
{ 
	int32_t                                            Version;                                                    // 0x0000   (0x0004)  
	int32_t                                            DataCount;                                                  // 0x0004   (0x0004)  
	TArray<FMagicLeapHandMeshBlock>                    data;                                                       // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapHandMeshingComponent) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UMagicLeapHandMeshingFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapHandMeshBlock) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMagicLeapHandMesh) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FMagicLeapHandMeshBlock, Vertex) == 0x0008);
static_assert(offsetof(FMagicLeapHandMeshBlock, Index) == 0x0018);
static_assert(offsetof(FMagicLeapHandMesh, data) == 0x0008);
