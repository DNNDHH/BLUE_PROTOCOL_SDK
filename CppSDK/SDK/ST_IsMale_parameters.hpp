#pragma once

 

// Package: ST_IsMale

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ST_IsMale.ST_IsMale_C.ReceiveCanEnter
// 0x0028 (0x0028 - 0x0000)
struct ST_IsMale_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AED[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_IsMale_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_IsMale_C_ReceiveCanEnter");
static_assert(sizeof(ST_IsMale_C_ReceiveCanEnter) == 0x000028, "Wrong size on ST_IsMale_C_ReceiveCanEnter");
static_assert(offsetof(ST_IsMale_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_IsMale_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_IsMale_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_IsMale_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsMale_C_ReceiveCanEnter, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000010, "Member 'ST_IsMale_C_ReceiveCanEnter::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsMale_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000018, "Member 'ST_IsMale_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(ST_IsMale_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ST_IsMale_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_IsMale_C_ReceiveCanEnter, CallFunc_IsLocallyControlled_ReturnValue) == 0x000021, "Member 'ST_IsMale_C_ReceiveCanEnter::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsMale_C_ReceiveCanEnter, CallFunc_GetGender_ReturnValue) == 0x000022, "Member 'ST_IsMale_C_ReceiveCanEnter::CallFunc_GetGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_IsMale_C_ReceiveCanEnter, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000023, "Member 'ST_IsMale_C_ReceiveCanEnter::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

}

