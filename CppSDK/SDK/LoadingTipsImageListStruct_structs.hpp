#pragma once

 

// Package: LoadingTipsImageListStruct

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct LoadingTipsImageListStruct.LoadingTipsImageListStruct
// 0x0010 (0x0010 - 0x0000)
struct FLoadingTipsImageListStruct final
{
public:
	TArray<TSoftObjectPtr<class UTexture2D>>      ImageList_7_7B828C304041F32CE4C278BC55C5755E;      // 0x0000(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FLoadingTipsImageListStruct) == 0x000008, "Wrong alignment on FLoadingTipsImageListStruct");
static_assert(sizeof(FLoadingTipsImageListStruct) == 0x000010, "Wrong size on FLoadingTipsImageListStruct");
static_assert(offsetof(FLoadingTipsImageListStruct, ImageList_7_7B828C304041F32CE4C278BC55C5755E) == 0x000000, "Member 'FLoadingTipsImageListStruct::ImageList_7_7B828C304041F32CE4C278BC55C5755E' has a wrong offset!");

}

