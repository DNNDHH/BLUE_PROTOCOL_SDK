#pragma once

 

// Package: BP_RsDialog_UseItem

#include "Basic.hpp"

#include "RsDialogProductTitleType_structs.hpp"
#include "RsDialogButtonType_structs.hpp"


namespace SDK::Params
{

// Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct BP_RsDialog_UseItem_C_OnButtonClicked__DelegateSignature final
{
public:
	ERsDialogButtonType                           Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_RsDialog_UseItem_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on BP_RsDialog_UseItem_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(BP_RsDialog_UseItem_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on BP_RsDialog_UseItem_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(BP_RsDialog_UseItem_C_OnButtonClicked__DelegateSignature, Type) == 0x000000, "Member 'BP_RsDialog_UseItem_C_OnButtonClicked__DelegateSignature::Type' has a wrong offset!");

// Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.ExecuteUbergraph_BP_RsDialog_UseItem
// 0x0048 (0x0048 - 0x0000)
struct BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogProductTitleType                     K2Node_CustomEvent_ProductTitleType;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5532[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemSetId;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5533[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_ProductName;                    // 0x0010(0x0018)()
	int32                                         K2Node_CustomEvent_RankFrom;                       // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_RankTo;                         // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_EffectDescription;              // 0x0030(0x0018)()
};
static_assert(alignof(BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem) == 0x000008, "Wrong alignment on BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem");
static_assert(sizeof(BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem) == 0x000048, "Wrong size on BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem");
static_assert(offsetof(BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem, EntryPoint) == 0x000000, "Member 'BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem, K2Node_CustomEvent_ProductTitleType) == 0x000004, "Member 'BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem::K2Node_CustomEvent_ProductTitleType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem, K2Node_CustomEvent_ItemSetId) == 0x000008, "Member 'BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem::K2Node_CustomEvent_ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem, K2Node_CustomEvent_ProductName) == 0x000010, "Member 'BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem::K2Node_CustomEvent_ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem, K2Node_CustomEvent_RankFrom) == 0x000028, "Member 'BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem::K2Node_CustomEvent_RankFrom' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem, K2Node_CustomEvent_RankTo) == 0x00002C, "Member 'BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem::K2Node_CustomEvent_RankTo' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem, K2Node_CustomEvent_EffectDescription) == 0x000030, "Member 'BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem::K2Node_CustomEvent_EffectDescription' has a wrong offset!");

// Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.SetDialogInfo
// 0x0040 (0x0040 - 0x0000)
struct BP_RsDialog_UseItem_C_SetDialogInfo final
{
public:
	ERsDialogProductTitleType                     ProductTitleType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5534[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemSetId;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ProductName;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         RankFrom;                                          // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RankTo;                                            // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   EffectDescription;                                 // 0x0028(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(BP_RsDialog_UseItem_C_SetDialogInfo) == 0x000008, "Wrong alignment on BP_RsDialog_UseItem_C_SetDialogInfo");
static_assert(sizeof(BP_RsDialog_UseItem_C_SetDialogInfo) == 0x000040, "Wrong size on BP_RsDialog_UseItem_C_SetDialogInfo");
static_assert(offsetof(BP_RsDialog_UseItem_C_SetDialogInfo, ProductTitleType) == 0x000000, "Member 'BP_RsDialog_UseItem_C_SetDialogInfo::ProductTitleType' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_UseItem_C_SetDialogInfo, ItemSetId) == 0x000004, "Member 'BP_RsDialog_UseItem_C_SetDialogInfo::ItemSetId' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_UseItem_C_SetDialogInfo, ProductName) == 0x000008, "Member 'BP_RsDialog_UseItem_C_SetDialogInfo::ProductName' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_UseItem_C_SetDialogInfo, RankFrom) == 0x000020, "Member 'BP_RsDialog_UseItem_C_SetDialogInfo::RankFrom' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_UseItem_C_SetDialogInfo, RankTo) == 0x000024, "Member 'BP_RsDialog_UseItem_C_SetDialogInfo::RankTo' has a wrong offset!");
static_assert(offsetof(BP_RsDialog_UseItem_C_SetDialogInfo, EffectDescription) == 0x000028, "Member 'BP_RsDialog_UseItem_C_SetDialogInfo::EffectDescription' has a wrong offset!");

}

