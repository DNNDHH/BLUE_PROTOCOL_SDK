#pragma once

 

// Package: PurchaseTypeTabItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.OnBtnClicked__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct PurchaseTypeTabItem_C_OnBtnClicked__DelegateSignature final
{
public:
	int32                                         Param_BtnId;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PurchaseTypeTabItem_C_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong alignment on PurchaseTypeTabItem_C_OnBtnClicked__DelegateSignature");
static_assert(sizeof(PurchaseTypeTabItem_C_OnBtnClicked__DelegateSignature) == 0x000004, "Wrong size on PurchaseTypeTabItem_C_OnBtnClicked__DelegateSignature");
static_assert(offsetof(PurchaseTypeTabItem_C_OnBtnClicked__DelegateSignature, Param_BtnId) == 0x000000, "Member 'PurchaseTypeTabItem_C_OnBtnClicked__DelegateSignature::Param_BtnId' has a wrong offset!");

// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.ExecuteUbergraph_PurchaseTypeTabItem
// 0x00C8 (0x00C8 - 0x0000)
struct PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0068(0x0028)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66A9[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0094(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66AA[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
};
static_assert(alignof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem) == 0x000008, "Wrong alignment on PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem");
static_assert(sizeof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem) == 0x0000C8, "Wrong size on PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem");
static_assert(offsetof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem, EntryPoint) == 0x000000, "Member 'PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem, Temp_int_Variable) == 0x000004, "Member 'PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem, Temp_name_Variable) == 0x000008, "Member 'PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem, Temp_name_Variable_1) == 0x000010, "Member 'PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem, K2Node_MakeStruct_SlateColor_2) == 0x000068, "Member 'PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem, K2Node_Event_IsDesignTime) == 0x000090, "Member 'PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem, K2Node_Select_Default) == 0x000094, "Member 'PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000A0, "Member 'PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct PurchaseTypeTabItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PurchaseTypeTabItem_C_PreConstruct) == 0x000001, "Wrong alignment on PurchaseTypeTabItem_C_PreConstruct");
static_assert(sizeof(PurchaseTypeTabItem_C_PreConstruct) == 0x000001, "Wrong size on PurchaseTypeTabItem_C_PreConstruct");
static_assert(offsetof(PurchaseTypeTabItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'PurchaseTypeTabItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.GetBtnText
// 0x0004 (0x0004 - 0x0000)
struct PurchaseTypeTabItem_C_GetBtnText final
{
public:
	int32                                         TextId;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PurchaseTypeTabItem_C_GetBtnText) == 0x000004, "Wrong alignment on PurchaseTypeTabItem_C_GetBtnText");
static_assert(sizeof(PurchaseTypeTabItem_C_GetBtnText) == 0x000004, "Wrong size on PurchaseTypeTabItem_C_GetBtnText");
static_assert(offsetof(PurchaseTypeTabItem_C_GetBtnText, TextId) == 0x000000, "Member 'PurchaseTypeTabItem_C_GetBtnText::TextId' has a wrong offset!");

// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.SetBtnSelected
// 0x0058 (0x0058 - 0x0000)
struct PurchaseTypeTabItem_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66AB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(PurchaseTypeTabItem_C_SetBtnSelected) == 0x000008, "Wrong alignment on PurchaseTypeTabItem_C_SetBtnSelected");
static_assert(sizeof(PurchaseTypeTabItem_C_SetBtnSelected) == 0x000058, "Wrong size on PurchaseTypeTabItem_C_SetBtnSelected");
static_assert(offsetof(PurchaseTypeTabItem_C_SetBtnSelected, bSelected) == 0x000000, "Member 'PurchaseTypeTabItem_C_SetBtnSelected::bSelected' has a wrong offset!");
static_assert(offsetof(PurchaseTypeTabItem_C_SetBtnSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'PurchaseTypeTabItem_C_SetBtnSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PurchaseTypeTabItem_C_SetBtnSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'PurchaseTypeTabItem_C_SetBtnSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

