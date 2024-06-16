#pragma once

 

// Package: CmnExpOverflowLevelMark

#include "Basic.hpp"


namespace SDK::Params
{

// Function CmnExpOverflowLevelMark.CmnExpOverflowLevelMark_C.SwitchImage
// 0x000C (0x000C - 0x0000)
struct CmnExpOverflowLevelMark_C_SwitchImage final
{
public:
	int32                                         InActiveIndex;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CmnExpOverflowLevelMark_C_SwitchImage) == 0x000004, "Wrong alignment on CmnExpOverflowLevelMark_C_SwitchImage");
static_assert(sizeof(CmnExpOverflowLevelMark_C_SwitchImage) == 0x00000C, "Wrong size on CmnExpOverflowLevelMark_C_SwitchImage");
static_assert(offsetof(CmnExpOverflowLevelMark_C_SwitchImage, InActiveIndex) == 0x000000, "Member 'CmnExpOverflowLevelMark_C_SwitchImage::InActiveIndex' has a wrong offset!");
static_assert(offsetof(CmnExpOverflowLevelMark_C_SwitchImage, CallFunc_Clamp_ReturnValue) == 0x000004, "Member 'CmnExpOverflowLevelMark_C_SwitchImage::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnExpOverflowLevelMark_C_SwitchImage, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'CmnExpOverflowLevelMark_C_SwitchImage::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

