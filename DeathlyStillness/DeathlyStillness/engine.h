#ifndef ENGINE_H
#define ENGINE_H
	

#include "BASE.h"
#include "struct.h"
#include "class.h"
#include "enum.h"
typedef bool       (WINAPI* Fn_ProjectWorldLocationToScreen)(void* pThis, Vector3D WorldLocation, Vector2D& ScreenLocation, bool bPlayerViewportRelative);
typedef FMatrix*   (WINAPI* Fn_GetBoneMatrix)(void* mesh, FMatrix* Matrix, int BoneIdx);
string GetName(uint32_t id);
UWorld* GetWorld();

bool ProjectWorldLocationToScreen( Vector3D WorldLocation, Vector2D& ScreenLocation);

void GetBoneIdx(AActor* actor, BoneIdx* Idx);
Vector3D GetBoneMatrix(void* mesh, int BoneIdx);

#endif		