#pragma once

 

// Package: ST_CheckNpcStance

#include "Basic.hpp"


namespace SDK::Params
{

// Function ST_CheckNpcStance.ST_CheckNpcStance_C.ReceiveCanEnter
// 0x0058 (0x0058 - 0x0000)
struct ST_CheckNpcStance_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EBF[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ExtraNpcCharacter_C*                K2Node_DynamicCast_AsBP_Extra_Npc_Character;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EC0[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_NpcCharacter_C*                     K2Node_DynamicCast_AsBP_Npc_Character;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EC1[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EC2[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default_1;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasCommand_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_CheckNpcStance_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_CheckNpcStance_C_ReceiveCanEnter");
static_assert(sizeof(ST_CheckNpcStance_C_ReceiveCanEnter) == 0x000058, "Wrong size on ST_CheckNpcStance_C_ReceiveCanEnter");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, Temp_bool_Variable) == 0x000009, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, Temp_name_Variable) == 0x000018, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, K2Node_DynamicCast_AsBP_Extra_Npc_Character) == 0x000020, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::K2Node_DynamicCast_AsBP_Extra_Npc_Character' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, K2Node_DynamicCast_AsBP_Npc_Character) == 0x000030, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::K2Node_DynamicCast_AsBP_Npc_Character' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, K2Node_Select_Default) == 0x00003C, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, CallFunc_BooleanOR_ReturnValue) == 0x000044, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, Temp_bool_Variable_1) == 0x000045, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, K2Node_Select_Default_1) == 0x000048, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000050, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckNpcStance_C_ReceiveCanEnter, CallFunc_HasCommand_ReturnValue) == 0x000051, "Member 'ST_CheckNpcStance_C_ReceiveCanEnter::CallFunc_HasCommand_ReturnValue' has a wrong offset!");

}

