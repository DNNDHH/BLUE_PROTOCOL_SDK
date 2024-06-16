#pragma once

 

// Package: ST_TutorialExtendData

#include "Basic.hpp"

#include "ST_TutorialExtendDataMain_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_TutorialExtendData.ST_TutorialExtendData
// 0x0010 (0x0010 - 0x0000)
struct FST_TutorialExtendData final
{
public:
	TArray<struct FST_TutorialExtendDataMain>     DataList_11_80AAD3CD47A789DEF9D33EA1681DD188;      // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FST_TutorialExtendData) == 0x000008, "Wrong alignment on FST_TutorialExtendData");
static_assert(sizeof(FST_TutorialExtendData) == 0x000010, "Wrong size on FST_TutorialExtendData");
static_assert(offsetof(FST_TutorialExtendData, DataList_11_80AAD3CD47A789DEF9D33EA1681DD188) == 0x000000, "Member 'FST_TutorialExtendData::DataList_11_80AAD3CD47A789DEF9D33EA1681DD188' has a wrong offset!");

}

