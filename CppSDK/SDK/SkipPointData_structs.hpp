#pragma once

 

// Package: SkipPointData

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct SkipPointData.SkipPointData
// 0x0018 (0x0018 - 0x0000)
struct FSkipPointData final
{
public:
	float                                         CurrentSkipTime_8_A41C73CB47733200444304A7544C808D; // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FixedStopDisplay_11_C6CB8D3641938652369E79B892AA7D5A; // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D8A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       NextAnimation_12_4100FC0E4F1CA7F639B0ECBA9E8080D6; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NextAnimationTime_13_3C75215348A5BC7319625B96FCA7149C; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSkipPointData) == 0x000008, "Wrong alignment on FSkipPointData");
static_assert(sizeof(FSkipPointData) == 0x000018, "Wrong size on FSkipPointData");
static_assert(offsetof(FSkipPointData, CurrentSkipTime_8_A41C73CB47733200444304A7544C808D) == 0x000000, "Member 'FSkipPointData::CurrentSkipTime_8_A41C73CB47733200444304A7544C808D' has a wrong offset!");
static_assert(offsetof(FSkipPointData, FixedStopDisplay_11_C6CB8D3641938652369E79B892AA7D5A) == 0x000004, "Member 'FSkipPointData::FixedStopDisplay_11_C6CB8D3641938652369E79B892AA7D5A' has a wrong offset!");
static_assert(offsetof(FSkipPointData, NextAnimation_12_4100FC0E4F1CA7F639B0ECBA9E8080D6) == 0x000008, "Member 'FSkipPointData::NextAnimation_12_4100FC0E4F1CA7F639B0ECBA9E8080D6' has a wrong offset!");
static_assert(offsetof(FSkipPointData, NextAnimationTime_13_3C75215348A5BC7319625B96FCA7149C) == 0x000010, "Member 'FSkipPointData::NextAnimationTime_13_3C75215348A5BC7319625B96FCA7149C' has a wrong offset!");

}

