#pragma once

 

// Package: MountShortcutIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MountShortcutIcon.MountShortcutIcon_C
// 0x0048 (0x02C0 - 0x0278)
class UMountShortcutIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimChargeEnd;                                     // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Effect;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge1;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch1;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextKeyIcon_C*                       TxtKey;                                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WaitTime;                                          // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIconIn;                                           // 0x02BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bInterval;                                         // 0x02BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MountShortcutIcon(int32 EntryPoint);
	void Destruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature();
	void BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature();
	void BndEvt__MountShortcutIcon_txtKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature();
	void UpdateInterval();
	void UpdateKeyText();
	void PlayAnimChargeEnd();
	void UpdateIconTexture();
	void PlayAnimInOut(bool bin);
	void SetSwitch(int32 Param_Index);
	void CheckSwitchIndex(int32 Param_Index, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MountShortcutIcon_C">();
	}
	static class UMountShortcutIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMountShortcutIcon_C>();
	}
};
static_assert(alignof(UMountShortcutIcon_C) == 0x000008, "Wrong alignment on UMountShortcutIcon_C");
static_assert(sizeof(UMountShortcutIcon_C) == 0x0002C0, "Wrong size on UMountShortcutIcon_C");
static_assert(offsetof(UMountShortcutIcon_C, UberGraphFrame) == 0x000278, "Member 'UMountShortcutIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMountShortcutIcon_C, AnimInOut) == 0x000280, "Member 'UMountShortcutIcon_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UMountShortcutIcon_C, AnimChargeEnd) == 0x000288, "Member 'UMountShortcutIcon_C::AnimChargeEnd' has a wrong offset!");
static_assert(offsetof(UMountShortcutIcon_C, Effect) == 0x000290, "Member 'UMountShortcutIcon_C::Effect' has a wrong offset!");
static_assert(offsetof(UMountShortcutIcon_C, Gauge1) == 0x000298, "Member 'UMountShortcutIcon_C::Gauge1' has a wrong offset!");
static_assert(offsetof(UMountShortcutIcon_C, Switch1) == 0x0002A0, "Member 'UMountShortcutIcon_C::Switch1' has a wrong offset!");
static_assert(offsetof(UMountShortcutIcon_C, TxtKey) == 0x0002A8, "Member 'UMountShortcutIcon_C::TxtKey' has a wrong offset!");
static_assert(offsetof(UMountShortcutIcon_C, GaugeMat) == 0x0002B0, "Member 'UMountShortcutIcon_C::GaugeMat' has a wrong offset!");
static_assert(offsetof(UMountShortcutIcon_C, WaitTime) == 0x0002B8, "Member 'UMountShortcutIcon_C::WaitTime' has a wrong offset!");
static_assert(offsetof(UMountShortcutIcon_C, bIconIn) == 0x0002BC, "Member 'UMountShortcutIcon_C::bIconIn' has a wrong offset!");
static_assert(offsetof(UMountShortcutIcon_C, bInterval) == 0x0002BD, "Member 'UMountShortcutIcon_C::bInterval' has a wrong offset!");

}

