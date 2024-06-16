#pragma once

 

// Package: BlueOcean

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "BlueOcean_structs.hpp"


namespace SDK::Params
{

// Function BlueOcean.Ocean.GetWaveHeightValue
// 0x0028 (0x0028 - 0x0000)
struct Ocean_GetWaveHeightValue final
{
public:
	struct FVector                                Location;                                          // 0x0000(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C8C[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWorld*                           World;                                             // 0x0010(0x0008)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HeightOnly;                                        // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TwoIterations;                                     // 0x0019(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C8D[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ReturnValue;                                       // 0x001C(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(Ocean_GetWaveHeightValue) == 0x000008, "Wrong alignment on Ocean_GetWaveHeightValue");
static_assert(sizeof(Ocean_GetWaveHeightValue) == 0x000028, "Wrong size on Ocean_GetWaveHeightValue");
static_assert(offsetof(Ocean_GetWaveHeightValue, Location) == 0x000000, "Member 'Ocean_GetWaveHeightValue::Location' has a wrong offset!");
static_assert(offsetof(Ocean_GetWaveHeightValue, World) == 0x000010, "Member 'Ocean_GetWaveHeightValue::World' has a wrong offset!");
static_assert(offsetof(Ocean_GetWaveHeightValue, HeightOnly) == 0x000018, "Member 'Ocean_GetWaveHeightValue::HeightOnly' has a wrong offset!");
static_assert(offsetof(Ocean_GetWaveHeightValue, TwoIterations) == 0x000019, "Member 'Ocean_GetWaveHeightValue::TwoIterations' has a wrong offset!");
static_assert(offsetof(Ocean_GetWaveHeightValue, ReturnValue) == 0x00001C, "Member 'Ocean_GetWaveHeightValue::ReturnValue' has a wrong offset!");

// Function BlueOcean.ProjectedGridComponent.SetProjectedGrid
// 0x0028 (0x0028 - 0x0000)
struct ProjectedGridComponent_SetProjectedGrid final
{
public:
	struct FProjectedGridParameters               Param_Parameters;                                  // 0x0000(0x0028)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ProjectedGridComponent_SetProjectedGrid) == 0x000008, "Wrong alignment on ProjectedGridComponent_SetProjectedGrid");
static_assert(sizeof(ProjectedGridComponent_SetProjectedGrid) == 0x000028, "Wrong size on ProjectedGridComponent_SetProjectedGrid");
static_assert(offsetof(ProjectedGridComponent_SetProjectedGrid, Param_Parameters) == 0x000000, "Member 'ProjectedGridComponent_SetProjectedGrid::Param_Parameters' has a wrong offset!");

// Function BlueOcean.ProjectedGridComponent.GetParameters
// 0x0028 (0x0028 - 0x0000)
struct ProjectedGridComponent_GetParameters final
{
public:
	struct FProjectedGridParameters               ReturnValue;                                       // 0x0000(0x0028)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(ProjectedGridComponent_GetParameters) == 0x000008, "Wrong alignment on ProjectedGridComponent_GetParameters");
static_assert(sizeof(ProjectedGridComponent_GetParameters) == 0x000028, "Wrong size on ProjectedGridComponent_GetParameters");
static_assert(offsetof(ProjectedGridComponent_GetParameters, ReturnValue) == 0x000000, "Member 'ProjectedGridComponent_GetParameters::ReturnValue' has a wrong offset!");

}

