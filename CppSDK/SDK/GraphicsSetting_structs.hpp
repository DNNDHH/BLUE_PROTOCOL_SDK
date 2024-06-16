#pragma once

 

// Package: GraphicsSetting

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct GraphicsSetting.GraphicsSetting
// 0x0028 (0x0028 - 0x0000)
struct FGraphicsSetting final
{
public:
	int32                                         ScalingResolution_2_A4D03BCE4BFB4338B2B32292A6C82572; // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Far_5_5C9D556F4FACDB7D013F389AE2543F40;            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Antialiasing_8_6E5C97B043D763FB743FBB9D98B86DA8;   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PostProcess_10_0B2923D64673F2CD15F1CB8E3A8A0BDC;   // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Shadow_12_D80E016342124BF77C16CFB85C47A792;        // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Texture_18_A85F5B214A15A5D85653FAA7D60F2533;       // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Effect_17_61C67DFB49B2F5C5BB2983A13FE089EB;        // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Foliage_23_A7700DFB4F8DA765AFD75BA720EFC3B3;       // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TextId_20_2B5ACF5D4AFD7EBBE637E7AA2BBFFBC1;        // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EnemyDistance_28_FD5BB85F4C68804DDDA755BB21808072; // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FGraphicsSetting) == 0x000004, "Wrong alignment on FGraphicsSetting");
static_assert(sizeof(FGraphicsSetting) == 0x000028, "Wrong size on FGraphicsSetting");
static_assert(offsetof(FGraphicsSetting, ScalingResolution_2_A4D03BCE4BFB4338B2B32292A6C82572) == 0x000000, "Member 'FGraphicsSetting::ScalingResolution_2_A4D03BCE4BFB4338B2B32292A6C82572' has a wrong offset!");
static_assert(offsetof(FGraphicsSetting, Far_5_5C9D556F4FACDB7D013F389AE2543F40) == 0x000004, "Member 'FGraphicsSetting::Far_5_5C9D556F4FACDB7D013F389AE2543F40' has a wrong offset!");
static_assert(offsetof(FGraphicsSetting, Antialiasing_8_6E5C97B043D763FB743FBB9D98B86DA8) == 0x000008, "Member 'FGraphicsSetting::Antialiasing_8_6E5C97B043D763FB743FBB9D98B86DA8' has a wrong offset!");
static_assert(offsetof(FGraphicsSetting, PostProcess_10_0B2923D64673F2CD15F1CB8E3A8A0BDC) == 0x00000C, "Member 'FGraphicsSetting::PostProcess_10_0B2923D64673F2CD15F1CB8E3A8A0BDC' has a wrong offset!");
static_assert(offsetof(FGraphicsSetting, Shadow_12_D80E016342124BF77C16CFB85C47A792) == 0x000010, "Member 'FGraphicsSetting::Shadow_12_D80E016342124BF77C16CFB85C47A792' has a wrong offset!");
static_assert(offsetof(FGraphicsSetting, Texture_18_A85F5B214A15A5D85653FAA7D60F2533) == 0x000014, "Member 'FGraphicsSetting::Texture_18_A85F5B214A15A5D85653FAA7D60F2533' has a wrong offset!");
static_assert(offsetof(FGraphicsSetting, Effect_17_61C67DFB49B2F5C5BB2983A13FE089EB) == 0x000018, "Member 'FGraphicsSetting::Effect_17_61C67DFB49B2F5C5BB2983A13FE089EB' has a wrong offset!");
static_assert(offsetof(FGraphicsSetting, Foliage_23_A7700DFB4F8DA765AFD75BA720EFC3B3) == 0x00001C, "Member 'FGraphicsSetting::Foliage_23_A7700DFB4F8DA765AFD75BA720EFC3B3' has a wrong offset!");
static_assert(offsetof(FGraphicsSetting, TextId_20_2B5ACF5D4AFD7EBBE637E7AA2BBFFBC1) == 0x000020, "Member 'FGraphicsSetting::TextId_20_2B5ACF5D4AFD7EBBE637E7AA2BBFFBC1' has a wrong offset!");
static_assert(offsetof(FGraphicsSetting, EnemyDistance_28_FD5BB85F4C68804DDDA755BB21808072) == 0x000024, "Member 'FGraphicsSetting::EnemyDistance_28_FD5BB85F4C68804DDDA755BB21808072' has a wrong offset!");

}

