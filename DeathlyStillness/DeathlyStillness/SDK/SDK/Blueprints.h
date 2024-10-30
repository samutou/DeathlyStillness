
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Game/Blueprints/GamePlay/SavePlayerState_BP.SavePlayerState_BP_C
/// Size: 0x0031 (49 bytes) (0x000028 - 0x000031) align 8 MaxSize: 0x0031
class USavePlayerState_BP_C : public USaveGame
{ 
public:
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0028   (0x0008)  
	TEnumAsByte<WeaponType>                            WeaponType;                                                 // 0x0030   (0x0001)  
};

/// Class /Game/Blueprints/Character/CharacterSelectAnim.CharacterSelectAnim_C
/// Size: 0x0634 (1588 bytes) (0x0002B8 - 0x000634) align 16 MaxSize: 0x0634
class UCharacterSelectAnim_C : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02C0   (0x0008)  
	FAnimNode_Root                                     AnimGraphNode_Root;                                         // 0x02C8   (0x0030)  
	FAnimNode_BlendListByBool                          AnimGraphNode_BlendListByBool;                              // 0x02F8   (0x00A0)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer;                               // 0x0398   (0x0080)  
	FAnimNode_SequencePlayer                           AnimGraphNode_SequencePlayer0;                              // 0x0418   (0x0080)  
	FAnimNode_RotationOffsetBlendSpace                 AnimGraphNode_RotationOffsetBlendSpace;                     // 0x0498   (0x0190)  
	bool                                               NoWeapon_;                                                  // 0x0628   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0629   (0x0003)  MISSED
	float                                              Yaw;                                                        // 0x062C   (0x0004)  
	float                                              Pitch;                                                      // 0x0630   (0x0004)  


	/// Functions
	// Function /Game/Blueprints/Character/CharacterSelectAnim.CharacterSelectAnim_C.AnimGraph
	// void AnimGraph(FPoseLink& AnimGraph);                                                                                    // [0xfa36a0] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/CharacterSelectAnim.CharacterSelectAnim_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0xfa36a0] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Character/CharacterSelectAnim.CharacterSelectAnim_C.ExecuteUbergraph_CharacterSelectAnim
	// void ExecuteUbergraph_CharacterSelectAnim(int32_t EntryPoint);                                                           // [0xfa36a0] Final                
};

/// Class /Game/Blueprints/GamePlay/NewPlayerController.NewPlayerController_C
/// Size: 0x0570 (1392 bytes) (0x000570 - 0x000570) align 8 MaxSize: 0x0570
class ANewPlayerController_C : public APlayerController
{ 
public:
};

/// Class /Game/Blueprints/Weapons/Weapons/CameraIdle.CameraIdle_C
/// Size: 0x0180 (384 bytes) (0x000180 - 0x000180) align 16 MaxSize: 0x0180
class UCameraIdle_C : public UMatineeCameraShake
{ 
public:
};

/// Class /Game/Blueprints/GamePlay/NewGameMode.NewGameMode_C
/// Size: 0x02C8 (712 bytes) (0x0002C0 - 0x0002C8) align 8 MaxSize: 0x02C8
class ANewGameMode_C : public AGameModeBase
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02C0   (0x0008)  
};

/// Class /Game/Blueprints/Character/CharacterSelect_BP.CharacterSelect_BP_C
/// Size: 0x0510 (1296 bytes) (0x0004B8 - 0x000510) align 16 MaxSize: 0x0510
class ACharacterSelect_BP_C : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x04B8   (0x0008)  MISSED
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C0   (0x0008)  
	class USkeletalMeshComponent*                      Setting;                                                    // 0x04C8   (0x0008)  
	class USkeletalMeshComponent*                      Mag;                                                        // 0x04D0   (0x0008)  
	TArray<class USkeletalMesh*>                       characetermesh;                                             // 0x04D8   (0x0010)  
	class USkeletalMesh*                               null;                                                       // 0x04E8   (0x0008)  
	class USavePlayerState_BP_C*                       SaveGame;                                                   // 0x04F0   (0x0008)  
	class USkeletalMesh*                               null0;                                                      // 0x04F8   (0x0008)  
	TEnumAsByte<WeaponType>                            WeaponType;                                                 // 0x0500   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0501   (0x0007)  MISSED
	class UCharacterSelectAnim_C*                      AnimRef;                                                    // 0x0508   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/Character/CharacterSelect_BP.CharacterSelect_BP_C.Rbc
	// void _Rbc(TEnumAsByte<WeaponType> WeaponType);                                                                           // [0xfa36a0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/CharacterSelect_BP.CharacterSelect_BP_C.‘èﬁV
	// void ___V();                                                                                                             // [0xfa36a0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Character/CharacterSelect_BP.CharacterSelect_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0xfa36a0] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Character/CharacterSelect_BP.CharacterSelect_BP_C.ExecuteUbergraph_CharacterSelect_BP
	// void ExecuteUbergraph_CharacterSelect_BP(int32_t EntryPoint);                                                            // [0xfa36a0] Final|HasDefaults    
};

#pragma pack(pop)


static_assert(sizeof(USavePlayerState_BP_C) == 0x0031); // 49 bytes (0x000028 - 0x000031)
static_assert(sizeof(UCharacterSelectAnim_C) == 0x0634); // 1588 bytes (0x0002B8 - 0x000634)
static_assert(sizeof(ANewPlayerController_C) == 0x0570); // 1392 bytes (0x000570 - 0x000570)
static_assert(sizeof(UCameraIdle_C) == 0x0180); // 384 bytes (0x000180 - 0x000180)
static_assert(sizeof(ANewGameMode_C) == 0x02C8); // 712 bytes (0x0002C0 - 0x0002C8)
static_assert(sizeof(ACharacterSelect_BP_C) == 0x0510); // 1296 bytes (0x0004B8 - 0x000510)
static_assert(offsetof(USavePlayerState_BP_C, SkeletalMesh) == 0x0028);
static_assert(offsetof(USavePlayerState_BP_C, WeaponType) == 0x0030);
static_assert(offsetof(UCharacterSelectAnim_C, UberGraphFrame) == 0x02C0);
static_assert(offsetof(UCharacterSelectAnim_C, AnimGraphNode_Root) == 0x02C8);
static_assert(offsetof(UCharacterSelectAnim_C, AnimGraphNode_BlendListByBool) == 0x02F8);
static_assert(offsetof(UCharacterSelectAnim_C, AnimGraphNode_SequencePlayer) == 0x0398);
static_assert(offsetof(UCharacterSelectAnim_C, AnimGraphNode_SequencePlayer0) == 0x0418);
static_assert(offsetof(UCharacterSelectAnim_C, AnimGraphNode_RotationOffsetBlendSpace) == 0x0498);
static_assert(offsetof(ANewGameMode_C, DefaultSceneRoot) == 0x02C0);
static_assert(offsetof(ACharacterSelect_BP_C, UberGraphFrame) == 0x04C0);
static_assert(offsetof(ACharacterSelect_BP_C, Setting) == 0x04C8);
static_assert(offsetof(ACharacterSelect_BP_C, Mag) == 0x04D0);
static_assert(offsetof(ACharacterSelect_BP_C, characetermesh) == 0x04D8);
static_assert(offsetof(ACharacterSelect_BP_C, null) == 0x04E8);
static_assert(offsetof(ACharacterSelect_BP_C, SaveGame) == 0x04F0);
static_assert(offsetof(ACharacterSelect_BP_C, null0) == 0x04F8);
static_assert(offsetof(ACharacterSelect_BP_C, WeaponType) == 0x0500);
static_assert(offsetof(ACharacterSelect_BP_C, AnimRef) == 0x0508);
