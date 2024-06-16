#pragma once

 

// Package: AB_ExtraNPC_Common_Demo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.ExecuteUbergraph_AB_ExtraNPC_Common_Demo
// 0x0028 (0x0028 - 0x0000)
struct AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5833[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBNpcCharacter*                        K2Node_DynamicCast_AsSBNpc_Character;              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo) == 0x000008, "Wrong alignment on AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo");
static_assert(sizeof(AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo) == 0x000028, "Wrong size on AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo, EntryPoint) == 0x000000, "Member 'AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000004, "Member 'AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo, K2Node_Event_DeltaTimeX) == 0x000008, "Member 'AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo, K2Node_DynamicCast_AsSBNpc_Character) == 0x000018, "Member 'AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo::K2Node_DynamicCast_AsSBNpc_Character' has a wrong offset!");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct AB_ExtraNPC_Common_Demo_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_ExtraNPC_Common_Demo_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on AB_ExtraNPC_Common_Demo_C_BlueprintUpdateAnimation");
static_assert(sizeof(AB_ExtraNPC_Common_Demo_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on AB_ExtraNPC_Common_Demo_C_BlueprintUpdateAnimation");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'AB_ExtraNPC_Common_Demo_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_ExtraNPC_Common_Demo_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_ExtraNPC_Common_Demo_C_AnimGraph) == 0x000008, "Wrong alignment on AB_ExtraNPC_Common_Demo_C_AnimGraph");
static_assert(sizeof(AB_ExtraNPC_Common_Demo_C_AnimGraph) == 0x000010, "Wrong size on AB_ExtraNPC_Common_Demo_C_AnimGraph");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'AB_ExtraNPC_Common_Demo_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.HairLayer
// 0x0030 (0x0030 - 0x0000)
struct AB_ExtraNPC_Common_Demo_C_HairLayer final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FVector                                Acceralation;                                      // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5834[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPoseLink                              Param_HairLayer;                                   // 0x0020(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_ExtraNPC_Common_Demo_C_HairLayer) == 0x000008, "Wrong alignment on AB_ExtraNPC_Common_Demo_C_HairLayer");
static_assert(sizeof(AB_ExtraNPC_Common_Demo_C_HairLayer) == 0x000030, "Wrong size on AB_ExtraNPC_Common_Demo_C_HairLayer");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_HairLayer, InPose) == 0x000000, "Member 'AB_ExtraNPC_Common_Demo_C_HairLayer::InPose' has a wrong offset!");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_HairLayer, Acceralation) == 0x000010, "Member 'AB_ExtraNPC_Common_Demo_C_HairLayer::Acceralation' has a wrong offset!");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_HairLayer, Active) == 0x00001C, "Member 'AB_ExtraNPC_Common_Demo_C_HairLayer::Active' has a wrong offset!");
static_assert(offsetof(AB_ExtraNPC_Common_Demo_C_HairLayer, Param_HairLayer) == 0x000020, "Member 'AB_ExtraNPC_Common_Demo_C_HairLayer::Param_HairLayer' has a wrong offset!");

}

