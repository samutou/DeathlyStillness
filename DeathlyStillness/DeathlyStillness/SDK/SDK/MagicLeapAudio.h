
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMagicLeapAudioFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackUnpluggedDelegate
	// bool SetOnAudioJackUnpluggedDelegate(FDelegateProperty& ResultDelegate);                                                 // [0xb16770] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetOnAudioJackPluggedDelegate
	// bool SetOnAudioJackPluggedDelegate(FDelegateProperty& ResultDelegate);                                                   // [0xb166c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.SetMicMute
	// bool SetMicMute(bool IsMuted);                                                                                           // [0xb16630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MagicLeapAudio.MagicLeapAudioFunctionLibrary.IsMicMuted
	// bool IsMicMuted();                                                                                                       // [0xb16600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/MagicLeapAudio.MagicLeapAudioDummyStruct
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMagicLeapAudioDummyStruct
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMagicLeapAudioFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMagicLeapAudioDummyStruct) == 0x0001); // 1 bytes (0x000000 - 0x000001)
