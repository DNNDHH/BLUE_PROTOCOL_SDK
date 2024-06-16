#pragma once

 

// Package: SortTypeText

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct SortTypeText.SortTypeText
// 0x0008 (0x0008 - 0x0000)
struct FSortTypeText final
{
public:
	ESBItemSortType                               SortType_4_144D494C44A47FB3A0ECF89842331763;       // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C38[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId_5_2DB0A5524F0FFAAEB4759ABE6B54324D;         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSortTypeText) == 0x000004, "Wrong alignment on FSortTypeText");
static_assert(sizeof(FSortTypeText) == 0x000008, "Wrong size on FSortTypeText");
static_assert(offsetof(FSortTypeText, SortType_4_144D494C44A47FB3A0ECF89842331763) == 0x000000, "Member 'FSortTypeText::SortType_4_144D494C44A47FB3A0ECF89842331763' has a wrong offset!");
static_assert(offsetof(FSortTypeText, TextId_5_2DB0A5524F0FFAAEB4759ABE6B54324D) == 0x000004, "Member 'FSortTypeText::TextId_5_2DB0A5524F0FFAAEB4759ABE6B54324D' has a wrong offset!");

}

