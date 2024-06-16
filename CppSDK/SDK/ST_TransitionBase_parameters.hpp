#pragma once

 

// Package: ST_TransitionBase

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ST_TransitionBase.ST_TransitionBase_C.GetLastDamageInfo
// 0x0148 (0x0148 - 0x0000)
struct ST_TransitionBase_C_GetLastDamageInfo final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDamageInfo                          DamageInfo;                                        // 0x0008(0x0058)(Parm, OutParm, NoDestructor)
	class APawn*                                  CallFunc_TryGetPawnOwner_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F0E[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerTransformCharacter*            K2Node_DynamicCast_AsSBPlayer_Transform_Character; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F0F[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDamageInfo                          CallFunc_GetLastDamageInfo_ReturnValue;            // 0x0088(0x0058)(ConstParm, NoDestructor)
	class ASBPlayerCharacter*                     CallFunc_GetOwnerPlayerCharacter_ReturnValue;      // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F10[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDamageInfo                          CallFunc_GetLastDamageInfo_ReturnValue_1;          // 0x00F0(0x0058)(ConstParm, NoDestructor)
};
static_assert(alignof(ST_TransitionBase_C_GetLastDamageInfo) == 0x000008, "Wrong alignment on ST_TransitionBase_C_GetLastDamageInfo");
static_assert(sizeof(ST_TransitionBase_C_GetLastDamageInfo) == 0x000148, "Wrong size on ST_TransitionBase_C_GetLastDamageInfo");
static_assert(offsetof(ST_TransitionBase_C_GetLastDamageInfo, AnimInstance) == 0x000000, "Member 'ST_TransitionBase_C_GetLastDamageInfo::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_TransitionBase_C_GetLastDamageInfo, DamageInfo) == 0x000008, "Member 'ST_TransitionBase_C_GetLastDamageInfo::DamageInfo' has a wrong offset!");
static_assert(offsetof(ST_TransitionBase_C_GetLastDamageInfo, CallFunc_TryGetPawnOwner_ReturnValue) == 0x000060, "Member 'ST_TransitionBase_C_GetLastDamageInfo::CallFunc_TryGetPawnOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_TransitionBase_C_GetLastDamageInfo, K2Node_DynamicCast_AsSBCharacter) == 0x000068, "Member 'ST_TransitionBase_C_GetLastDamageInfo::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(ST_TransitionBase_C_GetLastDamageInfo, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'ST_TransitionBase_C_GetLastDamageInfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_TransitionBase_C_GetLastDamageInfo, K2Node_DynamicCast_AsSBPlayer_Transform_Character) == 0x000078, "Member 'ST_TransitionBase_C_GetLastDamageInfo::K2Node_DynamicCast_AsSBPlayer_Transform_Character' has a wrong offset!");
static_assert(offsetof(ST_TransitionBase_C_GetLastDamageInfo, K2Node_DynamicCast_bSuccess_1) == 0x000080, "Member 'ST_TransitionBase_C_GetLastDamageInfo::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ST_TransitionBase_C_GetLastDamageInfo, CallFunc_GetLastDamageInfo_ReturnValue) == 0x000088, "Member 'ST_TransitionBase_C_GetLastDamageInfo::CallFunc_GetLastDamageInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_TransitionBase_C_GetLastDamageInfo, CallFunc_GetOwnerPlayerCharacter_ReturnValue) == 0x0000E0, "Member 'ST_TransitionBase_C_GetLastDamageInfo::CallFunc_GetOwnerPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_TransitionBase_C_GetLastDamageInfo, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'ST_TransitionBase_C_GetLastDamageInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_TransitionBase_C_GetLastDamageInfo, CallFunc_GetLastDamageInfo_ReturnValue_1) == 0x0000F0, "Member 'ST_TransitionBase_C_GetLastDamageInfo::CallFunc_GetLastDamageInfo_ReturnValue_1' has a wrong offset!");

}

