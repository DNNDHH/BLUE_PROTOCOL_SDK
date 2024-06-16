#pragma once

 

// Package: SS_EmoteByCampFire

#include "Basic.hpp"


namespace SDK::Params
{

// Function SS_EmoteByCampFire.SS_EmoteByCampFire_C.ExecuteUbergraph_SS_EmoteByCampFire
// 0x0038 (0x0038 - 0x0000)
struct SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          K2Node_Event_AnimInstance;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  K2Node_Event_AnimationSet;                         // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9AE6[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckCampFireUsed_CheckResult;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire) == 0x000008, "Wrong alignment on SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire");
static_assert(sizeof(SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire) == 0x000038, "Wrong size on SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire");
static_assert(offsetof(SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire, EntryPoint) == 0x000000, "Member 'SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire::EntryPoint' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire, K2Node_Event_DeltaTime) == 0x000004, "Member 'SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire, K2Node_Event_AnimInstance) == 0x000008, "Member 'SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire::K2Node_Event_AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire, K2Node_Event_AnimationSet) == 0x000010, "Member 'SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire::K2Node_Event_AnimationSet' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire, CallFunc_GetOwningActor_ReturnValue) == 0x000018, "Member 'SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire, K2Node_DynamicCast_AsSBPlayer_Character) == 0x000028, "Member 'SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire, CallFunc_CheckCampFireUsed_CheckResult) == 0x000031, "Member 'SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire::CallFunc_CheckCampFireUsed_CheckResult' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire, CallFunc_Greater_IntInt_ReturnValue) == 0x000032, "Member 'SS_EmoteByCampFire_C_ExecuteUbergraph_SS_EmoteByCampFire::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function SS_EmoteByCampFire.SS_EmoteByCampFire_C.CheckCampFireUsed
// 0x0004 (0x0004 - 0x0000)
struct SS_EmoteByCampFire_C_CheckCampFireUsed final
{
public:
	bool                                          Flag;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CheckResult;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalBeforeCampFireUsed;                           // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SS_EmoteByCampFire_C_CheckCampFireUsed) == 0x000001, "Wrong alignment on SS_EmoteByCampFire_C_CheckCampFireUsed");
static_assert(sizeof(SS_EmoteByCampFire_C_CheckCampFireUsed) == 0x000004, "Wrong size on SS_EmoteByCampFire_C_CheckCampFireUsed");
static_assert(offsetof(SS_EmoteByCampFire_C_CheckCampFireUsed, Flag) == 0x000000, "Member 'SS_EmoteByCampFire_C_CheckCampFireUsed::Flag' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_CheckCampFireUsed, CheckResult) == 0x000001, "Member 'SS_EmoteByCampFire_C_CheckCampFireUsed::CheckResult' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_CheckCampFireUsed, LocalBeforeCampFireUsed) == 0x000002, "Member 'SS_EmoteByCampFire_C_CheckCampFireUsed::LocalBeforeCampFireUsed' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_CheckCampFireUsed, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000003, "Member 'SS_EmoteByCampFire_C_CheckCampFireUsed::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function SS_EmoteByCampFire.SS_EmoteByCampFire_C.ReceiveTick
// 0x0018 (0x0018 - 0x0000)
struct SS_EmoteByCampFire_C_ReceiveTick final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9AE7[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          AnimInstance;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UASAnimationSet*                  AnimationSet;                                      // 0x0010(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SS_EmoteByCampFire_C_ReceiveTick) == 0x000008, "Wrong alignment on SS_EmoteByCampFire_C_ReceiveTick");
static_assert(sizeof(SS_EmoteByCampFire_C_ReceiveTick) == 0x000018, "Wrong size on SS_EmoteByCampFire_C_ReceiveTick");
static_assert(offsetof(SS_EmoteByCampFire_C_ReceiveTick, DeltaTime) == 0x000000, "Member 'SS_EmoteByCampFire_C_ReceiveTick::DeltaTime' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_ReceiveTick, AnimInstance) == 0x000008, "Member 'SS_EmoteByCampFire_C_ReceiveTick::AnimInstance' has a wrong offset!");
static_assert(offsetof(SS_EmoteByCampFire_C_ReceiveTick, AnimationSet) == 0x000010, "Member 'SS_EmoteByCampFire_C_ReceiveTick::AnimationSet' has a wrong offset!");

}

