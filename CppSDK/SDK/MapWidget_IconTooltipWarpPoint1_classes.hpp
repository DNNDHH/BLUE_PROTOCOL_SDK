#pragma once

 

// Package: MapWidget_IconTooltipWarpPoint1

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_IconTooltipWarpPoint1.MapWidget_IconTooltipWarpPoint1_C
// 0x0010 (0x0288 - 0x0278)
class UMapWidget_IconTooltipWarpPoint1_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelName;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_IconTooltipWarpPoint1_C">();
	}
	static class UMapWidget_IconTooltipWarpPoint1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_IconTooltipWarpPoint1_C>();
	}
};
static_assert(alignof(UMapWidget_IconTooltipWarpPoint1_C) == 0x000008, "Wrong alignment on UMapWidget_IconTooltipWarpPoint1_C");
static_assert(sizeof(UMapWidget_IconTooltipWarpPoint1_C) == 0x000288, "Wrong size on UMapWidget_IconTooltipWarpPoint1_C");
static_assert(offsetof(UMapWidget_IconTooltipWarpPoint1_C, Image_0) == 0x000278, "Member 'UMapWidget_IconTooltipWarpPoint1_C::Image_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_IconTooltipWarpPoint1_C, LabelName) == 0x000280, "Member 'UMapWidget_IconTooltipWarpPoint1_C::LabelName' has a wrong offset!");

}

