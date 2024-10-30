
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x0108 (264 bytes) (0x000060 - 0x000108) align 8 MaxSize: 0x0108
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0060   (0x0008)  
	TSoftObjectPtr<class UClass*>                      BoundActorClass;                                            // 0x0068   (0x0028)  
	TWeakObjectPtr<class AActor*>                      BoundPreviewActor;                                          // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0098   (0x0020)  MISSED
	TMap<FGuid, FName>                                 BoundActorComponents;                                       // 0x00B8   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0108 (264 bytes) (0x000108 - 0x000108) align 8 MaxSize: 0x0108
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.SequenceCameraShakeCameraStandIn
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 16 MaxSize: 0x0070
class USequenceCameraShakeCameraStandIn : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	float                                              FieldOfView;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x3C];                                      // 0x0034   (0x003C)  MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShake
/// Size: 0x00D0 (208 bytes) (0x000098 - 0x0000D0) align 16 MaxSize: 0x00D0
class USequenceCameraShake : public UCameraShakeBase
{ 
public:
	class UCameraAnimationSequence*                    Sequence;                                                   // 0x0098   (0x0008)  
	float                                              PlayRate;                                                   // 0x00A0   (0x0004)  
	float                                              Scale;                                                      // 0x00A4   (0x0004)  
	float                                              BlendInTime;                                                // 0x00A8   (0x0004)  
	float                                              BlendOutTime;                                               // 0x00AC   (0x0004)  
	float                                              RandomSegmentDuration;                                      // 0x00B0   (0x0004)  
	bool                                               bRandomSegment;                                             // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	class USequenceCameraShakeSequencePlayer*          Player;                                                     // 0x00B8   (0x0008)  
	class USequenceCameraShakeCameraStandIn*           CameraStandIn;                                              // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/TemplateSequence.SequenceCameraShakeSequencePlayer
/// Size: 0x05D8 (1496 bytes) (0x000028 - 0x0005D8) align 8 MaxSize: 0x05D8
class USequenceCameraShakeSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x458];                                     // 0x0028   (0x0458)  MISSED
	class UObject*                                     BoundObjectOverride;                                        // 0x0480   (0x0008)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x0488   (0x0008)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0490   (0x00E8)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x0578   (0x0060)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FTemplateSequenceBindingOverrideData
{ 
	TWeakObjectPtr<class UObject*>                     Object;                                                     // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0270 (624 bytes) (0x000220 - 0x000270) align 8 MaxSize: 0x0270
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0220   (0x0008)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0228   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x023C   (0x0004)  MISSED
	class UTemplateSequencePlayer*                     SequencePlayer;                                             // 0x0240   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x0248   (0x0018)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x0260   (0x000C)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x026C   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	// void SetSequence(class UTemplateSequence* InSequence);                                                                   // [0xb8f560] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	// void SetBinding(class AActor* Actor);                                                                                    // [0xb8f4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	// class UTemplateSequence* LoadSequence();                                                                                 // [0xb8f4a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// class UTemplateSequencePlayer* GetSequencePlayer();                                                                      // [0xb8f470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	// class UTemplateSequence* GetSequence();                                                                                  // [0xb8f440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0688 (1672 bytes) (0x000680 - 0x000688) align 8 MaxSize: 0x0688
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0680   (0x0008)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0xb8f2c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0168 (360 bytes) (0x000160 - 0x000168) align 8 MaxSize: 0x0168
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0160   (0x0008)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x00B0 (176 bytes) (0x000040 - 0x0000B0) align 8 MaxSize: 0x00B0
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0088 (136 bytes) (0x000088 - 0x000088) align 8 MaxSize: 0x0088
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UTemplateSequence) == 0x0108); // 264 bytes (0x000060 - 0x000108)
static_assert(sizeof(UCameraAnimationSequence) == 0x0108); // 264 bytes (0x000108 - 0x000108)
static_assert(sizeof(USequenceCameraShakeCameraStandIn) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(USequenceCameraShake) == 0x00D0); // 208 bytes (0x000098 - 0x0000D0)
static_assert(sizeof(USequenceCameraShakeSequencePlayer) == 0x05D8); // 1496 bytes (0x000028 - 0x0005D8)
static_assert(sizeof(FTemplateSequenceBindingOverrideData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ATemplateSequenceActor) == 0x0270); // 624 bytes (0x000220 - 0x000270)
static_assert(sizeof(UTemplateSequencePlayer) == 0x0688); // 1672 bytes (0x000680 - 0x000688)
static_assert(sizeof(UTemplateSequenceSection) == 0x0168); // 360 bytes (0x000160 - 0x000168)
static_assert(sizeof(UTemplateSequenceSystem) == 0x00B0); // 176 bytes (0x000040 - 0x0000B0)
static_assert(sizeof(UTemplateSequenceTrack) == 0x0088); // 136 bytes (0x000088 - 0x000088)
static_assert(offsetof(UTemplateSequence, MovieScene) == 0x0060);
static_assert(offsetof(UTemplateSequence, BoundActorClass) == 0x0068);
static_assert(offsetof(UTemplateSequence, BoundPreviewActor) == 0x0090);
static_assert(offsetof(UTemplateSequence, BoundActorComponents) == 0x00B8);
static_assert(offsetof(USequenceCameraShake, Sequence) == 0x0098);
static_assert(offsetof(USequenceCameraShake, Player) == 0x00B8);
static_assert(offsetof(USequenceCameraShake, CameraStandIn) == 0x00C0);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, BoundObjectOverride) == 0x0480);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, Sequence) == 0x0488);
static_assert(offsetof(USequenceCameraShakeSequencePlayer, RootTemplateInstance) == 0x0490);
static_assert(offsetof(FTemplateSequenceBindingOverrideData, Object) == 0x0000);
static_assert(offsetof(ATemplateSequenceActor, PlaybackSettings) == 0x0228);
static_assert(offsetof(ATemplateSequenceActor, SequencePlayer) == 0x0240);
static_assert(offsetof(ATemplateSequenceActor, TemplateSequence) == 0x0248);
static_assert(offsetof(ATemplateSequenceActor, BindingOverride) == 0x0260);
