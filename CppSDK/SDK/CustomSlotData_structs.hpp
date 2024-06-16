#pragma once

 

// Package: CustomSlotData

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct CustomSlotData.CustomSlotData
// 0x0002 (0x0002 - 0x0000)
struct FCustomSlotData final
{
public:
	bool                                          IsLoadable_1_5BDD5FED460F665C842430947EC4BA18;     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCustomHudLayoutSlot                        SlotNum_4_EF96192F4A3A9D822FEB4EA207AEE9C4;        // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FCustomSlotData) == 0x000001, "Wrong alignment on FCustomSlotData");
static_assert(sizeof(FCustomSlotData) == 0x000002, "Wrong size on FCustomSlotData");
static_assert(offsetof(FCustomSlotData, IsLoadable_1_5BDD5FED460F665C842430947EC4BA18) == 0x000000, "Member 'FCustomSlotData::IsLoadable_1_5BDD5FED460F665C842430947EC4BA18' has a wrong offset!");
static_assert(offsetof(FCustomSlotData, SlotNum_4_EF96192F4A3A9D822FEB4EA207AEE9C4) == 0x000001, "Member 'FCustomSlotData::SlotNum_4_EF96192F4A3A9D822FEB4EA207AEE9C4' has a wrong offset!");

}

