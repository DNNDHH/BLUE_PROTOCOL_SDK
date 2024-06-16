#pragma once

 

// Package: PointClimbingClimbingPoint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PointClimbingClimbingPoint.PointClimbingClimbingPoint_C
// 0x0020 (0x0298 - 0x0278)
class UPointClimbingClimbingPoint_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Gauge;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_0;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PointerIcon;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PointClimbingClimbingPoint(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetPointLocation(const struct FVector& Location, bool* Condition);
	void SetPointLocation2D(const struct FVector2D& Location);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PointClimbingClimbingPoint_C">();
	}
	static class UPointClimbingClimbingPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPointClimbingClimbingPoint_C>();
	}
};
static_assert(alignof(UPointClimbingClimbingPoint_C) == 0x000008, "Wrong alignment on UPointClimbingClimbingPoint_C");
static_assert(sizeof(UPointClimbingClimbingPoint_C) == 0x000298, "Wrong size on UPointClimbingClimbingPoint_C");
static_assert(offsetof(UPointClimbingClimbingPoint_C, UberGraphFrame) == 0x000278, "Member 'UPointClimbingClimbingPoint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPointClimbingClimbingPoint_C, Gauge) == 0x000280, "Member 'UPointClimbingClimbingPoint_C::Gauge' has a wrong offset!");
static_assert(offsetof(UPointClimbingClimbingPoint_C, Overlay_0) == 0x000288, "Member 'UPointClimbingClimbingPoint_C::Overlay_0' has a wrong offset!");
static_assert(offsetof(UPointClimbingClimbingPoint_C, PointerIcon) == 0x000290, "Member 'UPointClimbingClimbingPoint_C::PointerIcon' has a wrong offset!");

}

