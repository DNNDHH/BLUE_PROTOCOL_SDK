#pragma once

 

// Package: CharaCreate_DressVisibilitySwitchOn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharaCreate_DressVisibilitySwitchOn.CharaCreate_DressVisibilitySwitchOn_C
// 0x0038 (0x02B0 - 0x0278)
class UCharaCreate_DressVisibilitySwitchOn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                DressVisibilitySwitch;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    DressVisibilitySwitchLabel;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    DressVisibilitySwitchLabel2;                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_120;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSwitchOnPressed;                                 // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSwitchOnPressed__DelegateSignature();
	void ExecuteUbergraph_CharaCreate_DressVisibilitySwitchOn(int32 EntryPoint);
	void BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__DressVisibilitySwitch_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharaCreate_DressVisibilitySwitchOn_C">();
	}
	static class UCharaCreate_DressVisibilitySwitchOn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharaCreate_DressVisibilitySwitchOn_C>();
	}
};
static_assert(alignof(UCharaCreate_DressVisibilitySwitchOn_C) == 0x000008, "Wrong alignment on UCharaCreate_DressVisibilitySwitchOn_C");
static_assert(sizeof(UCharaCreate_DressVisibilitySwitchOn_C) == 0x0002B0, "Wrong size on UCharaCreate_DressVisibilitySwitchOn_C");
static_assert(offsetof(UCharaCreate_DressVisibilitySwitchOn_C, UberGraphFrame) == 0x000278, "Member 'UCharaCreate_DressVisibilitySwitchOn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilitySwitchOn_C, DressVisibilitySwitch) == 0x000280, "Member 'UCharaCreate_DressVisibilitySwitchOn_C::DressVisibilitySwitch' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilitySwitchOn_C, DressVisibilitySwitchLabel) == 0x000288, "Member 'UCharaCreate_DressVisibilitySwitchOn_C::DressVisibilitySwitchLabel' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilitySwitchOn_C, DressVisibilitySwitchLabel2) == 0x000290, "Member 'UCharaCreate_DressVisibilitySwitchOn_C::DressVisibilitySwitchLabel2' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilitySwitchOn_C, Image_120) == 0x000298, "Member 'UCharaCreate_DressVisibilitySwitchOn_C::Image_120' has a wrong offset!");
static_assert(offsetof(UCharaCreate_DressVisibilitySwitchOn_C, OnSwitchOnPressed) == 0x0002A0, "Member 'UCharaCreate_DressVisibilitySwitchOn_C::OnSwitchOnPressed' has a wrong offset!");

}

