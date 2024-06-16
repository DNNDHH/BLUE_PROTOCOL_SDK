#pragma once

 

// Package: LoadingTipsCandidateStruct

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct LoadingTipsCandidateStruct.LoadingTipsCandidateStruct
// 0x0008 (0x0008 - 0x0000)
struct FLoadingTipsCandidateStruct final
{
public:
	int32                                         TipsListIndex_2_263F3D484FECC1C49754D78BDECB8C37;  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TipsId_6_985663544491EE285C0C39B3D0317CD1;         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLoadingTipsCandidateStruct) == 0x000004, "Wrong alignment on FLoadingTipsCandidateStruct");
static_assert(sizeof(FLoadingTipsCandidateStruct) == 0x000008, "Wrong size on FLoadingTipsCandidateStruct");
static_assert(offsetof(FLoadingTipsCandidateStruct, TipsListIndex_2_263F3D484FECC1C49754D78BDECB8C37) == 0x000000, "Member 'FLoadingTipsCandidateStruct::TipsListIndex_2_263F3D484FECC1C49754D78BDECB8C37' has a wrong offset!");
static_assert(offsetof(FLoadingTipsCandidateStruct, TipsId_6_985663544491EE285C0C39B3D0317CD1) == 0x000004, "Member 'FLoadingTipsCandidateStruct::TipsId_6_985663544491EE285C0C39B3D0317CD1' has a wrong offset!");

}

