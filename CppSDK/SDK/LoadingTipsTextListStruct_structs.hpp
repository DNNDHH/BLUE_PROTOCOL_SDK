#pragma once

 

// Package: LoadingTipsTextListStruct

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct LoadingTipsTextListStruct.LoadingTipsTextListStruct
// 0x0010 (0x0010 - 0x0000)
struct FLoadingTipsTextListStruct final
{
public:
	TArray<int32>                                 TipsIdList_11_7B828C304041F32CE4C278BC55C5755E;    // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FLoadingTipsTextListStruct) == 0x000008, "Wrong alignment on FLoadingTipsTextListStruct");
static_assert(sizeof(FLoadingTipsTextListStruct) == 0x000010, "Wrong size on FLoadingTipsTextListStruct");
static_assert(offsetof(FLoadingTipsTextListStruct, TipsIdList_11_7B828C304041F32CE4C278BC55C5755E) == 0x000000, "Member 'FLoadingTipsTextListStruct::TipsIdList_11_7B828C304041F32CE4C278BC55C5755E' has a wrong offset!");

}

