#pragma once

 

// Package: ChatLogIcon1

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatLogIcon1.ChatLogIcon1_C
// 0x0008 (0x0280 - 0x0278)
class UChatLogIcon1_C final : public UUserWidget
{
public:
	class UWidgetSwitcher*                        SwitchIcon;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetIcon(ESBChatLogType ChatLogType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatLogIcon1_C">();
	}
	static class UChatLogIcon1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatLogIcon1_C>();
	}
};
static_assert(alignof(UChatLogIcon1_C) == 0x000008, "Wrong alignment on UChatLogIcon1_C");
static_assert(sizeof(UChatLogIcon1_C) == 0x000280, "Wrong size on UChatLogIcon1_C");
static_assert(offsetof(UChatLogIcon1_C, SwitchIcon) == 0x000278, "Member 'UChatLogIcon1_C::SwitchIcon' has a wrong offset!");

}

