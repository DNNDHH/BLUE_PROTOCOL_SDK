#pragma once

 

// Package: SS_EnemyChangeFallGravity

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ExecuteUbergraph_SS_EnemyChangeFallGravity
// 0x0078 (0x0078 - 0x0000)
struct SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEnemyCharacterAnimInstance*          K2Node_DynamicCast_AsSBEnemy_Character_Anim_Instance; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A85[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A86[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTemporaryFloat_ReturnValue;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A87[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A88[0x2];                                     // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue_1;                        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A89[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue;                         // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue_1;                     // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue_1;                       // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity) == 0x000008, "Wrong alignment on SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity");
static_assert(sizeof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity) == 0x000078, "Wrong size on SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, EntryPoint) == 0x000000, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, K2Node_Event_DeltaTime) == 0x000004, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, K2Node_Event_AnimInstance) == 0x000008, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, K2Node_Event_AnimationSet) == 0x000010, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_GetOwningActor_ReturnValue) == 0x000018, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, K2Node_DynamicCast_AsSBEnemy_Character_Anim_Instance) == 0x000020, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::K2Node_DynamicCast_AsSBEnemy_Character_Anim_Instance' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, K2Node_DynamicCast_AsSBCharacter) == 0x000030, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_GetTemporaryFloat_ReturnValue) == 0x00003C, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_GetTemporaryFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_BooleanAND_ReturnValue) == 0x000040, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_BreakVector_X) == 0x000044, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_BreakVector_Y) == 0x000048, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_BreakVector_Z) == 0x00004C, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_Less_FloatFloat_ReturnValue) == 0x000050, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000051, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_Abs_ReturnValue) == 0x000054, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_Abs_ReturnValue_1) == 0x000058, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_Abs_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x00005C, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000060, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_FClamp_ReturnValue) == 0x000064, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000068, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_Ease_ReturnValue) == 0x00006C, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_FClamp_ReturnValue_1) == 0x000070, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_FClamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity, CallFunc_Ease_ReturnValue_1) == 0x000074, "Member 'SS_EnemyChangeFallGravity_C_ExecuteUbergraph_SS_EnemyChangeFallGravity::CallFunc_Ease_ReturnValue_1' has a wrong offset!");

// Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ReceiveTick
// 0x0018 (0x0018 - 0x0000)
struct SS_EnemyChangeFallGravity_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A8A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_EnemyChangeFallGravity_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_EnemyChangeFallGravity_C_ReceiveTick");
static_assert(sizeof(SS_EnemyChangeFallGravity_C_ReceiveTick) == 0x000018, "Wrong size on SS_EnemyChangeFallGravity_C_ReceiveTick");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_EnemyChangeFallGravity_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_EnemyChangeFallGravity_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_EnemyChangeFallGravity_C_ReceiveTick::AnimationSet' has a wrong offset!");

// Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ReceiveEndPlay
// 0x0020 (0x0020 - 0x0000)
struct SS_EnemyChangeFallGravity_C_ReceiveEndPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_EnemyChangeFallGravity_C_ReceiveEndPlay) == 0x000008, "Wrong alignment on SS_EnemyChangeFallGravity_C_ReceiveEndPlay");
static_assert(sizeof(SS_EnemyChangeFallGravity_C_ReceiveEndPlay) == 0x000020, "Wrong size on SS_EnemyChangeFallGravity_C_ReceiveEndPlay");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveEndPlay, AnimInstance) == 0x000000, "Member 'SS_EnemyChangeFallGravity_C_ReceiveEndPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveEndPlay, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'SS_EnemyChangeFallGravity_C_ReceiveEndPlay::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveEndPlay, K2Node_DynamicCast_AsSBCharacter) == 0x000010, "Member 'SS_EnemyChangeFallGravity_C_ReceiveEndPlay::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveEndPlay, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'SS_EnemyChangeFallGravity_C_ReceiveEndPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function SS_EnemyChangeFallGravity.SS_EnemyChangeFallGravity_C.ReceiveBeginPlay
// 0x0038 (0x0038 - 0x0000)
struct SS_EnemyChangeFallGravity_C_ReceiveBeginPlay final
{
public:
	class UAnimInstance*                          AnimInstance;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEnemyCharacterAnimInstance*          K2Node_DynamicCast_AsSBEnemy_Character_Anim_Instance; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A8B[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharacter*                           K2Node_DynamicCast_AsSBCharacter;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A8C[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetTemporaryFloat_ReturnValue;            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_EnemyChangeFallGravity_C_ReceiveBeginPlay) == 0x000008, "Wrong alignment on SS_EnemyChangeFallGravity_C_ReceiveBeginPlay");
static_assert(sizeof(SS_EnemyChangeFallGravity_C_ReceiveBeginPlay) == 0x000038, "Wrong size on SS_EnemyChangeFallGravity_C_ReceiveBeginPlay");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveBeginPlay, AnimInstance) == 0x000000, "Member 'SS_EnemyChangeFallGravity_C_ReceiveBeginPlay::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveBeginPlay, AnimationSet) == 0x000008, "Member 'SS_EnemyChangeFallGravity_C_ReceiveBeginPlay::AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveBeginPlay, CallFunc_GetOwningActor_ReturnValue) == 0x000010, "Member 'SS_EnemyChangeFallGravity_C_ReceiveBeginPlay::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveBeginPlay, K2Node_DynamicCast_AsSBEnemy_Character_Anim_Instance) == 0x000018, "Member 'SS_EnemyChangeFallGravity_C_ReceiveBeginPlay::K2Node_DynamicCast_AsSBEnemy_Character_Anim_Instance' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveBeginPlay, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'SS_EnemyChangeFallGravity_C_ReceiveBeginPlay::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveBeginPlay, K2Node_DynamicCast_AsSBCharacter) == 0x000028, "Member 'SS_EnemyChangeFallGravity_C_ReceiveBeginPlay::K2Node_DynamicCast_AsSBCharacter' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveBeginPlay, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'SS_EnemyChangeFallGravity_C_ReceiveBeginPlay::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveBeginPlay, CallFunc_BooleanAND_ReturnValue) == 0x000031, "Member 'SS_EnemyChangeFallGravity_C_ReceiveBeginPlay::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EnemyChangeFallGravity_C_ReceiveBeginPlay, CallFunc_SetTemporaryFloat_ReturnValue) == 0x000034, "Member 'SS_EnemyChangeFallGravity_C_ReceiveBeginPlay::CallFunc_SetTemporaryFloat_ReturnValue' has a wrong offset!");

}

