#pragma once

 

// Package: AB_PhysicDummy

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AB_PhysicDummy.AB_PhysicDummy_C.ExecuteUbergraph_AB_PhysicDummy
// 0x0004 (0x0004 - 0x0000)
struct AB_PhysicDummy_C_ExecuteUbergraph_AB_PhysicDummy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_PhysicDummy_C_ExecuteUbergraph_AB_PhysicDummy) == 0x000004, "Wrong alignment on AB_PhysicDummy_C_ExecuteUbergraph_AB_PhysicDummy");
static_assert(sizeof(AB_PhysicDummy_C_ExecuteUbergraph_AB_PhysicDummy) == 0x000004, "Wrong size on AB_PhysicDummy_C_ExecuteUbergraph_AB_PhysicDummy");
static_assert(offsetof(AB_PhysicDummy_C_ExecuteUbergraph_AB_PhysicDummy, EntryPoint) == 0x000000, "Member 'AB_PhysicDummy_C_ExecuteUbergraph_AB_PhysicDummy::EntryPoint' has a wrong offset!");

// Function AB_PhysicDummy.AB_PhysicDummy_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct AB_PhysicDummy_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_PhysicDummy_C_AnimGraph) == 0x000008, "Wrong alignment on AB_PhysicDummy_C_AnimGraph");
static_assert(sizeof(AB_PhysicDummy_C_AnimGraph) == 0x000020, "Wrong size on AB_PhysicDummy_C_AnimGraph");
static_assert(offsetof(AB_PhysicDummy_C_AnimGraph, InPose) == 0x000000, "Member 'AB_PhysicDummy_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(AB_PhysicDummy_C_AnimGraph, Param_AnimGraph) == 0x000010, "Member 'AB_PhysicDummy_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

