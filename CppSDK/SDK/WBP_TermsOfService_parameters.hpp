#pragma once

 

// Package: WBP_TermsOfService

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_TermsOfService.WBP_TermsOfService_C.OnEnd__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_TermsOfService_C_OnEnd__DelegateSignature final
{
public:
	bool                                          Param_Approval;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_TermsOfService_C_OnEnd__DelegateSignature) == 0x000001, "Wrong alignment on WBP_TermsOfService_C_OnEnd__DelegateSignature");
static_assert(sizeof(WBP_TermsOfService_C_OnEnd__DelegateSignature) == 0x000001, "Wrong size on WBP_TermsOfService_C_OnEnd__DelegateSignature");
static_assert(offsetof(WBP_TermsOfService_C_OnEnd__DelegateSignature, Param_Approval) == 0x000000, "Member 'WBP_TermsOfService_C_OnEnd__DelegateSignature::Param_Approval' has a wrong offset!");

// Function WBP_TermsOfService.WBP_TermsOfService_C.ExecuteUbergraph_WBP_TermsOfService
// 0x0178 (0x0178 - 0x0000)
struct WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_CurrentOffset;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EA4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InTitle;                        // 0x0010(0x0018)()
	class FText                                   K2Node_CustomEvent_InExplanation;                  // 0x0028(0x0018)()
	class FText                                   K2Node_CustomEvent_InContents;                     // 0x0040(0x0018)()
	float                                         CallFunc_GetScrollOffsetOfEnd_ReturnValue;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9EA5[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0060(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EA6[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9EA7[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCursorStateHandle                   CallFunc_ShowCursor_ReturnValue;                   // 0x00D0(0x0004)(NoDestructor)
	uint8                                         Pad_9EA8[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00D8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0100(0x0028)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0138(0x0018)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0160(0x0018)()
};
static_assert(alignof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService) == 0x000008, "Wrong alignment on WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService");
static_assert(sizeof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService) == 0x000178, "Wrong size on WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, EntryPoint) == 0x000000, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, K2Node_ComponentBoundEvent_CurrentOffset) == 0x000004, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::K2Node_ComponentBoundEvent_CurrentOffset' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, CallFunc_PlaySE_ReturnValue) == 0x000008, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, K2Node_CustomEvent_InTitle) == 0x000010, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::K2Node_CustomEvent_InTitle' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, K2Node_CustomEvent_InExplanation) == 0x000028, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::K2Node_CustomEvent_InExplanation' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, K2Node_CustomEvent_InContents) == 0x000040, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::K2Node_CustomEvent_InContents' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, CallFunc_GetScrollOffsetOfEnd_ReturnValue) == 0x000058, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::CallFunc_GetScrollOffsetOfEnd_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, K2Node_MakeStruct_FormatArgumentData) == 0x000060, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x0000A0, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, K2Node_MakeArray_Array) == 0x0000A8, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, K2Node_ComponentBoundEvent_bIsChecked) == 0x0000B8, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, CallFunc_PlayAnimation_ReturnValue) == 0x0000C0, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, CallFunc_PlayAnimation_ReturnValue_1) == 0x0000C8, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, CallFunc_ShowCursor_ReturnValue) == 0x0000D0, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::CallFunc_ShowCursor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, K2Node_MakeStruct_SlateColor) == 0x0000D8, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, K2Node_MakeStruct_SlateColor_1) == 0x000100, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000128, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, CallFunc_Conv_StringToText_ReturnValue) == 0x000138, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, K2Node_CreateDelegate_OutputDelegate) == 0x000150, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService, CallFunc_Format_ReturnValue) == 0x000160, "Member 'WBP_TermsOfService_C_ExecuteUbergraph_WBP_TermsOfService::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_TermsOfService.WBP_TermsOfService_C.Initialize
// 0x0048 (0x0048 - 0x0000)
struct WBP_TermsOfService_C_Initialize final
{
public:
	class FText                                   InTitle;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InExplanation;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InContents;                                        // 0x0030(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_TermsOfService_C_Initialize) == 0x000008, "Wrong alignment on WBP_TermsOfService_C_Initialize");
static_assert(sizeof(WBP_TermsOfService_C_Initialize) == 0x000048, "Wrong size on WBP_TermsOfService_C_Initialize");
static_assert(offsetof(WBP_TermsOfService_C_Initialize, InTitle) == 0x000000, "Member 'WBP_TermsOfService_C_Initialize::InTitle' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_Initialize, InExplanation) == 0x000018, "Member 'WBP_TermsOfService_C_Initialize::InExplanation' has a wrong offset!");
static_assert(offsetof(WBP_TermsOfService_C_Initialize, InContents) == 0x000030, "Member 'WBP_TermsOfService_C_Initialize::InContents' has a wrong offset!");

// Function WBP_TermsOfService.WBP_TermsOfService_C.BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature final
{
public:
	float                                         CurrentOffset;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong alignment on WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");
static_assert(sizeof(WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature) == 0x000004, "Wrong size on WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");
static_assert(offsetof(WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature, CurrentOffset) == 0x000000, "Member 'WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature::CurrentOffset' has a wrong offset!");

// Function WBP_TermsOfService.WBP_TermsOfService_C.BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'WBP_TermsOfService_C_BndEvt__WBP_TermsOfService_SBCheckBoxCmnCheckBox01_C_6_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

}

