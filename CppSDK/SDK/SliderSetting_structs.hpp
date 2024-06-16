#pragma once

 

// Package: SliderSetting

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct SliderSetting.SliderSetting
// 0x0010 (0x0010 - 0x0000)
struct FSliderSetting final
{
public:
	int32                                         Min_2_7ED81F054C258EB1FE7B81BFB4605796;            // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max_4_6F23121F418E943C54292197D7BBF482;            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Default_6_B298B7704729AD84D430609549D29294;        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TextId_8_8C14B23B410B619570647ABB48DBD2AB;         // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSliderSetting) == 0x000004, "Wrong alignment on FSliderSetting");
static_assert(sizeof(FSliderSetting) == 0x000010, "Wrong size on FSliderSetting");
static_assert(offsetof(FSliderSetting, Min_2_7ED81F054C258EB1FE7B81BFB4605796) == 0x000000, "Member 'FSliderSetting::Min_2_7ED81F054C258EB1FE7B81BFB4605796' has a wrong offset!");
static_assert(offsetof(FSliderSetting, Max_4_6F23121F418E943C54292197D7BBF482) == 0x000004, "Member 'FSliderSetting::Max_4_6F23121F418E943C54292197D7BBF482' has a wrong offset!");
static_assert(offsetof(FSliderSetting, Default_6_B298B7704729AD84D430609549D29294) == 0x000008, "Member 'FSliderSetting::Default_6_B298B7704729AD84D430609549D29294' has a wrong offset!");
static_assert(offsetof(FSliderSetting, TextId_8_8C14B23B410B619570647ABB48DBD2AB) == 0x00000C, "Member 'FSliderSetting::TextId_8_8C14B23B410B619570647ABB48DBD2AB' has a wrong offset!");

}

