#pragma once

 

// Package: ItemIconBtn

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"
#include "CharaParts_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ItemIconBtn.ItemIconBtn_C.OnSelect__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemIconBtn_C_OnSelect__DelegateSignature final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_OnSelect__DelegateSignature) == 0x000008, "Wrong alignment on ItemIconBtn_C_OnSelect__DelegateSignature");
static_assert(sizeof(ItemIconBtn_C_OnSelect__DelegateSignature) == 0x000008, "Wrong size on ItemIconBtn_C_OnSelect__DelegateSignature");
static_assert(offsetof(ItemIconBtn_C_OnSelect__DelegateSignature, SelectItem) == 0x000000, "Member 'ItemIconBtn_C_OnSelect__DelegateSignature::SelectItem' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.OnSelectRight__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemIconBtn_C_OnSelectRight__DelegateSignature final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_OnSelectRight__DelegateSignature) == 0x000008, "Wrong alignment on ItemIconBtn_C_OnSelectRight__DelegateSignature");
static_assert(sizeof(ItemIconBtn_C_OnSelectRight__DelegateSignature) == 0x000008, "Wrong size on ItemIconBtn_C_OnSelectRight__DelegateSignature");
static_assert(offsetof(ItemIconBtn_C_OnSelectRight__DelegateSignature, SelectItem) == 0x000000, "Member 'ItemIconBtn_C_OnSelectRight__DelegateSignature::SelectItem' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.OnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemIconBtn_C_OnPressed__DelegateSignature final
{
public:
	class UItemIconBtn_C*                         SelectItem;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_OnPressed__DelegateSignature) == 0x000008, "Wrong alignment on ItemIconBtn_C_OnPressed__DelegateSignature");
static_assert(sizeof(ItemIconBtn_C_OnPressed__DelegateSignature) == 0x000008, "Wrong size on ItemIconBtn_C_OnPressed__DelegateSignature");
static_assert(offsetof(ItemIconBtn_C_OnPressed__DelegateSignature, SelectItem) == 0x000000, "Member 'ItemIconBtn_C_OnPressed__DelegateSignature::SelectItem' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.ExecuteUbergraph_ItemIconBtn
// 0x0028 (0x0028 - 0x0000)
struct ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BB0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIcon_C*                          K2Node_ComponentBoundEvent_Sender;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BB1[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIcon_C*                          K2Node_ComponentBoundEvent_Sender_1;               // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn) == 0x000008, "Wrong alignment on ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn");
static_assert(sizeof(ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn) == 0x000028, "Wrong size on ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn");
static_assert(offsetof(ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn, EntryPoint) == 0x000000, "Member 'ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn, K2Node_ComponentBoundEvent_Sender) == 0x000008, "Member 'ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn, K2Node_Event_bIsExpanded) == 0x000010, "Member 'ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn, K2Node_Event_bIsSelected) == 0x000011, "Member 'ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn, K2Node_Event_ListItemObject) == 0x000018, "Member 'ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn, K2Node_ComponentBoundEvent_Sender_1) == 0x000020, "Member 'ItemIconBtn_C_ExecuteUbergraph_ItemIconBtn::K2Node_ComponentBoundEvent_Sender_1' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature final
{
public:
	class UCommonIcon_C*                          Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature) == 0x000008, "Wrong alignment on ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");
static_assert(sizeof(ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature) == 0x000008, "Wrong size on ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature");
static_assert(offsetof(ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature, Sender) == 0x000000, "Member 'ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature::Sender' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature final
{
public:
	class UCommonIcon_C*                          Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(sizeof(ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong size on ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(offsetof(ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature, Sender) == 0x000000, "Member 'ItemIconBtn_C_BndEvt__ItemIconBtn_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature::Sender' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct ItemIconBtn_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on ItemIconBtn_C_OnListItemObjectSet");
static_assert(sizeof(ItemIconBtn_C_OnListItemObjectSet) == 0x000008, "Wrong size on ItemIconBtn_C_OnListItemObjectSet");
static_assert(offsetof(ItemIconBtn_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'ItemIconBtn_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on ItemIconBtn_C_BP_OnItemSelectionChanged");
static_assert(sizeof(ItemIconBtn_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on ItemIconBtn_C_BP_OnItemSelectionChanged");
static_assert(offsetof(ItemIconBtn_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'ItemIconBtn_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on ItemIconBtn_C_BP_OnItemExpansionChanged");
static_assert(sizeof(ItemIconBtn_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on ItemIconBtn_C_BP_OnItemExpansionChanged");
static_assert(offsetof(ItemIconBtn_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'ItemIconBtn_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetItem_InventoryData
// 0x0090 (0x0090 - 0x0000)
struct ItemIconBtn_C_SetItem_InventoryData final
{
public:
	struct FInventoryItemData                     InItemData;                                        // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          InUseDetailsTooltip;                               // 0x0060(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HiddenLockIcon;                                    // 0x0061(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HiddenAmout;                                       // 0x0062(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsUnidentified;                                    // 0x0063(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLimitedTime;                                      // 0x0064(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_Stack_BEffective_Display;                    // 0x0065(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpLimitedTime;                                    // 0x0066(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpIsUseDetailsTooltip;                            // 0x0067(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpIsUnidentified;                                 // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpItemLockVisibility;                             // 0x0069(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpIsWeapon;                                       // 0x006A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BB2[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpItemAmount;                                     // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpItemId;                                         // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x007F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BB3[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     Temp_byte_Variable;                                // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsItemLockIconDraw_OutLockFlag;           // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetItem_InventoryData) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetItem_InventoryData");
static_assert(sizeof(ItemIconBtn_C_SetItem_InventoryData) == 0x000090, "Wrong size on ItemIconBtn_C_SetItem_InventoryData");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, InItemData) == 0x000000, "Member 'ItemIconBtn_C_SetItem_InventoryData::InItemData' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, InUseDetailsTooltip) == 0x000060, "Member 'ItemIconBtn_C_SetItem_InventoryData::InUseDetailsTooltip' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, HiddenLockIcon) == 0x000061, "Member 'ItemIconBtn_C_SetItem_InventoryData::HiddenLockIcon' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, HiddenAmout) == 0x000062, "Member 'ItemIconBtn_C_SetItem_InventoryData::HiddenAmout' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, IsUnidentified) == 0x000063, "Member 'ItemIconBtn_C_SetItem_InventoryData::IsUnidentified' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, bLimitedTime) == 0x000064, "Member 'ItemIconBtn_C_SetItem_InventoryData::bLimitedTime' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, Param_Stack_BEffective_Display) == 0x000065, "Member 'ItemIconBtn_C_SetItem_InventoryData::Param_Stack_BEffective_Display' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, TmpLimitedTime) == 0x000066, "Member 'ItemIconBtn_C_SetItem_InventoryData::TmpLimitedTime' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, TmpIsUseDetailsTooltip) == 0x000067, "Member 'ItemIconBtn_C_SetItem_InventoryData::TmpIsUseDetailsTooltip' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, TmpIsUnidentified) == 0x000068, "Member 'ItemIconBtn_C_SetItem_InventoryData::TmpIsUnidentified' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, TmpItemLockVisibility) == 0x000069, "Member 'ItemIconBtn_C_SetItem_InventoryData::TmpItemLockVisibility' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, TmpIsWeapon) == 0x00006A, "Member 'ItemIconBtn_C_SetItem_InventoryData::TmpIsWeapon' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, TmpItemAmount) == 0x00006C, "Member 'ItemIconBtn_C_SetItem_InventoryData::TmpItemAmount' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, TmpItemId) == 0x000070, "Member 'ItemIconBtn_C_SetItem_InventoryData::TmpItemId' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, Temp_bool_Variable) == 0x000074, "Member 'ItemIconBtn_C_SetItem_InventoryData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, Temp_bool_Variable_1) == 0x000075, "Member 'ItemIconBtn_C_SetItem_InventoryData::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, Temp_bool_Variable_2) == 0x000076, "Member 'ItemIconBtn_C_SetItem_InventoryData::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, Temp_bool_Variable_3) == 0x000077, "Member 'ItemIconBtn_C_SetItem_InventoryData::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, Temp_int_Variable) == 0x000078, "Member 'ItemIconBtn_C_SetItem_InventoryData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, Temp_bool_Variable_4) == 0x00007C, "Member 'ItemIconBtn_C_SetItem_InventoryData::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, Temp_bool_Variable_5) == 0x00007D, "Member 'ItemIconBtn_C_SetItem_InventoryData::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, Temp_bool_Variable_6) == 0x00007E, "Member 'ItemIconBtn_C_SetItem_InventoryData::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, Temp_bool_Variable_7) == 0x00007F, "Member 'ItemIconBtn_C_SetItem_InventoryData::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, Temp_bool_Variable_8) == 0x000080, "Member 'ItemIconBtn_C_SetItem_InventoryData::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, K2Node_Select_Default) == 0x000084, "Member 'ItemIconBtn_C_SetItem_InventoryData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, CallFunc_Greater_IntInt_ReturnValue) == 0x000088, "Member 'ItemIconBtn_C_SetItem_InventoryData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, Temp_byte_Variable) == 0x000089, "Member 'ItemIconBtn_C_SetItem_InventoryData::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, K2Node_Select_Default_1) == 0x00008A, "Member 'ItemIconBtn_C_SetItem_InventoryData::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, CallFunc_IsItemLockIconDraw_OutLockFlag) == 0x00008B, "Member 'ItemIconBtn_C_SetItem_InventoryData::CallFunc_IsItemLockIconDraw_OutLockFlag' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_InventoryData, K2Node_SwitchEnum_CmpSuccess) == 0x00008C, "Member 'ItemIconBtn_C_SetItem_InventoryData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetItem_Index
// 0x000C (0x000C - 0x0000)
struct ItemIconBtn_C_SetItem_Index final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InItemAmount;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLimitedTime;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetItem_Index) == 0x000004, "Wrong alignment on ItemIconBtn_C_SetItem_Index");
static_assert(sizeof(ItemIconBtn_C_SetItem_Index) == 0x00000C, "Wrong size on ItemIconBtn_C_SetItem_Index");
static_assert(offsetof(ItemIconBtn_C_SetItem_Index, InItemIndex) == 0x000000, "Member 'ItemIconBtn_C_SetItem_Index::InItemIndex' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_Index, InItemAmount) == 0x000004, "Member 'ItemIconBtn_C_SetItem_Index::InItemAmount' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_Index, bLimitedTime) == 0x000008, "Member 'ItemIconBtn_C_SetItem_Index::bLimitedTime' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetItem_Index, CallFunc_Greater_IntInt_ReturnValue) == 0x000009, "Member 'ItemIconBtn_C_SetItem_Index::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetImagine_Index
// 0x0004 (0x0004 - 0x0000)
struct ItemIconBtn_C_SetImagine_Index final
{
public:
	int32                                         InImagineItemId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetImagine_Index) == 0x000004, "Wrong alignment on ItemIconBtn_C_SetImagine_Index");
static_assert(sizeof(ItemIconBtn_C_SetImagine_Index) == 0x000004, "Wrong size on ItemIconBtn_C_SetImagine_Index");
static_assert(offsetof(ItemIconBtn_C_SetImagine_Index, InImagineItemId) == 0x000000, "Member 'ItemIconBtn_C_SetImagine_Index::InImagineItemId' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetMountImagine
// 0x0198 (0x0198 - 0x0000)
struct ItemIconBtn_C_SetMountImagine final
{
public:
	struct FInventoryItemData                     Param_InventoryItemData;                           // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BB4[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0078(0x0118)(ConstParm)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetMountImagine) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetMountImagine");
static_assert(sizeof(ItemIconBtn_C_SetMountImagine) == 0x000198, "Wrong size on ItemIconBtn_C_SetMountImagine");
static_assert(offsetof(ItemIconBtn_C_SetMountImagine, Param_InventoryItemData) == 0x000000, "Member 'ItemIconBtn_C_SetMountImagine::Param_InventoryItemData' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetMountImagine, CallFunc_GetStorage_ReturnValue) == 0x000060, "Member 'ItemIconBtn_C_SetMountImagine::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetMountImagine, CallFunc_GetStorage_ReturnValue_1) == 0x000068, "Member 'ItemIconBtn_C_SetMountImagine::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetMountImagine, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000070, "Member 'ItemIconBtn_C_SetMountImagine::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetMountImagine, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000078, "Member 'ItemIconBtn_C_SetMountImagine::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetMountImagine, CallFunc_IsItemLock_ReturnValue) == 0x000190, "Member 'ItemIconBtn_C_SetMountImagine::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetMountImagine, CallFunc_Greater_IntInt_ReturnValue) == 0x000191, "Member 'ItemIconBtn_C_SetMountImagine::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetWeapon_Index
// 0x0004 (0x0004 - 0x0000)
struct ItemIconBtn_C_SetWeapon_Index final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetWeapon_Index) == 0x000004, "Wrong alignment on ItemIconBtn_C_SetWeapon_Index");
static_assert(sizeof(ItemIconBtn_C_SetWeapon_Index) == 0x000004, "Wrong size on ItemIconBtn_C_SetWeapon_Index");
static_assert(offsetof(ItemIconBtn_C_SetWeapon_Index, InItemIndex) == 0x000000, "Member 'ItemIconBtn_C_SetWeapon_Index::InItemIndex' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.IsIconEmpty
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_IsIconEmpty final
{
public:
	bool                                          Param_Empty;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_IsIconEmpty) == 0x000001, "Wrong alignment on ItemIconBtn_C_IsIconEmpty");
static_assert(sizeof(ItemIconBtn_C_IsIconEmpty) == 0x000001, "Wrong size on ItemIconBtn_C_IsIconEmpty");
static_assert(offsetof(ItemIconBtn_C_IsIconEmpty, Param_Empty) == 0x000000, "Member 'ItemIconBtn_C_IsIconEmpty::Param_Empty' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetIconSelected
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_SetIconSelected final
{
public:
	bool                                          IsSelected;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetIconSelected) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetIconSelected");
static_assert(sizeof(ItemIconBtn_C_SetIconSelected) == 0x000001, "Wrong size on ItemIconBtn_C_SetIconSelected");
static_assert(offsetof(ItemIconBtn_C_SetIconSelected, IsSelected) == 0x000000, "Member 'ItemIconBtn_C_SetIconSelected::IsSelected' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetDetach
// 0x0009 (0x0009 - 0x0000)
struct ItemIconBtn_C_SetDetach final
{
public:
	bool                                          Param_IsDetach;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetDetach) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetDetach");
static_assert(sizeof(ItemIconBtn_C_SetDetach) == 0x000009, "Wrong size on ItemIconBtn_C_SetDetach");
static_assert(offsetof(ItemIconBtn_C_SetDetach, Param_IsDetach) == 0x000000, "Member 'ItemIconBtn_C_SetDetach::Param_IsDetach' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetDetach, Temp_bool_Variable) == 0x000001, "Member 'ItemIconBtn_C_SetDetach::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetDetach, Temp_byte_Variable) == 0x000002, "Member 'ItemIconBtn_C_SetDetach::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetDetach, Temp_byte_Variable_1) == 0x000003, "Member 'ItemIconBtn_C_SetDetach::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetDetach, Temp_bool_Variable_1) == 0x000004, "Member 'ItemIconBtn_C_SetDetach::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetDetach, K2Node_Select_Default) == 0x000005, "Member 'ItemIconBtn_C_SetDetach::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetDetach, Temp_byte_Variable_2) == 0x000006, "Member 'ItemIconBtn_C_SetDetach::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetDetach, Temp_byte_Variable_3) == 0x000007, "Member 'ItemIconBtn_C_SetDetach::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetDetach, K2Node_Select_Default_1) == 0x000008, "Member 'ItemIconBtn_C_SetDetach::K2Node_Select_Default_1' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetIconBlank
// 0x0005 (0x0005 - 0x0000)
struct ItemIconBtn_C_SetIconBlank final
{
public:
	bool                                          IsBlank;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetIconBlank) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetIconBlank");
static_assert(sizeof(ItemIconBtn_C_SetIconBlank) == 0x000005, "Wrong size on ItemIconBtn_C_SetIconBlank");
static_assert(offsetof(ItemIconBtn_C_SetIconBlank, IsBlank) == 0x000000, "Member 'ItemIconBtn_C_SetIconBlank::IsBlank' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIconBlank, Temp_bool_Variable) == 0x000001, "Member 'ItemIconBtn_C_SetIconBlank::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIconBlank, Temp_byte_Variable) == 0x000002, "Member 'ItemIconBtn_C_SetIconBlank::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIconBlank, Temp_byte_Variable_1) == 0x000003, "Member 'ItemIconBtn_C_SetIconBlank::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIconBlank, K2Node_Select_Default) == 0x000004, "Member 'ItemIconBtn_C_SetIconBlank::K2Node_Select_Default' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.Set Enable
// 0x0009 (0x0009 - 0x0000)
struct ItemIconBtn_C_Set_Enable final
{
public:
	bool                                          Param_bIsEnabled;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_Set_Enable) == 0x000001, "Wrong alignment on ItemIconBtn_C_Set_Enable");
static_assert(sizeof(ItemIconBtn_C_Set_Enable) == 0x000009, "Wrong size on ItemIconBtn_C_Set_Enable");
static_assert(offsetof(ItemIconBtn_C_Set_Enable, Param_bIsEnabled) == 0x000000, "Member 'ItemIconBtn_C_Set_Enable::Param_bIsEnabled' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Enable, Temp_bool_Variable) == 0x000001, "Member 'ItemIconBtn_C_Set_Enable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Enable, Temp_byte_Variable) == 0x000002, "Member 'ItemIconBtn_C_Set_Enable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Enable, Temp_byte_Variable_1) == 0x000003, "Member 'ItemIconBtn_C_Set_Enable::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Enable, Temp_bool_Variable_1) == 0x000004, "Member 'ItemIconBtn_C_Set_Enable::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Enable, K2Node_Select_Default) == 0x000005, "Member 'ItemIconBtn_C_Set_Enable::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Enable, Temp_byte_Variable_2) == 0x000006, "Member 'ItemIconBtn_C_Set_Enable::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Enable, Temp_byte_Variable_3) == 0x000007, "Member 'ItemIconBtn_C_Set_Enable::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Enable, K2Node_Select_Default_1) == 0x000008, "Member 'ItemIconBtn_C_Set_Enable::K2Node_Select_Default_1' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetTooltipEnable
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_SetTooltipEnable final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetTooltipEnable) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetTooltipEnable");
static_assert(sizeof(ItemIconBtn_C_SetTooltipEnable) == 0x000001, "Wrong size on ItemIconBtn_C_SetTooltipEnable");
static_assert(offsetof(ItemIconBtn_C_SetTooltipEnable, bEnable) == 0x000000, "Member 'ItemIconBtn_C_SetTooltipEnable::bEnable' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetIsButtonActive
// 0x0005 (0x0005 - 0x0000)
struct ItemIconBtn_C_SetIsButtonActive final
{
public:
	bool                                          IsActive;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetIsButtonActive) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetIsButtonActive");
static_assert(sizeof(ItemIconBtn_C_SetIsButtonActive) == 0x000005, "Wrong size on ItemIconBtn_C_SetIsButtonActive");
static_assert(offsetof(ItemIconBtn_C_SetIsButtonActive, IsActive) == 0x000000, "Member 'ItemIconBtn_C_SetIsButtonActive::IsActive' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIsButtonActive, Temp_bool_Variable) == 0x000001, "Member 'ItemIconBtn_C_SetIsButtonActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIsButtonActive, Temp_byte_Variable) == 0x000002, "Member 'ItemIconBtn_C_SetIsButtonActive::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIsButtonActive, Temp_byte_Variable_1) == 0x000003, "Member 'ItemIconBtn_C_SetIsButtonActive::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIsButtonActive, K2Node_Select_Default) == 0x000004, "Member 'ItemIconBtn_C_SetIsButtonActive::K2Node_Select_Default' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetPressedSoundId
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_SetPressedSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetPressedSoundId) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetPressedSoundId");
static_assert(sizeof(ItemIconBtn_C_SetPressedSoundId) == 0x000001, "Wrong size on ItemIconBtn_C_SetPressedSoundId");
static_assert(offsetof(ItemIconBtn_C_SetPressedSoundId, InSoundId) == 0x000000, "Member 'ItemIconBtn_C_SetPressedSoundId::InSoundId' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetHoveredSoundId
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_SetHoveredSoundId final
{
public:
	ESystemSE                                     InSoundId;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetHoveredSoundId) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetHoveredSoundId");
static_assert(sizeof(ItemIconBtn_C_SetHoveredSoundId) == 0x000001, "Wrong size on ItemIconBtn_C_SetHoveredSoundId");
static_assert(offsetof(ItemIconBtn_C_SetHoveredSoundId, InSoundId) == 0x000000, "Member 'ItemIconBtn_C_SetHoveredSoundId::InSoundId' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetHoveredColor
// 0x0010 (0x0010 - 0x0000)
struct ItemIconBtn_C_SetHoveredColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetHoveredColor) == 0x000004, "Wrong alignment on ItemIconBtn_C_SetHoveredColor");
static_assert(sizeof(ItemIconBtn_C_SetHoveredColor) == 0x000010, "Wrong size on ItemIconBtn_C_SetHoveredColor");
static_assert(offsetof(ItemIconBtn_C_SetHoveredColor, Color) == 0x000000, "Member 'ItemIconBtn_C_SetHoveredColor::Color' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.OnDragDetected
// 0x00B8 (0x00B8 - 0x0000)
struct ItemIconBtn_C_OnDragDetected final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShortcutDragDropOperation_C*           CallFunc_CreateDragDropOperation_ReturnValue;      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_OnDragDetected) == 0x000008, "Wrong alignment on ItemIconBtn_C_OnDragDetected");
static_assert(sizeof(ItemIconBtn_C_OnDragDetected) == 0x0000B8, "Wrong size on ItemIconBtn_C_OnDragDetected");
static_assert(offsetof(ItemIconBtn_C_OnDragDetected, MyGeometry) == 0x000000, "Member 'ItemIconBtn_C_OnDragDetected::MyGeometry' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_OnDragDetected, PointerEvent) == 0x000038, "Member 'ItemIconBtn_C_OnDragDetected::PointerEvent' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_OnDragDetected, Operation) == 0x0000A8, "Member 'ItemIconBtn_C_OnDragDetected::Operation' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_OnDragDetected, CallFunc_CreateDragDropOperation_ReturnValue) == 0x0000B0, "Member 'ItemIconBtn_C_OnDragDetected::CallFunc_CreateDragDropOperation_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.OnPreviewMouseButtonDown
// 0x0448 (0x0448 - 0x0000)
struct ItemIconBtn_C_OnPreviewMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0218(0x00B8)()
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue_1;        // 0x02D0(0x00B8)()
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1; // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x038A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BB5[0x5];                                     // 0x038B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0390(0x00B8)()
};
static_assert(alignof(ItemIconBtn_C_OnPreviewMouseButtonDown) == 0x000008, "Wrong alignment on ItemIconBtn_C_OnPreviewMouseButtonDown");
static_assert(sizeof(ItemIconBtn_C_OnPreviewMouseButtonDown) == 0x000448, "Wrong size on ItemIconBtn_C_OnPreviewMouseButtonDown");
static_assert(offsetof(ItemIconBtn_C_OnPreviewMouseButtonDown, MyGeometry) == 0x000000, "Member 'ItemIconBtn_C_OnPreviewMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_OnPreviewMouseButtonDown, MouseEvent) == 0x000038, "Member 'ItemIconBtn_C_OnPreviewMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_OnPreviewMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'ItemIconBtn_C_OnPreviewMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_OnPreviewMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000160, "Member 'ItemIconBtn_C_OnPreviewMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_OnPreviewMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000218, "Member 'ItemIconBtn_C_OnPreviewMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_OnPreviewMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue_1) == 0x0002D0, "Member 'ItemIconBtn_C_OnPreviewMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_OnPreviewMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue) == 0x000388, "Member 'ItemIconBtn_C_OnPreviewMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_OnPreviewMouseButtonDown, CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1) == 0x000389, "Member 'ItemIconBtn_C_OnPreviewMouseButtonDown::CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_OnPreviewMouseButtonDown, CallFunc_BooleanAND_ReturnValue) == 0x00038A, "Member 'ItemIconBtn_C_OnPreviewMouseButtonDown::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_OnPreviewMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000390, "Member 'ItemIconBtn_C_OnPreviewMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetDragable
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_SetDragable final
{
public:
	bool                                          InDragable;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetDragable) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetDragable");
static_assert(sizeof(ItemIconBtn_C_SetDragable) == 0x000001, "Wrong size on ItemIconBtn_C_SetDragable");
static_assert(offsetof(ItemIconBtn_C_SetDragable, InDragable) == 0x000000, "Member 'ItemIconBtn_C_SetDragable::InDragable' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetEquipIconVisibility
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_SetEquipIconVisibility final
{
public:
	bool                                          InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetEquipIconVisibility) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetEquipIconVisibility");
static_assert(sizeof(ItemIconBtn_C_SetEquipIconVisibility) == 0x000001, "Wrong size on ItemIconBtn_C_SetEquipIconVisibility");
static_assert(offsetof(ItemIconBtn_C_SetEquipIconVisibility, InVisibility) == 0x000000, "Member 'ItemIconBtn_C_SetEquipIconVisibility::InVisibility' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.GetEquipIconVisibility
// 0x0003 (0x0003 - 0x0000)
struct ItemIconBtn_C_GetEquipIconVisibility final
{
public:
	bool                                          OutIsEquipIconVisible;                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_GetEquipIconVisibility) == 0x000001, "Wrong alignment on ItemIconBtn_C_GetEquipIconVisibility");
static_assert(sizeof(ItemIconBtn_C_GetEquipIconVisibility) == 0x000003, "Wrong size on ItemIconBtn_C_GetEquipIconVisibility");
static_assert(offsetof(ItemIconBtn_C_GetEquipIconVisibility, OutIsEquipIconVisible) == 0x000000, "Member 'ItemIconBtn_C_GetEquipIconVisibility::OutIsEquipIconVisible' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetEquipIconVisibility, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'ItemIconBtn_C_GetEquipIconVisibility::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetEquipIconVisibility, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000002, "Member 'ItemIconBtn_C_GetEquipIconVisibility::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetRarity
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_SetRarity final
{
public:
	ESBRarity                                     InRarity;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetRarity) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetRarity");
static_assert(sizeof(ItemIconBtn_C_SetRarity) == 0x000001, "Wrong size on ItemIconBtn_C_SetRarity");
static_assert(offsetof(ItemIconBtn_C_SetRarity, InRarity) == 0x000000, "Member 'ItemIconBtn_C_SetRarity::InRarity' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetImagineSimpleTooltip
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_SetImagineSimpleTooltip final
{
public:
	bool                                          IsImagineSimpleTooltip;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetImagineSimpleTooltip) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetImagineSimpleTooltip");
static_assert(sizeof(ItemIconBtn_C_SetImagineSimpleTooltip) == 0x000001, "Wrong size on ItemIconBtn_C_SetImagineSimpleTooltip");
static_assert(offsetof(ItemIconBtn_C_SetImagineSimpleTooltip, IsImagineSimpleTooltip) == 0x000000, "Member 'ItemIconBtn_C_SetImagineSimpleTooltip::IsImagineSimpleTooltip' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetRightClickAccept
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_SetRightClickAccept final
{
public:
	bool                                          Param_bIsRightClickAccept;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetRightClickAccept) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetRightClickAccept");
static_assert(sizeof(ItemIconBtn_C_SetRightClickAccept) == 0x000001, "Wrong size on ItemIconBtn_C_SetRightClickAccept");
static_assert(offsetof(ItemIconBtn_C_SetRightClickAccept, Param_bIsRightClickAccept) == 0x000000, "Member 'ItemIconBtn_C_SetRightClickAccept::Param_bIsRightClickAccept' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.AnimInOutPlay
// 0x0018 (0x0018 - 0x0000)
struct ItemIconBtn_C_AnimInOutPlay final
{
public:
	bool                                          bInAnim;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BB6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_AnimInOutPlay) == 0x000008, "Wrong alignment on ItemIconBtn_C_AnimInOutPlay");
static_assert(sizeof(ItemIconBtn_C_AnimInOutPlay) == 0x000018, "Wrong size on ItemIconBtn_C_AnimInOutPlay");
static_assert(offsetof(ItemIconBtn_C_AnimInOutPlay, bInAnim) == 0x000000, "Member 'ItemIconBtn_C_AnimInOutPlay::bInAnim' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_AnimInOutPlay, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ItemIconBtn_C_AnimInOutPlay::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_AnimInOutPlay, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'ItemIconBtn_C_AnimInOutPlay::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetGrayMode
// 0x0005 (0x0005 - 0x0000)
struct ItemIconBtn_C_SetGrayMode final
{
public:
	bool                                          Param_bIsEnabled;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetGrayMode) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetGrayMode");
static_assert(sizeof(ItemIconBtn_C_SetGrayMode) == 0x000005, "Wrong size on ItemIconBtn_C_SetGrayMode");
static_assert(offsetof(ItemIconBtn_C_SetGrayMode, Param_bIsEnabled) == 0x000000, "Member 'ItemIconBtn_C_SetGrayMode::Param_bIsEnabled' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetGrayMode, Temp_bool_Variable) == 0x000001, "Member 'ItemIconBtn_C_SetGrayMode::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetGrayMode, Temp_byte_Variable) == 0x000002, "Member 'ItemIconBtn_C_SetGrayMode::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetGrayMode, Temp_byte_Variable_1) == 0x000003, "Member 'ItemIconBtn_C_SetGrayMode::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetGrayMode, K2Node_Select_Default) == 0x000004, "Member 'ItemIconBtn_C_SetGrayMode::K2Node_Select_Default' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetIcon_Imagine
// 0x0138 (0x0138 - 0x0000)
struct ItemIconBtn_C_SetIcon_Imagine final
{
public:
	bool                                          InIsLockFlagDraw;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsUseDetailsTooltip;                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLimitedTime;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInUseClassTypeForLevelSync;                       // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassTypeForLevelSync;                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BB7[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BB8[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0018(0x0118)(ConstParm)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerPresetEquipItem_ReturnValue;      // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetIcon_Imagine) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetIcon_Imagine");
static_assert(sizeof(ItemIconBtn_C_SetIcon_Imagine) == 0x000138, "Wrong size on ItemIconBtn_C_SetIcon_Imagine");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, InIsLockFlagDraw) == 0x000000, "Member 'ItemIconBtn_C_SetIcon_Imagine::InIsLockFlagDraw' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, InIsUseDetailsTooltip) == 0x000001, "Member 'ItemIconBtn_C_SetIcon_Imagine::InIsUseDetailsTooltip' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, bLimitedTime) == 0x000002, "Member 'ItemIconBtn_C_SetIcon_Imagine::bLimitedTime' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, bInUseClassTypeForLevelSync) == 0x000003, "Member 'ItemIconBtn_C_SetIcon_Imagine::bInUseClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, InClassTypeForLevelSync) == 0x000004, "Member 'ItemIconBtn_C_SetIcon_Imagine::InClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'ItemIconBtn_C_SetIcon_Imagine::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, CallFunc_GetStorage_ReturnValue) == 0x000008, "Member 'ItemIconBtn_C_SetIcon_Imagine::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, CallFunc_IsUsedItem_bUse) == 0x000010, "Member 'ItemIconBtn_C_SetIcon_Imagine::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000011, "Member 'ItemIconBtn_C_SetIcon_Imagine::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000018, "Member 'ItemIconBtn_C_SetIcon_Imagine::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, CallFunc_Not_PreBool_ReturnValue_1) == 0x000130, "Member 'ItemIconBtn_C_SetIcon_Imagine::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, CallFunc_IsPlayerPresetEquipItem_ReturnValue) == 0x000131, "Member 'ItemIconBtn_C_SetIcon_Imagine::CallFunc_IsPlayerPresetEquipItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Imagine, CallFunc_IsEquipmentItem_ReturnValue) == 0x000132, "Member 'ItemIconBtn_C_SetIcon_Imagine::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetIcon_Weapon
// 0x0208 (0x0208 - 0x0000)
struct ItemIconBtn_C_SetIcon_Weapon final
{
public:
	bool                                          InIsLockFlagDraw;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InUseWeaponTooltip;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLimitedTime;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalLimitedTime;                                  // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalWeaponParam;                                  // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalLockDraw;                                     // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BB9[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0010(0x00B0)()
	bool                                          CallFunc_IsPlayerPresetEquipItem_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BBA[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BBB[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x00D8(0x0118)(ConstParm)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BBC[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetIcon_Weapon) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetIcon_Weapon");
static_assert(sizeof(ItemIconBtn_C_SetIcon_Weapon) == 0x000208, "Wrong size on ItemIconBtn_C_SetIcon_Weapon");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, InIsLockFlagDraw) == 0x000000, "Member 'ItemIconBtn_C_SetIcon_Weapon::InIsLockFlagDraw' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, InUseWeaponTooltip) == 0x000001, "Member 'ItemIconBtn_C_SetIcon_Weapon::InUseWeaponTooltip' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, bLimitedTime) == 0x000002, "Member 'ItemIconBtn_C_SetIcon_Weapon::bLimitedTime' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, LocalLimitedTime) == 0x000003, "Member 'ItemIconBtn_C_SetIcon_Weapon::LocalLimitedTime' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, LocalWeaponParam) == 0x000004, "Member 'ItemIconBtn_C_SetIcon_Weapon::LocalWeaponParam' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, LocalLockDraw) == 0x000005, "Member 'ItemIconBtn_C_SetIcon_Weapon::LocalLockDraw' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, CallFunc_IsUsedItem_bUse) == 0x000006, "Member 'ItemIconBtn_C_SetIcon_Weapon::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, CallFunc_Not_PreBool_ReturnValue) == 0x000007, "Member 'ItemIconBtn_C_SetIcon_Weapon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, CallFunc_FindWeaponMaster_bIsValid) == 0x000008, "Member 'ItemIconBtn_C_SetIcon_Weapon::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000010, "Member 'ItemIconBtn_C_SetIcon_Weapon::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, CallFunc_IsPlayerPresetEquipItem_ReturnValue) == 0x0000C0, "Member 'ItemIconBtn_C_SetIcon_Weapon::CallFunc_IsPlayerPresetEquipItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, CallFunc_IsEquipmentItem_ReturnValue) == 0x0000C1, "Member 'ItemIconBtn_C_SetIcon_Weapon::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, CallFunc_GetStorage_ReturnValue) == 0x0000C8, "Member 'ItemIconBtn_C_SetIcon_Weapon::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0000D0, "Member 'ItemIconBtn_C_SetIcon_Weapon::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0000D8, "Member 'ItemIconBtn_C_SetIcon_Weapon::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, CallFunc_GetNetworkDataCache_IsValid) == 0x0001F0, "Member 'ItemIconBtn_C_SetIcon_Weapon::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0001F8, "Member 'ItemIconBtn_C_SetIcon_Weapon::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Weapon, CallFunc_BooleanAND_ReturnValue) == 0x000200, "Member 'ItemIconBtn_C_SetIcon_Weapon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetIcon_Item
// 0x0010 (0x0010 - 0x0000)
struct ItemIconBtn_C_SetIcon_Item final
{
public:
	bool                                          InIsLockFlagDraw;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsUnidentified;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLimitedTime;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BBD[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRegistShortcutByItem_ReturnValue;       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BBE[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetIcon_Item) == 0x000004, "Wrong alignment on ItemIconBtn_C_SetIcon_Item");
static_assert(sizeof(ItemIconBtn_C_SetIcon_Item) == 0x000010, "Wrong size on ItemIconBtn_C_SetIcon_Item");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Item, InIsLockFlagDraw) == 0x000000, "Member 'ItemIconBtn_C_SetIcon_Item::InIsLockFlagDraw' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Item, InIsUnidentified) == 0x000001, "Member 'ItemIconBtn_C_SetIcon_Item::InIsUnidentified' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Item, bLimitedTime) == 0x000002, "Member 'ItemIconBtn_C_SetIcon_Item::bLimitedTime' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Item, Temp_int_Variable) == 0x000004, "Member 'ItemIconBtn_C_SetIcon_Item::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Item, CallFunc_IsRegistShortcutByItem_ReturnValue) == 0x000008, "Member 'ItemIconBtn_C_SetIcon_Item::CallFunc_IsRegistShortcutByItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Item, Temp_bool_Variable) == 0x000009, "Member 'ItemIconBtn_C_SetIcon_Item::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Item, K2Node_Select_Default) == 0x00000C, "Member 'ItemIconBtn_C_SetIcon_Item::K2Node_Select_Default' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetIcon_Costume
// 0x02B8 (0x02B8 - 0x0000)
struct ItemIconBtn_C_SetIcon_Costume final
{
public:
	bool                                          InIsLockFlagDraw;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLimitedTime;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BBF[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       LocalCostumeMaster;                                // 0x0008(0x0088)(Edit, BlueprintVisible)
	struct FLinearColor                           LocalCostumeColor;                                 // 0x0090(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalCostumeMaterialId;                            // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BC0[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             TmpCharaPartsDB;                                   // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_1;      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_2;      // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsBody                               Temp_byte_Variable;                                // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_1;                              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_2;                              // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_3;                              // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BC1[0x1];                                     // 0x00BB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x00BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid; // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation; // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BC2[0x1];                                     // 0x00C7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x00D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BC3[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x00D8(0x0118)(ConstParm)
	bool                                          CallFunc_FindCostumeMaster_bIsValid;               // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BC4[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_FindCostumeMaster_CostumeMaster;          // 0x01F8(0x0088)()
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0281(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BC5[0x6];                                     // 0x0282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              Temp_byte_Variable_4;                              // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               K2Node_Select_Default;                             // 0x0291(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BC6[0x6];                                     // 0x0292(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaPartsData*                        CallFunc_GetPartsData_ReturnValue;                 // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetPartsMaterialColor_ReturnValue;        // 0x02A0(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetIcon_Costume) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetIcon_Costume");
static_assert(sizeof(ItemIconBtn_C_SetIcon_Costume) == 0x0002B8, "Wrong size on ItemIconBtn_C_SetIcon_Costume");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, InIsLockFlagDraw) == 0x000000, "Member 'ItemIconBtn_C_SetIcon_Costume::InIsLockFlagDraw' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, bLimitedTime) == 0x000001, "Member 'ItemIconBtn_C_SetIcon_Costume::bLimitedTime' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, LocalCostumeMaster) == 0x000008, "Member 'ItemIconBtn_C_SetIcon_Costume::LocalCostumeMaster' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, LocalCostumeColor) == 0x000090, "Member 'ItemIconBtn_C_SetIcon_Costume::LocalCostumeColor' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, LocalCostumeMaterialId) == 0x0000A0, "Member 'ItemIconBtn_C_SetIcon_Costume::LocalCostumeMaterialId' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, TmpCharaPartsDB) == 0x0000A8, "Member 'ItemIconBtn_C_SetIcon_Costume::TmpCharaPartsDB' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x0000B0, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_EqualEqual_FloatFloat_ReturnValue_1) == 0x0000B1, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_EqualEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_EqualEqual_FloatFloat_ReturnValue_2) == 0x0000B2, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_EqualEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_BooleanAND_ReturnValue) == 0x0000B3, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_BooleanAND_ReturnValue_1) == 0x0000B4, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_Not_PreBool_ReturnValue) == 0x0000B5, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_Greater_IntInt_ReturnValue) == 0x0000B6, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, Temp_byte_Variable) == 0x0000B7, "Member 'ItemIconBtn_C_SetIcon_Costume::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, Temp_byte_Variable_1) == 0x0000B8, "Member 'ItemIconBtn_C_SetIcon_Costume::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, Temp_byte_Variable_2) == 0x0000B9, "Member 'ItemIconBtn_C_SetIcon_Costume::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, Temp_byte_Variable_3) == 0x0000BA, "Member 'ItemIconBtn_C_SetIcon_Costume::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_Conv_StringToName_ReturnValue) == 0x0000BC, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid) == 0x0000C4, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation) == 0x0000C5, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, K2Node_SwitchEnum_CmpSuccess) == 0x0000C6, "Member 'ItemIconBtn_C_SetIcon_Costume::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_GetStorage_ReturnValue) == 0x0000C8, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_IsUsedItem_bUse) == 0x0000D0, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_IsValid_ReturnValue) == 0x0000D1, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000D2, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0000D3, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0000D8, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_FindCostumeMaster_bIsValid) == 0x0001F0, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_FindCostumeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_FindCostumeMaster_CostumeMaster) == 0x0001F8, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_FindCostumeMaster_CostumeMaster' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_IsEquipmentItem_ReturnValue) == 0x000280, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_GetNetworkDataCache_IsValid) == 0x000281, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000288, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, Temp_byte_Variable_4) == 0x000290, "Member 'ItemIconBtn_C_SetIcon_Costume::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, K2Node_Select_Default) == 0x000291, "Member 'ItemIconBtn_C_SetIcon_Costume::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_GetPartsData_ReturnValue) == 0x000298, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_GetPartsData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_GetPartsMaterialColor_ReturnValue) == 0x0002A0, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_GetPartsMaterialColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Costume, CallFunc_IsValid_ReturnValue_1) == 0x0002B0, "Member 'ItemIconBtn_C_SetIcon_Costume::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetIcon_MountImagine
// 0x0130 (0x0130 - 0x0000)
struct ItemIconBtn_C_SetIcon_MountImagine final
{
public:
	bool                                          InIsLockFlagDraw;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLimitedTime;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsPlayerPresetEquipItem_ReturnValue;      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BC7[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BC8[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0018(0x0118)(ConstParm)
};
static_assert(alignof(ItemIconBtn_C_SetIcon_MountImagine) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetIcon_MountImagine");
static_assert(sizeof(ItemIconBtn_C_SetIcon_MountImagine) == 0x000130, "Wrong size on ItemIconBtn_C_SetIcon_MountImagine");
static_assert(offsetof(ItemIconBtn_C_SetIcon_MountImagine, InIsLockFlagDraw) == 0x000000, "Member 'ItemIconBtn_C_SetIcon_MountImagine::InIsLockFlagDraw' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_MountImagine, bLimitedTime) == 0x000001, "Member 'ItemIconBtn_C_SetIcon_MountImagine::bLimitedTime' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_MountImagine, CallFunc_IsUsedItem_bUse) == 0x000002, "Member 'ItemIconBtn_C_SetIcon_MountImagine::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_MountImagine, CallFunc_IsPlayerPresetEquipItem_ReturnValue) == 0x000003, "Member 'ItemIconBtn_C_SetIcon_MountImagine::CallFunc_IsPlayerPresetEquipItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_MountImagine, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'ItemIconBtn_C_SetIcon_MountImagine::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_MountImagine, CallFunc_IsEquipmentItem_ReturnValue) == 0x000005, "Member 'ItemIconBtn_C_SetIcon_MountImagine::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_MountImagine, CallFunc_GetStorage_ReturnValue) == 0x000008, "Member 'ItemIconBtn_C_SetIcon_MountImagine::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_MountImagine, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000010, "Member 'ItemIconBtn_C_SetIcon_MountImagine::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_MountImagine, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000018, "Member 'ItemIconBtn_C_SetIcon_MountImagine::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetIcon_Ornament
// 0x0003 (0x0003 - 0x0000)
struct ItemIconBtn_C_SetIcon_Ornament final
{
public:
	bool                                          InIsLockFlagDraw;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsUnidentified;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLimitedTime;                                      // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetIcon_Ornament) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetIcon_Ornament");
static_assert(sizeof(ItemIconBtn_C_SetIcon_Ornament) == 0x000003, "Wrong size on ItemIconBtn_C_SetIcon_Ornament");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Ornament, InIsLockFlagDraw) == 0x000000, "Member 'ItemIconBtn_C_SetIcon_Ornament::InIsLockFlagDraw' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Ornament, InIsUnidentified) == 0x000001, "Member 'ItemIconBtn_C_SetIcon_Ornament::InIsUnidentified' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIcon_Ornament, bLimitedTime) == 0x000002, "Member 'ItemIconBtn_C_SetIcon_Ornament::bLimitedTime' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.IsItemLockIconDraw
// 0x0078 (0x0078 - 0x0000)
struct ItemIconBtn_C_IsItemLockIconDraw final
{
public:
	struct FInventoryItemData                     InInventoryItemData;                               // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          HiddenLockIcon;                                    // 0x0060(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OutLockFlag;                                       // 0x0061(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalLockFlag;                                     // 0x0062(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BC9[0x5];                                     // 0x0063(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_IsItemLockIconDraw) == 0x000008, "Wrong alignment on ItemIconBtn_C_IsItemLockIconDraw");
static_assert(sizeof(ItemIconBtn_C_IsItemLockIconDraw) == 0x000078, "Wrong size on ItemIconBtn_C_IsItemLockIconDraw");
static_assert(offsetof(ItemIconBtn_C_IsItemLockIconDraw, InInventoryItemData) == 0x000000, "Member 'ItemIconBtn_C_IsItemLockIconDraw::InInventoryItemData' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_IsItemLockIconDraw, HiddenLockIcon) == 0x000060, "Member 'ItemIconBtn_C_IsItemLockIconDraw::HiddenLockIcon' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_IsItemLockIconDraw, OutLockFlag) == 0x000061, "Member 'ItemIconBtn_C_IsItemLockIconDraw::OutLockFlag' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_IsItemLockIconDraw, LocalLockFlag) == 0x000062, "Member 'ItemIconBtn_C_IsItemLockIconDraw::LocalLockFlag' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_IsItemLockIconDraw, CallFunc_GetStorage_ReturnValue) == 0x000068, "Member 'ItemIconBtn_C_IsItemLockIconDraw::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_IsItemLockIconDraw, CallFunc_IsItemLock_ReturnValue) == 0x000070, "Member 'ItemIconBtn_C_IsItemLockIconDraw::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetMImagineRarity
// 0x0010 (0x0010 - 0x0000)
struct ItemIconBtn_C_SetMImagineRarity final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetMImagineRarity) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetMImagineRarity");
static_assert(sizeof(ItemIconBtn_C_SetMImagineRarity) == 0x000010, "Wrong size on ItemIconBtn_C_SetMImagineRarity");
static_assert(offsetof(ItemIconBtn_C_SetMImagineRarity, InUniqueId) == 0x000000, "Member 'ItemIconBtn_C_SetMImagineRarity::InUniqueId' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.GetInventoryMountImagine
// 0x0190 (0x0190 - 0x0000)
struct ItemIconBtn_C_GetInventoryMountImagine final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBCharacterMountImagineData           OutParameter;                                      // 0x0010(0x0028)(Parm, OutParm)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BCA[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BCB[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BCC[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_GetItem_ReturnValue;                   // 0x0070(0x0118)(ConstParm)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x018C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_GetInventoryMountImagine) == 0x000008, "Wrong alignment on ItemIconBtn_C_GetInventoryMountImagine");
static_assert(sizeof(ItemIconBtn_C_GetInventoryMountImagine) == 0x000190, "Wrong size on ItemIconBtn_C_GetInventoryMountImagine");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, InUniqueId) == 0x000000, "Member 'ItemIconBtn_C_GetInventoryMountImagine::InUniqueId' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, OutParameter) == 0x000010, "Member 'ItemIconBtn_C_GetInventoryMountImagine::OutParameter' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, Temp_int_Variable) == 0x000038, "Member 'ItemIconBtn_C_GetInventoryMountImagine::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, Temp_int_Variable_1) == 0x00003C, "Member 'ItemIconBtn_C_GetInventoryMountImagine::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000040, "Member 'ItemIconBtn_C_GetInventoryMountImagine::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'ItemIconBtn_C_GetInventoryMountImagine::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, CallFunc_GetNetworkDataCache_IsValid) == 0x000048, "Member 'ItemIconBtn_C_GetInventoryMountImagine::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000050, "Member 'ItemIconBtn_C_GetInventoryMountImagine::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, CallFunc_GetOwnItemList_ReturnValue) == 0x000058, "Member 'ItemIconBtn_C_GetInventoryMountImagine::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, CallFunc_GetEquipmentBag_ReturnValue) == 0x000060, "Member 'ItemIconBtn_C_GetInventoryMountImagine::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, CallFunc_GetUseBlockNum_ReturnValue) == 0x000068, "Member 'ItemIconBtn_C_GetInventoryMountImagine::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, CallFunc_BP_GetItem_ReturnValue) == 0x000070, "Member 'ItemIconBtn_C_GetInventoryMountImagine::CallFunc_BP_GetItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, CallFunc_Subtract_IntInt_ReturnValue) == 0x000188, "Member 'ItemIconBtn_C_GetInventoryMountImagine::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetInventoryMountImagine, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00018C, "Member 'ItemIconBtn_C_GetInventoryMountImagine::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.GetSelectItemUniqueID
// 0x0010 (0x0010 - 0x0000)
struct ItemIconBtn_C_GetSelectItemUniqueID final
{
public:
	class FString                                 UniqueId;                                          // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_GetSelectItemUniqueID) == 0x000008, "Wrong alignment on ItemIconBtn_C_GetSelectItemUniqueID");
static_assert(sizeof(ItemIconBtn_C_GetSelectItemUniqueID) == 0x000010, "Wrong size on ItemIconBtn_C_GetSelectItemUniqueID");
static_assert(offsetof(ItemIconBtn_C_GetSelectItemUniqueID, UniqueId) == 0x000000, "Member 'ItemIconBtn_C_GetSelectItemUniqueID::UniqueId' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetSelectItemUniqueID
// 0x0078 (0x0078 - 0x0000)
struct ItemIconBtn_C_SetSelectItemUniqueID final
{
public:
	class FString                                 Inventory_Item_Data_Unique_Id;                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	EItemType                                     Inventory_Item_Data_Item_Type;                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BCD[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     K2Node_MakeStruct_InventoryItemData;               // 0x0018(0x0060)(HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetSelectItemUniqueID) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetSelectItemUniqueID");
static_assert(sizeof(ItemIconBtn_C_SetSelectItemUniqueID) == 0x000078, "Wrong size on ItemIconBtn_C_SetSelectItemUniqueID");
static_assert(offsetof(ItemIconBtn_C_SetSelectItemUniqueID, Inventory_Item_Data_Unique_Id) == 0x000000, "Member 'ItemIconBtn_C_SetSelectItemUniqueID::Inventory_Item_Data_Unique_Id' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetSelectItemUniqueID, Inventory_Item_Data_Item_Type) == 0x000010, "Member 'ItemIconBtn_C_SetSelectItemUniqueID::Inventory_Item_Data_Item_Type' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetSelectItemUniqueID, K2Node_MakeStruct_InventoryItemData) == 0x000018, "Member 'ItemIconBtn_C_SetSelectItemUniqueID::K2Node_MakeStruct_InventoryItemData' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.Set Costume Index
// 0x0004 (0x0004 - 0x0000)
struct ItemIconBtn_C_Set_Costume_Index final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_Set_Costume_Index) == 0x000004, "Wrong alignment on ItemIconBtn_C_Set_Costume_Index");
static_assert(sizeof(ItemIconBtn_C_Set_Costume_Index) == 0x000004, "Wrong size on ItemIconBtn_C_Set_Costume_Index");
static_assert(offsetof(ItemIconBtn_C_Set_Costume_Index, Param_Index) == 0x000000, "Member 'ItemIconBtn_C_Set_Costume_Index::Param_Index' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.Set Select Num
// 0x0028 (0x0028 - 0x0000)
struct ItemIconBtn_C_Set_Select_Num final
{
public:
	int32                                         NuM;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BCE[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_Set_Select_Num) == 0x000008, "Wrong alignment on ItemIconBtn_C_Set_Select_Num");
static_assert(sizeof(ItemIconBtn_C_Set_Select_Num) == 0x000028, "Wrong size on ItemIconBtn_C_Set_Select_Num");
static_assert(offsetof(ItemIconBtn_C_Set_Select_Num, NuM) == 0x000000, "Member 'ItemIconBtn_C_Set_Select_Num::NuM' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Select_Num, Visible) == 0x000004, "Member 'ItemIconBtn_C_Set_Select_Num::Visible' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Select_Num, Temp_bool_Variable) == 0x000005, "Member 'ItemIconBtn_C_Set_Select_Num::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Select_Num, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'ItemIconBtn_C_Set_Select_Num::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Select_Num, Temp_byte_Variable) == 0x000020, "Member 'ItemIconBtn_C_Set_Select_Num::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Select_Num, Temp_byte_Variable_1) == 0x000021, "Member 'ItemIconBtn_C_Set_Select_Num::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Select_Num, K2Node_Select_Default) == 0x000022, "Member 'ItemIconBtn_C_Set_Select_Num::K2Node_Select_Default' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetLimitedTimeIconVisibility
// 0x04A8 (0x04A8 - 0x0000)
struct ItemIconBtn_C_SetLimitedTimeIconVisibility final
{
public:
	struct FInventoryItemData                     InInventoryItemData;                               // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0060(0x0118)(Edit, BlueprintVisible)
	int32                                         LocalStorageNo;                                    // 0x0178(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsVisible;                                    // 0x017C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x017D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x017E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x017F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0183(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BCF[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0188(0x00D0)()
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0262(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0263(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BD0[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0268(0x0118)(ConstParm)
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BD1[0x6];                                     // 0x038A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0390(0x0118)(ConstParm)
};
static_assert(alignof(ItemIconBtn_C_SetLimitedTimeIconVisibility) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetLimitedTimeIconVisibility");
static_assert(sizeof(ItemIconBtn_C_SetLimitedTimeIconVisibility) == 0x0004A8, "Wrong size on ItemIconBtn_C_SetLimitedTimeIconVisibility");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, InInventoryItemData) == 0x000000, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::InInventoryItemData' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, LocalOwnItemInfo) == 0x000060, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, LocalStorageNo) == 0x000178, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::LocalStorageNo' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, LocalIsVisible) == 0x00017C, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::LocalIsVisible' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x00017D, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00017E, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00017F, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000180, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_BooleanAND_ReturnValue_1) == 0x000181, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, K2Node_SwitchEnum_CmpSuccess) == 0x000182, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_FindItemMaster_bIsValid) == 0x000183, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_FindItemMaster_ItemMaster) == 0x000188, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_GetEquipmentBag_ReturnValue) == 0x000258, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_IsValid_ReturnValue) == 0x000260, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_IsEmpty_ReturnValue) == 0x000261, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000262, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000263, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000268, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_GetStorage_ReturnValue) == 0x000380, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_IsValid_ReturnValue_1) == 0x000388, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000389, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetLimitedTimeIconVisibility, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000390, "Member 'ItemIconBtn_C_SetLimitedTimeIconVisibility::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetWeaponDetail_Index
// 0x0018 (0x0018 - 0x0000)
struct ItemIconBtn_C_SetWeaponDetail_Index final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BD2[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InItemUniqueId;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetWeaponDetail_Index) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetWeaponDetail_Index");
static_assert(sizeof(ItemIconBtn_C_SetWeaponDetail_Index) == 0x000018, "Wrong size on ItemIconBtn_C_SetWeaponDetail_Index");
static_assert(offsetof(ItemIconBtn_C_SetWeaponDetail_Index, InItemIndex) == 0x000000, "Member 'ItemIconBtn_C_SetWeaponDetail_Index::InItemIndex' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetWeaponDetail_Index, InItemUniqueId) == 0x000008, "Member 'ItemIconBtn_C_SetWeaponDetail_Index::InItemUniqueId' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetImagineDetail_Index
// 0x0018 (0x0018 - 0x0000)
struct ItemIconBtn_C_SetImagineDetail_Index final
{
public:
	int32                                         InputPin;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BD3[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UniqueId;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetImagineDetail_Index) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetImagineDetail_Index");
static_assert(sizeof(ItemIconBtn_C_SetImagineDetail_Index) == 0x000018, "Wrong size on ItemIconBtn_C_SetImagineDetail_Index");
static_assert(offsetof(ItemIconBtn_C_SetImagineDetail_Index, InputPin) == 0x000000, "Member 'ItemIconBtn_C_SetImagineDetail_Index::InputPin' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetImagineDetail_Index, UniqueId) == 0x000008, "Member 'ItemIconBtn_C_SetImagineDetail_Index::UniqueId' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetIconWeapon
// 0x0020 (0x0020 - 0x0000)
struct ItemIconBtn_C_SetIconWeapon final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDetailsMode;                                     // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BD4[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InItemUniqueId;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageNumber;                                   // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetIconWeapon) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetIconWeapon");
static_assert(sizeof(ItemIconBtn_C_SetIconWeapon) == 0x000020, "Wrong size on ItemIconBtn_C_SetIconWeapon");
static_assert(offsetof(ItemIconBtn_C_SetIconWeapon, InItemIndex) == 0x000000, "Member 'ItemIconBtn_C_SetIconWeapon::InItemIndex' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIconWeapon, IsDetailsMode) == 0x000004, "Member 'ItemIconBtn_C_SetIconWeapon::IsDetailsMode' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIconWeapon, InItemUniqueId) == 0x000008, "Member 'ItemIconBtn_C_SetIconWeapon::InItemUniqueId' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetIconWeapon, InStorageNumber) == 0x000018, "Member 'ItemIconBtn_C_SetIconWeapon::InStorageNumber' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.GetCommonIcon
// 0x0018 (0x0018 - 0x0000)
struct ItemIconBtn_C_GetCommonIcon final
{
public:
	bool                                          IsValid;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BD5[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIcon_C*                          OutCommonIcon;                                     // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_GetCommonIcon) == 0x000008, "Wrong alignment on ItemIconBtn_C_GetCommonIcon");
static_assert(sizeof(ItemIconBtn_C_GetCommonIcon) == 0x000018, "Wrong size on ItemIconBtn_C_GetCommonIcon");
static_assert(offsetof(ItemIconBtn_C_GetCommonIcon, IsValid) == 0x000000, "Member 'ItemIconBtn_C_GetCommonIcon::IsValid' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetCommonIcon, OutCommonIcon) == 0x000008, "Member 'ItemIconBtn_C_GetCommonIcon::OutCommonIcon' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_GetCommonIcon, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'ItemIconBtn_C_GetCommonIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetImagineDetailData
// 0x0068 (0x0068 - 0x0000)
struct ItemIconBtn_C_SetImagineDetailData final
{
public:
	struct FInventoryItemData                     InItemData;                                        // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          InUseDetailedTooltip;                              // 0x0060(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InHiddenLockIcon;                                  // 0x0061(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InHiddenAmout;                                     // 0x0062(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsUnidentified;                                  // 0x0063(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InLimitedTime;                                     // 0x0064(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InStackBEffectiveDisplay;                          // 0x0065(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInUseClassTypeForLevelSync;                       // 0x0066(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassTypeForLevelSync;                           // 0x0067(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetImagineDetailData) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetImagineDetailData");
static_assert(sizeof(ItemIconBtn_C_SetImagineDetailData) == 0x000068, "Wrong size on ItemIconBtn_C_SetImagineDetailData");
static_assert(offsetof(ItemIconBtn_C_SetImagineDetailData, InItemData) == 0x000000, "Member 'ItemIconBtn_C_SetImagineDetailData::InItemData' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetImagineDetailData, InUseDetailedTooltip) == 0x000060, "Member 'ItemIconBtn_C_SetImagineDetailData::InUseDetailedTooltip' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetImagineDetailData, InHiddenLockIcon) == 0x000061, "Member 'ItemIconBtn_C_SetImagineDetailData::InHiddenLockIcon' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetImagineDetailData, InHiddenAmout) == 0x000062, "Member 'ItemIconBtn_C_SetImagineDetailData::InHiddenAmout' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetImagineDetailData, InIsUnidentified) == 0x000063, "Member 'ItemIconBtn_C_SetImagineDetailData::InIsUnidentified' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetImagineDetailData, InLimitedTime) == 0x000064, "Member 'ItemIconBtn_C_SetImagineDetailData::InLimitedTime' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetImagineDetailData, InStackBEffectiveDisplay) == 0x000065, "Member 'ItemIconBtn_C_SetImagineDetailData::InStackBEffectiveDisplay' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetImagineDetailData, bInUseClassTypeForLevelSync) == 0x000066, "Member 'ItemIconBtn_C_SetImagineDetailData::bInUseClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetImagineDetailData, InClassTypeForLevelSync) == 0x000067, "Member 'ItemIconBtn_C_SetImagineDetailData::InClassTypeForLevelSync' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetNewBadgeVisibleByReaded
// 0x0018 (0x0018 - 0x0000)
struct ItemIconBtn_C_SetNewBadgeVisibleByReaded final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BD6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UniqueId;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetNewBadgeVisibleByReaded) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetNewBadgeVisibleByReaded");
static_assert(sizeof(ItemIconBtn_C_SetNewBadgeVisibleByReaded) == 0x000018, "Wrong size on ItemIconBtn_C_SetNewBadgeVisibleByReaded");
static_assert(offsetof(ItemIconBtn_C_SetNewBadgeVisibleByReaded, Enable) == 0x000000, "Member 'ItemIconBtn_C_SetNewBadgeVisibleByReaded::Enable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetNewBadgeVisibleByReaded, UniqueId) == 0x000008, "Member 'ItemIconBtn_C_SetNewBadgeVisibleByReaded::UniqueId' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetSetLockIconVisibility
// 0x0028 (0x0028 - 0x0000)
struct ItemIconBtn_C_SetSetLockIconVisibility final
{
public:
	class FString                                 InUniqueId;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageNumber;                                   // 0x0010(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BD7[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetSetLockIconVisibility) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetSetLockIconVisibility");
static_assert(sizeof(ItemIconBtn_C_SetSetLockIconVisibility) == 0x000028, "Wrong size on ItemIconBtn_C_SetSetLockIconVisibility");
static_assert(offsetof(ItemIconBtn_C_SetSetLockIconVisibility, InUniqueId) == 0x000000, "Member 'ItemIconBtn_C_SetSetLockIconVisibility::InUniqueId' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetSetLockIconVisibility, InStorageNumber) == 0x000010, "Member 'ItemIconBtn_C_SetSetLockIconVisibility::InStorageNumber' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetSetLockIconVisibility, CallFunc_GetStorage_ReturnValue) == 0x000018, "Member 'ItemIconBtn_C_SetSetLockIconVisibility::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetSetLockIconVisibility, CallFunc_IsItemLock_ReturnValue) == 0x000020, "Member 'ItemIconBtn_C_SetSetLockIconVisibility::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.Set Swap Scroll Visible
// 0x0002 (0x0002 - 0x0000)
struct ItemIconBtn_C_Set_Swap_Scroll_Visible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_Set_Swap_Scroll_Visible) == 0x000001, "Wrong alignment on ItemIconBtn_C_Set_Swap_Scroll_Visible");
static_assert(sizeof(ItemIconBtn_C_Set_Swap_Scroll_Visible) == 0x000002, "Wrong size on ItemIconBtn_C_Set_Swap_Scroll_Visible");
static_assert(offsetof(ItemIconBtn_C_Set_Swap_Scroll_Visible, Visible) == 0x000000, "Member 'ItemIconBtn_C_Set_Swap_Scroll_Visible::Visible' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Swap_Scroll_Visible, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'ItemIconBtn_C_Set_Swap_Scroll_Visible::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.Set Scroll Visible
// 0x0018 (0x0018 - 0x0000)
struct ItemIconBtn_C_Set_Scroll_Visible final
{
public:
	float                                         Offset;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LocalPos;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalVisible;                                      // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BD8[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_Set_Scroll_Visible) == 0x000004, "Wrong alignment on ItemIconBtn_C_Set_Scroll_Visible");
static_assert(sizeof(ItemIconBtn_C_Set_Scroll_Visible) == 0x000018, "Wrong size on ItemIconBtn_C_Set_Scroll_Visible");
static_assert(offsetof(ItemIconBtn_C_Set_Scroll_Visible, Offset) == 0x000000, "Member 'ItemIconBtn_C_Set_Scroll_Visible::Offset' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Scroll_Visible, LocalPos) == 0x000004, "Member 'ItemIconBtn_C_Set_Scroll_Visible::LocalPos' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Scroll_Visible, LocalVisible) == 0x000008, "Member 'ItemIconBtn_C_Set_Scroll_Visible::LocalVisible' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Scroll_Visible, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000009, "Member 'ItemIconBtn_C_Set_Scroll_Visible::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Scroll_Visible, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x00000C, "Member 'ItemIconBtn_C_Set_Scroll_Visible::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Scroll_Visible, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000010, "Member 'ItemIconBtn_C_Set_Scroll_Visible::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Scroll_Visible, CallFunc_Less_FloatFloat_ReturnValue) == 0x000014, "Member 'ItemIconBtn_C_Set_Scroll_Visible::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetScrollParameter
// 0x0018 (0x0018 - 0x0000)
struct ItemIconBtn_C_SetScrollParameter final
{
public:
	float                                         Param_BaseSize;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Param_OverSize;                                    // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              K2Node_DynamicCast_AsGrid_Slot;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9BD9[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemIconBtn_C_SetScrollParameter) == 0x000008, "Wrong alignment on ItemIconBtn_C_SetScrollParameter");
static_assert(sizeof(ItemIconBtn_C_SetScrollParameter) == 0x000018, "Wrong size on ItemIconBtn_C_SetScrollParameter");
static_assert(offsetof(ItemIconBtn_C_SetScrollParameter, Param_BaseSize) == 0x000000, "Member 'ItemIconBtn_C_SetScrollParameter::Param_BaseSize' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetScrollParameter, Param_OverSize) == 0x000004, "Member 'ItemIconBtn_C_SetScrollParameter::Param_OverSize' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetScrollParameter, K2Node_DynamicCast_AsGrid_Slot) == 0x000008, "Member 'ItemIconBtn_C_SetScrollParameter::K2Node_DynamicCast_AsGrid_Slot' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetScrollParameter, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'ItemIconBtn_C_SetScrollParameter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetScrollParameter, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000014, "Member 'ItemIconBtn_C_SetScrollParameter::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.Set Icon Grp Visible
// 0x0009 (0x0009 - 0x0000)
struct ItemIconBtn_C_Set_Icon_Grp_Visible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_1;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_Set_Icon_Grp_Visible) == 0x000001, "Wrong alignment on ItemIconBtn_C_Set_Icon_Grp_Visible");
static_assert(sizeof(ItemIconBtn_C_Set_Icon_Grp_Visible) == 0x000009, "Wrong size on ItemIconBtn_C_Set_Icon_Grp_Visible");
static_assert(offsetof(ItemIconBtn_C_Set_Icon_Grp_Visible, Visible) == 0x000000, "Member 'ItemIconBtn_C_Set_Icon_Grp_Visible::Visible' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Icon_Grp_Visible, Temp_bool_Variable) == 0x000001, "Member 'ItemIconBtn_C_Set_Icon_Grp_Visible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Icon_Grp_Visible, CallFunc_MakeLiteralByte_ReturnValue) == 0x000002, "Member 'ItemIconBtn_C_Set_Icon_Grp_Visible::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Icon_Grp_Visible, CallFunc_GetVisibility_ReturnValue) == 0x000003, "Member 'ItemIconBtn_C_Set_Icon_Grp_Visible::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Icon_Grp_Visible, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000004, "Member 'ItemIconBtn_C_Set_Icon_Grp_Visible::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Icon_Grp_Visible, CallFunc_GetVisibility_ReturnValue_1) == 0x000005, "Member 'ItemIconBtn_C_Set_Icon_Grp_Visible::CallFunc_GetVisibility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Icon_Grp_Visible, K2Node_Select_Default) == 0x000006, "Member 'ItemIconBtn_C_Set_Icon_Grp_Visible::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Icon_Grp_Visible, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000007, "Member 'ItemIconBtn_C_Set_Icon_Grp_Visible::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_Set_Icon_Grp_Visible, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000008, "Member 'ItemIconBtn_C_Set_Icon_Grp_Visible::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetRewardData
// 0x0010 (0x0010 - 0x0000)
struct ItemIconBtn_C_SetRewardData final
{
public:
	ESBRewardItemType                             InRewardType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9BDA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InId;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLimitedTime;                                      // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetRewardData) == 0x000004, "Wrong alignment on ItemIconBtn_C_SetRewardData");
static_assert(sizeof(ItemIconBtn_C_SetRewardData) == 0x000010, "Wrong size on ItemIconBtn_C_SetRewardData");
static_assert(offsetof(ItemIconBtn_C_SetRewardData, InRewardType) == 0x000000, "Member 'ItemIconBtn_C_SetRewardData::InRewardType' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetRewardData, InId) == 0x000004, "Member 'ItemIconBtn_C_SetRewardData::InId' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetRewardData, InAmount) == 0x000008, "Member 'ItemIconBtn_C_SetRewardData::InAmount' has a wrong offset!");
static_assert(offsetof(ItemIconBtn_C_SetRewardData, bLimitedTime) == 0x00000C, "Member 'ItemIconBtn_C_SetRewardData::bLimitedTime' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetAmount2Visibility
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_SetAmount2Visibility final
{
public:
	bool                                          Param_Visibility;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetAmount2Visibility) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetAmount2Visibility");
static_assert(sizeof(ItemIconBtn_C_SetAmount2Visibility) == 0x000001, "Wrong size on ItemIconBtn_C_SetAmount2Visibility");
static_assert(offsetof(ItemIconBtn_C_SetAmount2Visibility, Param_Visibility) == 0x000000, "Member 'ItemIconBtn_C_SetAmount2Visibility::Param_Visibility' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetAmountVisibility
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_SetAmountVisibility final
{
public:
	bool                                          Param_Visibility;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetAmountVisibility) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetAmountVisibility");
static_assert(sizeof(ItemIconBtn_C_SetAmountVisibility) == 0x000001, "Wrong size on ItemIconBtn_C_SetAmountVisibility");
static_assert(offsetof(ItemIconBtn_C_SetAmountVisibility, Param_Visibility) == 0x000000, "Member 'ItemIconBtn_C_SetAmountVisibility::Param_Visibility' has a wrong offset!");

// Function ItemIconBtn.ItemIconBtn_C.SetPickup
// 0x0001 (0x0001 - 0x0000)
struct ItemIconBtn_C_SetPickup final
{
public:
	bool                                          bValue;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemIconBtn_C_SetPickup) == 0x000001, "Wrong alignment on ItemIconBtn_C_SetPickup");
static_assert(sizeof(ItemIconBtn_C_SetPickup) == 0x000001, "Wrong size on ItemIconBtn_C_SetPickup");
static_assert(offsetof(ItemIconBtn_C_SetPickup, bValue) == 0x000000, "Member 'ItemIconBtn_C_SetPickup::bValue' has a wrong offset!");

}

