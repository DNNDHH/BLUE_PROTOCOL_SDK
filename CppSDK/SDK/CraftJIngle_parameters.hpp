#pragma once

 

// Package: CraftJIngle

#include "Basic.hpp"


namespace SDK::Params
{

// Function CraftJIngle.CraftJIngle_C.ExecuteUbergraph_CraftJIngle
// 0x0038 (0x0038 - 0x0000)
struct CraftJIngle_C_ExecuteUbergraph_CraftJIngle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FDD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation_1;                          // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftJIngle_C_ExecuteUbergraph_CraftJIngle) == 0x000008, "Wrong alignment on CraftJIngle_C_ExecuteUbergraph_CraftJIngle");
static_assert(sizeof(CraftJIngle_C_ExecuteUbergraph_CraftJIngle) == 0x000038, "Wrong size on CraftJIngle_C_ExecuteUbergraph_CraftJIngle");
static_assert(offsetof(CraftJIngle_C_ExecuteUbergraph_CraftJIngle, EntryPoint) == 0x000000, "Member 'CraftJIngle_C_ExecuteUbergraph_CraftJIngle::EntryPoint' has a wrong offset!");
static_assert(offsetof(CraftJIngle_C_ExecuteUbergraph_CraftJIngle, K2Node_Event_Animation_1) == 0x000008, "Member 'CraftJIngle_C_ExecuteUbergraph_CraftJIngle::K2Node_Event_Animation_1' has a wrong offset!");
static_assert(offsetof(CraftJIngle_C_ExecuteUbergraph_CraftJIngle, K2Node_Event_Animation) == 0x000010, "Member 'CraftJIngle_C_ExecuteUbergraph_CraftJIngle::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(CraftJIngle_C_ExecuteUbergraph_CraftJIngle, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'CraftJIngle_C_ExecuteUbergraph_CraftJIngle::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftJIngle_C_ExecuteUbergraph_CraftJIngle, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'CraftJIngle_C_ExecuteUbergraph_CraftJIngle::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftJIngle_C_ExecuteUbergraph_CraftJIngle, CallFunc_PlayAnimation_ReturnValue_2) == 0x000028, "Member 'CraftJIngle_C_ExecuteUbergraph_CraftJIngle::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftJIngle_C_ExecuteUbergraph_CraftJIngle, CallFunc_PlaySE_ReturnValue) == 0x000030, "Member 'CraftJIngle_C_ExecuteUbergraph_CraftJIngle::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftJIngle_C_ExecuteUbergraph_CraftJIngle, CallFunc_PlaySE_ReturnValue_1) == 0x000034, "Member 'CraftJIngle_C_ExecuteUbergraph_CraftJIngle::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");

// Function CraftJIngle.CraftJIngle_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct CraftJIngle_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftJIngle_C_OnAnimationFinished) == 0x000008, "Wrong alignment on CraftJIngle_C_OnAnimationFinished");
static_assert(sizeof(CraftJIngle_C_OnAnimationFinished) == 0x000008, "Wrong size on CraftJIngle_C_OnAnimationFinished");
static_assert(offsetof(CraftJIngle_C_OnAnimationFinished, Animation) == 0x000000, "Member 'CraftJIngle_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function CraftJIngle.CraftJIngle_C.OnAnimationStarted
// 0x0008 (0x0008 - 0x0000)
struct CraftJIngle_C_OnAnimationStarted final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftJIngle_C_OnAnimationStarted) == 0x000008, "Wrong alignment on CraftJIngle_C_OnAnimationStarted");
static_assert(sizeof(CraftJIngle_C_OnAnimationStarted) == 0x000008, "Wrong size on CraftJIngle_C_OnAnimationStarted");
static_assert(offsetof(CraftJIngle_C_OnAnimationStarted, Animation) == 0x000000, "Member 'CraftJIngle_C_OnAnimationStarted::Animation' has a wrong offset!");

// Function CraftJIngle.CraftJIngle_C.SetStatus
// 0x0003 (0x0003 - 0x0000)
struct CraftJIngle_C_SetStatus final
{
public:
	bool                                          Param_IsSuccess;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_IsCritical;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_IsFail;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftJIngle_C_SetStatus) == 0x000001, "Wrong alignment on CraftJIngle_C_SetStatus");
static_assert(sizeof(CraftJIngle_C_SetStatus) == 0x000003, "Wrong size on CraftJIngle_C_SetStatus");
static_assert(offsetof(CraftJIngle_C_SetStatus, Param_IsSuccess) == 0x000000, "Member 'CraftJIngle_C_SetStatus::Param_IsSuccess' has a wrong offset!");
static_assert(offsetof(CraftJIngle_C_SetStatus, Param_IsCritical) == 0x000001, "Member 'CraftJIngle_C_SetStatus::Param_IsCritical' has a wrong offset!");
static_assert(offsetof(CraftJIngle_C_SetStatus, Param_IsFail) == 0x000002, "Member 'CraftJIngle_C_SetStatus::Param_IsFail' has a wrong offset!");

// Function CraftJIngle.CraftJIngle_C.GetIsSuccess
// 0x0001 (0x0001 - 0x0000)
struct CraftJIngle_C_GetIsSuccess final
{
public:
	bool                                          Param_IsSuccess;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftJIngle_C_GetIsSuccess) == 0x000001, "Wrong alignment on CraftJIngle_C_GetIsSuccess");
static_assert(sizeof(CraftJIngle_C_GetIsSuccess) == 0x000001, "Wrong size on CraftJIngle_C_GetIsSuccess");
static_assert(offsetof(CraftJIngle_C_GetIsSuccess, Param_IsSuccess) == 0x000000, "Member 'CraftJIngle_C_GetIsSuccess::Param_IsSuccess' has a wrong offset!");

// Function CraftJIngle.CraftJIngle_C.GetIsCritical
// 0x0001 (0x0001 - 0x0000)
struct CraftJIngle_C_GetIsCritical final
{
public:
	bool                                          Param_IsCritical;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftJIngle_C_GetIsCritical) == 0x000001, "Wrong alignment on CraftJIngle_C_GetIsCritical");
static_assert(sizeof(CraftJIngle_C_GetIsCritical) == 0x000001, "Wrong size on CraftJIngle_C_GetIsCritical");
static_assert(offsetof(CraftJIngle_C_GetIsCritical, Param_IsCritical) == 0x000000, "Member 'CraftJIngle_C_GetIsCritical::Param_IsCritical' has a wrong offset!");

// Function CraftJIngle.CraftJIngle_C.GetisFailure
// 0x0001 (0x0001 - 0x0000)
struct CraftJIngle_C_GetisFailure final
{
public:
	bool                                          Param_IsFail;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftJIngle_C_GetisFailure) == 0x000001, "Wrong alignment on CraftJIngle_C_GetisFailure");
static_assert(sizeof(CraftJIngle_C_GetisFailure) == 0x000001, "Wrong size on CraftJIngle_C_GetisFailure");
static_assert(offsetof(CraftJIngle_C_GetisFailure, Param_IsFail) == 0x000000, "Member 'CraftJIngle_C_GetisFailure::Param_IsFail' has a wrong offset!");

}

