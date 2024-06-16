#pragma once

 

// Package: UsedFlagView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct UsedFlagView.UsedFlagView
// 0x0008 (0x0008 - 0x0000)
struct FUsedFlagView final
{
public:
	ESBUseCheckDialogType                         Type_4_3DA0C44148DD8B84CA943E9926C9FB1D;           // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6867[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId_5_630B48F84E813380779C748E1567C993;         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FUsedFlagView) == 0x000004, "Wrong alignment on FUsedFlagView");
static_assert(sizeof(FUsedFlagView) == 0x000008, "Wrong size on FUsedFlagView");
static_assert(offsetof(FUsedFlagView, Type_4_3DA0C44148DD8B84CA943E9926C9FB1D) == 0x000000, "Member 'FUsedFlagView::Type_4_3DA0C44148DD8B84CA943E9926C9FB1D' has a wrong offset!");
static_assert(offsetof(FUsedFlagView, TextId_5_630B48F84E813380779C748E1567C993) == 0x000004, "Member 'FUsedFlagView::TextId_5_630B48F84E813380779C748E1567C993' has a wrong offset!");

}

