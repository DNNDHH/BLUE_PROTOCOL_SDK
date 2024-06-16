#pragma once

 

// Package: P020_CountIcon_Parts

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass P020_CountIcon_Parts.P020_CountIcon_Parts_C
// 0x0030 (0x02A8 - 0x0278)
class UP020_CountIcon_Parts_C final : public USBP020_CountIcon_PartsWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimEffect;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIconOnOff;                                     // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           AnimIcon;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IconVisibility;                                    // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_P020_CountIcon_Parts(int32 EntryPoint);
	void OnSetONOFF(bool bOn);
	void Construct();
	void SetONOFF(bool bOn);
	void EffectAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P020_CountIcon_Parts_C">();
	}
	static class UP020_CountIcon_Parts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP020_CountIcon_Parts_C>();
	}
};
static_assert(alignof(UP020_CountIcon_Parts_C) == 0x000008, "Wrong alignment on UP020_CountIcon_Parts_C");
static_assert(sizeof(UP020_CountIcon_Parts_C) == 0x0002A8, "Wrong size on UP020_CountIcon_Parts_C");
static_assert(offsetof(UP020_CountIcon_Parts_C, UberGraphFrame) == 0x000278, "Member 'UP020_CountIcon_Parts_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UP020_CountIcon_Parts_C, AnimEffect) == 0x000280, "Member 'UP020_CountIcon_Parts_C::AnimEffect' has a wrong offset!");
static_assert(offsetof(UP020_CountIcon_Parts_C, AnimIconOnOff) == 0x000288, "Member 'UP020_CountIcon_Parts_C::AnimIconOnOff' has a wrong offset!");
static_assert(offsetof(UP020_CountIcon_Parts_C, AnimIcon) == 0x000290, "Member 'UP020_CountIcon_Parts_C::AnimIcon' has a wrong offset!");
static_assert(offsetof(UP020_CountIcon_Parts_C, BG) == 0x000298, "Member 'UP020_CountIcon_Parts_C::BG' has a wrong offset!");
static_assert(offsetof(UP020_CountIcon_Parts_C, IconVisibility) == 0x0002A0, "Member 'UP020_CountIcon_Parts_C::IconVisibility' has a wrong offset!");

}

