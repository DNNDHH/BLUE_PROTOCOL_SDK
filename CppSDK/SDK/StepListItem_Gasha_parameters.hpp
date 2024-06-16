#pragma once

 

// Package: StepListItem_Gasha

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function StepListItem_Gasha.StepListItem_Gasha_C.OnBtnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct StepListItem_Gasha_C_OnBtnClicked__DelegateSignature final
{
public:
	int32                                         Param_BtnId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepListItem_Gasha_C_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong alignment on StepListItem_Gasha_C_OnBtnClicked__DelegateSignature");
static_assert(sizeof(StepListItem_Gasha_C_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong size on StepListItem_Gasha_C_OnBtnClicked__DelegateSignature");
static_assert(offsetof(StepListItem_Gasha_C_OnBtnClicked__DelegateSignature, Param_BtnId) == 0x000000, "Member 'StepListItem_Gasha_C_OnBtnClicked__DelegateSignature::Param_BtnId' has a wrong offset!");

// Function StepListItem_Gasha.StepListItem_Gasha_C.ExecuteUbergraph_StepListItem_Gasha
// 0x0080 (0x0080 - 0x0000)
struct StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_582F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0058(0x0028)()
};
static_assert(alignof(StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha) == 0x000008, "Wrong alignment on StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha");
static_assert(sizeof(StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha) == 0x000080, "Wrong size on StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha");
static_assert(offsetof(StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha, EntryPoint) == 0x000000, "Member 'StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha::EntryPoint' has a wrong offset!");
static_assert(offsetof(StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha, K2Node_MakeStruct_SlateColor_2) == 0x000058, "Member 'StepListItem_Gasha_C_ExecuteUbergraph_StepListItem_Gasha::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");

// Function StepListItem_Gasha.StepListItem_Gasha_C.SetBtnText
// 0x0098 (0x0098 - 0x0000)
struct StepListItem_Gasha_C_SetBtnText final
{
public:
	int32                                         Param_BtnId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0018(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0058(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0080(0x0018)()
};
static_assert(alignof(StepListItem_Gasha_C_SetBtnText) == 0x000008, "Wrong alignment on StepListItem_Gasha_C_SetBtnText");
static_assert(sizeof(StepListItem_Gasha_C_SetBtnText) == 0x000098, "Wrong size on StepListItem_Gasha_C_SetBtnText");
static_assert(offsetof(StepListItem_Gasha_C_SetBtnText, Param_BtnId) == 0x000000, "Member 'StepListItem_Gasha_C_SetBtnText::Param_BtnId' has a wrong offset!");
static_assert(offsetof(StepListItem_Gasha_C_SetBtnText, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'StepListItem_Gasha_C_SetBtnText::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepListItem_Gasha_C_SetBtnText, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'StepListItem_Gasha_C_SetBtnText::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepListItem_Gasha_C_SetBtnText, K2Node_MakeStruct_FormatArgumentData) == 0x000018, "Member 'StepListItem_Gasha_C_SetBtnText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(StepListItem_Gasha_C_SetBtnText, CallFunc_Conv_StringToText_ReturnValue) == 0x000058, "Member 'StepListItem_Gasha_C_SetBtnText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StepListItem_Gasha_C_SetBtnText, K2Node_MakeArray_Array) == 0x000070, "Member 'StepListItem_Gasha_C_SetBtnText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(StepListItem_Gasha_C_SetBtnText, CallFunc_Format_ReturnValue) == 0x000080, "Member 'StepListItem_Gasha_C_SetBtnText::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function StepListItem_Gasha.StepListItem_Gasha_C.GetBtnText
// 0x0004 (0x0004 - 0x0000)
struct StepListItem_Gasha_C_GetBtnText final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StepListItem_Gasha_C_GetBtnText) == 0x000004, "Wrong alignment on StepListItem_Gasha_C_GetBtnText");
static_assert(sizeof(StepListItem_Gasha_C_GetBtnText) == 0x000004, "Wrong size on StepListItem_Gasha_C_GetBtnText");
static_assert(offsetof(StepListItem_Gasha_C_GetBtnText, TextId) == 0x000000, "Member 'StepListItem_Gasha_C_GetBtnText::TextId' has a wrong offset!");

// Function StepListItem_Gasha.StepListItem_Gasha_C.SetBtnSelected
// 0x0058 (0x0058 - 0x0000)
struct StepListItem_Gasha_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5830[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(StepListItem_Gasha_C_SetBtnSelected) == 0x000008, "Wrong alignment on StepListItem_Gasha_C_SetBtnSelected");
static_assert(sizeof(StepListItem_Gasha_C_SetBtnSelected) == 0x000058, "Wrong size on StepListItem_Gasha_C_SetBtnSelected");
static_assert(offsetof(StepListItem_Gasha_C_SetBtnSelected, bSelected) == 0x000000, "Member 'StepListItem_Gasha_C_SetBtnSelected::bSelected' has a wrong offset!");
static_assert(offsetof(StepListItem_Gasha_C_SetBtnSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'StepListItem_Gasha_C_SetBtnSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(StepListItem_Gasha_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'StepListItem_Gasha_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

