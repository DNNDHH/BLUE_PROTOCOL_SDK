#pragma once

 

// Package: LibraryMenu_ListItem

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_ListItem_C_OnClick__DelegateSignature final
{
public:
	int32                                         Param_ListIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ListItem_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_ListItem_C_OnClick__DelegateSignature");
static_assert(sizeof(LibraryMenu_ListItem_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_ListItem_C_OnClick__DelegateSignature");
static_assert(offsetof(LibraryMenu_ListItem_C_OnClick__DelegateSignature, Param_ListIndex) == 0x000000, "Member 'LibraryMenu_ListItem_C_OnClick__DelegateSignature::Param_ListIndex' has a wrong offset!");

// Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.ExecuteUbergraph_LibraryMenu_ListItem
// 0x0060 (0x0060 - 0x0000)
struct LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ABB[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0038(0x0028)()
};
static_assert(alignof(LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem) == 0x000008, "Wrong alignment on LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem");
static_assert(sizeof(LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem) == 0x000060, "Wrong size on LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem");
static_assert(offsetof(LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem, EntryPoint) == 0x000000, "Member 'LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000004, "Member 'LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem, CallFunc_GetActiveWidgetIndex_ReturnValue_1) == 0x000008, "Member 'LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem::CallFunc_GetActiveWidgetIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00000D, "Member 'LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem, K2Node_MakeStruct_SlateColor_1) == 0x000038, "Member 'LibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.SetName
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_ListItem_C_SetName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(LibraryMenu_ListItem_C_SetName) == 0x000008, "Wrong alignment on LibraryMenu_ListItem_C_SetName");
static_assert(sizeof(LibraryMenu_ListItem_C_SetName) == 0x000018, "Wrong size on LibraryMenu_ListItem_C_SetName");
static_assert(offsetof(LibraryMenu_ListItem_C_SetName, InText) == 0x000000, "Member 'LibraryMenu_ListItem_C_SetName::InText' has a wrong offset!");

// Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.SetBtnSelected
// 0x0058 (0x0058 - 0x0000)
struct LibraryMenu_ListItem_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4ABC[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(LibraryMenu_ListItem_C_SetBtnSelected) == 0x000008, "Wrong alignment on LibraryMenu_ListItem_C_SetBtnSelected");
static_assert(sizeof(LibraryMenu_ListItem_C_SetBtnSelected) == 0x000058, "Wrong size on LibraryMenu_ListItem_C_SetBtnSelected");
static_assert(offsetof(LibraryMenu_ListItem_C_SetBtnSelected, bSelected) == 0x000000, "Member 'LibraryMenu_ListItem_C_SetBtnSelected::bSelected' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItem_C_SetBtnSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'LibraryMenu_ListItem_C_SetBtnSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(LibraryMenu_ListItem_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'LibraryMenu_ListItem_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.Set New Icon
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_ListItem_C_Set_New_Icon final
{
public:
	ESlateVisibility                              InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_ListItem_C_Set_New_Icon) == 0x000001, "Wrong alignment on LibraryMenu_ListItem_C_Set_New_Icon");
static_assert(sizeof(LibraryMenu_ListItem_C_Set_New_Icon) == 0x000001, "Wrong size on LibraryMenu_ListItem_C_Set_New_Icon");
static_assert(offsetof(LibraryMenu_ListItem_C_Set_New_Icon, InVisibility) == 0x000000, "Member 'LibraryMenu_ListItem_C_Set_New_Icon::InVisibility' has a wrong offset!");

}

