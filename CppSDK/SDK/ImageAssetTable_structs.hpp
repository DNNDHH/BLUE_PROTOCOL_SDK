#pragma once

 

// Package: ImageAssetTable

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ImageAssetTable.ImageAssetTable
// 0x0028 (0x0028 - 0x0000)
struct FImageAssetTable final
{
public:
	TSoftObjectPtr<class UTexture2D>              ImageAsset_3_3F283FD04EC03609FB2E3081FD51CFF0;     // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FImageAssetTable) == 0x000008, "Wrong alignment on FImageAssetTable");
static_assert(sizeof(FImageAssetTable) == 0x000028, "Wrong size on FImageAssetTable");
static_assert(offsetof(FImageAssetTable, ImageAsset_3_3F283FD04EC03609FB2E3081FD51CFF0) == 0x000000, "Member 'FImageAssetTable::ImageAsset_3_3F283FD04EC03609FB2E3081FD51CFF0' has a wrong offset!");

}

