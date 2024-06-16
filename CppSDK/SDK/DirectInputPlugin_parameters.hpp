#pragma once

 

// Package: DirectInputPlugin

#include "Basic.hpp"


namespace SDK::Params
{

// Function DirectInputPlugin.IDirectInputPluginSettings.GetSettings
// 0x0008 (0x0008 - 0x0000)
struct IDirectInputPluginSettings_GetSettings final
{
public:
	class UIDirectInputPluginSettings*            ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(IDirectInputPluginSettings_GetSettings) == 0x000008, "Wrong alignment on IDirectInputPluginSettings_GetSettings");
static_assert(sizeof(IDirectInputPluginSettings_GetSettings) == 0x000008, "Wrong size on IDirectInputPluginSettings_GetSettings");
static_assert(offsetof(IDirectInputPluginSettings_GetSettings, ReturnValue) == 0x000000, "Member 'IDirectInputPluginSettings_GetSettings::ReturnValue' has a wrong offset!");

}

