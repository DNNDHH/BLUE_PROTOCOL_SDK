#pragma once

 

// Package: SS_NPC_WalkRun

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function SS_NPC_WalkRun.SS_NPC_WalkRun_C.ExecuteUbergraph_SS_NPC_WalkRun
// 0x0108 (0x0108 - 0x0000)
struct SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7932[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FMax_ReturnValue;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue_1;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7933[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0028(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance;    // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7934[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7935[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          K2Node_Event_AnimInstance_1;                       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet_1;                       // 0x0050(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7936[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharacterAnimInstance*               K2Node_DynamicCast_AsSBCharacter_Anim_Instance_1;  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7937[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             K2Node_DynamicCast_AsCharacter;                    // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7938[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7939[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_LessLess_VectorRotator_ReturnValue;       // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_793A[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue_2;                       // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue_3;                       // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue;                         // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_2;                     // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_793B[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_793C[0x3];                                     // 0x00F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue_3;                     // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_2;                // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FNC_GetBSFront_BS_Front;                  // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun) == 0x000008, "Wrong alignment on SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun");
static_assert(sizeof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun) == 0x000108, "Wrong size on SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, EntryPoint) == 0x000000, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000004, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000008, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_FMax_ReturnValue) == 0x00000C, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_FMax_ReturnValue_1) == 0x000010, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_FMax_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_SelectFloat_ReturnValue) == 0x000014, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, K2Node_Event_AnimInstance) == 0x000020, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, K2Node_Event_AnimationSet) == 0x000028, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, K2Node_DynamicCast_AsSBCharacter_Anim_Instance) == 0x000030, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::K2Node_DynamicCast_AsSBCharacter_Anim_Instance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_SetTemporaryFloat_ReturnValue) == 0x00003C, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, K2Node_Event_DeltaTime) == 0x000040, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, K2Node_Event_AnimInstance_1) == 0x000048, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::K2Node_Event_AnimInstance_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, K2Node_Event_AnimationSet_1) == 0x000050, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::K2Node_Event_AnimationSet_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_Greater_FloatFloat_ReturnValue_1) == 0x000058, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_Greater_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_GetOwningActor_ReturnValue) == 0x000060, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, K2Node_DynamicCast_AsSBCharacter_Anim_Instance_1) == 0x000068, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::K2Node_DynamicCast_AsSBCharacter_Anim_Instance_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, K2Node_DynamicCast_bSuccess_1) == 0x000070, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, K2Node_DynamicCast_AsCharacter) == 0x000078, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::K2Node_DynamicCast_AsCharacter' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, K2Node_DynamicCast_bSuccess_2) == 0x000080, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_IsValid_ReturnValue) == 0x000081, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_K2_GetActorRotation_ReturnValue) == 0x000084, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_IsValid_ReturnValue_1) == 0x000090, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_LessLess_VectorRotator_ReturnValue) == 0x000094, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_LessLess_VectorRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_BooleanAND_ReturnValue) == 0x0000A0, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_BreakVector_X) == 0x0000A4, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_BreakVector_Y) == 0x0000A8, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_BreakVector_Z) == 0x0000AC, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_MakeVector_ReturnValue) == 0x0000B0, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_VSize_ReturnValue) == 0x0000BC, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_FMax_ReturnValue_2) == 0x0000C0, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_FMax_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_FClamp_ReturnValue) == 0x0000C4, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000C8, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x0000CC, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_FMax_ReturnValue_3) == 0x0000D0, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_FMax_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000D4, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_FClamp_ReturnValue_1) == 0x0000D8, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x0000DC, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_Ease_ReturnValue) == 0x0000E0, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_FClamp_ReturnValue_2) == 0x0000E4, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_FClamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000E8, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000EC, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_Less_FloatFloat_ReturnValue) == 0x0000F0, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_FClamp_ReturnValue_3) == 0x0000F4, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_FClamp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_SelectFloat_ReturnValue_1) == 0x0000F8, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_SelectFloat_ReturnValue_2) == 0x0000FC, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun, CallFunc_FNC_GetBSFront_BS_Front) == 0x000100, "Member 'SS_NPC_WalkRun_C_ExecuteUbergraph_SS_NPC_WalkRun::CallFunc_FNC_GetBSFront_BS_Front' has a wrong offset!");

// Function SS_NPC_WalkRun.SS_NPC_WalkRun_C.FNC_GetBSFront
// 0x0038 (0x0038 - 0x0000)
struct SS_NPC_WalkRun_C_FNC_GetBSFront final
{
public:
	class USBCharacterAnimInstance*               NpcAnim;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrontVelocity;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSec;                                          // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BS_Front;                                          // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTemporaryFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WalkRun_C_FNC_GetBSFront) == 0x000008, "Wrong alignment on SS_NPC_WalkRun_C_FNC_GetBSFront");
static_assert(sizeof(SS_NPC_WalkRun_C_FNC_GetBSFront) == 0x000038, "Wrong size on SS_NPC_WalkRun_C_FNC_GetBSFront");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, NpcAnim) == 0x000000, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::NpcAnim' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, FrontVelocity) == 0x000008, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::FrontVelocity' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, DeltaSec) == 0x00000C, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::DeltaSec' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, BS_Front) == 0x000010, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::BS_Front' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, CallFunc_GetTemporaryFloat_ReturnValue) == 0x000014, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::CallFunc_GetTemporaryFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, CallFunc_FMax_ReturnValue) == 0x000018, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00001C, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000024, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, CallFunc_FClamp_ReturnValue) == 0x000028, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x00002C, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, CallFunc_FClamp_ReturnValue_1) == 0x000030, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_FNC_GetBSFront, CallFunc_SetTemporaryFloat_ReturnValue) == 0x000034, "Member 'SS_NPC_WalkRun_C_FNC_GetBSFront::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");

// Function SS_NPC_WalkRun.SS_NPC_WalkRun_C.ReceiveBeginPlay
// 0x0010 (0x0010 - 0x0000)
struct SS_NPC_WalkRun_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WalkRun_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_NPC_WalkRun_C_ReceiveBeginPlay");
static_assert(sizeof(SS_NPC_WalkRun_C_ReceiveBeginPlay) == 0x000010, "Wrong size on SS_NPC_WalkRun_C_ReceiveBeginPlay");
static_assert(offsetof(SS_NPC_WalkRun_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_NPC_WalkRun_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_NPC_WalkRun_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");

// Function SS_NPC_WalkRun.SS_NPC_WalkRun_C.ReceiveTick
// 0x0018 (0x0018 - 0x0000)
struct SS_NPC_WalkRun_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_793D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_NPC_WalkRun_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_NPC_WalkRun_C_ReceiveTick");
static_assert(sizeof(SS_NPC_WalkRun_C_ReceiveTick) == 0x000018, "Wrong size on SS_NPC_WalkRun_C_ReceiveTick");
static_assert(offsetof(SS_NPC_WalkRun_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_NPC_WalkRun_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_NPC_WalkRun_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_NPC_WalkRun_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_NPC_WalkRun_C_ReceiveTick::AnimationSet' has a wrong offset!");

}

