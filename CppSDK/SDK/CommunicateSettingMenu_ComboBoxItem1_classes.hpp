#pragma once

 

// Package: CommunicateSettingMenu_ComboBoxItem1

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommunicateSettingMenu_ComboBoxItem1.CommunicateSettingMenu_ComboBoxItem1_C
// 0x0008 (0x0280 - 0x0278)
class UCommunicateSettingMenu_ComboBoxItem1_C final : public UUserWidget
{
public:
	class UTextBlock*                             ListText;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommunicateSettingMenu_ComboBoxItem1_C">();
	}
	static class UCommunicateSettingMenu_ComboBoxItem1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommunicateSettingMenu_ComboBoxItem1_C>();
	}
};
static_assert(alignof(UCommunicateSettingMenu_ComboBoxItem1_C) == 0x000008, "Wrong alignment on UCommunicateSettingMenu_ComboBoxItem1_C");
static_assert(sizeof(UCommunicateSettingMenu_ComboBoxItem1_C) == 0x000280, "Wrong size on UCommunicateSettingMenu_ComboBoxItem1_C");
static_assert(offsetof(UCommunicateSettingMenu_ComboBoxItem1_C, ListText) == 0x000278, "Member 'UCommunicateSettingMenu_ComboBoxItem1_C::ListText' has a wrong offset!");

}

