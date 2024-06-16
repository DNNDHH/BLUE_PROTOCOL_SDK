#pragma once

 

// Package: Config_ValueSetting

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct Config_ValueSetting.Config_ValueSetting
// 0x0020 (0x0020 - 0x0000)
struct FConfig_ValueSetting final
{
public:
	struct FFloatRange                            GamePad_CameraSpeedRateYaw_12_C1A9C19541E06076D58B7F87B8C27E10; // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                            GamePad_CameraSpeedRatePitch_13_1CEDA1884A60487FB8E8458CDE757F8D; // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FConfig_ValueSetting) == 0x000004, "Wrong alignment on FConfig_ValueSetting");
static_assert(sizeof(FConfig_ValueSetting) == 0x000020, "Wrong size on FConfig_ValueSetting");
static_assert(offsetof(FConfig_ValueSetting, GamePad_CameraSpeedRateYaw_12_C1A9C19541E06076D58B7F87B8C27E10) == 0x000000, "Member 'FConfig_ValueSetting::GamePad_CameraSpeedRateYaw_12_C1A9C19541E06076D58B7F87B8C27E10' has a wrong offset!");
static_assert(offsetof(FConfig_ValueSetting, GamePad_CameraSpeedRatePitch_13_1CEDA1884A60487FB8E8458CDE757F8D) == 0x000010, "Member 'FConfig_ValueSetting::GamePad_CameraSpeedRatePitch_13_1CEDA1884A60487FB8E8458CDE757F8D' has a wrong offset!");

}

