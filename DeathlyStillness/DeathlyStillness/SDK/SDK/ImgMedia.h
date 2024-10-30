
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

#pragma pack(push, 0x1)

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x00B0 (176 bytes) (0x000088 - 0x0000B0) align 8 MaxSize: 0x00B0
class UImgMediaSource : public UBaseMediaSource
{ 
public:
	FFrameRate                                         FrameRateOverride;                                          // 0x0088   (0x0008)  
	FString                                            ProxyOverride;                                              // 0x0090   (0x0010)  
	FDirectoryPath                                     SequencePath;                                               // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/ImgMedia.ImgMediaSource.SetSequencePath
	// void SetSequencePath(FString Path);                                                                                      // [0xb48010] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.GetSequencePath
	// FString GetSequencePath();                                                                                               // [0xb47f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.GetProxies
	// void GetProxies(TArray<FString>& OutProxies);                                                                            // [0xb47e90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(UImgMediaSource) == 0x00B0); // 176 bytes (0x000088 - 0x0000B0)
static_assert(offsetof(UImgMediaSource, FrameRateOverride) == 0x0088);
static_assert(offsetof(UImgMediaSource, ProxyOverride) == 0x0090);
static_assert(offsetof(UImgMediaSource, SequencePath) == 0x00A0);
