#pragma once

 

// Package: ModelessDialogScreen

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ModelessDialogScreen.ModelessDialogScreen_C
// 0x0008 (0x0280 - 0x0278)
class UModelessDialogScreen_C final : public UUserWidget
{
public:
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ModelessDialogScreen_C">();
	}
	static class UModelessDialogScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UModelessDialogScreen_C>();
	}
};
static_assert(alignof(UModelessDialogScreen_C) == 0x000008, "Wrong alignment on UModelessDialogScreen_C");
static_assert(sizeof(UModelessDialogScreen_C) == 0x000280, "Wrong size on UModelessDialogScreen_C");
static_assert(offsetof(UModelessDialogScreen_C, UIBlocker) == 0x000278, "Member 'UModelessDialogScreen_C::UIBlocker' has a wrong offset!");

}

