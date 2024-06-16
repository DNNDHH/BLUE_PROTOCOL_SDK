#pragma once

 

// Package: ST_ATypeFilterListData

#include "Basic.hpp"

#include "ST_ATypeFilterSortData_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_ATypeFilterListData.ST_ATypeFilterListData
// 0x0010 (0x0010 - 0x0000)
struct FST_ATypeFilterListData final
{
public:
	TArray<struct FST_ATypeFilterSortData>        FilterData_3_AC0E0DB94700DA650D0587BFAA7D4289;     // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FST_ATypeFilterListData) == 0x000008, "Wrong alignment on FST_ATypeFilterListData");
static_assert(sizeof(FST_ATypeFilterListData) == 0x000010, "Wrong size on FST_ATypeFilterListData");
static_assert(offsetof(FST_ATypeFilterListData, FilterData_3_AC0E0DB94700DA650D0587BFAA7D4289) == 0x000000, "Member 'FST_ATypeFilterListData::FilterData_3_AC0E0DB94700DA650D0587BFAA7D4289' has a wrong offset!");

}

