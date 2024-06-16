#pragma once

 

// Package: CategoryList_Type1_Item

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct CategoryList_Type1_Item_C_OnClick__DelegateSignature final
{
public:
	int32                                         Param_ListIndex;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_Item_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on CategoryList_Type1_Item_C_OnClick__DelegateSignature");
static_assert(sizeof(CategoryList_Type1_Item_C_OnClick__DelegateSignature) == 0x000004, "Wrong size on CategoryList_Type1_Item_C_OnClick__DelegateSignature");
static_assert(offsetof(CategoryList_Type1_Item_C_OnClick__DelegateSignature, Param_ListIndex) == 0x000000, "Member 'CategoryList_Type1_Item_C_OnClick__DelegateSignature::Param_ListIndex' has a wrong offset!");

// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.ExecuteUbergraph_CategoryList_Type1_Item
// 0x0080 (0x0080 - 0x0000)
struct CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_627E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0020(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0048(0x0028)()
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_627F[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item) == 0x000008, "Wrong alignment on CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item");
static_assert(sizeof(CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item) == 0x000080, "Wrong size on CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item");
static_assert(offsetof(CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item, EntryPoint) == 0x000000, "Member 'CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item, K2Node_MakeStruct_SlateColor) == 0x000020, "Member 'CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item, K2Node_MakeStruct_SlateColor_1) == 0x000048, "Member 'CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000070, "Member 'CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000074, "Member 'CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item, CallFunc_GetActiveWidgetIndex_ReturnValue_1) == 0x000078, "Member 'CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item::CallFunc_GetActiveWidgetIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00007C, "Member 'CategoryList_Type1_Item_C_ExecuteUbergraph_CategoryList_Type1_Item::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.SetName
// 0x0018 (0x0018 - 0x0000)
struct CategoryList_Type1_Item_C_SetName final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(CategoryList_Type1_Item_C_SetName) == 0x000008, "Wrong alignment on CategoryList_Type1_Item_C_SetName");
static_assert(sizeof(CategoryList_Type1_Item_C_SetName) == 0x000018, "Wrong size on CategoryList_Type1_Item_C_SetName");
static_assert(offsetof(CategoryList_Type1_Item_C_SetName, InText) == 0x000000, "Member 'CategoryList_Type1_Item_C_SetName::InText' has a wrong offset!");

// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.SetBtnSelected
// 0x0058 (0x0058 - 0x0000)
struct CategoryList_Type1_Item_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6280[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(CategoryList_Type1_Item_C_SetBtnSelected) == 0x000008, "Wrong alignment on CategoryList_Type1_Item_C_SetBtnSelected");
static_assert(sizeof(CategoryList_Type1_Item_C_SetBtnSelected) == 0x000058, "Wrong size on CategoryList_Type1_Item_C_SetBtnSelected");
static_assert(offsetof(CategoryList_Type1_Item_C_SetBtnSelected, bSelected) == 0x000000, "Member 'CategoryList_Type1_Item_C_SetBtnSelected::bSelected' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_SetBtnSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'CategoryList_Type1_Item_C_SetBtnSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'CategoryList_Type1_Item_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function CategoryList_Type1_Item.CategoryList_Type1_Item_C.SetNewIcon
// 0x0005 (0x0005 - 0x0000)
struct CategoryList_Type1_Item_C_SetNewIcon final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CategoryList_Type1_Item_C_SetNewIcon) == 0x000001, "Wrong alignment on CategoryList_Type1_Item_C_SetNewIcon");
static_assert(sizeof(CategoryList_Type1_Item_C_SetNewIcon) == 0x000005, "Wrong size on CategoryList_Type1_Item_C_SetNewIcon");
static_assert(offsetof(CategoryList_Type1_Item_C_SetNewIcon, Param_IsVisible) == 0x000000, "Member 'CategoryList_Type1_Item_C_SetNewIcon::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_SetNewIcon, Temp_bool_Variable) == 0x000001, "Member 'CategoryList_Type1_Item_C_SetNewIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_SetNewIcon, Temp_byte_Variable) == 0x000002, "Member 'CategoryList_Type1_Item_C_SetNewIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_SetNewIcon, Temp_byte_Variable_1) == 0x000003, "Member 'CategoryList_Type1_Item_C_SetNewIcon::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CategoryList_Type1_Item_C_SetNewIcon, K2Node_Select_Default) == 0x000004, "Member 'CategoryList_Type1_Item_C_SetNewIcon::K2Node_Select_Default' has a wrong offset!");

}

