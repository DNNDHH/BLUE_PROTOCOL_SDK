#pragma once

 

// Package: MapWidget_TimeTooltip

#include "Basic.hpp"

#include "E_MapWidget_Tooltip1_TextureTypes_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_TimeTooltip.MapWidget_TimeTooltip_C
// 0x0018 (0x0290 - 0x0278)
class UMapWidget_TimeTooltip_C final : public UUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   TimeLabel;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_MapWidget_Tooltip1_TextureTypes             TooltipTextureType;                                // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetName(const class FText& InText);
	void GetName(class FText* OutName);
	void SetTooltipTextureType(E_MapWidget_Tooltip1_TextureTypes InType);
	void SetEndTime(const struct FDateTime& DateTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_TimeTooltip_C">();
	}
	static class UMapWidget_TimeTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_TimeTooltip_C>();
	}
};
static_assert(alignof(UMapWidget_TimeTooltip_C) == 0x000008, "Wrong alignment on UMapWidget_TimeTooltip_C");
static_assert(sizeof(UMapWidget_TimeTooltip_C) == 0x000290, "Wrong size on UMapWidget_TimeTooltip_C");
static_assert(offsetof(UMapWidget_TimeTooltip_C, Image_0) == 0x000278, "Member 'UMapWidget_TimeTooltip_C::Image_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeTooltip_C, TimeLabel) == 0x000280, "Member 'UMapWidget_TimeTooltip_C::TimeLabel' has a wrong offset!");
static_assert(offsetof(UMapWidget_TimeTooltip_C, TooltipTextureType) == 0x000288, "Member 'UMapWidget_TimeTooltip_C::TooltipTextureType' has a wrong offset!");

}

