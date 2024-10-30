
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/LocationServicesBPLibrary.ELocationAccuracy
/// Size: 0x01 (1 bytes)
enum class ELocationAccuracy : uint8_t
{
	ELocationAccuracy__LA_ThreeKilometers                                            = 0,
	ELocationAccuracy__LA_OneKilometer                                               = 1,
	ELocationAccuracy__LA_HundredMeters                                              = 2,
	ELocationAccuracy__LA_TenMeters                                                  = 3,
	ELocationAccuracy__LA_Best                                                       = 4,
	ELocationAccuracy__LA_Navigation                                                 = 5
};

/// Class /Script/LocationServicesBPLibrary.LocationServices
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULocationServices : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LocationServicesBPLibrary.LocationServices.StopLocationServices
	// bool StopLocationServices();                                                                                             // [0xc1d9d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.StartLocationServices
	// bool StartLocationServices();                                                                                            // [0xc1d9a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
	// bool IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);                                                            // [0xc1d920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.InitLocationServices
	// bool InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);                   // [0xc1d810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
	// class ULocationServicesImpl* GetLocationServicesImpl();                                                                  // [0xc1d7f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
	// FLocationServicesData GetLastKnownLocation();                                                                            // [0xc1d7b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
	// bool AreLocationServicesEnabled();                                                                                       // [0xc1d780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LocationServicesBPLibrary.LocationServicesImpl
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULocationServicesImpl : public UObject
{ 
public:
	SDK_UNDEFINED(16,398) /* FMulticastInlineDelegate */ __um(OnLocationChanged);                                  // 0x0028   (0x0010)  
};

/// Struct /Script/LocationServicesBPLibrary.LocationServicesData
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FLocationServicesData
{ 
	float                                              Timestamp;                                                  // 0x0000   (0x0004)  
	float                                              Longitude;                                                  // 0x0004   (0x0004)  
	float                                              Latitude;                                                   // 0x0008   (0x0004)  
	float                                              HorizontalAccuracy;                                         // 0x000C   (0x0004)  
	float                                              VerticalAccuracy;                                           // 0x0010   (0x0004)  
	float                                              Altitude;                                                   // 0x0014   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(ULocationServices) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULocationServicesImpl) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FLocationServicesData) == 0x0018); // 24 bytes (0x000000 - 0x000018)
