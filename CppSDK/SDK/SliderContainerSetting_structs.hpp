#pragma once

 

// Package: SliderContainerSetting

#include "Basic.hpp"

#include "GraphicsSliderSetting_structs.hpp"
#include "SliderSetting_structs.hpp"


namespace SDK
{

// UserDefinedStruct SliderContainerSetting.SliderContainerSetting
// 0x0018 (0x0018 - 0x0000)
struct FSliderContainerSetting final
{
public:
	EGraphicsSliderSetting                        SliderType_2_559E4CEE448C577024BF5698D436C53B;     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DFB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSliderSetting                         SliderLimits_7_97EED5FD4094914E6746359A3E42F703;   // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bVisible_10_B6C35A374D1AEE5F524975886F3C2C41;      // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSliderContainerSetting) == 0x000004, "Wrong alignment on FSliderContainerSetting");
static_assert(sizeof(FSliderContainerSetting) == 0x000018, "Wrong size on FSliderContainerSetting");
static_assert(offsetof(FSliderContainerSetting, SliderType_2_559E4CEE448C577024BF5698D436C53B) == 0x000000, "Member 'FSliderContainerSetting::SliderType_2_559E4CEE448C577024BF5698D436C53B' has a wrong offset!");
static_assert(offsetof(FSliderContainerSetting, SliderLimits_7_97EED5FD4094914E6746359A3E42F703) == 0x000004, "Member 'FSliderContainerSetting::SliderLimits_7_97EED5FD4094914E6746359A3E42F703' has a wrong offset!");
static_assert(offsetof(FSliderContainerSetting, bVisible_10_B6C35A374D1AEE5F524975886F3C2C41) == 0x000014, "Member 'FSliderContainerSetting::bVisible_10_B6C35A374D1AEE5F524975886F3C2C41' has a wrong offset!");

}

