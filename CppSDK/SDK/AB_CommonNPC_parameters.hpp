#pragma once

 

// Package: AB_CommonNPC

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CharaParts_structs.hpp"


namespace SDK::Params
{

// Function AB_CommonNPC.AB_CommonNPC_C.ExecuteUbergraph_AB_CommonNPC
// 0x0060 (0x0060 - 0x0000)
struct AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBNpcCharacter*                        K2Node_DynamicCast_AsSBNpc_Character;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A2C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NpcCharacter_C*                     K2Node_DynamicCast_AsBP_Npc_Character;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A2D[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCharaCreateInterface> CallFunc_GetBodyType_self_CastInput;               // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsBody                               CallFunc_GetBodyType_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A2E[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A2F[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetHeelLength_ReturnValue;                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC) == 0x000008, "Wrong alignment on AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC");
static_assert(sizeof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC) == 0x000060, "Wrong size on AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, EntryPoint) == 0x000000, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::EntryPoint' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, K2Node_DynamicCast_AsSBNpc_Character) == 0x000010, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::K2Node_DynamicCast_AsSBNpc_Character' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, K2Node_DynamicCast_AsBP_Npc_Character) == 0x000020, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::K2Node_DynamicCast_AsBP_Npc_Character' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, K2Node_DynamicCast_bSuccess_1) == 0x000028, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, CallFunc_GetBodyType_self_CastInput) == 0x000030, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::CallFunc_GetBodyType_self_CastInput' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, CallFunc_GetBodyType_ReturnValue) == 0x000040, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::CallFunc_GetBodyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, K2Node_SwitchEnum_CmpSuccess) == 0x000041, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, CallFunc_IsValid_ReturnValue) == 0x000042, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, CallFunc_IsValid_ReturnValue_1) == 0x000043, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000048, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, CallFunc_GetComponentByClass_ReturnValue) == 0x000050, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, CallFunc_IsValid_ReturnValue_2) == 0x000058, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, CallFunc_IsValid_ReturnValue_3) == 0x000059, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC, CallFunc_GetHeelLength_ReturnValue) == 0x00005C, "Member 'AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC::CallFunc_GetHeelLength_ReturnValue' has a wrong offset!");

// Function AB_CommonNPC.AB_CommonNPC_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct AB_CommonNPC_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AB_CommonNPC_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on AB_CommonNPC_C_BlueprintUpdateAnimation");
static_assert(sizeof(AB_CommonNPC_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on AB_CommonNPC_C_BlueprintUpdateAnimation");
static_assert(offsetof(AB_CommonNPC_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'AB_CommonNPC_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function AB_CommonNPC.AB_CommonNPC_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct AB_CommonNPC_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(AB_CommonNPC_C_AnimGraph) == 0x000008, "Wrong alignment on AB_CommonNPC_C_AnimGraph");
static_assert(sizeof(AB_CommonNPC_C_AnimGraph) == 0x000010, "Wrong size on AB_CommonNPC_C_AnimGraph");
static_assert(offsetof(AB_CommonNPC_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'AB_CommonNPC_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

