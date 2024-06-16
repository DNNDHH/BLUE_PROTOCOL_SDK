#pragma once

 

// Package: ST_RewardItemIcon

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_RewardItemIcon.ST_RewardItemIcon
// 0x0028 (0x0028 - 0x0000)
struct FST_RewardItemIcon final
{
public:
	TSoftObjectPtr<class UTexture2D>              Icon_2_737F32144BB9E6B4AA0EE6A6B426651A;           // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FST_RewardItemIcon) == 0x000008, "Wrong alignment on FST_RewardItemIcon");
static_assert(sizeof(FST_RewardItemIcon) == 0x000028, "Wrong size on FST_RewardItemIcon");
static_assert(offsetof(FST_RewardItemIcon, Icon_2_737F32144BB9E6B4AA0EE6A6B426651A) == 0x000000, "Member 'FST_RewardItemIcon::Icon_2_737F32144BB9E6B4AA0EE6A6B426651A' has a wrong offset!");

}

