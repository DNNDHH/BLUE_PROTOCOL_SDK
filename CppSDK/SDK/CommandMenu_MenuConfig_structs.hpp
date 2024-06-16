#pragma once

 

// Package: CommandMenu_MenuConfig

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK
{

// UserDefinedStruct CommandMenu_MenuConfig.CommandMenu_MenuConfig
// 0x0018 (0x0018 - 0x0000)
struct FCommandMenu_MenuConfig final
{
public:
	ESBCommandMenuType                            MenuType_22_DCEF3F924E35C5142D21FFB26552D7DF;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54F4[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Icon_15_3CC3967A422E9D6C06592E838E9D1B77;          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TextID1_20_CFAB097840AE623747D1D491C893DB7B;       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FCommandMenu_MenuConfig) == 0x000008, "Wrong alignment on FCommandMenu_MenuConfig");
static_assert(sizeof(FCommandMenu_MenuConfig) == 0x000018, "Wrong size on FCommandMenu_MenuConfig");
static_assert(offsetof(FCommandMenu_MenuConfig, MenuType_22_DCEF3F924E35C5142D21FFB26552D7DF) == 0x000000, "Member 'FCommandMenu_MenuConfig::MenuType_22_DCEF3F924E35C5142D21FFB26552D7DF' has a wrong offset!");
static_assert(offsetof(FCommandMenu_MenuConfig, Icon_15_3CC3967A422E9D6C06592E838E9D1B77) == 0x000008, "Member 'FCommandMenu_MenuConfig::Icon_15_3CC3967A422E9D6C06592E838E9D1B77' has a wrong offset!");
static_assert(offsetof(FCommandMenu_MenuConfig, TextID1_20_CFAB097840AE623747D1D491C893DB7B) == 0x000010, "Member 'FCommandMenu_MenuConfig::TextID1_20_CFAB097840AE623747D1D491C893DB7B' has a wrong offset!");

}

