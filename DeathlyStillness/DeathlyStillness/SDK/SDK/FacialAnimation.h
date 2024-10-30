
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/FacialAnimation.AudioCurveSourceComponent
/// Size: 0x08A0 (2208 bytes) (0x000860 - 0x0008A0) align 16 MaxSize: 0x08A0
class UAudioCurveSourceComponent : public UAudioComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0860   (0x0008)  MISSED
	FName                                              CurveSourceBindingName;                                     // 0x0868   (0x0008)  
	float                                              CurveSyncOffset;                                            // 0x0870   (0x0004)  
	unsigned char                                      UnknownData01_7[0x2C];                                      // 0x0874   (0x002C)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAudioCurveSourceComponent) == 0x08A0); // 2208 bytes (0x000860 - 0x0008A0)
static_assert(offsetof(UAudioCurveSourceComponent, CurveSourceBindingName) == 0x0868);
