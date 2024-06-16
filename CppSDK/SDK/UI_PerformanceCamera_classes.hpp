#pragma once

 

// Package: UI_PerformanceCamera

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_PerformanceCamera.UI_PerformanceCamera_C
// 0x0008 (0x0280 - 0x0278)
class UUI_PerformanceCamera_C final : public UUserWidget
{
public:
	class UImage*                                 Image_180;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_PerformanceCamera_C">();
	}
	static class UUI_PerformanceCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_PerformanceCamera_C>();
	}
};
static_assert(alignof(UUI_PerformanceCamera_C) == 0x000008, "Wrong alignment on UUI_PerformanceCamera_C");
static_assert(sizeof(UUI_PerformanceCamera_C) == 0x000280, "Wrong size on UUI_PerformanceCamera_C");
static_assert(offsetof(UUI_PerformanceCamera_C, Image_180) == 0x000278, "Member 'UUI_PerformanceCamera_C::Image_180' has a wrong offset!");

}

