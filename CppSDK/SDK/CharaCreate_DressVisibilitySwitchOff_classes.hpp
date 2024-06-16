#pragma once

 

// Package: CharaCreate_DressVisibilitySwitchOff

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharaCreate_DressVisibilitySwitchOff.CharaCreate_DressVisibilitySwitchOff_C
// 0x0030 (0x02A8 - 0x0278)
class UCharaCreate_DressVisibilitySwitchOff_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                DressVisibilitySwitch;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    DressVisibilitySwitchLabel;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    DressVisibilitySwitchLabel2;                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSwitchOffPressed;                                // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSwitchOffPressed__DelegateSignature();
	void ExecuteUbergraph_CharaCreate_DressVisibilitySwitchOff(int32 EntryPoint);
	void BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaCreate_DressVisibilitySwitchOff_C">();
	}
	static class UCharaCreate_DressVisibilitySwitchOff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaCreate_DressVisibilitySwitchOff_C>();
	}
};
static_assert(alignof(UCharaCreate_DressVisibilitySwitchOff_C) == 0x000008, "Wrong alignment on UCharaCreate_DressVisibilitySwitchOff_C");
static_assert(sizeof(UCharaCreate_DressVisibilitySwitchOff_C) == 0x0002A8, "Wrong size on UCharaCreate_DressVisibilitySwitchOff_C");
static_assert(offsetof(UCharaCreate_DressVisibilitySwitchOff_C, UberGraphFrame) == 0x000278, "Member 'UCharaCreate_DressVisibilitySwitchOff_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilitySwitchOff_C, DressVisibilitySwitch) == 0x000280, "Member 'UCharaCreate_DressVisibilitySwitchOff_C::DressVisibilitySwitch' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilitySwitchOff_C, DressVisibilitySwitchLabel) == 0x000288, "Member 'UCharaCreate_DressVisibilitySwitchOff_C::DressVisibilitySwitchLabel' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilitySwitchOff_C, DressVisibilitySwitchLabel2) == 0x000290, "Member 'UCharaCreate_DressVisibilitySwitchOff_C::DressVisibilitySwitchLabel2' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilitySwitchOff_C, OnSwitchOffPressed) == 0x000298, "Member 'UCharaCreate_DressVisibilitySwitchOff_C::OnSwitchOffPressed' has a wrong offset!");

}

