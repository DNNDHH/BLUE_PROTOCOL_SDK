#pragma once

 

// Package: CmnSearch1

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CmnSearch1.CmnSearch1_C.OnTextChange__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct CmnSearch1_C_OnTextChange__DelegateSignature final
{
public:
	class FText                                   NewText;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CmnSearch1_C_OnTextChange__DelegateSignature) == 0x000008, "Wrong alignment on CmnSearch1_C_OnTextChange__DelegateSignature");
static_assert(sizeof(CmnSearch1_C_OnTextChange__DelegateSignature) == 0x000018, "Wrong size on CmnSearch1_C_OnTextChange__DelegateSignature");
static_assert(offsetof(CmnSearch1_C_OnTextChange__DelegateSignature, NewText) == 0x000000, "Member 'CmnSearch1_C_OnTextChange__DelegateSignature::NewText' has a wrong offset!");

// Function CmnSearch1.CmnSearch1_C.ExecuteUbergraph_CmnSearch1
// 0x0078 (0x0078 - 0x0000)
struct CmnSearch1_C_ExecuteUbergraph_CmnSearch1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B22[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0008(0x0018)(ConstParm)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B23[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_Message;                        // 0x0028(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6B24[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0048(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnSearch1_C_ExecuteUbergraph_CmnSearch1) == 0x000008, "Wrong alignment on CmnSearch1_C_ExecuteUbergraph_CmnSearch1");
static_assert(sizeof(CmnSearch1_C_ExecuteUbergraph_CmnSearch1) == 0x000078, "Wrong size on CmnSearch1_C_ExecuteUbergraph_CmnSearch1");
static_assert(offsetof(CmnSearch1_C_ExecuteUbergraph_CmnSearch1, EntryPoint) == 0x000000, "Member 'CmnSearch1_C_ExecuteUbergraph_CmnSearch1::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnSearch1_C_ExecuteUbergraph_CmnSearch1, K2Node_ComponentBoundEvent_Text) == 0x000008, "Member 'CmnSearch1_C_ExecuteUbergraph_CmnSearch1::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(CmnSearch1_C_ExecuteUbergraph_CmnSearch1, CallFunc_GetVisibility_ReturnValue) == 0x000020, "Member 'CmnSearch1_C_ExecuteUbergraph_CmnSearch1::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnSearch1_C_ExecuteUbergraph_CmnSearch1, K2Node_CustomEvent_Message) == 0x000028, "Member 'CmnSearch1_C_ExecuteUbergraph_CmnSearch1::K2Node_CustomEvent_Message' has a wrong offset!");
static_assert(offsetof(CmnSearch1_C_ExecuteUbergraph_CmnSearch1, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000040, "Member 'CmnSearch1_C_ExecuteUbergraph_CmnSearch1::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnSearch1_C_ExecuteUbergraph_CmnSearch1, CallFunc_GetText_ReturnValue) == 0x000048, "Member 'CmnSearch1_C_ExecuteUbergraph_CmnSearch1::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnSearch1_C_ExecuteUbergraph_CmnSearch1, CallFunc_Conv_TextToString_ReturnValue) == 0x000060, "Member 'CmnSearch1_C_ExecuteUbergraph_CmnSearch1::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnSearch1_C_ExecuteUbergraph_CmnSearch1, CallFunc_Len_ReturnValue) == 0x000070, "Member 'CmnSearch1_C_ExecuteUbergraph_CmnSearch1::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnSearch1_C_ExecuteUbergraph_CmnSearch1, CallFunc_Greater_IntInt_ReturnValue) == 0x000074, "Member 'CmnSearch1_C_ExecuteUbergraph_CmnSearch1::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function CmnSearch1.CmnSearch1_C.SetHintWithText
// 0x0018 (0x0018 - 0x0000)
struct CmnSearch1_C_SetHintWithText final
{
public:
	class FText                                   Message;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CmnSearch1_C_SetHintWithText) == 0x000008, "Wrong alignment on CmnSearch1_C_SetHintWithText");
static_assert(sizeof(CmnSearch1_C_SetHintWithText) == 0x000018, "Wrong size on CmnSearch1_C_SetHintWithText");
static_assert(offsetof(CmnSearch1_C_SetHintWithText, Message) == 0x000000, "Member 'CmnSearch1_C_SetHintWithText::Message' has a wrong offset!");

// Function CmnSearch1.CmnSearch1_C.BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct CmnSearch1_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CmnSearch1_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on CmnSearch1_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(CmnSearch1_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on CmnSearch1_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(CmnSearch1_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'CmnSearch1_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function CmnSearch1.CmnSearch1_C.GetSearchText
// 0x0038 (0x0038 - 0x0000)
struct CmnSearch1_C_GetSearchText final
{
public:
	class FString                                 SearchText;                                        // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnSearch1_C_GetSearchText) == 0x000008, "Wrong alignment on CmnSearch1_C_GetSearchText");
static_assert(sizeof(CmnSearch1_C_GetSearchText) == 0x000038, "Wrong size on CmnSearch1_C_GetSearchText");
static_assert(offsetof(CmnSearch1_C_GetSearchText, SearchText) == 0x000000, "Member 'CmnSearch1_C_GetSearchText::SearchText' has a wrong offset!");
static_assert(offsetof(CmnSearch1_C_GetSearchText, CallFunc_GetText_ReturnValue) == 0x000010, "Member 'CmnSearch1_C_GetSearchText::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnSearch1_C_GetSearchText, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'CmnSearch1_C_GetSearchText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

