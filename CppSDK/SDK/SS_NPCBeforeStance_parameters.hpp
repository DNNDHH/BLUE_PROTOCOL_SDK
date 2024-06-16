#pragma once

 

// Package: SS_NPCBeforeStance

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_NPCBeforeStance.SS_NPCBeforeStance_C.ExecuteUbergraph_SS_NPCBeforeStance
// 0x0048 (0x0048 - 0x0000)
struct SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_90D4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90D5[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ExtraNpcCharacter_C*                K2Node_DynamicCast_AsBP_Extra_Npc_Character;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90D6[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NpcCharacter_C*                     K2Node_DynamicCast_AsBP_Npc_Character;             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance) == 0x000008, "Wrong alignment on SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance");
static_assert(sizeof(SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance) == 0x000048, "Wrong size on SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance");
static_assert(offsetof(SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance, EntryPoint) == 0x000000, "Member 'SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance, K2Node_Event_AnimInstance) == 0x000008, "Member 'SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance, K2Node_Event_AnimationSet) == 0x000010, "Member 'SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance, CallFunc_GetOwningActor_ReturnValue) == 0x000018, "Member 'SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance, K2Node_DynamicCast_AsBP_Extra_Npc_Character) == 0x000028, "Member 'SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance::K2Node_DynamicCast_AsBP_Extra_Npc_Character' has a wrong offset!");
static_assert(offsetof(SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance, K2Node_DynamicCast_AsBP_Npc_Character) == 0x000038, "Member 'SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance::K2Node_DynamicCast_AsBP_Npc_Character' has a wrong offset!");
static_assert(offsetof(SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'SS_NPCBeforeStance_C_ExecuteUbergraph_SS_NPCBeforeStance::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function SS_NPCBeforeStance.SS_NPCBeforeStance_C.ReceiveBeginPlay
// 0x0010 (0x0010 - 0x0000)
struct SS_NPCBeforeStance_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPCBeforeStance_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_NPCBeforeStance_C_ReceiveBeginPlay");
static_assert(sizeof(SS_NPCBeforeStance_C_ReceiveBeginPlay) == 0x000010, "Wrong size on SS_NPCBeforeStance_C_ReceiveBeginPlay");
static_assert(offsetof(SS_NPCBeforeStance_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_NPCBeforeStance_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPCBeforeStance_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_NPCBeforeStance_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");

}

