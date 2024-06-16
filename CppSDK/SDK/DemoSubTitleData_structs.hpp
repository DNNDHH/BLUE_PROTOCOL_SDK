#pragma once

 

// Package: DemoSubTitleData

#include "Basic.hpp"

#include "DemoSubTitleAnimationType_structs.hpp"


namespace SDK
{

// UserDefinedStruct DemoSubTitleData.DemoSubTitleData
// 0x0001 (0x0001 - 0x0000)
struct FDemoSubTitleData final
{
public:
	EDemoSubTitleAnimationType                    AnimationType_8_4FBFBE434CF3527310CBE5840353F227;  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FDemoSubTitleData) == 0x000001, "Wrong alignment on FDemoSubTitleData");
static_assert(sizeof(FDemoSubTitleData) == 0x000001, "Wrong size on FDemoSubTitleData");
static_assert(offsetof(FDemoSubTitleData, AnimationType_8_4FBFBE434CF3527310CBE5840353F227) == 0x000000, "Member 'FDemoSubTitleData::AnimationType_8_4FBFBE434CF3527310CBE5840353F227' has a wrong offset!");

}

