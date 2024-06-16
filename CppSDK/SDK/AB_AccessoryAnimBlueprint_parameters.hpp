#pragma once

 

// Package: AB_AccessoryAnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AB_AccessoryAnimBlueprint.AB_AccessoryAnimBlueprint_C.ExecuteUbergraph_AB_AccessoryAnimBlueprint
// 0x0004 (0x0004 - 0x0000)
struct AB_AccessoryAnimBlueprint_C_ExecuteUbergraph_AB_AccessoryAnimBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_AccessoryAnimBlueprint_C_ExecuteUbergraph_AB_AccessoryAnimBlueprint) == 0x000004, "Wrong alignment on AB_AccessoryAnimBlueprint_C_ExecuteUbergraph_AB_AccessoryAnimBlueprint");
static_assert(sizeof(AB_AccessoryAnimBlueprint_C_ExecuteUbergraph_AB_AccessoryAnimBlueprint) == 0x000004, "Wrong size on AB_AccessoryAnimBlueprint_C_ExecuteUbergraph_AB_AccessoryAnimBlueprint");
static_assert(offsetof(AB_AccessoryAnimBlueprint_C_ExecuteUbergraph_AB_AccessoryAnimBlueprint, EntryPoint) == 0x000000, "Member 'AB_AccessoryAnimBlueprint_C_ExecuteUbergraph_AB_AccessoryAnimBlueprint::EntryPoint' has a wrong offset!");

// Function AB_AccessoryAnimBlueprint.AB_AccessoryAnimBlueprint_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_AccessoryAnimBlueprint_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_AccessoryAnimBlueprint_C_AnimGraph) == 0x000008, "Wrong alignment on AB_AccessoryAnimBlueprint_C_AnimGraph");
static_assert(sizeof(AB_AccessoryAnimBlueprint_C_AnimGraph) == 0x000010, "Wrong size on AB_AccessoryAnimBlueprint_C_AnimGraph");
static_assert(offsetof(AB_AccessoryAnimBlueprint_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'AB_AccessoryAnimBlueprint_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

