#ifndef RENDER_H
#define RENDER_H


#include "base.h"
#include "engine.h"
#include "imgui/imgui.h"


class  Render
{

public:
	Render(AActor* LocalPlayer, AActor* Actor);


	void DrawBone(ImColor Color);



private:

	void DrawPartBone(int32_t start, int32_t end, ImColor Color);


	AActor* Actor = NULL;
	AActor* LocalPlayer = NULL;
	bool BoneIs[BoneFNames::Max];
	Vector3D BonePos[BoneFNames::Max];
	Vector2f BonePoint[BoneFNames::Max];






};



#endif // !


