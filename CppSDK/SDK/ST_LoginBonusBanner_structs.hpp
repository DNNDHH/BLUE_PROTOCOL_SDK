#pragma once

 

// Package: ST_LoginBonusBanner

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct ST_LoginBonusBanner.ST_LoginBonusBanner
// 0x0028 (0x0028 - 0x0000)
struct FST_LoginBonusBanner final
{
public:
	TSoftObjectPtr<class UTexture2D>              Texture_2_468E5C4746401DFB544E388D153FA5E9;        // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FST_LoginBonusBanner) == 0x000008, "Wrong alignment on FST_LoginBonusBanner");
static_assert(sizeof(FST_LoginBonusBanner) == 0x000028, "Wrong size on FST_LoginBonusBanner");
static_assert(offsetof(FST_LoginBonusBanner, Texture_2_468E5C4746401DFB544E388D153FA5E9) == 0x000000, "Member 'FST_LoginBonusBanner::Texture_2_468E5C4746401DFB544E388D153FA5E9' has a wrong offset!");

}

