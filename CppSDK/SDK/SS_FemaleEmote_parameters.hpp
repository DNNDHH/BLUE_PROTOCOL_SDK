#pragma once

 

// Package: SS_FemaleEmote

#include "Basic.hpp"

#include "CharaParts_structs.hpp"


namespace SDK::Params
{

// Function SS_FemaleEmote.SS_FemaleEmote_C.ReceiveBeginPlay
// 0x00A8 (0x00A8 - 0x0000)
struct SS_FemaleEmote_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance;    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_765D[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_765E[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               CallFunc_GetBodyType_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_765F[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7660[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7661[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetBoneScaleSliderValue_ReturnValue;      // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7662[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SafeDivide_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SafeDivide_ReturnValue_1;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_2;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_2;        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SafeDivide_ReturnValue_2;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_3;                     // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_2;                // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetTemporaryFloat_ReturnValue_1;          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_FemaleEmote_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_FemaleEmote_C_ReceiveBeginPlay");
static_assert(sizeof(SS_FemaleEmote_C_ReceiveBeginPlay) == 0x0000A8, "Wrong size on SS_FemaleEmote_C_ReceiveBeginPlay");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, K2Node_DynamicCast_AsSBCharacter_Anim_Instance) == 0x000010, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::K2Node_DynamicCast_AsSBCharacter_Anim_Instance' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_GetOwningActor_ReturnValue) == 0x000020, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_SetTemporaryFloat_ReturnValue) == 0x000028, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_GetComponentByClass_ReturnValue) == 0x000030, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_GetBodyType_ReturnValue) == 0x000038, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_GetBodyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00003C, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000040, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000048, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000058, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000059, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_GetBoneScaleSliderValue_ReturnValue) == 0x00005C, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_GetBoneScaleSliderValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_FClamp_ReturnValue) == 0x000064, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_SafeDivide_ReturnValue) == 0x000068, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_SafeDivide_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_Add_FloatFloat_ReturnValue) == 0x00006C, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_FClamp_ReturnValue_1) == 0x000070, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000074, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_SafeDivide_ReturnValue_1) == 0x000078, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_SafeDivide_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x00007C, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_FClamp_ReturnValue_2) == 0x000080, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_Subtract_FloatFloat_ReturnValue_2) == 0x000084, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_Subtract_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_SafeDivide_ReturnValue_2) == 0x000088, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_SafeDivide_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x00008C, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_FClamp_ReturnValue_3) == 0x000090, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_FClamp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_SelectFloat_ReturnValue) == 0x000094, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_SelectFloat_ReturnValue_1) == 0x000098, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_SelectFloat_ReturnValue_2) == 0x00009C, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveBeginPlay, CallFunc_SetTemporaryFloat_ReturnValue_1) == 0x0000A0, "Member 'SS_FemaleEmote_C_ReceiveBeginPlay::CallFunc_SetTemporaryFloat_ReturnValue_1' has a wrong offset!");

// Function SS_FemaleEmote.SS_FemaleEmote_C.ReceiveTick
// 0x0028 (0x0028 - 0x0000)
struct SS_FemaleEmote_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7663[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance;    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7664[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTemporaryFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_FemaleEmote_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_FemaleEmote_C_ReceiveTick");
static_assert(sizeof(SS_FemaleEmote_C_ReceiveTick) == 0x000028, "Wrong size on SS_FemaleEmote_C_ReceiveTick");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_FemaleEmote_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_FemaleEmote_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_FemaleEmote_C_ReceiveTick::AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveTick, K2Node_DynamicCast_AsSBCharacter_Anim_Instance) == 0x000018, "Member 'SS_FemaleEmote_C_ReceiveTick::K2Node_DynamicCast_AsSBCharacter_Anim_Instance' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveTick, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SS_FemaleEmote_C_ReceiveTick::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_FemaleEmote_C_ReceiveTick, CallFunc_GetTemporaryFloat_ReturnValue) == 0x000024, "Member 'SS_FemaleEmote_C_ReceiveTick::CallFunc_GetTemporaryFloat_ReturnValue' has a wrong offset!");

}

