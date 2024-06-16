#pragma once

 

// Package: HitIndicator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HitIndicator.HitIndicator_C
// 0x0020 (0x0298 - 0x0278)
class UHitIndicator_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_Circle;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         MarkerHarfHeight;                                  // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HitIndicator(int32 EntryPoint);
	void Construct();
	void AddMarker(const struct FVector& HitLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HitIndicator_C">();
	}
	static class UHitIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHitIndicator_C>();
	}
};
static_assert(alignof(UHitIndicator_C) == 0x000008, "Wrong alignment on UHitIndicator_C");
static_assert(sizeof(UHitIndicator_C) == 0x000298, "Wrong size on UHitIndicator_C");
static_assert(offsetof(UHitIndicator_C, UberGraphFrame) == 0x000278, "Member 'UHitIndicator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHitIndicator_C, Image_Circle) == 0x000280, "Member 'UHitIndicator_C::Image_Circle' has a wrong offset!");
static_assert(offsetof(UHitIndicator_C, Overlay_0) == 0x000288, "Member 'UHitIndicator_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UHitIndicator_C, MarkerHarfHeight) == 0x000290, "Member 'UHitIndicator_C::MarkerHarfHeight' has a wrong offset!");

}

