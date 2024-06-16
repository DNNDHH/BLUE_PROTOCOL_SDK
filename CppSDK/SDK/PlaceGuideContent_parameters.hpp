#pragma once

 

// Package: PlaceGuideContent

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function PlaceGuideContent.PlaceGuideContent_C.ExecuteUbergraph_PlaceGuideContent
// 0x00B8 (0x00B8 - 0x0000)
struct PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D6D[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InPlaceName;                    // 0x0008(0x0018)()
	class FText                                   K2Node_CustomEvent_InSubName;                      // 0x0020(0x0018)()
	bool                                          K2Node_CustomEvent_bInAutoClose;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D6E[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D6F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D70[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D71[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBUIType                                     K2Node_CustomEvent_InUIType;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInVisibility;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bInInstantly;                   // 0x0082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D72[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate;              // 0x0088(0x0010)(ZeroConstructor, NoDestructor)
	class USBUIVisibleSettings*                   CallFunc_GetUIVisibleSettings_ReturnValue_1;       // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetUIVisibleSetting_ReturnValue;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent) == 0x000008, "Wrong alignment on PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent");
static_assert(sizeof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent) == 0x0000B8, "Wrong size on PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, EntryPoint) == 0x000000, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, Temp_bool_Variable) == 0x000004, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, Temp_byte_Variable) == 0x000005, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, Temp_byte_Variable_1) == 0x000006, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, K2Node_CustomEvent_InPlaceName) == 0x000008, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::K2Node_CustomEvent_InPlaceName' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, K2Node_CustomEvent_InSubName) == 0x000020, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::K2Node_CustomEvent_InSubName' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, K2Node_CustomEvent_bInAutoClose) == 0x000038, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::K2Node_CustomEvent_bInAutoClose' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, K2Node_Event_Animation) == 0x000040, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000050, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, CallFunc_PlayAnimation_ReturnValue_1) == 0x000058, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000060, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, CallFunc_PlayAnimation_ReturnValue_2) == 0x000068, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000070, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, CallFunc_GetUIVisibleSettings_ReturnValue) == 0x000078, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::CallFunc_GetUIVisibleSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, K2Node_CustomEvent_InUIType) == 0x000080, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::K2Node_CustomEvent_InUIType' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, K2Node_CustomEvent_bInVisibility) == 0x000081, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::K2Node_CustomEvent_bInVisibility' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, K2Node_CustomEvent_bInInstantly) == 0x000082, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::K2Node_CustomEvent_bInInstantly' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000083, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, K2Node_Select_Default) == 0x000084, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, K2Node_CreateDelegate_OutputDelegate) == 0x000088, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, CallFunc_GetUIVisibleSettings_ReturnValue_1) == 0x000098, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::CallFunc_GetUIVisibleSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000A0, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent, CallFunc_GetUIVisibleSetting_ReturnValue) == 0x0000B0, "Member 'PlaceGuideContent_C_ExecuteUbergraph_PlaceGuideContent::CallFunc_GetUIVisibleSetting_ReturnValue' has a wrong offset!");

// Function PlaceGuideContent.PlaceGuideContent_C.OnChangeUIVisibleSetting
// 0x0003 (0x0003 - 0x0000)
struct PlaceGuideContent_C_OnChangeUIVisibleSetting final
{
public:
	ESBUIType                                     InUIType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInVisibility;                                     // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInInstantly;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlaceGuideContent_C_OnChangeUIVisibleSetting) == 0x000001, "Wrong alignment on PlaceGuideContent_C_OnChangeUIVisibleSetting");
static_assert(sizeof(PlaceGuideContent_C_OnChangeUIVisibleSetting) == 0x000003, "Wrong size on PlaceGuideContent_C_OnChangeUIVisibleSetting");
static_assert(offsetof(PlaceGuideContent_C_OnChangeUIVisibleSetting, InUIType) == 0x000000, "Member 'PlaceGuideContent_C_OnChangeUIVisibleSetting::InUIType' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_OnChangeUIVisibleSetting, bInVisibility) == 0x000001, "Member 'PlaceGuideContent_C_OnChangeUIVisibleSetting::bInVisibility' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_OnChangeUIVisibleSetting, bInInstantly) == 0x000002, "Member 'PlaceGuideContent_C_OnChangeUIVisibleSetting::bInInstantly' has a wrong offset!");

// Function PlaceGuideContent.PlaceGuideContent_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct PlaceGuideContent_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PlaceGuideContent_C_OnAnimationFinished) == 0x000008, "Wrong alignment on PlaceGuideContent_C_OnAnimationFinished");
static_assert(sizeof(PlaceGuideContent_C_OnAnimationFinished) == 0x000008, "Wrong size on PlaceGuideContent_C_OnAnimationFinished");
static_assert(offsetof(PlaceGuideContent_C_OnAnimationFinished, Animation) == 0x000000, "Member 'PlaceGuideContent_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function PlaceGuideContent.PlaceGuideContent_C.Show_ByText
// 0x0038 (0x0038 - 0x0000)
struct PlaceGuideContent_C_Show_ByText final
{
public:
	class FText                                   InPlaceName;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InSubName;                                         // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bInAutoClose;                                      // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlaceGuideContent_C_Show_ByText) == 0x000008, "Wrong alignment on PlaceGuideContent_C_Show_ByText");
static_assert(sizeof(PlaceGuideContent_C_Show_ByText) == 0x000038, "Wrong size on PlaceGuideContent_C_Show_ByText");
static_assert(offsetof(PlaceGuideContent_C_Show_ByText, InPlaceName) == 0x000000, "Member 'PlaceGuideContent_C_Show_ByText::InPlaceName' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_Show_ByText, InSubName) == 0x000018, "Member 'PlaceGuideContent_C_Show_ByText::InSubName' has a wrong offset!");
static_assert(offsetof(PlaceGuideContent_C_Show_ByText, bInAutoClose) == 0x000030, "Member 'PlaceGuideContent_C_Show_ByText::bInAutoClose' has a wrong offset!");

}

