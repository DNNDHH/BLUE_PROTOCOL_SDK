#pragma once

 

// Package: EngramCannonHUD_TargetSite

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C
// 0x0060 (0x02D8 - 0x0278)
class UEngramCannonHUD_TargetSite_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Arrow_D;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_L;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_R;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_U;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TargetMarkShadow;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector                                NowPoint;                                          // 0x02A8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PrevPoint;                                         // 0x02B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaTime;                                         // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PitchLimitMax;                                     // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PitchLimitMin;                                     // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         YawLimitMax;                                       // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         YawLimitMin;                                       // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsNoiseAnim;                                       // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_EngramCannonHUD_TargetSite(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	struct FVector Get_Camera_Foward_Point(float Distance);
	void InitPoint();
	void UpdatePoint();
	void UpdateWidgetLocation(class UWidget* WidgetObject, const struct FVector& Location, float Delta_Time, float Move_Speed);
	void UpdateArrowVisible();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EngramCannonHUD_TargetSite_C">();
	}
	static class UEngramCannonHUD_TargetSite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEngramCannonHUD_TargetSite_C>();
	}
};
static_assert(alignof(UEngramCannonHUD_TargetSite_C) == 0x000008, "Wrong alignment on UEngramCannonHUD_TargetSite_C");
static_assert(sizeof(UEngramCannonHUD_TargetSite_C) == 0x0002D8, "Wrong size on UEngramCannonHUD_TargetSite_C");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, UberGraphFrame) == 0x000278, "Member 'UEngramCannonHUD_TargetSite_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, Arrow_D) == 0x000280, "Member 'UEngramCannonHUD_TargetSite_C::Arrow_D' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, Arrow_L) == 0x000288, "Member 'UEngramCannonHUD_TargetSite_C::Arrow_L' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, Arrow_R) == 0x000290, "Member 'UEngramCannonHUD_TargetSite_C::Arrow_R' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, Arrow_U) == 0x000298, "Member 'UEngramCannonHUD_TargetSite_C::Arrow_U' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, TargetMarkShadow) == 0x0002A0, "Member 'UEngramCannonHUD_TargetSite_C::TargetMarkShadow' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, NowPoint) == 0x0002A8, "Member 'UEngramCannonHUD_TargetSite_C::NowPoint' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, PrevPoint) == 0x0002B4, "Member 'UEngramCannonHUD_TargetSite_C::PrevPoint' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, DeltaTime) == 0x0002C0, "Member 'UEngramCannonHUD_TargetSite_C::DeltaTime' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, PitchLimitMax) == 0x0002C4, "Member 'UEngramCannonHUD_TargetSite_C::PitchLimitMax' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, PitchLimitMin) == 0x0002C8, "Member 'UEngramCannonHUD_TargetSite_C::PitchLimitMin' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, YawLimitMax) == 0x0002CC, "Member 'UEngramCannonHUD_TargetSite_C::YawLimitMax' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, YawLimitMin) == 0x0002D0, "Member 'UEngramCannonHUD_TargetSite_C::YawLimitMin' has a wrong offset!");
static_assert(offsetof(UEngramCannonHUD_TargetSite_C, IsNoiseAnim) == 0x0002D4, "Member 'UEngramCannonHUD_TargetSite_C::IsNoiseAnim' has a wrong offset!");

}

