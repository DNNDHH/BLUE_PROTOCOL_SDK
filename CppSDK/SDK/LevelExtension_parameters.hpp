#pragma once

 

// Package: LevelExtension

#include "Basic.hpp"


namespace SDK::Params
{

// Function LevelExtension.LandscapeWallBase.GetDecalClass
// 0x0008 (0x0008 - 0x0000)
struct LandscapeWallBase_GetDecalClass final
{
public:
	TSubclassOf<class ADecalActor>                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeWallBase_GetDecalClass) == 0x000008, "Wrong alignment on LandscapeWallBase_GetDecalClass");
static_assert(sizeof(LandscapeWallBase_GetDecalClass) == 0x000008, "Wrong size on LandscapeWallBase_GetDecalClass");
static_assert(offsetof(LandscapeWallBase_GetDecalClass, ReturnValue) == 0x000000, "Member 'LandscapeWallBase_GetDecalClass::ReturnValue' has a wrong offset!");

// Function LevelExtension.LandscapeWallBase.GetWallComponent
// 0x0008 (0x0008 - 0x0000)
struct LandscapeWallBase_GetWallComponent final
{
public:
	class ULandscapeWallComponent*                ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeWallBase_GetWallComponent) == 0x000008, "Wrong alignment on LandscapeWallBase_GetWallComponent");
static_assert(sizeof(LandscapeWallBase_GetWallComponent) == 0x000008, "Wrong size on LandscapeWallBase_GetWallComponent");
static_assert(offsetof(LandscapeWallBase_GetWallComponent, ReturnValue) == 0x000000, "Member 'LandscapeWallBase_GetWallComponent::ReturnValue' has a wrong offset!");

// Function LevelExtension.LandscapeWallBase.GetHalfHeight
// 0x0004 (0x0004 - 0x0000)
struct LandscapeWallBase_GetHalfHeight final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeWallBase_GetHalfHeight) == 0x000004, "Wrong alignment on LandscapeWallBase_GetHalfHeight");
static_assert(sizeof(LandscapeWallBase_GetHalfHeight) == 0x000004, "Wrong size on LandscapeWallBase_GetHalfHeight");
static_assert(offsetof(LandscapeWallBase_GetHalfHeight, ReturnValue) == 0x000000, "Member 'LandscapeWallBase_GetHalfHeight::ReturnValue' has a wrong offset!");

// Function LevelExtension.LandscapeWallBase.GetHalfThickness
// 0x0004 (0x0004 - 0x0000)
struct LandscapeWallBase_GetHalfThickness final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeWallBase_GetHalfThickness) == 0x000004, "Wrong alignment on LandscapeWallBase_GetHalfThickness");
static_assert(sizeof(LandscapeWallBase_GetHalfThickness) == 0x000004, "Wrong size on LandscapeWallBase_GetHalfThickness");
static_assert(offsetof(LandscapeWallBase_GetHalfThickness, ReturnValue) == 0x000000, "Member 'LandscapeWallBase_GetHalfThickness::ReturnValue' has a wrong offset!");

// Function LevelExtension.LandscapeWallSpline.GetSplineComponent
// 0x0008 (0x0008 - 0x0000)
struct LandscapeWallSpline_GetSplineComponent final
{
public:
	class ULandscapeWallSplineComponent*          ReturnValue;                                       // 0x0000(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(LandscapeWallSpline_GetSplineComponent) == 0x000008, "Wrong alignment on LandscapeWallSpline_GetSplineComponent");
static_assert(sizeof(LandscapeWallSpline_GetSplineComponent) == 0x000008, "Wrong size on LandscapeWallSpline_GetSplineComponent");
static_assert(offsetof(LandscapeWallSpline_GetSplineComponent, ReturnValue) == 0x000000, "Member 'LandscapeWallSpline_GetSplineComponent::ReturnValue' has a wrong offset!");

}

