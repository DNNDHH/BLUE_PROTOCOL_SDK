#pragma once

 

// Package: LibraryMenu_Search

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_Search.LibraryMenu_Search_C.OnTextChange__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_Search_C_OnTextChange__DelegateSignature final
{
public:
	class FText                                   NewParam;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LibraryMenu_Search_C_OnTextChange__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_Search_C_OnTextChange__DelegateSignature");
static_assert(sizeof(LibraryMenu_Search_C_OnTextChange__DelegateSignature) == 0x000018, "Wrong size on LibraryMenu_Search_C_OnTextChange__DelegateSignature");
static_assert(offsetof(LibraryMenu_Search_C_OnTextChange__DelegateSignature, NewParam) == 0x000000, "Member 'LibraryMenu_Search_C_OnTextChange__DelegateSignature::NewParam' has a wrong offset!");

// Function LibraryMenu_Search.LibraryMenu_Search_C.ExecuteUbergraph_LibraryMenu_Search
// 0x0060 (0x0060 - 0x0000)
struct LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6086[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0008(0x0018)(ConstParm)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6087[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0028(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6088[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search) == 0x000008, "Wrong alignment on LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search");
static_assert(sizeof(LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search) == 0x000060, "Wrong size on LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search");
static_assert(offsetof(LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search, EntryPoint) == 0x000000, "Member 'LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search, K2Node_ComponentBoundEvent_Text) == 0x000008, "Member 'LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search, CallFunc_GetVisibility_ReturnValue) == 0x000020, "Member 'LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search, CallFunc_GetText_ReturnValue) == 0x000028, "Member 'LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000040, "Member 'LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search, CallFunc_Len_ReturnValue) == 0x000058, "Member 'LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search, CallFunc_Greater_IntInt_ReturnValue) == 0x00005C, "Member 'LibraryMenu_Search_C_ExecuteUbergraph_LibraryMenu_Search::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function LibraryMenu_Search.LibraryMenu_Search_C.BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_Search_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(LibraryMenu_Search_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_Search_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(LibraryMenu_Search_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on LibraryMenu_Search_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(LibraryMenu_Search_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'LibraryMenu_Search_C_BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function LibraryMenu_Search.LibraryMenu_Search_C.GetSerchKeyword
// 0x0038 (0x0038 - 0x0000)
struct LibraryMenu_Search_C_GetSerchKeyword final
{
public:
	class FString                                 SerchKeyword;                                      // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_Search_C_GetSerchKeyword) == 0x000008, "Wrong alignment on LibraryMenu_Search_C_GetSerchKeyword");
static_assert(sizeof(LibraryMenu_Search_C_GetSerchKeyword) == 0x000038, "Wrong size on LibraryMenu_Search_C_GetSerchKeyword");
static_assert(offsetof(LibraryMenu_Search_C_GetSerchKeyword, SerchKeyword) == 0x000000, "Member 'LibraryMenu_Search_C_GetSerchKeyword::SerchKeyword' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Search_C_GetSerchKeyword, CallFunc_GetText_ReturnValue) == 0x000010, "Member 'LibraryMenu_Search_C_GetSerchKeyword::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_Search_C_GetSerchKeyword, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'LibraryMenu_Search_C_GetSerchKeyword::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

