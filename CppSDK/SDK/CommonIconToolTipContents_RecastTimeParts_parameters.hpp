#pragma once

 

// Package: CommonIconToolTipContents_RecastTimeParts

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts
// 0x0040 (0x0040 - 0x0000)
struct CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C98[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_Color;                                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
};
static_assert(alignof(CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts) == 0x000008, "Wrong alignment on CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts");
static_assert(sizeof(CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts) == 0x000040, "Wrong size on CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts");
static_assert(offsetof(CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts, EntryPoint) == 0x000000, "Member 'CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts, K2Node_Event_Color) == 0x000008, "Member 'CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts::K2Node_Event_Color' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.SetTextColor
// 0x0010 (0x0010 - 0x0000)
struct CommonIconToolTipContents_RecastTimeParts_C_SetTextColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommonIconToolTipContents_RecastTimeParts_C_SetTextColor) == 0x000004, "Wrong alignment on CommonIconToolTipContents_RecastTimeParts_C_SetTextColor");
static_assert(sizeof(CommonIconToolTipContents_RecastTimeParts_C_SetTextColor) == 0x000010, "Wrong size on CommonIconToolTipContents_RecastTimeParts_C_SetTextColor");
static_assert(offsetof(CommonIconToolTipContents_RecastTimeParts_C_SetTextColor, Color) == 0x000000, "Member 'CommonIconToolTipContents_RecastTimeParts_C_SetTextColor::Color' has a wrong offset!");

// Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CommonIconToolTipContents_RecastTimeParts_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContents_RecastTimeParts_C_PreConstruct) == 0x000001, "Wrong alignment on CommonIconToolTipContents_RecastTimeParts_C_PreConstruct");
static_assert(sizeof(CommonIconToolTipContents_RecastTimeParts_C_PreConstruct) == 0x000001, "Wrong size on CommonIconToolTipContents_RecastTimeParts_C_PreConstruct");
static_assert(offsetof(CommonIconToolTipContents_RecastTimeParts_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CommonIconToolTipContents_RecastTimeParts_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.SetRecastTime
// 0x0028 (0x0028 - 0x0000)
struct CommonIconToolTipContents_RecastTimeParts_C_SetRecastTime final
{
public:
	float                                         InRecastTime;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C99[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0008(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommonIconToolTipContents_RecastTimeParts_C_SetRecastTime) == 0x000008, "Wrong alignment on CommonIconToolTipContents_RecastTimeParts_C_SetRecastTime");
static_assert(sizeof(CommonIconToolTipContents_RecastTimeParts_C_SetRecastTime) == 0x000028, "Wrong size on CommonIconToolTipContents_RecastTimeParts_C_SetRecastTime");
static_assert(offsetof(CommonIconToolTipContents_RecastTimeParts_C_SetRecastTime, InRecastTime) == 0x000000, "Member 'CommonIconToolTipContents_RecastTimeParts_C_SetRecastTime::InRecastTime' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_RecastTimeParts_C_SetRecastTime, CallFunc_Conv_FloatToText_ReturnValue) == 0x000008, "Member 'CommonIconToolTipContents_RecastTimeParts_C_SetRecastTime::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommonIconToolTipContents_RecastTimeParts_C_SetRecastTime, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'CommonIconToolTipContents_RecastTimeParts_C_SetRecastTime::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

