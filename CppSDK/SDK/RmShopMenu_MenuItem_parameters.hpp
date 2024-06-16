#pragma once

 

// Package: RmShopMenu_MenuItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.ExecuteUbergraph_RmShopMenu_MenuItem
// 0x00A8 (0x00A8 - 0x0000)
struct RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5665[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5666[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default;                             // 0x0068(0x0018)()
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUnreadedSeasonPassFlag_bResult;         // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUnreadedSeasonPassFlag_bResult_1;       // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsUnreadedSeasonPassFlag_bResult_2;       // 0x00A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem) == 0x000008, "Wrong alignment on RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem");
static_assert(sizeof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem) == 0x0000A8, "Wrong size on RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, EntryPoint) == 0x000000, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, K2Node_Event_IsDesignTime) == 0x000004, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, Temp_bool_Variable) == 0x000005, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000018, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000058, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, CallFunc_GetEventExecutor_ReturnValue) == 0x000060, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, K2Node_Select_Default) == 0x000068, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, K2Node_CreateDelegate_OutputDelegate) == 0x000080, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, K2Node_CustomEvent_Sender) == 0x000090, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, K2Node_CustomEvent_Param) == 0x000098, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0000A0, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, CallFunc_IsUnreadedSeasonPassFlag_bResult) == 0x0000A1, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::CallFunc_IsUnreadedSeasonPassFlag_bResult' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, CallFunc_IsUnreadedSeasonPassFlag_bResult_1) == 0x0000A2, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::CallFunc_IsUnreadedSeasonPassFlag_bResult_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem, CallFunc_IsUnreadedSeasonPassFlag_bResult_2) == 0x0000A3, "Member 'RmShopMenu_MenuItem_C_ExecuteUbergraph_RmShopMenu_MenuItem::CallFunc_IsUnreadedSeasonPassFlag_bResult_2' has a wrong offset!");

// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.OnUpdateSeasonPassAnyInfo
// 0x0010 (0x0010 - 0x0000)
struct RmShopMenu_MenuItem_C_OnUpdateSeasonPassAnyInfo final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RmShopMenu_MenuItem_C_OnUpdateSeasonPassAnyInfo) == 0x000008, "Wrong alignment on RmShopMenu_MenuItem_C_OnUpdateSeasonPassAnyInfo");
static_assert(sizeof(RmShopMenu_MenuItem_C_OnUpdateSeasonPassAnyInfo) == 0x000010, "Wrong size on RmShopMenu_MenuItem_C_OnUpdateSeasonPassAnyInfo");
static_assert(offsetof(RmShopMenu_MenuItem_C_OnUpdateSeasonPassAnyInfo, Sender) == 0x000000, "Member 'RmShopMenu_MenuItem_C_OnUpdateSeasonPassAnyInfo::Sender' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_OnUpdateSeasonPassAnyInfo, Param) == 0x000008, "Member 'RmShopMenu_MenuItem_C_OnUpdateSeasonPassAnyInfo::Param' has a wrong offset!");

// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct RmShopMenu_MenuItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RmShopMenu_MenuItem_C_PreConstruct) == 0x000001, "Wrong alignment on RmShopMenu_MenuItem_C_PreConstruct");
static_assert(sizeof(RmShopMenu_MenuItem_C_PreConstruct) == 0x000001, "Wrong size on RmShopMenu_MenuItem_C_PreConstruct");
static_assert(offsetof(RmShopMenu_MenuItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'RmShopMenu_MenuItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function RmShopMenu_MenuItem.RmShopMenu_MenuItem_C.SelectBtn
// 0x0798 (0x0798 - 0x0000)
struct RmShopMenu_MenuItem_C_SelectBtn final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5667[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0010(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0068(0x0028)()
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x00A0(0x0088)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0128(0x0028)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle;                     // 0x0150(0x0278)()
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x03C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_1;                    // 0x03D8(0x0088)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x0460(0x0028)()
	struct FMargin                                K2Node_MakeStruct_Margin_2;                        // 0x0488(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush_2;                    // 0x0498(0x0088)()
	struct FButtonStyle                           K2Node_MakeStruct_ButtonStyle_1;                   // 0x0520(0x0278)()
};
static_assert(alignof(RmShopMenu_MenuItem_C_SelectBtn) == 0x000008, "Wrong alignment on RmShopMenu_MenuItem_C_SelectBtn");
static_assert(sizeof(RmShopMenu_MenuItem_C_SelectBtn) == 0x000798, "Wrong size on RmShopMenu_MenuItem_C_SelectBtn");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, bSelected) == 0x000000, "Member 'RmShopMenu_MenuItem_C_SelectBtn::bSelected' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'RmShopMenu_MenuItem_C_SelectBtn::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_SlateColor) == 0x000010, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, CallFunc_PlayAnimation_ReturnValue_1) == 0x000038, "Member 'RmShopMenu_MenuItem_C_SelectBtn::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_SlateColor_2) == 0x000068, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_Margin) == 0x000090, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_SlateBrush) == 0x0000A0, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_SlateBrush' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_SlateColor_3) == 0x000128, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_ButtonStyle) == 0x000150, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_ButtonStyle' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_Margin_1) == 0x0003C8, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_SlateBrush_1) == 0x0003D8, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_SlateBrush_1' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_SlateColor_4) == 0x000460, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_Margin_2) == 0x000488, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_Margin_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_SlateBrush_2) == 0x000498, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_SlateBrush_2' has a wrong offset!");
static_assert(offsetof(RmShopMenu_MenuItem_C_SelectBtn, K2Node_MakeStruct_ButtonStyle_1) == 0x000520, "Member 'RmShopMenu_MenuItem_C_SelectBtn::K2Node_MakeStruct_ButtonStyle_1' has a wrong offset!");

}

