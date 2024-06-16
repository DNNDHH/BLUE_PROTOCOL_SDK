#pragma once

 

// Package: MapWidget_AreaName

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_AreaName.MapWidget_AreaName_C
// 0x0038 (0x02B0 - 0x0278)
class UMapWidget_AreaName_C final : public UUserWidget
{
public:
	class UImage*                                 MapIcon;                                           // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MapName;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              IconTexture;                                       // 0x0288(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Setup(const class FString& MapId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_AreaName_C">();
	}
	static class UMapWidget_AreaName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_AreaName_C>();
	}
};
static_assert(alignof(UMapWidget_AreaName_C) == 0x000008, "Wrong alignment on UMapWidget_AreaName_C");
static_assert(sizeof(UMapWidget_AreaName_C) == 0x0002B0, "Wrong size on UMapWidget_AreaName_C");
static_assert(offsetof(UMapWidget_AreaName_C, MapIcon) == 0x000278, "Member 'UMapWidget_AreaName_C::MapIcon' has a wrong offset!");
static_assert(offsetof(UMapWidget_AreaName_C, MapName) == 0x000280, "Member 'UMapWidget_AreaName_C::MapName' has a wrong offset!");
static_assert(offsetof(UMapWidget_AreaName_C, IconTexture) == 0x000288, "Member 'UMapWidget_AreaName_C::IconTexture' has a wrong offset!");

}

