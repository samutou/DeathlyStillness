
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/LiveLinkInterface.ELiveLinkCameraProjectionMode
/// Size: 0x01 (1 bytes)
enum class ELiveLinkCameraProjectionMode : uint8_t
{
	ELiveLinkCameraProjectionMode__Perspective                                       = 0,
	ELiveLinkCameraProjectionMode__Orthographic                                      = 1
};

/// Enum /Script/LiveLinkInterface.ELiveLinkSourceMode
/// Size: 0x01 (1 bytes)
enum class ELiveLinkSourceMode : uint8_t
{
	ELiveLinkSourceMode__Latest                                                      = 0,
	ELiveLinkSourceMode__EngineTime                                                  = 1,
	ELiveLinkSourceMode__Timecode                                                    = 2
};

/// Class /Script/LiveLinkInterface.LiveLinkSourceFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkSourceFactory : public UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkRole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkRole : public UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkBasicRole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkBasicRole : public ULiveLinkRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkAnimationRole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkTransformRole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkCameraRole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkController
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkController : public UObject
{ 
public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceBufferManagementSettings
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FLiveLinkSourceBufferManagementSettings
{ 
	bool                                               bValidEngineTimeEnabled;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ValidEngineTime;                                            // 0x0004   (0x0004)  
	float                                              EngineTimeOffset;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	double                                             EngineTimeClockOffset;                                      // 0x0010   (0x0008)  
	bool                                               bGenerateSubFrame;                                          // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FFrameRate                                         DetectedFrameRate;                                          // 0x001C   (0x0008)  
	bool                                               bUseTimecodeSmoothLatest;                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	FFrameRate                                         SourceTimecodeFrameRate;                                    // 0x0028   (0x0008)  
	bool                                               bValidTimecodeFrameEnabled;                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            ValidTimecodeFrame;                                         // 0x0034   (0x0004)  
	float                                              TimecodeFrameOffset;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	double                                             TimecodeClockOffset;                                        // 0x0040   (0x0008)  
	int32_t                                            LatestOffset;                                               // 0x0048   (0x0004)  
	int32_t                                            MaxNumberOfFrameToBuffered;                                 // 0x004C   (0x0004)  
	bool                                               bKeepAtLeastOneFrame;                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData06_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/LiveLinkInterface.LiveLinkSourceSettings
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class ULiveLinkSourceSettings : public UObject
{ 
public:
	ELiveLinkSourceMode                                Mode;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FLiveLinkSourceBufferManagementSettings            BufferSettings;                                             // 0x0030   (0x0058)  
	FString                                            ConnectionString;                                           // 0x0088   (0x0010)  
	class UClass*                                      Factory;                                                    // 0x0098   (0x0008)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkCurveConversionSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FLiveLinkCurveConversionSettings
{ 
	TMap<FString, FSoftObjectPath>                     CurveConversionAssetMap;                                    // 0x0000   (0x0050)  
};

/// Class /Script/LiveLinkInterface.LiveLinkCurveRemapSettings
/// Size: 0x00F0 (240 bytes) (0x0000A0 - 0x0000F0) align 8 MaxSize: 0x00F0
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{ 
public:
	FLiveLinkCurveConversionSettings                   CurveConversionSettings;                                    // 0x00A0   (0x0050)  
};

/// Class /Script/LiveLinkInterface.LiveLinkFrameInterpolationProcessor
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkFrameInterpolationProcessor : public UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkFramePreProcessor
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkFramePreProcessor : public UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkFrameTranslator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkFrameTranslator : public UObject
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkLightRole
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULiveLinkLightRole : public ULiveLinkTransformRole
{ 
public:
};

/// Class /Script/LiveLinkInterface.LiveLinkSubjectSettings
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class ULiveLinkSubjectSettings : public UObject
{ 
public:
	TArray<class ULiveLinkFramePreProcessor*>          PreProcessors;                                              // 0x0028   (0x0010)  
	class ULiveLinkFrameInterpolationProcessor*        InterpolationProcessor;                                     // 0x0038   (0x0008)  
	TArray<class ULiveLinkFrameTranslator*>            Translators;                                                // 0x0040   (0x0010)  
	class UClass*                                      Role;                                                       // 0x0050   (0x0008)  
	FFrameRate                                         FrameRate;                                                  // 0x0058   (0x0008)  
	bool                                               bRebroadcastSubject;                                        // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectName
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FLiveLinkSubjectName
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Class /Script/LiveLinkInterface.LiveLinkVirtualSubject
/// Size: 0x00D8 (216 bytes) (0x000028 - 0x0000D8) align 8 MaxSize: 0x00D8
class ULiveLinkVirtualSubject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UClass*                                      Role;                                                       // 0x0030   (0x0008)  
	TArray<FLiveLinkSubjectName>                       Subjects;                                                   // 0x0038   (0x0010)  
	TArray<class ULiveLinkFrameTranslator*>            FrameTranslators;                                           // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_7[0x80];                                      // 0x0058   (0x0080)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceHandle
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLiveLinkSourceHandle
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseBlueprintData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FLiveLinkBaseBlueprintData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/LiveLinkInterface.SubjectFrameHandle
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FSubjectFrameHandle : FLiveLinkBaseBlueprintData
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransform
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FLiveLinkTransform
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/LiveLinkInterface.CachedSubjectFrame
/// Size: 0x0160 (352 bytes) (0x000000 - 0x000160) align 8 MaxSize: 0x0160
struct FCachedSubjectFrame
{ 
	unsigned char                                      UnknownData00_2[0x160];                                     // 0x0000   (0x0160)  MISSED
};

/// Struct /Script/LiveLinkInterface.SubjectMetadata
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FSubjectMetadata
{ 
	TMap<FName, FString>                               StringMetadata;                                             // 0x0000   (0x0050)  
	FTimecode                                          SceneTimecode;                                              // 0x0050   (0x0014)  
	FFrameRate                                         SceneFramerate;                                             // 0x0064   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkWorldTime
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLiveLinkWorldTime
{ 
	double                                             Time;                                                       // 0x0000   (0x0008)  
	double                                             Offset;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkMetaData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FLiveLinkMetaData
{ 
	TMap<FName, FString>                               StringMetadata;                                             // 0x0000   (0x0050)  
	FQualifiedFrameTime                                SceneTime;                                                  // 0x0050   (0x0010)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseFrameData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FLiveLinkBaseFrameData
{ 
	FLiveLinkWorldTime                                 WorldTime;                                                  // 0x0000   (0x0010)  
	FLiveLinkMetaData                                  MetaData;                                                   // 0x0010   (0x0060)  
	TArray<float>                                      PropertyValues;                                             // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0080   (0x0020)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkAnimationFrameData
/// Size: 0x00B0 (176 bytes) (0x0000A0 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x00A0   (0x0010)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseStaticData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLiveLinkBaseStaticData
{ 
	TArray<FName>                                      PropertyNames;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkSkeletonStaticData
/// Size: 0x0030 (48 bytes) (0x000010 - 0x000030) align 8 MaxSize: 0x0030
struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData
{ 
	TArray<FName>                                      BoneNames;                                                  // 0x0010   (0x0010)  
	TArray<int32_t>                                    BoneParents;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkBasicBlueprintData
/// Size: 0x00B8 (184 bytes) (0x000008 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData
{ 
	FLiveLinkBaseStaticData                            StaticData;                                                 // 0x0008   (0x0010)  
	FLiveLinkBaseFrameData                             FrameData;                                                  // 0x0018   (0x00A0)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformStaticData
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData
{ 
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraStaticData
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000020) align 8 MaxSize: 0x0020
struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData
{ 
	bool                                               bIsFieldOfViewSupported;                                    // 0x0010   (0x0001)  
	bool                                               bIsAspectRatioSupported;                                    // 0x0011   (0x0001)  
	bool                                               bIsFocalLengthSupported;                                    // 0x0012   (0x0001)  
	bool                                               bIsProjectionModeSupported;                                 // 0x0013   (0x0001)  
	float                                              FilmBackWidth;                                              // 0x0014   (0x0004)  
	float                                              FilmBackHeight;                                             // 0x0018   (0x0004)  
	bool                                               bIsApertureSupported;                                       // 0x001C   (0x0001)  
	bool                                               bIsFocusDistanceSupported;                                  // 0x001D   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x001E   (0x0002)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformFrameData
/// Size: 0x00D0 (208 bytes) (0x0000A0 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData
{ 
	FTransform                                         Transform;                                                  // 0x00A0   (0x0030)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraFrameData
/// Size: 0x00F0 (240 bytes) (0x0000D0 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData
{ 
	float                                              FieldOfView;                                                // 0x00D0   (0x0004)  
	float                                              AspectRatio;                                                // 0x00D4   (0x0004)  
	float                                              FocalLength;                                                // 0x00D8   (0x0004)  
	float                                              Aperture;                                                   // 0x00DC   (0x0004)  
	float                                              FocusDistance;                                              // 0x00E0   (0x0004)  
	ELiveLinkCameraProjectionMode                      ProjectionMode;                                             // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x00E5   (0x000B)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraBlueprintData
/// Size: 0x0120 (288 bytes) (0x000008 - 0x000120) align 16 MaxSize: 0x0120
struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData
{ 
	FLiveLinkCameraStaticData                          StaticData;                                                 // 0x0008   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	FLiveLinkCameraFrameData                           FrameData;                                                  // 0x0030   (0x00F0)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightStaticData
/// Size: 0x0020 (32 bytes) (0x000010 - 0x000020) align 8 MaxSize: 0x0020
struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData
{ 
	bool                                               bIsTemperatureSupported;                                    // 0x0010   (0x0001)  
	bool                                               bIsIntensitySupported;                                      // 0x0011   (0x0001)  
	bool                                               bIsLightColorSupported;                                     // 0x0012   (0x0001)  
	bool                                               bIsInnerConeAngleSupported;                                 // 0x0013   (0x0001)  
	bool                                               bIsOuterConeAngleSupported;                                 // 0x0014   (0x0001)  
	bool                                               bIsAttenuationRadiusSupported;                              // 0x0015   (0x0001)  
	bool                                               bIsSourceLenghtSupported;                                   // 0x0016   (0x0001)  
	bool                                               bIsSourceRadiusSupported;                                   // 0x0017   (0x0001)  
	bool                                               bIsSoftSourceRadiusSupported;                               // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightFrameData
/// Size: 0x0100 (256 bytes) (0x0000D0 - 0x000100) align 16 MaxSize: 0x0100
struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData
{ 
	float                                              Temperature;                                                // 0x00D0   (0x0004)  
	float                                              Intensity;                                                  // 0x00D4   (0x0004)  
	FColor                                             LightColor;                                                 // 0x00D8   (0x0004)  
	float                                              InnerConeAngle;                                             // 0x00DC   (0x0004)  
	float                                              OuterConeAngle;                                             // 0x00E0   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x00E4   (0x0004)  
	float                                              SourceRadius;                                               // 0x00E8   (0x0004)  
	float                                              SoftSourceRadius;                                           // 0x00EC   (0x0004)  
	float                                              SourceLength;                                               // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x00F4   (0x000C)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightBlueprintData
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData
{ 
	FLiveLinkLightStaticData                           StaticData;                                                 // 0x0008   (0x0020)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	FLiveLinkLightFrameData                            FrameData;                                                  // 0x0030   (0x0100)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectKey
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FLiveLinkSubjectKey
{ 
	FGuid                                              Source;                                                     // 0x0000   (0x0010)  
	FLiveLinkSubjectName                               SubjectName;                                                // 0x0010   (0x0008)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectPreset
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FLiveLinkSubjectPreset
{ 
	FLiveLinkSubjectKey                                Key;                                                        // 0x0000   (0x0018)  
	class UClass*                                      Role;                                                       // 0x0018   (0x0008)  
	class ULiveLinkSubjectSettings*                    Settings;                                                   // 0x0020   (0x0008)  
	class ULiveLinkVirtualSubject*                     VirtualSubject;                                             // 0x0028   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourcePreset
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FLiveLinkSourcePreset
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	class ULiveLinkSourceSettings*                     Settings;                                                   // 0x0010   (0x0008)  
	FText                                              SourceType;                                                 // 0x0018   (0x0018)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkRefSkeleton
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FLiveLinkRefSkeleton
{ 
	TArray<FName>                                      BoneNames;                                                  // 0x0000   (0x0010)  
	TArray<int32_t>                                    BoneParents;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectRepresentation
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FLiveLinkSubjectRepresentation
{ 
	FLiveLinkSubjectName                               Subject;                                                    // 0x0000   (0x0008)  
	class UClass*                                      Role;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkInterpolationSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FLiveLinkInterpolationSettings
{ 
	bool                                               bUseInterpolation;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              InterpolationOffset;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeSynchronizationSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FLiveLinkTimeSynchronizationSettings
{ 
	FFrameRate                                         FrameRate;                                                  // 0x0000   (0x0008)  
	FFrameNumber                                       FrameOffset;                                                // 0x0008   (0x0004)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceDebugInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FLiveLinkSourceDebugInfo
{ 
	FLiveLinkSubjectName                               SubjectName;                                                // 0x0000   (0x0008)  
	int32_t                                            SnapshotIndex;                                              // 0x0008   (0x0004)  
	int32_t                                            NumberOfBufferAtSnapshot;                                   // 0x000C   (0x0004)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformBlueprintData
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData
{ 
	FLiveLinkTransformStaticData                       StaticData;                                                 // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FLiveLinkTransformFrameData                        FrameData;                                                  // 0x0020   (0x00D0)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkCurveElement
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FLiveLinkCurveElement
{ 
	FName                                              CurveName;                                                  // 0x0000   (0x0008)  
	float                                              CurveValue;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkFrameData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FLiveLinkFrameData
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0000   (0x0010)  
	TArray<FLiveLinkCurveElement>                      CurveElements;                                              // 0x0010   (0x0010)  
	FLiveLinkWorldTime                                 WorldTime;                                                  // 0x0020   (0x0010)  
	FLiveLinkMetaData                                  MetaData;                                                   // 0x0030   (0x0060)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkFrameRate
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 4 MaxSize: 0x0008
struct FLiveLinkFrameRate : FFrameRate
{ 
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FLiveLinkTimeCode_Base_DEPRECATED
{ 
	int32_t                                            Seconds;                                                    // 0x0000   (0x0004)  
	int32_t                                            Frames;                                                     // 0x0004   (0x0004)  
	FLiveLinkFrameRate                                 FrameRate;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeCode
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 4 MaxSize: 0x0010
struct FLiveLinkTimeCode : FLiveLinkTimeCode_Base_DEPRECATED
{ 
};

/// Struct /Script/LiveLinkInterface.LiveLinkTime
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FLiveLinkTime
{ 
	double                                             WorldTime;                                                  // 0x0000   (0x0008)  
	FQualifiedFrameTime                                SceneTime;                                                  // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(ULiveLinkSourceFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkBasicRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkAnimationRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkTransformRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkCameraRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkController) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FLiveLinkSourceBufferManagementSettings) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(ULiveLinkSourceSettings) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(FLiveLinkCurveConversionSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(ULiveLinkCurveRemapSettings) == 0x00F0); // 240 bytes (0x0000A0 - 0x0000F0)
static_assert(sizeof(ULiveLinkFrameInterpolationProcessor) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkFramePreProcessor) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkFrameTranslator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkLightRole) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULiveLinkSubjectSettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FLiveLinkSubjectName) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(ULiveLinkVirtualSubject) == 0x00D8); // 216 bytes (0x000028 - 0x0000D8)
static_assert(sizeof(FLiveLinkSourceHandle) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLiveLinkBaseBlueprintData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FSubjectFrameHandle) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FLiveLinkTransform) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCachedSubjectFrame) == 0x0160); // 352 bytes (0x000000 - 0x000160)
static_assert(sizeof(FSubjectMetadata) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FLiveLinkWorldTime) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkMetaData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FLiveLinkBaseFrameData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FLiveLinkAnimationFrameData) == 0x00B0); // 176 bytes (0x0000A0 - 0x0000B0)
static_assert(sizeof(FLiveLinkBaseStaticData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkSkeletonStaticData) == 0x0030); // 48 bytes (0x000010 - 0x000030)
static_assert(sizeof(FLiveLinkBasicBlueprintData) == 0x00B8); // 184 bytes (0x000008 - 0x0000B8)
static_assert(sizeof(FLiveLinkTransformStaticData) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FLiveLinkCameraStaticData) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FLiveLinkTransformFrameData) == 0x00D0); // 208 bytes (0x0000A0 - 0x0000D0)
static_assert(sizeof(FLiveLinkCameraFrameData) == 0x00F0); // 240 bytes (0x0000D0 - 0x0000F0)
static_assert(sizeof(FLiveLinkCameraBlueprintData) == 0x0120); // 288 bytes (0x000008 - 0x000120)
static_assert(sizeof(FLiveLinkLightStaticData) == 0x0020); // 32 bytes (0x000010 - 0x000020)
static_assert(sizeof(FLiveLinkLightFrameData) == 0x0100); // 256 bytes (0x0000D0 - 0x000100)
static_assert(sizeof(FLiveLinkLightBlueprintData) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FLiveLinkSubjectKey) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLiveLinkSubjectPreset) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FLiveLinkSourcePreset) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FLiveLinkRefSkeleton) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FLiveLinkSubjectRepresentation) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkInterpolationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FLiveLinkTimeSynchronizationSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLiveLinkSourceDebugInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkTransformBlueprintData) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FLiveLinkCurveElement) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FLiveLinkFrameData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FLiveLinkFrameRate) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FLiveLinkTimeCode_Base_DEPRECATED) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FLiveLinkTimeCode) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FLiveLinkTime) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, DetectedFrameRate) == 0x001C);
static_assert(offsetof(FLiveLinkSourceBufferManagementSettings, SourceTimecodeFrameRate) == 0x0028);
static_assert(offsetof(ULiveLinkSourceSettings, Mode) == 0x0028);
static_assert(offsetof(ULiveLinkSourceSettings, BufferSettings) == 0x0030);
static_assert(offsetof(ULiveLinkSourceSettings, ConnectionString) == 0x0088);
static_assert(offsetof(ULiveLinkSourceSettings, Factory) == 0x0098);
static_assert(offsetof(FLiveLinkCurveConversionSettings, CurveConversionAssetMap) == 0x0000);
static_assert(offsetof(ULiveLinkCurveRemapSettings, CurveConversionSettings) == 0x00A0);
static_assert(offsetof(ULiveLinkSubjectSettings, PreProcessors) == 0x0028);
static_assert(offsetof(ULiveLinkSubjectSettings, InterpolationProcessor) == 0x0038);
static_assert(offsetof(ULiveLinkSubjectSettings, Translators) == 0x0040);
static_assert(offsetof(ULiveLinkSubjectSettings, Role) == 0x0050);
static_assert(offsetof(ULiveLinkSubjectSettings, FrameRate) == 0x0058);
static_assert(offsetof(FLiveLinkSubjectName, Name) == 0x0000);
static_assert(offsetof(ULiveLinkVirtualSubject, Role) == 0x0030);
static_assert(offsetof(ULiveLinkVirtualSubject, Subjects) == 0x0038);
static_assert(offsetof(ULiveLinkVirtualSubject, FrameTranslators) == 0x0048);
static_assert(offsetof(FSubjectMetadata, StringMetadata) == 0x0000);
static_assert(offsetof(FSubjectMetadata, SceneTimecode) == 0x0050);
static_assert(offsetof(FSubjectMetadata, SceneFramerate) == 0x0064);
static_assert(offsetof(FLiveLinkMetaData, StringMetadata) == 0x0000);
static_assert(offsetof(FLiveLinkMetaData, SceneTime) == 0x0050);
static_assert(offsetof(FLiveLinkBaseFrameData, WorldTime) == 0x0000);
static_assert(offsetof(FLiveLinkBaseFrameData, MetaData) == 0x0010);
static_assert(offsetof(FLiveLinkBaseFrameData, PropertyValues) == 0x0070);
static_assert(offsetof(FLiveLinkAnimationFrameData, Transforms) == 0x00A0);
static_assert(offsetof(FLiveLinkBaseStaticData, PropertyNames) == 0x0000);
static_assert(offsetof(FLiveLinkSkeletonStaticData, BoneNames) == 0x0010);
static_assert(offsetof(FLiveLinkSkeletonStaticData, BoneParents) == 0x0020);
static_assert(offsetof(FLiveLinkBasicBlueprintData, StaticData) == 0x0008);
static_assert(offsetof(FLiveLinkBasicBlueprintData, FrameData) == 0x0018);
static_assert(offsetof(FLiveLinkTransformFrameData, Transform) == 0x00A0);
static_assert(offsetof(FLiveLinkCameraFrameData, ProjectionMode) == 0x00E4);
static_assert(offsetof(FLiveLinkCameraBlueprintData, StaticData) == 0x0008);
static_assert(offsetof(FLiveLinkCameraBlueprintData, FrameData) == 0x0030);
static_assert(offsetof(FLiveLinkLightFrameData, LightColor) == 0x00D8);
static_assert(offsetof(FLiveLinkLightBlueprintData, StaticData) == 0x0008);
static_assert(offsetof(FLiveLinkLightBlueprintData, FrameData) == 0x0030);
static_assert(offsetof(FLiveLinkSubjectKey, Source) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectKey, SubjectName) == 0x0010);
static_assert(offsetof(FLiveLinkSubjectPreset, Key) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectPreset, Role) == 0x0018);
static_assert(offsetof(FLiveLinkSubjectPreset, Settings) == 0x0020);
static_assert(offsetof(FLiveLinkSubjectPreset, VirtualSubject) == 0x0028);
static_assert(offsetof(FLiveLinkSourcePreset, Guid) == 0x0000);
static_assert(offsetof(FLiveLinkSourcePreset, Settings) == 0x0010);
static_assert(offsetof(FLiveLinkSourcePreset, SourceType) == 0x0018);
static_assert(offsetof(FLiveLinkRefSkeleton, BoneNames) == 0x0000);
static_assert(offsetof(FLiveLinkRefSkeleton, BoneParents) == 0x0010);
static_assert(offsetof(FLiveLinkSubjectRepresentation, Subject) == 0x0000);
static_assert(offsetof(FLiveLinkSubjectRepresentation, Role) == 0x0008);
static_assert(offsetof(FLiveLinkTimeSynchronizationSettings, FrameRate) == 0x0000);
static_assert(offsetof(FLiveLinkTimeSynchronizationSettings, FrameOffset) == 0x0008);
static_assert(offsetof(FLiveLinkSourceDebugInfo, SubjectName) == 0x0000);
static_assert(offsetof(FLiveLinkTransformBlueprintData, StaticData) == 0x0008);
static_assert(offsetof(FLiveLinkTransformBlueprintData, FrameData) == 0x0020);
static_assert(offsetof(FLiveLinkCurveElement, CurveName) == 0x0000);
static_assert(offsetof(FLiveLinkFrameData, Transforms) == 0x0000);
static_assert(offsetof(FLiveLinkFrameData, CurveElements) == 0x0010);
static_assert(offsetof(FLiveLinkFrameData, WorldTime) == 0x0020);
static_assert(offsetof(FLiveLinkFrameData, MetaData) == 0x0030);
static_assert(offsetof(FLiveLinkTimeCode_Base_DEPRECATED, FrameRate) == 0x0008);
static_assert(offsetof(FLiveLinkTime, SceneTime) == 0x0008);
