#pragma once

 

// Package: MapWidget_IconTooltipWarpPoint2

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_IconTooltipWarpPoint2.MapWidget_IconTooltipWarpPoint2_C
// 0x0028 (0x02A0 - 0x0278)
class UMapWidget_IconTooltipWarpPoint2_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_94;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_347;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelInfo;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelName;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(const class FText& InText);
	void SetInfo(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_IconTooltipWarpPoint2_C">();
	}
	static class UMapWidget_IconTooltipWarpPoint2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_IconTooltipWarpPoint2_C>();
	}
};
static_assert(alignof(UMapWidget_IconTooltipWarpPoint2_C) == 0x000008, "Wrong alignment on UMapWidget_IconTooltipWarpPoint2_C");
static_assert(sizeof(UMapWidget_IconTooltipWarpPoint2_C) == 0x0002A0, "Wrong size on UMapWidget_IconTooltipWarpPoint2_C");
static_assert(offsetof(UMapWidget_IconTooltipWarpPoint2_C, BG) == 0x000278, "Member 'UMapWidget_IconTooltipWarpPoint2_C::BG' has a wrong offset!");
static_assert(offsetof(UMapWidget_IconTooltipWarpPoint2_C, Image_94) == 0x000280, "Member 'UMapWidget_IconTooltipWarpPoint2_C::Image_94' has a wrong offset!");
static_assert(offsetof(UMapWidget_IconTooltipWarpPoint2_C, Image_347) == 0x000288, "Member 'UMapWidget_IconTooltipWarpPoint2_C::Image_347' has a wrong offset!");
static_assert(offsetof(UMapWidget_IconTooltipWarpPoint2_C, LabelInfo) == 0x000290, "Member 'UMapWidget_IconTooltipWarpPoint2_C::LabelInfo' has a wrong offset!");
static_assert(offsetof(UMapWidget_IconTooltipWarpPoint2_C, LabelName) == 0x000298, "Member 'UMapWidget_IconTooltipWarpPoint2_C::LabelName' has a wrong offset!");

}

