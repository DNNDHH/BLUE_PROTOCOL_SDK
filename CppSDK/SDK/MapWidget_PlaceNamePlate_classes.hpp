#pragma once

 

// Package: MapWidget_PlaceNamePlate

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_PlaceNamePlate.MapWidget_PlaceNamePlate_C
// 0x0008 (0x0280 - 0x0278)
class UMapWidget_PlaceNamePlate_C final : public UUserWidget
{
public:
	class USBRuntimeTextBlock*                    TxtPlaceName;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(const class FText& InText);
	void SetTextId(class FName InTextID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_PlaceNamePlate_C">();
	}
	static class UMapWidget_PlaceNamePlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_PlaceNamePlate_C>();
	}
};
static_assert(alignof(UMapWidget_PlaceNamePlate_C) == 0x000008, "Wrong alignment on UMapWidget_PlaceNamePlate_C");
static_assert(sizeof(UMapWidget_PlaceNamePlate_C) == 0x000280, "Wrong size on UMapWidget_PlaceNamePlate_C");
static_assert(offsetof(UMapWidget_PlaceNamePlate_C, TxtPlaceName) == 0x000278, "Member 'UMapWidget_PlaceNamePlate_C::TxtPlaceName' has a wrong offset!");

}

