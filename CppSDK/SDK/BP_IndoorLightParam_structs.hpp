#pragma once

 

// Package: BP_IndoorLightParam

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct BP_IndoorLightParam.BP_IndoorLightParam
// 0x0024 (0x0024 - 0x0000)
struct FBP_IndoorLightParam final
{
public:
	int32                                         GameTimeHour_17_5581CB894D80C67ED37CBF92A4A0D74B;  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GameTimeMin_19_A52B3DFC4628542C13CA6E9B9971A933;   // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FadeTimeMin_13_B03B350B4E1B509B4663239F4EBFCC8C;   // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color_7_4DEC8730467D573419CC5EB36875890B;          // 0x000C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightIntensity_21_09B7313E4DECE240220CF29DBD00B887; // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EmissiveScale_23_20A4251A4289F6AACB0C1DA2B576339E; // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FBP_IndoorLightParam) == 0x000004, "Wrong alignment on FBP_IndoorLightParam");
static_assert(sizeof(FBP_IndoorLightParam) == 0x000024, "Wrong size on FBP_IndoorLightParam");
static_assert(offsetof(FBP_IndoorLightParam, GameTimeHour_17_5581CB894D80C67ED37CBF92A4A0D74B) == 0x000000, "Member 'FBP_IndoorLightParam::GameTimeHour_17_5581CB894D80C67ED37CBF92A4A0D74B' has a wrong offset!");
static_assert(offsetof(FBP_IndoorLightParam, GameTimeMin_19_A52B3DFC4628542C13CA6E9B9971A933) == 0x000004, "Member 'FBP_IndoorLightParam::GameTimeMin_19_A52B3DFC4628542C13CA6E9B9971A933' has a wrong offset!");
static_assert(offsetof(FBP_IndoorLightParam, FadeTimeMin_13_B03B350B4E1B509B4663239F4EBFCC8C) == 0x000008, "Member 'FBP_IndoorLightParam::FadeTimeMin_13_B03B350B4E1B509B4663239F4EBFCC8C' has a wrong offset!");
static_assert(offsetof(FBP_IndoorLightParam, Color_7_4DEC8730467D573419CC5EB36875890B) == 0x00000C, "Member 'FBP_IndoorLightParam::Color_7_4DEC8730467D573419CC5EB36875890B' has a wrong offset!");
static_assert(offsetof(FBP_IndoorLightParam, LightIntensity_21_09B7313E4DECE240220CF29DBD00B887) == 0x00001C, "Member 'FBP_IndoorLightParam::LightIntensity_21_09B7313E4DECE240220CF29DBD00B887' has a wrong offset!");
static_assert(offsetof(FBP_IndoorLightParam, EmissiveScale_23_20A4251A4289F6AACB0C1DA2B576339E) == 0x000020, "Member 'FBP_IndoorLightParam::EmissiveScale_23_20A4251A4289F6AACB0C1DA2B576339E' has a wrong offset!");

}

