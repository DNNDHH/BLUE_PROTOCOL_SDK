#pragma once

 

// Package: DemoHUD

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DemoHUD.DemoHUD_C
// 0x0008 (0x0280 - 0x0278)
class UDemoHUD_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DemoHUD_C">();
	}
	static class UDemoHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDemoHUD_C>();
	}
};
static_assert(alignof(UDemoHUD_C) == 0x000008, "Wrong alignment on UDemoHUD_C");
static_assert(sizeof(UDemoHUD_C) == 0x000280, "Wrong size on UDemoHUD_C");
static_assert(offsetof(UDemoHUD_C, BG) == 0x000278, "Member 'UDemoHUD_C::BG' has a wrong offset!");

}

