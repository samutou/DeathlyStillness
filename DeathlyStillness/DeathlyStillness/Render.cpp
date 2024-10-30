#include "Render.h"



Render::Render(AActor* LocalPlayer, AActor* Actor)
{
	this->Actor = Actor;
	this->LocalPlayer = LocalPlayer;

	for (int32_t i = 0; i < BoneFNames::Max; i++)
	{
		Vector2D Screen{ 0 };
		BonePos[i] = GetBoneMatrix(Actor->Mesh, i);
		BoneIs[i] = ProjectWorldLocationToScreen(BonePos[i], Screen);

		BonePoint[i].X = (float)(Screen.X);
		BonePoint[i].Y = (float)(Screen.Y);
	}
}

void Render::DrawBone(ImColor Color)
{
	DrawPartBone(0, 6, Color);
	DrawPartBone(6, 8, Color);
	DrawPartBone(14, 8, Color);
}


void Render::DrawPartBone(int32_t start, int32_t end, ImColor Color)
{

	BoneIdx Idx;
	GetBoneIdx(this->Actor, &Idx);
	int32_t* Bone = (int32_t*)&Idx;

	Vector2f Point, oPoint;

	for (int32_t i = start; i < start + end; i++)
	{
		Point = BonePoint[Bone[i]];
		
		if (i != start)
		{
			ImGui::GetForegroundDrawList()->AddLine({ oPoint.X,oPoint.Y }, { Point.X,Point.Y }, Color);
		}

		oPoint = Point;

	}
}


