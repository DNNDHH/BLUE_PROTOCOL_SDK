#pragma once

 

// Package: SortTypeData

#include "Basic.hpp"

#include "SortTypeCategory_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct SortTypeData.SortTypeData
// 0x0018 (0x0018 - 0x0000)
struct FSortTypeData final
{
public:
	ESortTypeCategory                             Type_3_6A16DE19416D5CEF872FBF82A2844B41;           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C39[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBItemSortType>                       SortTypes_9_4854066A4E74336D1BDC4E81D5337165;      // 0x0008(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FSortTypeData) == 0x000008, "Wrong alignment on FSortTypeData");
static_assert(sizeof(FSortTypeData) == 0x000018, "Wrong size on FSortTypeData");
static_assert(offsetof(FSortTypeData, Type_3_6A16DE19416D5CEF872FBF82A2844B41) == 0x000000, "Member 'FSortTypeData::Type_3_6A16DE19416D5CEF872FBF82A2844B41' has a wrong offset!");
static_assert(offsetof(FSortTypeData, SortTypes_9_4854066A4E74336D1BDC4E81D5337165) == 0x000008, "Member 'FSortTypeData::SortTypes_9_4854066A4E74336D1BDC4E81D5337165' has a wrong offset!");

}

