#pragma once

 

// Package: WBP_ItemBoxIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "ST_ToolTipInfo_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemBoxIcon_C_OnClick__DelegateSignature final
{
public:
	class UWBP_ItemBoxIcon_C*                     Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxIcon_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ItemBoxIcon_C_OnClick__DelegateSignature");
static_assert(sizeof(WBP_ItemBoxIcon_C_OnClick__DelegateSignature) == 0x000008, "Wrong size on WBP_ItemBoxIcon_C_OnClick__DelegateSignature");
static_assert(offsetof(WBP_ItemBoxIcon_C_OnClick__DelegateSignature, Button) == 0x000000, "Member 'WBP_ItemBoxIcon_C_OnClick__DelegateSignature::Button' has a wrong offset!");

// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.ExecuteUbergraph_WBP_ItemBoxIcon
// 0x0004 (0x0004 - 0x0000)
struct WBP_ItemBoxIcon_C_ExecuteUbergraph_WBP_ItemBoxIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxIcon_C_ExecuteUbergraph_WBP_ItemBoxIcon) == 0x000004, "Wrong alignment on WBP_ItemBoxIcon_C_ExecuteUbergraph_WBP_ItemBoxIcon");
static_assert(sizeof(WBP_ItemBoxIcon_C_ExecuteUbergraph_WBP_ItemBoxIcon) == 0x000004, "Wrong size on WBP_ItemBoxIcon_C_ExecuteUbergraph_WBP_ItemBoxIcon");
static_assert(offsetof(WBP_ItemBoxIcon_C_ExecuteUbergraph_WBP_ItemBoxIcon, EntryPoint) == 0x000000, "Member 'WBP_ItemBoxIcon_C_ExecuteUbergraph_WBP_ItemBoxIcon::EntryPoint' has a wrong offset!");

// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItem
// 0x0008 (0x0008 - 0x0000)
struct WBP_ItemBoxIcon_C_SetItem final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Type;                                              // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUnidentified;                                    // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxIcon_C_SetItem) == 0x000004, "Wrong alignment on WBP_ItemBoxIcon_C_SetItem");
static_assert(sizeof(WBP_ItemBoxIcon_C_SetItem) == 0x000008, "Wrong size on WBP_ItemBoxIcon_C_SetItem");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItem, Param_Index) == 0x000000, "Member 'WBP_ItemBoxIcon_C_SetItem::Param_Index' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItem, Type) == 0x000004, "Member 'WBP_ItemBoxIcon_C_SetItem::Type' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItem, IsUnidentified) == 0x000005, "Member 'WBP_ItemBoxIcon_C_SetItem::IsUnidentified' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000006, "Member 'WBP_ItemBoxIcon_C_SetItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Icon Selected
// 0x07C8 (0x07C8 - 0x0000)
struct WBP_ItemBoxIcon_C_Set_Icon_Selected final
{
public:
	bool                                          Param_IsSelected;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7742[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0030(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x00B8(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0140(0x0088)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_3;                    // 0x01C8(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0250(0x0278)()
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_4;                    // 0x04C8(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0550(0x0278)()
};
static_assert(alignof(WBP_ItemBoxIcon_C_Set_Icon_Selected) == 0x000008, "Wrong alignment on WBP_ItemBoxIcon_C_Set_Icon_Selected");
static_assert(sizeof(WBP_ItemBoxIcon_C_Set_Icon_Selected) == 0x0007C8, "Wrong size on WBP_ItemBoxIcon_C_Set_Icon_Selected");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Icon_Selected, Param_IsSelected) == 0x000000, "Member 'WBP_ItemBoxIcon_C_Set_Icon_Selected::Param_IsSelected' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Icon_Selected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'WBP_ItemBoxIcon_C_Set_Icon_Selected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Icon_Selected, K2Node_MakeStruct_SlateBrush) == 0x000030, "Member 'WBP_ItemBoxIcon_C_Set_Icon_Selected::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Icon_Selected, K2Node_MakeStruct_SlateBrush_1) == 0x0000B8, "Member 'WBP_ItemBoxIcon_C_Set_Icon_Selected::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Icon_Selected, K2Node_MakeStruct_SlateBrush_2) == 0x000140, "Member 'WBP_ItemBoxIcon_C_Set_Icon_Selected::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Icon_Selected, K2Node_MakeStruct_SlateBrush_3) == 0x0001C8, "Member 'WBP_ItemBoxIcon_C_Set_Icon_Selected::K2Node_MakeStruct_SlateBrush_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Icon_Selected, K2Node_MakeStruct_ButtonStyle) == 0x000250, "Member 'WBP_ItemBoxIcon_C_Set_Icon_Selected::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Icon_Selected, K2Node_MakeStruct_SlateBrush_4) == 0x0004C8, "Member 'WBP_ItemBoxIcon_C_Set_Icon_Selected::K2Node_MakeStruct_SlateBrush_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Icon_Selected, K2Node_MakeStruct_ButtonStyle_1) == 0x000550, "Member 'WBP_ItemBoxIcon_C_Set_Icon_Selected::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.IsSelected
// 0x0001 (0x0001 - 0x0000)
struct WBP_ItemBoxIcon_C_IsSelected final
{
public:
	bool                                          Param_bSelected;                                   // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_ItemBoxIcon_C_IsSelected) == 0x000001, "Wrong alignment on WBP_ItemBoxIcon_C_IsSelected");
static_assert(sizeof(WBP_ItemBoxIcon_C_IsSelected) == 0x000001, "Wrong size on WBP_ItemBoxIcon_C_IsSelected");
static_assert(offsetof(WBP_ItemBoxIcon_C_IsSelected, Param_bSelected) == 0x000000, "Member 'WBP_ItemBoxIcon_C_IsSelected::Param_bSelected' has a wrong offset!");

// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Select Num
// 0x0028 (0x0028 - 0x0000)
struct WBP_ItemBoxIcon_C_Set_Select_Num final
{
public:
	int32                                         NuM;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7743[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxIcon_C_Set_Select_Num) == 0x000008, "Wrong alignment on WBP_ItemBoxIcon_C_Set_Select_Num");
static_assert(sizeof(WBP_ItemBoxIcon_C_Set_Select_Num) == 0x000028, "Wrong size on WBP_ItemBoxIcon_C_Set_Select_Num");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Select_Num, NuM) == 0x000000, "Member 'WBP_ItemBoxIcon_C_Set_Select_Num::NuM' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Select_Num, Visible) == 0x000004, "Member 'WBP_ItemBoxIcon_C_Set_Select_Num::Visible' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Select_Num, Temp_bool_Variable) == 0x000005, "Member 'WBP_ItemBoxIcon_C_Set_Select_Num::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Select_Num, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_ItemBoxIcon_C_Set_Select_Num::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Select_Num, Temp_byte_Variable) == 0x000020, "Member 'WBP_ItemBoxIcon_C_Set_Select_Num::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Select_Num, Temp_byte_Variable_1) == 0x000021, "Member 'WBP_ItemBoxIcon_C_Set_Select_Num::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Select_Num, K2Node_Select_Default) == 0x000022, "Member 'WBP_ItemBoxIcon_C_Set_Select_Num::K2Node_Select_Default' has a wrong offset!");

// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.Set Reward Item
// 0x0001 (0x0001 - 0x0000)
struct WBP_ItemBoxIcon_C_Set_Reward_Item final
{
public:
	ESBRewardItemType                             Param_RewardItemType;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxIcon_C_Set_Reward_Item) == 0x000001, "Wrong alignment on WBP_ItemBoxIcon_C_Set_Reward_Item");
static_assert(sizeof(WBP_ItemBoxIcon_C_Set_Reward_Item) == 0x000001, "Wrong size on WBP_ItemBoxIcon_C_Set_Reward_Item");
static_assert(offsetof(WBP_ItemBoxIcon_C_Set_Reward_Item, Param_RewardItemType) == 0x000000, "Member 'WBP_ItemBoxIcon_C_Set_Reward_Item::Param_RewardItemType' has a wrong offset!");

// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItemBox
// 0x01C0 (0x01C0 - 0x0000)
struct WBP_ItemBoxIcon_C_SetItemBox final
{
public:
	struct FSBItemBoxContentParam                 SBItemBoxContentParam;                             // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7744[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Acquisitions_Num_Text_Result;         // 0x0028(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7745[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x0048(0x0078)(HasGetValueTypeHash)
	EItemType                                     CallFunc_RewardItemTypeToItemType_ItemType;        // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7746[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo_1;                // 0x00C8(0x0078)(HasGetValueTypeHash)
	struct FST_ToolTipInfo                        K2Node_Select_Default;                             // 0x0140(0x0078)(HasGetValueTypeHash)
	EItemType                                     CallFunc_RewardItemTypeToItemType_ItemType_1;      // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxIcon_C_SetItemBox) == 0x000008, "Wrong alignment on WBP_ItemBoxIcon_C_SetItemBox");
static_assert(sizeof(WBP_ItemBoxIcon_C_SetItemBox) == 0x0001C0, "Wrong size on WBP_ItemBoxIcon_C_SetItemBox");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBox, SBItemBoxContentParam) == 0x000000, "Member 'WBP_ItemBoxIcon_C_SetItemBox::SBItemBoxContentParam' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBox, Temp_bool_Variable) == 0x000020, "Member 'WBP_ItemBoxIcon_C_SetItemBox::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBox, CallFunc_Get_Acquisitions_Num_Text_Result) == 0x000028, "Member 'WBP_ItemBoxIcon_C_SetItemBox::CallFunc_Get_Acquisitions_Num_Text_Result' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBox, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000040, "Member 'WBP_ItemBoxIcon_C_SetItemBox::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBox, K2Node_MakeStruct_ST_ToolTipInfo) == 0x000048, "Member 'WBP_ItemBoxIcon_C_SetItemBox::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBox, CallFunc_RewardItemTypeToItemType_ItemType) == 0x0000C0, "Member 'WBP_ItemBoxIcon_C_SetItemBox::CallFunc_RewardItemTypeToItemType_ItemType' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBox, K2Node_MakeStruct_ST_ToolTipInfo_1) == 0x0000C8, "Member 'WBP_ItemBoxIcon_C_SetItemBox::K2Node_MakeStruct_ST_ToolTipInfo_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBox, K2Node_Select_Default) == 0x000140, "Member 'WBP_ItemBoxIcon_C_SetItemBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBox, CallFunc_RewardItemTypeToItemType_ItemType_1) == 0x0001B8, "Member 'WBP_ItemBoxIcon_C_SetItemBox::CallFunc_RewardItemTypeToItemType_ItemType_1' has a wrong offset!");

// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetIItemBoxToolTip
// 0x0078 (0x0078 - 0x0000)
struct WBP_ItemBoxIcon_C_SetIItemBoxToolTip final
{
public:
	struct FST_ToolTipInfo                        InToolTipInfo;                                     // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxIcon_C_SetIItemBoxToolTip) == 0x000008, "Wrong alignment on WBP_ItemBoxIcon_C_SetIItemBoxToolTip");
static_assert(sizeof(WBP_ItemBoxIcon_C_SetIItemBoxToolTip) == 0x000078, "Wrong size on WBP_ItemBoxIcon_C_SetIItemBoxToolTip");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetIItemBoxToolTip, InToolTipInfo) == 0x000000, "Member 'WBP_ItemBoxIcon_C_SetIItemBoxToolTip::InToolTipInfo' has a wrong offset!");

// Function WBP_ItemBoxIcon.WBP_ItemBoxIcon_C.SetItemBoxResult
// 0x0410 (0x0410 - 0x0000)
struct WBP_ItemBoxIcon_C_SetItemBoxResult final
{
public:
	struct FSBItemBoxResultItemData               ItemBoxResultItemData;                             // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class FText                                   Temp_text_Variable;                                // 0x0018(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7747[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable_1;                              // 0x0038(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             Temp_byte_Variable;                                // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0057(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_10;                             // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_11;                             // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_12;                             // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_13;                             // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_14;                             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_15;                             // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_16;                             // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_17;                             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_18;                             // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_19;                             // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_20;                             // 0x0067(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_21;                             // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_22;                             // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_23;                             // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_24;                             // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_25;                             // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_26;                             // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_27;                             // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_28;                             // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_29;                             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_30;                             // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_31;                             // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_32;                             // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_33;                             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_34;                             // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_35;                             // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_36;                             // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_37;                             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_38;                             // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_39;                             // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_40;                             // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7748[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00A0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00B8(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_2;     // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x00E0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00F8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7749[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0140(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0150(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0168(0x0018)()
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_774A[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x0188(0x0018)()
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x01A0(0x0078)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0218(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0258(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0270(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0280(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0298(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     CallFunc_RewardItemTypeToItemType_ItemType;        // 0x02B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_774B[0x6];                                     // 0x02B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x02B8(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_2;                           // 0x02D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_41;                             // 0x02D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_774C[0x5];                                     // 0x02D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_3;                           // 0x02D8(0x0018)()
	class FText                                   K2Node_Select_Default_4;                           // 0x02F0(0x0018)()
	class FText                                   K2Node_Select_Default_5;                           // 0x0308(0x0018)()
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo_1;                // 0x0320(0x0078)(HasGetValueTypeHash)
	struct FST_ToolTipInfo                        K2Node_Select_Default_6;                           // 0x0398(0x0078)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_ItemBoxIcon_C_SetItemBoxResult) == 0x000008, "Wrong alignment on WBP_ItemBoxIcon_C_SetItemBoxResult");
static_assert(sizeof(WBP_ItemBoxIcon_C_SetItemBoxResult) == 0x000410, "Wrong size on WBP_ItemBoxIcon_C_SetItemBoxResult");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, ItemBoxResultItemData) == 0x000000, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::ItemBoxResultItemData' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_text_Variable) == 0x000018, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable) == 0x000030, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_text_Variable_1) == 0x000038, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_1) == 0x000050, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_Not_PreBool_ReturnValue) == 0x000051, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_Greater_IntInt_ReturnValue) == 0x000052, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_BooleanAND_ReturnValue) == 0x000053, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_2) == 0x000054, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_byte_Variable) == 0x000055, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_3) == 0x000056, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_4) == 0x000057, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_5) == 0x000058, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_6) == 0x000059, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_7) == 0x00005A, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_8) == 0x00005B, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_9) == 0x00005C, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_10) == 0x00005D, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_11) == 0x00005E, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_12) == 0x00005F, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_13) == 0x000060, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_14) == 0x000061, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_15) == 0x000062, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_16) == 0x000063, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_16' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_17) == 0x000064, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_17' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_18) == 0x000065, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_18' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_19) == 0x000066, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_19' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_20) == 0x000067, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_20' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_21) == 0x000068, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_21' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_22) == 0x000069, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_22' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_23) == 0x00006A, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_23' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_24) == 0x00006B, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_24' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_25) == 0x00006C, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_25' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_26) == 0x00006D, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_26' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_27) == 0x00006E, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_27' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_28) == 0x00006F, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_28' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_29) == 0x000070, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_29' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_30) == 0x000071, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_30' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_31) == 0x000072, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_31' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_32) == 0x000073, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_32' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_33) == 0x000074, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_33' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_34) == 0x000075, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_34' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_35) == 0x000076, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_35' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_36) == 0x000077, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_36' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_37) == 0x000078, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_37' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_38) == 0x000079, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_38' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_39) == 0x00007A, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_39' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_40) == 0x00007B, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_40' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000080, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x000090, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_Conv_StringToText_ReturnValue) == 0x0000A0, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000B8, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_GetTextFromAssetByName_ReturnValue_2) == 0x0000D0, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_GetTextFromAssetByName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0000E0, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_MakeStruct_FormatArgumentData) == 0x0000F8, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000138, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_MakeArray_Array) == 0x000140, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_Format_ReturnValue) == 0x000150, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_Select_Default) == 0x000168, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000180, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_Select_Default_1) == 0x000188, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_MakeStruct_ST_ToolTipInfo) == 0x0001A0, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_MakeStruct_FormatArgumentData_1) == 0x000218, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_Conv_IntToText_ReturnValue) == 0x000258, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_MakeArray_Array_1) == 0x000270, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000280, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_Format_ReturnValue_1) == 0x000298, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0002B0, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_RewardItemTypeToItemType_ItemType) == 0x0002B1, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_RewardItemTypeToItemType_ItemType' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_Conv_IntToText_ReturnValue_2) == 0x0002B8, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0002D0, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_Select_Default_2) == 0x0002D1, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, Temp_bool_Variable_41) == 0x0002D2, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::Temp_bool_Variable_41' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_Select_Default_3) == 0x0002D8, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_Select_Default_4) == 0x0002F0, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_Select_Default_5) == 0x000308, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_MakeStruct_ST_ToolTipInfo_1) == 0x000320, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_MakeStruct_ST_ToolTipInfo_1' has a wrong offset!");
static_assert(offsetof(WBP_ItemBoxIcon_C_SetItemBoxResult, K2Node_Select_Default_6) == 0x000398, "Member 'WBP_ItemBoxIcon_C_SetItemBoxResult::K2Node_Select_Default_6' has a wrong offset!");

}

