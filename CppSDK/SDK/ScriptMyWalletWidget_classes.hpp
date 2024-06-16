#pragma once

 

// Package: ScriptMyWalletWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ScriptMyWalletWidget.ScriptMyWalletWidget_C
// 0x0008 (0x0280 - 0x0278)
class UScriptMyWalletWidget_C final : public UUserWidget
{
public:
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScriptMyWalletWidget_C">();
	}
	static class UScriptMyWalletWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScriptMyWalletWidget_C>();
	}
};
static_assert(alignof(UScriptMyWalletWidget_C) == 0x000008, "Wrong alignment on UScriptMyWalletWidget_C");
static_assert(sizeof(UScriptMyWalletWidget_C) == 0x000280, "Wrong size on UScriptMyWalletWidget_C");
static_assert(offsetof(UScriptMyWalletWidget_C, MyWalletWidget) == 0x000278, "Member 'UScriptMyWalletWidget_C::MyWalletWidget' has a wrong offset!");

}

