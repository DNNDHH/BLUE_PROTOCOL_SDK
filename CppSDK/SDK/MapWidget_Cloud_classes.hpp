#pragma once

 

// Package: MapWidget_Cloud

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_Cloud.MapWidget_Cloud_C
// 0x0018 (0x02A8 - 0x0290)
class UMapWidget_Cloud_C final : public USBMapWidgetCloud
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Cloud;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         YPosCenter;                                        // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MapWidget_Cloud(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void OnCloudReachedLeftEdgeOfTheScreen();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_Cloud_C">();
	}
	static class UMapWidget_Cloud_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_Cloud_C>();
	}
};
static_assert(alignof(UMapWidget_Cloud_C) == 0x000008, "Wrong alignment on UMapWidget_Cloud_C");
static_assert(sizeof(UMapWidget_Cloud_C) == 0x0002A8, "Wrong size on UMapWidget_Cloud_C");
static_assert(offsetof(UMapWidget_Cloud_C, UberGraphFrame) == 0x000290, "Member 'UMapWidget_Cloud_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_Cloud_C, Cloud) == 0x000298, "Member 'UMapWidget_Cloud_C::Cloud' has a wrong offset!");
static_assert(offsetof(UMapWidget_Cloud_C, YPosCenter) == 0x0002A0, "Member 'UMapWidget_Cloud_C::YPosCenter' has a wrong offset!");

}

