#ifndef STRUCT_H
#define STRUCT_H

#include "BASE.h"
struct FNameEntry
{

	uint16_t bIsWide : 1;
	uint16_t LowercaseProbeHash : 5;
	uint16_t Len : 10;
	union
	{
		char	AnsiName[1024];
		wchar_t	WideName[1024];
	};

};

struct Vector2D
{
	float X;
	float Y;
};

struct Vector3D : Vector2D
{
	float Z;
};
struct Vector4D : Vector3D
{
	float W;
};
struct Vector2f
{
	float X = 0, Y = 0;
};

struct FMatrix
{
	float _11, _12, _13, _14;
	float _21, _22, _23, _24;
	float _31, _32, _33, _34;
	float _41, _42, _43, _44;
	FMatrix operator*(const FMatrix& other);

	
};



struct BoneIdx
{
	int head, neck_01, spine_03, spine_02, spine_01, pelvis;
	int hand_l, lowerarm_l, upperarm_l, clavicle_l, clavicle_r, upperarm_r, lowerarm_r, hand_r;
	int ball_l, foot_l, calf_l, thigh_l, thigh_r, calf_r, foot_r, ball_r;
};

struct BoneNmae
{
	uint32_t BoneNmae;
	int A;
	int B;



};

struct FTransform
{
	Vector4D      Rotation;
	Vector4D      Translation;
	Vector4D      Scale3D;

	FMatrix ToMatrixWithScale();



};


#endif


