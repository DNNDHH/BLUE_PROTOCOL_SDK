#pragma once

 

// Package: BP_RsDialog_LimitCondition_Item

#include "Basic.hpp"

#include "RsDialogButtonType_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_LimitCondition_Item_C_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_LimitCondition_Item_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialog_LimitCondition_Item_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialog_LimitCondition_Item_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialog_LimitCondition_Item_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialog_LimitCondition_Item_C_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialog_LimitCondition_Item_C_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.ExecuteUbergraph_BP_RsDialog_LimitCondition_Item
// 0x0068 (0x0068 - 0x0000)
struct BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsAchieve;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5507[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_Text;                           // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5508[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor_1;                   // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0054(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item) == 0x000008, "Wrong alignment on BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item");
static_assert(sizeof(BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item) == 0x000068, "Wrong size on BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item");
static_assert(offsetof(BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item, EntryPoint) == 0x000000, "Member 'BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item, K2Node_MakeStruct_LinearColor) == 0x000004, "Member 'BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item, K2Node_CustomEvent_IsAchieve) == 0x000014, "Member 'BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item::K2Node_CustomEvent_IsAchieve' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item, K2Node_CustomEvent_Text) == 0x000018, "Member 'BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item::K2Node_CustomEvent_Text' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item, Temp_bool_Variable) == 0x000040, "Member 'BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item, K2Node_MakeStruct_LinearColor_1) == 0x000044, "Member 'BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item::K2Node_MakeStruct_LinearColor_1' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item, K2Node_Select_Default) == 0x000054, "Member 'BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item::K2Node_Select_Default' has a wrong offset!");

// Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.SetItemInfo
// 0x0018 (0x0018 - 0x0000)
struct BP_RsDialog_LimitCondition_Item_C_SetItemInfo final
{
public:
	bool                                          IsAchieve;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5509[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_LimitCondition_Item_C_SetItemInfo) == 0x000008, "Wrong alignment on BP_RsDialog_LimitCondition_Item_C_SetItemInfo");
static_assert(sizeof(BP_RsDialog_LimitCondition_Item_C_SetItemInfo) == 0x000018, "Wrong size on BP_RsDialog_LimitCondition_Item_C_SetItemInfo");
static_assert(offsetof(BP_RsDialog_LimitCondition_Item_C_SetItemInfo, IsAchieve) == 0x000000, "Member 'BP_RsDialog_LimitCondition_Item_C_SetItemInfo::IsAchieve' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_LimitCondition_Item_C_SetItemInfo, Text) == 0x000008, "Member 'BP_RsDialog_LimitCondition_Item_C_SetItemInfo::Text' has a wrong offset!");

}

