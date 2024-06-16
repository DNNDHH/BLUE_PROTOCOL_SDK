#pragma once

 

// Package: ST_GashaBanner

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_GashaBanner.ST_GashaBanner
// 0x0050 (0x0050 - 0x0000)
struct FST_GashaBanner final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture_2_03ED88CB4798784A458251B20D4F5501;        // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              Texture_S_5_73806C994205B9DDD4C2859A4B9A8482;      // 0x0028(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FST_GashaBanner) == 0x000008, "Wrong alignment on FST_GashaBanner");
static_assert(sizeof(FST_GashaBanner) == 0x000050, "Wrong size on FST_GashaBanner");
static_assert(offsetof(FST_GashaBanner, Texture_2_03ED88CB4798784A458251B20D4F5501) == 0x000000, "Member 'FST_GashaBanner::Texture_2_03ED88CB4798784A458251B20D4F5501' has a wrong offset!");
static_assert(offsetof(FST_GashaBanner, Texture_S_5_73806C994205B9DDD4C2859A4B9A8482) == 0x000028, "Member 'FST_GashaBanner::Texture_S_5_73806C994205B9DDD4C2859A4B9A8482' has a wrong offset!");

}

