#pragma once

 

// Package: ST_CanEmote

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ST_CanEmote.ST_CanEmote_C.ReceiveCanEnter
// 0x0040 (0x0040 - 0x0000)
struct ST_CanEmote_C_ReceiveCanEnter final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AFE[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnimTagsAny_ReturnValue;               // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAnimTagsAny_ReturnValue_1;             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmoteRequested_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AFF[0x1];                                     // 0x0027(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetLastMovementInputVector_ReturnValue;   // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B00[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ST_CanEmote_C_ReceiveCanEnter) == 0x000008, "Wrong alignment on ST_CanEmote_C_ReceiveCanEnter");
static_assert(sizeof(ST_CanEmote_C_ReceiveCanEnter) == 0x000040, "Wrong size on ST_CanEmote_C_ReceiveCanEnter");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, AnimInstance) == 0x000000, "Member 'ST_CanEmote_C_ReceiveCanEnter::AnimInstance' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, ReturnValue) == 0x000008, "Member 'ST_CanEmote_C_ReceiveCanEnter::ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, K2Node_DynamicCast_AsSBCreation_Character) == 0x000018, "Member 'ST_CanEmote_C_ReceiveCanEnter::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ST_CanEmote_C_ReceiveCanEnter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_HasAnimTagsAny_ReturnValue) == 0x000021, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_HasAnimTagsAny_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_HasAnimTagsAny_ReturnValue_1) == 0x000022, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_HasAnimTagsAny_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_Not_PreBool_ReturnValue) == 0x000023, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_IsEmoteRequested_ReturnValue) == 0x000024, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_IsEmoteRequested_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_IsLocallyControlled_ReturnValue) == 0x000025, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_HasAuthority_ReturnValue) == 0x000026, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_GetLastMovementInputVector_ReturnValue) == 0x000028, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_GetLastMovementInputVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_BooleanOR_ReturnValue) == 0x000034, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_VSize_ReturnValue) == 0x000038, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00003C, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_BooleanAND_ReturnValue) == 0x00003D, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_BooleanAND_ReturnValue_1) == 0x00003E, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ST_CanEmote_C_ReceiveCanEnter, CallFunc_BooleanAND_ReturnValue_2) == 0x00003F, "Member 'ST_CanEmote_C_ReceiveCanEnter::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

}

