#pragma once

 

// Package: DeadMarker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DeadMarker.DeadMarker_C
// 0x0030 (0x02B8 - 0x0288)
class UDeadMarker_C final : public USBDeadMarkerWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnimation;                                       // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnNumber1_0to99_C*                    CmnNumber1_0to99;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge1;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_22;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DeadMarker(int32 EntryPoint);
	void SetAutoRespawnRemainTime(float RemainTime);
	void DeadMarkerVisibility(bool bVisibility);
	void Construct();
	void Set_Auto_Respawn_Remain_Time_Internal(float RemainTime);
	void Dead_Marker_Visibility_Internal(bool bVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DeadMarker_C">();
	}
	static class UDeadMarker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeadMarker_C>();
	}
};
static_assert(alignof(UDeadMarker_C) == 0x000008, "Wrong alignment on UDeadMarker_C");
static_assert(sizeof(UDeadMarker_C) == 0x0002B8, "Wrong size on UDeadMarker_C");
static_assert(offsetof(UDeadMarker_C, UberGraphFrame) == 0x000288, "Member 'UDeadMarker_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDeadMarker_C, InAnimation) == 0x000290, "Member 'UDeadMarker_C::InAnimation' has a wrong offset!");
static_assert(offsetof(UDeadMarker_C, Bg1) == 0x000298, "Member 'UDeadMarker_C::Bg1' has a wrong offset!");
static_assert(offsetof(UDeadMarker_C, CmnNumber1_0to99) == 0x0002A0, "Member 'UDeadMarker_C::CmnNumber1_0to99' has a wrong offset!");
static_assert(offsetof(UDeadMarker_C, Gauge1) == 0x0002A8, "Member 'UDeadMarker_C::Gauge1' has a wrong offset!");
static_assert(offsetof(UDeadMarker_C, Image_22) == 0x0002B0, "Member 'UDeadMarker_C::Image_22' has a wrong offset!");

}

