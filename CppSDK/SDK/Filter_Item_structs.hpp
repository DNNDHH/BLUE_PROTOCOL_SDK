#pragma once

 

// Package: Filter_Item

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"


namespace SDK
{

// UserDefinedStruct Filter_Item.Filter_Item
// 0x0018 (0x0018 - 0x0000)
struct FFilter_Item final
{
public:
	EFilter_Type                                  Type_5_C11B0EA5491C91634753FFA48F942744;           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_901F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UClass*>                         UI_7_9FC974114816A2657E819999D82BF0CF;             // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FFilter_Item) == 0x000008, "Wrong alignment on FFilter_Item");
static_assert(sizeof(FFilter_Item) == 0x000018, "Wrong size on FFilter_Item");
static_assert(offsetof(FFilter_Item, Type_5_C11B0EA5491C91634753FFA48F942744) == 0x000000, "Member 'FFilter_Item::Type_5_C11B0EA5491C91634753FFA48F942744' has a wrong offset!");
static_assert(offsetof(FFilter_Item, UI_7_9FC974114816A2657E819999D82BF0CF) == 0x000008, "Member 'FFilter_Item::UI_7_9FC974114816A2657E819999D82BF0CF' has a wrong offset!");

}

