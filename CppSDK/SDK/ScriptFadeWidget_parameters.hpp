#pragma once

 

// Package: ScriptFadeWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ScriptFadeWidget.ScriptFadeWidget_C.ExecuteUbergraph_ScriptFadeWidget
// 0x0040 (0x0040 - 0x0000)
struct ScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget) == 0x000004, "Wrong alignment on ScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget");
static_assert(sizeof(ScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget) == 0x000040, "Wrong size on ScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget");
static_assert(offsetof(ScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget, EntryPoint) == 0x000000, "Member 'ScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget, K2Node_Event_MyGeometry) == 0x000004, "Member 'ScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'ScriptFadeWidget_C_ExecuteUbergraph_ScriptFadeWidget::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function ScriptFadeWidget.ScriptFadeWidget_C.Tick
// 0x003C (0x003C - 0x0000)
struct ScriptFadeWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScriptFadeWidget_C_Tick) == 0x000004, "Wrong alignment on ScriptFadeWidget_C_Tick");
static_assert(sizeof(ScriptFadeWidget_C_Tick) == 0x00003C, "Wrong size on ScriptFadeWidget_C_Tick");
static_assert(offsetof(ScriptFadeWidget_C_Tick, MyGeometry) == 0x000000, "Member 'ScriptFadeWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Tick, InDeltaTime) == 0x000038, "Member 'ScriptFadeWidget_C_Tick::InDeltaTime' has a wrong offset!");

// Function ScriptFadeWidget.ScriptFadeWidget_C.FadeIn
// 0x0008 (0x0008 - 0x0000)
struct ScriptFadeWidget_C_FadeIn final
{
public:
	float                                         InFadeTime;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bResult;                                           // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScriptFadeWidget_C_FadeIn) == 0x000004, "Wrong alignment on ScriptFadeWidget_C_FadeIn");
static_assert(sizeof(ScriptFadeWidget_C_FadeIn) == 0x000008, "Wrong size on ScriptFadeWidget_C_FadeIn");
static_assert(offsetof(ScriptFadeWidget_C_FadeIn, InFadeTime) == 0x000000, "Member 'ScriptFadeWidget_C_FadeIn::InFadeTime' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_FadeIn, bResult) == 0x000004, "Member 'ScriptFadeWidget_C_FadeIn::bResult' has a wrong offset!");

// Function ScriptFadeWidget.ScriptFadeWidget_C.FadeOut
// 0x0018 (0x0018 - 0x0000)
struct ScriptFadeWidget_C_FadeOut final
{
public:
	float                                         InFadeTime;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           InFadeColor;                                       // 0x0004(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InMaxAlpha;                                        // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScriptFadeWidget_C_FadeOut) == 0x000004, "Wrong alignment on ScriptFadeWidget_C_FadeOut");
static_assert(sizeof(ScriptFadeWidget_C_FadeOut) == 0x000018, "Wrong size on ScriptFadeWidget_C_FadeOut");
static_assert(offsetof(ScriptFadeWidget_C_FadeOut, InFadeTime) == 0x000000, "Member 'ScriptFadeWidget_C_FadeOut::InFadeTime' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_FadeOut, InFadeColor) == 0x000004, "Member 'ScriptFadeWidget_C_FadeOut::InFadeColor' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_FadeOut, InMaxAlpha) == 0x000014, "Member 'ScriptFadeWidget_C_FadeOut::InMaxAlpha' has a wrong offset!");

// Function ScriptFadeWidget.ScriptFadeWidget_C.Update_Internal
// 0x0048 (0x0048 - 0x0000)
struct ScriptFadeWidget_C_Update_Internal final
{
public:
	float                                         InDeltaTime;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeRate;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79D1[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79D2[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_R;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_G;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_B;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakColor_A;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScriptFadeWidget_C_Update_Internal) == 0x000004, "Wrong alignment on ScriptFadeWidget_C_Update_Internal");
static_assert(sizeof(ScriptFadeWidget_C_Update_Internal) == 0x000048, "Wrong size on ScriptFadeWidget_C_Update_Internal");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, InDeltaTime) == 0x000000, "Member 'ScriptFadeWidget_C_Update_Internal::InDeltaTime' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, FadeRate) == 0x000004, "Member 'ScriptFadeWidget_C_Update_Internal::FadeRate' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'ScriptFadeWidget_C_Update_Internal::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, CallFunc_Add_FloatFloat_ReturnValue) == 0x00000C, "Member 'ScriptFadeWidget_C_Update_Internal::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000010, "Member 'ScriptFadeWidget_C_Update_Internal::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, CallFunc_SelectFloat_ReturnValue) == 0x000014, "Member 'ScriptFadeWidget_C_Update_Internal::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000018, "Member 'ScriptFadeWidget_C_Update_Internal::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x00001C, "Member 'ScriptFadeWidget_C_Update_Internal::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000020, "Member 'ScriptFadeWidget_C_Update_Internal::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, CallFunc_SelectFloat_ReturnValue_1) == 0x000024, "Member 'ScriptFadeWidget_C_Update_Internal::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, CallFunc_BreakColor_R) == 0x000028, "Member 'ScriptFadeWidget_C_Update_Internal::CallFunc_BreakColor_R' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, CallFunc_BreakColor_G) == 0x00002C, "Member 'ScriptFadeWidget_C_Update_Internal::CallFunc_BreakColor_G' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, CallFunc_BreakColor_B) == 0x000030, "Member 'ScriptFadeWidget_C_Update_Internal::CallFunc_BreakColor_B' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, CallFunc_BreakColor_A) == 0x000034, "Member 'ScriptFadeWidget_C_Update_Internal::CallFunc_BreakColor_A' has a wrong offset!");
static_assert(offsetof(ScriptFadeWidget_C_Update_Internal, K2Node_MakeStruct_LinearColor) == 0x000038, "Member 'ScriptFadeWidget_C_Update_Internal::K2Node_MakeStruct_LinearColor' has a wrong offset!");

}

