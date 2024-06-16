#pragma once

 

// Package: CharaCreate_DressVisibilityOnOffSwitch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharaCreate_DressVisibilityOnOffSwitch.CharaCreate_DressVisibilityOnOffSwitch_C
// 0x0038 (0x02B0 - 0x0278)
class UCharaCreate_DressVisibilityOnOffSwitch_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        DressVisibilityControlBtnSwitcher;                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreate_DressVisibilitySwitchOff_C* DressVisibilitySwitchOff;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreate_DressVisibilitySwitchOn_C* DressVisibilitySwitchOn;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDressVisibilitySwitchClicked;                    // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDressVisibilityOn;                               // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnDressVisibilitySwitchClicked__DelegateSignature(bool InIsDressVisibilitySwitchOn);
	void ExecuteUbergraph_CharaCreate_DressVisibilityOnOffSwitch(int32 EntryPoint);
	void BndEvt__DressVisibilitySwitchOn_K2Node_ComponentBoundEvent_4_OnSwitchOnPressed__DelegateSignature();
	void BndEvt__DressVisibilitySwitchOff_K2Node_ComponentBoundEvent_3_OnSwitchOffPressed__DelegateSignature();
	void SetActiveDressVisibilitySwitch(bool InIsDressVisibilitySwitchOnActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaCreate_DressVisibilityOnOffSwitch_C">();
	}
	static class UCharaCreate_DressVisibilityOnOffSwitch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaCreate_DressVisibilityOnOffSwitch_C>();
	}
};
static_assert(alignof(UCharaCreate_DressVisibilityOnOffSwitch_C) == 0x000008, "Wrong alignment on UCharaCreate_DressVisibilityOnOffSwitch_C");
static_assert(sizeof(UCharaCreate_DressVisibilityOnOffSwitch_C) == 0x0002B0, "Wrong size on UCharaCreate_DressVisibilityOnOffSwitch_C");
static_assert(offsetof(UCharaCreate_DressVisibilityOnOffSwitch_C, UberGraphFrame) == 0x000278, "Member 'UCharaCreate_DressVisibilityOnOffSwitch_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilityOnOffSwitch_C, DressVisibilityControlBtnSwitcher) == 0x000280, "Member 'UCharaCreate_DressVisibilityOnOffSwitch_C::DressVisibilityControlBtnSwitcher' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilityOnOffSwitch_C, DressVisibilitySwitchOff) == 0x000288, "Member 'UCharaCreate_DressVisibilityOnOffSwitch_C::DressVisibilitySwitchOff' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilityOnOffSwitch_C, DressVisibilitySwitchOn) == 0x000290, "Member 'UCharaCreate_DressVisibilityOnOffSwitch_C::DressVisibilitySwitchOn' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilityOnOffSwitch_C, OnDressVisibilitySwitchClicked) == 0x000298, "Member 'UCharaCreate_DressVisibilityOnOffSwitch_C::OnDressVisibilitySwitchClicked' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilityOnOffSwitch_C, IsDressVisibilityOn) == 0x0002A8, "Member 'UCharaCreate_DressVisibilityOnOffSwitch_C::IsDressVisibilityOn' has a wrong offset!");

}

