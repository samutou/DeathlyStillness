#ifndef CLASS_H
#define CLASS_H
#include "struct.h"

template <typename T>
class TArray
{
public:
	T*                                             Data;                                                        // 0x0000(0x0008)
	int                                            Num;                                                         // 0x0008(0x0004)
	int                                            Max;                                                         // 0x000C(0x0004)
};



class USceneComponent
{
public:
	char                                      pa_00[0x1c0];
	FTransform                                ComponentToWorld;                                           // 0x01c0(0x0030)
	 
};

class USkeletalMesh
{
public:
	char     pa_00[0x1A8];
	TArray<BoneNmae> Names; //0x1A8

};

class USkeletalMeshComponent : public USceneComponent
{
public:
	char     pa_1F0[0x280]; 
	USkeletalMesh* SkeletalMesh;                                                 // 0x0470(0x0008)
	char     pa_498[0x28];
	TArray<FTransform> BoneTransform; //0x4a0


};


class AActor
{
public:
	char                                      pa_00[0x130];
	USceneComponent* RootComponent;// 0x0130(0x0008)
	char  pa_138[0x148];
	USkeletalMeshComponent* Mesh;                                                         // 0x0280(0x0008)







	string GetName();



};


class ULevel
{
public:
	char                                          pa_00[0x0098];                                               // 0x0098(0x0008)
	TArray<AActor*>                               Actors;                                                       // 0x0098(0x0010)
};




class UGameInstance
{
public:
	void* Getplayercontroller();

};



class UWorld
{
public:
	char                                          pa_00[0x0030];                                            // 0x0028(0x0030)
	ULevel*										  PersistentLevel;                                              // 0x0030(0x0008)
	char                                          pa_38[0x0148];                                             // 0x0150(0x0148)
	UGameInstance*                                GameInstance;                                                 // 0x0180(0x0008)

};



#endif // !

