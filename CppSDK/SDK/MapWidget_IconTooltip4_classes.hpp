#pragma once

 

// Package: MapWidget_IconTooltip4

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_IconTooltip4.MapWidget_IconTooltip4_C
// 0x0010 (0x0288 - 0x0278)
class UMapWidget_IconTooltip4_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NameLabel;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetName(const class FText& InText);
	void SetDesc(const class FText& InDesc);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_IconTooltip4_C">();
	}
	static class UMapWidget_IconTooltip4_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_IconTooltip4_C>();
	}
};
static_assert(alignof(UMapWidget_IconTooltip4_C) == 0x000008, "Wrong alignment on UMapWidget_IconTooltip4_C");
static_assert(sizeof(UMapWidget_IconTooltip4_C) == 0x000288, "Wrong size on UMapWidget_IconTooltip4_C");
static_assert(offsetof(UMapWidget_IconTooltip4_C, Image_0) == 0x000278, "Member 'UMapWidget_IconTooltip4_C::Image_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_IconTooltip4_C, NameLabel) == 0x000280, "Member 'UMapWidget_IconTooltip4_C::NameLabel' has a wrong offset!");

}

