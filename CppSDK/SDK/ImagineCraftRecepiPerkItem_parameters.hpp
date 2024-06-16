#pragma once

 

// Package: ImagineCraftRecepiPerkItem

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.ExecuteUbergraph_ImagineCraftRecepiPerkItem
// 0x0048 (0x0048 - 0x0000)
struct ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5810[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5811[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_InText;                         // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	bool                                          K2Node_CustomEvent_isRare;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem) == 0x000008, "Wrong alignment on ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem");
static_assert(sizeof(ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem) == 0x000048, "Wrong size on ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem, EntryPoint) == 0x000000, "Member 'ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem, Temp_bool_Variable) == 0x000004, "Member 'ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem, Temp_byte_Variable) == 0x000010, "Member 'ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem, Temp_byte_Variable_1) == 0x000011, "Member 'ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem, K2Node_CustomEvent_InText) == 0x000018, "Member 'ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem, K2Node_CustomEvent_isRare) == 0x000040, "Member 'ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem::K2Node_CustomEvent_isRare' has a wrong offset!");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem, K2Node_Select_Default) == 0x000041, "Member 'ImagineCraftRecepiPerkItem_C_ExecuteUbergraph_ImagineCraftRecepiPerkItem::K2Node_Select_Default' has a wrong offset!");

// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Set Rare
// 0x0001 (0x0001 - 0x0000)
struct ImagineCraftRecepiPerkItem_C_Set_Rare final
{
public:
	bool                                          IsRare;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImagineCraftRecepiPerkItem_C_Set_Rare) == 0x000001, "Wrong alignment on ImagineCraftRecepiPerkItem_C_Set_Rare");
static_assert(sizeof(ImagineCraftRecepiPerkItem_C_Set_Rare) == 0x000001, "Wrong size on ImagineCraftRecepiPerkItem_C_Set_Rare");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_Set_Rare, IsRare) == 0x000000, "Member 'ImagineCraftRecepiPerkItem_C_Set_Rare::IsRare' has a wrong offset!");

// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.Set Text
// 0x0010 (0x0010 - 0x0000)
struct ImagineCraftRecepiPerkItem_C_Set_Text final
{
public:
	class FString                                 InText;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftRecepiPerkItem_C_Set_Text) == 0x000008, "Wrong alignment on ImagineCraftRecepiPerkItem_C_Set_Text");
static_assert(sizeof(ImagineCraftRecepiPerkItem_C_Set_Text) == 0x000010, "Wrong size on ImagineCraftRecepiPerkItem_C_Set_Text");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_Set_Text, InText) == 0x000000, "Member 'ImagineCraftRecepiPerkItem_C_Set_Text::InText' has a wrong offset!");

// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.SetPerkID
// 0x0004 (0x0004 - 0x0000)
struct ImagineCraftRecepiPerkItem_C_SetPerkID final
{
public:
	int32                                         Param_PerkId;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftRecepiPerkItem_C_SetPerkID) == 0x000004, "Wrong alignment on ImagineCraftRecepiPerkItem_C_SetPerkID");
static_assert(sizeof(ImagineCraftRecepiPerkItem_C_SetPerkID) == 0x000004, "Wrong size on ImagineCraftRecepiPerkItem_C_SetPerkID");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_SetPerkID, Param_PerkId) == 0x000000, "Member 'ImagineCraftRecepiPerkItem_C_SetPerkID::Param_PerkId' has a wrong offset!");

// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.GetAbilityDescToolTipWidget
// 0x0018 (0x0018 - 0x0000)
struct ImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5812[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonToolTip_AbilityPerk_C*           CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget) == 0x000008, "Wrong alignment on ImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget");
static_assert(sizeof(ImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget) == 0x000018, "Wrong size on ImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget, ReturnValue) == 0x000000, "Member 'ImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget::ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'ImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget, CallFunc_Create_ReturnValue) == 0x000010, "Member 'ImagineCraftRecepiPerkItem_C_GetAbilityDescToolTipWidget::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function ImagineCraftRecepiPerkItem.ImagineCraftRecepiPerkItem_C.SetPerkValue
// 0x0020 (0x0020 - 0x0000)
struct ImagineCraftRecepiPerkItem_C_SetPerkValue final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5813[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(ImagineCraftRecepiPerkItem_C_SetPerkValue) == 0x000008, "Wrong alignment on ImagineCraftRecepiPerkItem_C_SetPerkValue");
static_assert(sizeof(ImagineCraftRecepiPerkItem_C_SetPerkValue) == 0x000020, "Wrong size on ImagineCraftRecepiPerkItem_C_SetPerkValue");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_SetPerkValue, Value) == 0x000000, "Member 'ImagineCraftRecepiPerkItem_C_SetPerkValue::Value' has a wrong offset!");
static_assert(offsetof(ImagineCraftRecepiPerkItem_C_SetPerkValue, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'ImagineCraftRecepiPerkItem_C_SetPerkValue::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

