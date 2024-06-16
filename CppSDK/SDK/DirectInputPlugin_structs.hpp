#pragma once

 

// Package: DirectInputPlugin

#include "Basic.hpp"

#include "InputCore_structs.hpp"


namespace SDK
{

// ScriptStruct DirectInputPlugin.DIPPresetSetting
// 0x0010 (0x0010 - 0x0000)
struct FDIPPresetSetting final
{
public:
	class FName                                   DeviceID;                                          // 0x0000(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   SettingName;                                       // 0x0008(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDIPPresetSetting) == 0x000004, "Wrong alignment on FDIPPresetSetting");
static_assert(sizeof(FDIPPresetSetting) == 0x000010, "Wrong size on FDIPPresetSetting");
static_assert(offsetof(FDIPPresetSetting, DeviceID) == 0x000000, "Member 'FDIPPresetSetting::DeviceID' has a wrong offset!");
static_assert(offsetof(FDIPPresetSetting, SettingName) == 0x000008, "Member 'FDIPPresetSetting::SettingName' has a wrong offset!");

// ScriptStruct DirectInputPlugin.DIPKeySettingEntry
// 0x0040 (0x0040 - 0x0000)
struct FDIPKeySettingEntry final
{
public:
	struct FKey                                   DirectInputKey;                                    // 0x0000(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                   XInputKey;                                         // 0x0018(0x0018)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ButtonNo;                                          // 0x0030(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bInverseAxis;                                      // 0x0034(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CB2[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NeutralOffset;                                     // 0x0038(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1CB3[0x4];                                     // 0x003C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FDIPKeySettingEntry) == 0x000008, "Wrong alignment on FDIPKeySettingEntry");
static_assert(sizeof(FDIPKeySettingEntry) == 0x000040, "Wrong size on FDIPKeySettingEntry");
static_assert(offsetof(FDIPKeySettingEntry, DirectInputKey) == 0x000000, "Member 'FDIPKeySettingEntry::DirectInputKey' has a wrong offset!");
static_assert(offsetof(FDIPKeySettingEntry, XInputKey) == 0x000018, "Member 'FDIPKeySettingEntry::XInputKey' has a wrong offset!");
static_assert(offsetof(FDIPKeySettingEntry, ButtonNo) == 0x000030, "Member 'FDIPKeySettingEntry::ButtonNo' has a wrong offset!");
static_assert(offsetof(FDIPKeySettingEntry, bInverseAxis) == 0x000034, "Member 'FDIPKeySettingEntry::bInverseAxis' has a wrong offset!");
static_assert(offsetof(FDIPKeySettingEntry, NeutralOffset) == 0x000038, "Member 'FDIPKeySettingEntry::NeutralOffset' has a wrong offset!");

// ScriptStruct DirectInputPlugin.DIPKeySettings
// 0x0018 (0x0018 - 0x0000)
struct FDIPKeySettings final
{
public:
	class FName                                   SettingName;                                       // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FDIPKeySettingEntry>            KeySettings;                                       // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDIPKeySettings) == 0x000008, "Wrong alignment on FDIPKeySettings");
static_assert(sizeof(FDIPKeySettings) == 0x000018, "Wrong size on FDIPKeySettings");
static_assert(offsetof(FDIPKeySettings, SettingName) == 0x000000, "Member 'FDIPKeySettings::SettingName' has a wrong offset!");
static_assert(offsetof(FDIPKeySettings, KeySettings) == 0x000008, "Member 'FDIPKeySettings::KeySettings' has a wrong offset!");

}

