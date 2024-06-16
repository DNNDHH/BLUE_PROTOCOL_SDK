#pragma once

 

// Package: BP_ScriptPostProcessActor

#include "Basic.hpp"

#include "ScriptDofSetting_structs.hpp"


namespace SDK::Params
{

// Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ExecuteUbergraph_BP_ScriptPostProcessActor
// 0x0008 (0x0008 - 0x0000)
struct BP_ScriptPostProcessActor_C_ExecuteUbergraph_BP_ScriptPostProcessActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptPostProcessActor_C_ExecuteUbergraph_BP_ScriptPostProcessActor) == 0x000004, "Wrong alignment on BP_ScriptPostProcessActor_C_ExecuteUbergraph_BP_ScriptPostProcessActor");
static_assert(sizeof(BP_ScriptPostProcessActor_C_ExecuteUbergraph_BP_ScriptPostProcessActor) == 0x000008, "Wrong size on BP_ScriptPostProcessActor_C_ExecuteUbergraph_BP_ScriptPostProcessActor");
static_assert(offsetof(BP_ScriptPostProcessActor_C_ExecuteUbergraph_BP_ScriptPostProcessActor, EntryPoint) == 0x000000, "Member 'BP_ScriptPostProcessActor_C_ExecuteUbergraph_BP_ScriptPostProcessActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_ExecuteUbergraph_BP_ScriptPostProcessActor, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_ScriptPostProcessActor_C_ExecuteUbergraph_BP_ScriptPostProcessActor::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_ScriptPostProcessActor_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptPostProcessActor_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_ScriptPostProcessActor_C_ReceiveTick");
static_assert(sizeof(BP_ScriptPostProcessActor_C_ReceiveTick) == 0x000004, "Wrong size on BP_ScriptPostProcessActor_C_ReceiveTick");
static_assert(offsetof(BP_ScriptPostProcessActor_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_ScriptPostProcessActor_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ApplyDofSettings
// 0x001C (0x001C - 0x0000)
struct BP_ScriptPostProcessActor_C_ApplyDofSettings final
{
public:
	class FName                                   InSettingName;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InTransitionTime;                                  // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B89[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FScriptDofSetting                      CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_ScriptPostProcessActor_C_ApplyDofSettings) == 0x000004, "Wrong alignment on BP_ScriptPostProcessActor_C_ApplyDofSettings");
static_assert(sizeof(BP_ScriptPostProcessActor_C_ApplyDofSettings) == 0x00001C, "Wrong size on BP_ScriptPostProcessActor_C_ApplyDofSettings");
static_assert(offsetof(BP_ScriptPostProcessActor_C_ApplyDofSettings, InSettingName) == 0x000000, "Member 'BP_ScriptPostProcessActor_C_ApplyDofSettings::InSettingName' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_ApplyDofSettings, InTransitionTime) == 0x000008, "Member 'BP_ScriptPostProcessActor_C_ApplyDofSettings::InTransitionTime' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_ApplyDofSettings, bResult) == 0x00000C, "Member 'BP_ScriptPostProcessActor_C_ApplyDofSettings::bResult' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_ApplyDofSettings, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'BP_ScriptPostProcessActor_C_ApplyDofSettings::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_ApplyDofSettings, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000018, "Member 'BP_ScriptPostProcessActor_C_ApplyDofSettings::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.Update_Internal
// 0x0018 (0x0018 - 0x0000)
struct BP_ScriptPostProcessActor_C_Update_Internal final
{
public:
	float                                         InDeltaTime;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeRate;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B8A[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeRate_TimeRate;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MathExpression_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptPostProcessActor_C_Update_Internal) == 0x000004, "Wrong alignment on BP_ScriptPostProcessActor_C_Update_Internal");
static_assert(sizeof(BP_ScriptPostProcessActor_C_Update_Internal) == 0x000018, "Wrong size on BP_ScriptPostProcessActor_C_Update_Internal");
static_assert(offsetof(BP_ScriptPostProcessActor_C_Update_Internal, InDeltaTime) == 0x000000, "Member 'BP_ScriptPostProcessActor_C_Update_Internal::InDeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_Update_Internal, TimeRate) == 0x000004, "Member 'BP_ScriptPostProcessActor_C_Update_Internal::TimeRate' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_Update_Internal, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_ScriptPostProcessActor_C_Update_Internal::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_Update_Internal, CallFunc_Lerp_ReturnValue) == 0x00000C, "Member 'BP_ScriptPostProcessActor_C_Update_Internal::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_Update_Internal, CallFunc_GetTimeRate_TimeRate) == 0x000010, "Member 'BP_ScriptPostProcessActor_C_Update_Internal::CallFunc_GetTimeRate_TimeRate' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_Update_Internal, K2Node_MathExpression_ReturnValue) == 0x000014, "Member 'BP_ScriptPostProcessActor_C_Update_Internal::K2Node_MathExpression_ReturnValue' has a wrong offset!");

// Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.GetTimeRate
// 0x0010 (0x0010 - 0x0000)
struct BP_ScriptPostProcessActor_C_GetTimeRate final
{
public:
	float                                         TimeRate;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B8B[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ScriptPostProcessActor_C_GetTimeRate) == 0x000004, "Wrong alignment on BP_ScriptPostProcessActor_C_GetTimeRate");
static_assert(sizeof(BP_ScriptPostProcessActor_C_GetTimeRate) == 0x000010, "Wrong size on BP_ScriptPostProcessActor_C_GetTimeRate");
static_assert(offsetof(BP_ScriptPostProcessActor_C_GetTimeRate, TimeRate) == 0x000000, "Member 'BP_ScriptPostProcessActor_C_GetTimeRate::TimeRate' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_GetTimeRate, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000004, "Member 'BP_ScriptPostProcessActor_C_GetTimeRate::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_GetTimeRate, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'BP_ScriptPostProcessActor_C_GetTimeRate::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ScriptPostProcessActor_C_GetTimeRate, CallFunc_SelectFloat_ReturnValue) == 0x00000C, "Member 'BP_ScriptPostProcessActor_C_GetTimeRate::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");

}

