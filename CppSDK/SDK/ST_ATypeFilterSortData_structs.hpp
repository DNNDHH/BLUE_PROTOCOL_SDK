#pragma once

 

// Package: ST_ATypeFilterSortData

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_ATypeFilterSortData.ST_ATypeFilterSortData
// 0x0018 (0x0018 - 0x0000)
struct FST_ATypeFilterSortData final
{
public:
	EItemFilterType                               Filter_2_607684FB453D798769153C8E9A707CB7;         // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFilter_Type                                  FilterBtn_9_21FEC1C640A5014AF0A631B13FA8549E;      // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B89[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBItemSortType>                       SortList_6_A81A991C452E3BEE9368ADAF9E1DC60E;       // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FST_ATypeFilterSortData) == 0x000008, "Wrong alignment on FST_ATypeFilterSortData");
static_assert(sizeof(FST_ATypeFilterSortData) == 0x000018, "Wrong size on FST_ATypeFilterSortData");
static_assert(offsetof(FST_ATypeFilterSortData, Filter_2_607684FB453D798769153C8E9A707CB7) == 0x000000, "Member 'FST_ATypeFilterSortData::Filter_2_607684FB453D798769153C8E9A707CB7' has a wrong offset!");
static_assert(offsetof(FST_ATypeFilterSortData, FilterBtn_9_21FEC1C640A5014AF0A631B13FA8549E) == 0x000001, "Member 'FST_ATypeFilterSortData::FilterBtn_9_21FEC1C640A5014AF0A631B13FA8549E' has a wrong offset!");
static_assert(offsetof(FST_ATypeFilterSortData, SortList_6_A81A991C452E3BEE9368ADAF9E1DC60E) == 0x000008, "Member 'FST_ATypeFilterSortData::SortList_6_A81A991C452E3BEE9368ADAF9E1DC60E' has a wrong offset!");

}

