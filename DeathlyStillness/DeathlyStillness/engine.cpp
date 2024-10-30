#include "engine.h"

//Gname_offect =0x431BAC0



uint8_t* GnameBase = (uint8_t*)GetModuleHandleA(0);
uint8_t** Gname =(uint8_t**)(GnameBase + 0x431BAC0);
UWorld** GWorld = (UWorld**)(GnameBase + 0x446D5E0);
Fn_ProjectWorldLocationToScreen orig_ProjectWorldLocationToScreen = (Fn_ProjectWorldLocationToScreen)(GnameBase + 0x2671980);
Fn_GetBoneMatrix                orig_GetBoneMatrix                = (Fn_GetBoneMatrix)(GnameBase + 0x235CC80);
string GetName(uint32_t id)
{

	uint32_t Block = id >> 16;
	uint32_t Offset = id & 65535;


	FNameEntry* Info = (FNameEntry*)(Gname[Block+2] + 2 * Offset);
	return string(Info->AnsiName, Info->Len);
	
}

UWorld* GetWorld()
{
	return * GWorld;
}


bool ProjectWorldLocationToScreen(Vector3D WorldLocation, Vector2D& ScreenLocation)
{
	void* pthis = GetWorld()->GameInstance->Getplayercontroller();
	return orig_ProjectWorldLocationToScreen(pthis, WorldLocation, ScreenLocation,false);
	
}


void GetBoneIdx(AActor* actor, BoneIdx* Idx)
{
	for ( int i = 0; i < actor->Mesh->SkeletalMesh->Names.Num; i++)
	{
		string BoneName = GetName(actor->Mesh->SkeletalMesh->Names.Data[i].BoneNmae);
		if (BoneName == "head") { Idx->head = i; }
		else if (BoneName == "hand_l") { Idx->hand_l = i; }
		else if (BoneName == "hand_r") { Idx->hand_r = i; }
		else if (BoneName == "ball_l") { Idx->ball_l = i; }
		else if (BoneName == "ball_r") { Idx->ball_r = i; }
		else if (BoneName == "foot_l") { Idx->foot_l = i; }
		else if (BoneName == "calf_l") { Idx->calf_l = i; }
		else if (BoneName == "calf_r") { Idx->calf_r = i; }
		else if (BoneName == "foot_r") { Idx->foot_r = i; }
		else if (BoneName == "pelvis") { Idx->pelvis = i; }
		else if (BoneName == "neck_01") { Idx->neck_01 = i; }
		else if (BoneName == "thigh_l") { Idx->thigh_l = i; }
		else if (BoneName == "thigh_r") { Idx->thigh_r = i; }
		else if (BoneName == "spine_03") { Idx->spine_03 = i; }
		else if (BoneName == "spine_02") { Idx->spine_02 = i; }
		else if (BoneName == "spine_01") { Idx->spine_01 = i; }
		else if (BoneName == "lowerarm_l") { Idx->lowerarm_l = i; }
		else if (BoneName == "lowerarm_r") { Idx->lowerarm_r = i; }
		else if (BoneName == "clavicle_l") { Idx->clavicle_l = i; }
		else if (BoneName == "clavicle_r") { Idx->clavicle_r = i; }
		else if (BoneName == "upperarm_l") { Idx->upperarm_l = i; }
		else if (BoneName == "upperarm_r") { Idx->upperarm_r = i; };
		//printf("%s,%d\n", BoneName.c_str(),i);
	}
		
	return ;


	

}

Vector3D GetBoneMatrix(void* mesh, int BoneIdx)
{
	FMatrix Matrix;
	orig_GetBoneMatrix(mesh, &Matrix,BoneIdx);
	Vector3D pos;
	pos.X = Matrix._41;
	pos.Y = Matrix._42;
	pos.Z = Matrix._43;
	

	return pos;
}




