#pragma once

 

// Package: WBP_ToolTip_RemainTime

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.ExecuteUbergraph_WBP_ToolTip_RemainTime
// 0x0068 (0x0068 - 0x0000)
struct WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92BB[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InText_1;                       // 0x0008(0x0018)()
	struct FDateTime                              K2Node_CustomEvent_DateTime;                       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_DateTimeMinValue_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_DateTimeDateTime_ReturnValue;    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92BC[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0038(0x0018)()
	class FString                                 K2Node_CustomEvent_EventTermId;                    // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime) == 0x000008, "Wrong alignment on WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime");
static_assert(sizeof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime) == 0x000068, "Wrong size on WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime, EntryPoint) == 0x000000, "Member 'WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime, Temp_bool_Variable) == 0x000004, "Member 'WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime, CallFunc_MakeLiteralByte_ReturnValue) == 0x000005, "Member 'WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime, K2Node_CustomEvent_InText_1) == 0x000008, "Member 'WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime::K2Node_CustomEvent_InText_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime, K2Node_CustomEvent_DateTime) == 0x000020, "Member 'WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime::K2Node_CustomEvent_DateTime' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime, CallFunc_DateTimeMinValue_ReturnValue) == 0x000028, "Member 'WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime::CallFunc_DateTimeMinValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime, CallFunc_NotEqual_DateTimeDateTime_ReturnValue) == 0x000030, "Member 'WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime::CallFunc_NotEqual_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime, K2Node_CustomEvent_InText) == 0x000038, "Member 'WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime::K2Node_CustomEvent_InText' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime, K2Node_CustomEvent_EventTermId) == 0x000050, "Member 'WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime::K2Node_CustomEvent_EventTermId' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000060, "Member 'WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime, K2Node_Select_Default) == 0x000061, "Member 'WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime::K2Node_Select_Default' has a wrong offset!");

// Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.ChangeRecepiTooltip
// 0x0028 (0x0028 - 0x0000)
struct WBP_ToolTip_RemainTime_C_ChangeRecepiTooltip final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 EventTermId;                                       // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ToolTip_RemainTime_C_ChangeRecepiTooltip) == 0x000008, "Wrong alignment on WBP_ToolTip_RemainTime_C_ChangeRecepiTooltip");
static_assert(sizeof(WBP_ToolTip_RemainTime_C_ChangeRecepiTooltip) == 0x000028, "Wrong size on WBP_ToolTip_RemainTime_C_ChangeRecepiTooltip");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ChangeRecepiTooltip, InText) == 0x000000, "Member 'WBP_ToolTip_RemainTime_C_ChangeRecepiTooltip::InText' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_ChangeRecepiTooltip, EventTermId) == 0x000018, "Member 'WBP_ToolTip_RemainTime_C_ChangeRecepiTooltip::EventTermId' has a wrong offset!");

// Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.SetText
// 0x0020 (0x0020 - 0x0000)
struct WBP_ToolTip_RemainTime_C_SetText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDateTime                              DateTime;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ToolTip_RemainTime_C_SetText) == 0x000008, "Wrong alignment on WBP_ToolTip_RemainTime_C_SetText");
static_assert(sizeof(WBP_ToolTip_RemainTime_C_SetText) == 0x000020, "Wrong size on WBP_ToolTip_RemainTime_C_SetText");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_SetText, InText) == 0x000000, "Member 'WBP_ToolTip_RemainTime_C_SetText::InText' has a wrong offset!");
static_assert(offsetof(WBP_ToolTip_RemainTime_C_SetText, DateTime) == 0x000018, "Member 'WBP_ToolTip_RemainTime_C_SetText::DateTime' has a wrong offset!");

}

