#pragma once

 

// Package: AB_EnpcPhysicsDummy

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AB_EnpcPhysicsDummy.AB_EnpcPhysicsDummy_C.ExecuteUbergraph_AB_EnpcPhysicsDummy
// 0x0004 (0x0004 - 0x0000)
struct AB_EnpcPhysicsDummy_C_ExecuteUbergraph_AB_EnpcPhysicsDummy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_EnpcPhysicsDummy_C_ExecuteUbergraph_AB_EnpcPhysicsDummy) == 0x000004, "Wrong alignment on AB_EnpcPhysicsDummy_C_ExecuteUbergraph_AB_EnpcPhysicsDummy");
static_assert(sizeof(AB_EnpcPhysicsDummy_C_ExecuteUbergraph_AB_EnpcPhysicsDummy) == 0x000004, "Wrong size on AB_EnpcPhysicsDummy_C_ExecuteUbergraph_AB_EnpcPhysicsDummy");
static_assert(offsetof(AB_EnpcPhysicsDummy_C_ExecuteUbergraph_AB_EnpcPhysicsDummy, EntryPoint) == 0x000000, "Member 'AB_EnpcPhysicsDummy_C_ExecuteUbergraph_AB_EnpcPhysicsDummy::EntryPoint' has a wrong offset!");

// Function AB_EnpcPhysicsDummy.AB_EnpcPhysicsDummy_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct AB_EnpcPhysicsDummy_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_EnpcPhysicsDummy_C_AnimGraph) == 0x000008, "Wrong alignment on AB_EnpcPhysicsDummy_C_AnimGraph");
static_assert(sizeof(AB_EnpcPhysicsDummy_C_AnimGraph) == 0x000020, "Wrong size on AB_EnpcPhysicsDummy_C_AnimGraph");
static_assert(offsetof(AB_EnpcPhysicsDummy_C_AnimGraph, InPose) == 0x000000, "Member 'AB_EnpcPhysicsDummy_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(AB_EnpcPhysicsDummy_C_AnimGraph, Param_AnimGraph) == 0x000010, "Member 'AB_EnpcPhysicsDummy_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

