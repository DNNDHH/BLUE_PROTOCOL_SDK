#pragma once

 

// Package: QuestThumbnailData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct QuestThumbnailData.QuestThumbnailData
// 0x0028 (0x0028 - 0x0000)
struct FQuestThumbnailData final
{
public:
	TSoftObjectPtr<class UTexture2D>              ThumbnailAssrt_2_0011EAB4464FF66B30CD4781DC0264AD; // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FQuestThumbnailData) == 0x000008, "Wrong alignment on FQuestThumbnailData");
static_assert(sizeof(FQuestThumbnailData) == 0x000028, "Wrong size on FQuestThumbnailData");
static_assert(offsetof(FQuestThumbnailData, ThumbnailAssrt_2_0011EAB4464FF66B30CD4781DC0264AD) == 0x000000, "Member 'FQuestThumbnailData::ThumbnailAssrt_2_0011EAB4464FF66B30CD4781DC0264AD' has a wrong offset!");

}

