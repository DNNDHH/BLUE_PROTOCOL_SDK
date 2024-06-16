#pragma once

 

// Package: ST_IsPlayerFemale

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ST_IsPlayerFemale.ST_IsPlayerFemale_C.ReceiveCanEnter
// 0x0038 (0x0038 - 0x0000)
struct ST_IsPlayerFemale_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AE3[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AE4[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetCreationGender_ReturnValue;            // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_IsPlayerFemale_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_IsPlayerFemale_C_ReceiveCanEnter");
static_assert(sizeof(ST_IsPlayerFemale_C_ReceiveCanEnter) == 0x000038, "Wrong size on ST_IsPlayerFemale_C_ReceiveCanEnter");
static_assert(offsetof(ST_IsPlayerFemale_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_IsPlayerFemale_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_IsPlayerFemale_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_IsPlayerFemale_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsPlayerFemale_C_ReceiveCanEnter, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'ST_IsPlayerFemale_C_ReceiveCanEnter::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsPlayerFemale_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBCreation_Character) == 0x000018, "Member 'ST_IsPlayerFemale_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(ST_IsPlayerFemale_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ST_IsPlayerFemale_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_IsPlayerFemale_C_ReceiveCanEnter, CallFunc_GetComponentByClass_ReturnValue) == 0x000028, "Member 'ST_IsPlayerFemale_C_ReceiveCanEnter::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsPlayerFemale_C_ReceiveCanEnter, CallFunc_GetCreationGender_ReturnValue) == 0x000030, "Member 'ST_IsPlayerFemale_C_ReceiveCanEnter::CallFunc_GetCreationGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsPlayerFemale_C_ReceiveCanEnter, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'ST_IsPlayerFemale_C_ReceiveCanEnter::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsPlayerFemale_C_ReceiveCanEnter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000032, "Member 'ST_IsPlayerFemale_C_ReceiveCanEnter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

