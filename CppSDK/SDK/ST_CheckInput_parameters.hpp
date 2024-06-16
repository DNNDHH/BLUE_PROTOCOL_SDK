#pragma once

 

// Package: ST_CheckInput

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ST_CheckInput.ST_CheckInput_C.ReceiveCanEnter
// 0x0040 (0x0040 - 0x0000)
struct ST_CheckInput_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F84[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_DynamicCast_AsPawn;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F85[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLastMovementInputVector_ReturnValue;   // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F86[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_CheckInput_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_CheckInput_C_ReceiveCanEnter");
static_assert(sizeof(ST_CheckInput_C_ReceiveCanEnter) == 0x000040, "Wrong size on ST_CheckInput_C_ReceiveCanEnter");
static_assert(offsetof(ST_CheckInput_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_CheckInput_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_CheckInput_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_CheckInput_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckInput_C_ReceiveCanEnter, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'ST_CheckInput_C_ReceiveCanEnter::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckInput_C_ReceiveCanEnter, K2Node_DynamicCast_AsPawn) == 0x000018, "Member 'ST_CheckInput_C_ReceiveCanEnter::K2Node_DynamicCast_AsPawn' has a wrong offset!");
static_assert(offsetof(ST_CheckInput_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ST_CheckInput_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_CheckInput_C_ReceiveCanEnter, CallFunc_GetLastMovementInputVector_ReturnValue) == 0x000024, "Member 'ST_CheckInput_C_ReceiveCanEnter::CallFunc_GetLastMovementInputVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckInput_C_ReceiveCanEnter, CallFunc_IsLocallyControlled_ReturnValue) == 0x000030, "Member 'ST_CheckInput_C_ReceiveCanEnter::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckInput_C_ReceiveCanEnter, CallFunc_VSize_ReturnValue) == 0x000034, "Member 'ST_CheckInput_C_ReceiveCanEnter::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CheckInput_C_ReceiveCanEnter, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000038, "Member 'ST_CheckInput_C_ReceiveCanEnter::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

}

