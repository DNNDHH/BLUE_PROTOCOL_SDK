#pragma once

 

// Package: HitIndicatorMarker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HitIndicatorMarker.HitIndicatorMarker_C
// 0x0028 (0x02A0 - 0x0278)
class UHitIndicatorMarker_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim1;                                             // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_Marker;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector                                HitLocation;                                       // 0x0290(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HitIndicatorMarker(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void UpdateDirection();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HitIndicatorMarker_C">();
	}
	static class UHitIndicatorMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHitIndicatorMarker_C>();
	}
};
static_assert(alignof(UHitIndicatorMarker_C) == 0x000008, "Wrong alignment on UHitIndicatorMarker_C");
static_assert(sizeof(UHitIndicatorMarker_C) == 0x0002A0, "Wrong size on UHitIndicatorMarker_C");
static_assert(offsetof(UHitIndicatorMarker_C, UberGraphFrame) == 0x000278, "Member 'UHitIndicatorMarker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHitIndicatorMarker_C, Anim1) == 0x000280, "Member 'UHitIndicatorMarker_C::Anim1' has a wrong offset!");
static_assert(offsetof(UHitIndicatorMarker_C, Image_Marker) == 0x000288, "Member 'UHitIndicatorMarker_C::Image_Marker' has a wrong offset!");
static_assert(offsetof(UHitIndicatorMarker_C, HitLocation) == 0x000290, "Member 'UHitIndicatorMarker_C::HitLocation' has a wrong offset!");

}

