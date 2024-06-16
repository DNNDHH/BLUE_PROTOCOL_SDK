#pragma once

 

// Package: CommonRecastTimeInfoItem

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C.ExecuteUbergraph_CommonRecastTimeInfoItem
// 0x0040 (0x0040 - 0x0000)
struct CommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Event_Color;                                // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91F3[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
};
static_assert(alignof(CommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem) == 0x000008, "Wrong alignment on CommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem");
static_assert(sizeof(CommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem) == 0x000040, "Wrong size on CommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem");
static_assert(offsetof(CommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem, EntryPoint) == 0x000000, "Member 'CommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem, K2Node_Event_Color) == 0x000004, "Member 'CommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem::K2Node_Event_Color' has a wrong offset!");
static_assert(offsetof(CommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'CommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C.SetTextColor
// 0x0010 (0x0010 - 0x0000)
struct CommonRecastTimeInfoItem_C_SetTextColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonRecastTimeInfoItem_C_SetTextColor) == 0x000004, "Wrong alignment on CommonRecastTimeInfoItem_C_SetTextColor");
static_assert(sizeof(CommonRecastTimeInfoItem_C_SetTextColor) == 0x000010, "Wrong size on CommonRecastTimeInfoItem_C_SetTextColor");
static_assert(offsetof(CommonRecastTimeInfoItem_C_SetTextColor, Color) == 0x000000, "Member 'CommonRecastTimeInfoItem_C_SetTextColor::Color' has a wrong offset!");

// Function CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C.SetRecastTime
// 0x0028 (0x0028 - 0x0000)
struct CommonRecastTimeInfoItem_C_SetRecastTime final
{
public:
	float                                         InRecastTime;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91F4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0008(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonRecastTimeInfoItem_C_SetRecastTime) == 0x000008, "Wrong alignment on CommonRecastTimeInfoItem_C_SetRecastTime");
static_assert(sizeof(CommonRecastTimeInfoItem_C_SetRecastTime) == 0x000028, "Wrong size on CommonRecastTimeInfoItem_C_SetRecastTime");
static_assert(offsetof(CommonRecastTimeInfoItem_C_SetRecastTime, InRecastTime) == 0x000000, "Member 'CommonRecastTimeInfoItem_C_SetRecastTime::InRecastTime' has a wrong offset!");
static_assert(offsetof(CommonRecastTimeInfoItem_C_SetRecastTime, CallFunc_Conv_FloatToText_ReturnValue) == 0x000008, "Member 'CommonRecastTimeInfoItem_C_SetRecastTime::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonRecastTimeInfoItem_C_SetRecastTime, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'CommonRecastTimeInfoItem_C_SetRecastTime::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

