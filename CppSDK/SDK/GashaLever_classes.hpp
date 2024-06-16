#pragma once

 

// Package: GashaLever

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GashaLever.GashaLever_C
// 0x0048 (0x02C0 - 0x0278)
class UGashaLever_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPush;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Btn;                                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchBg;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventRotateAnimFinished;                           // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bHovered;                                          // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bClose;                                            // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void EventRotateAnimFinished__DelegateSignature();
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_GashaLever(int32 EntryPoint);
	void BndEvt__GashaLever_SBButton_C_305_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__GashaLever_SBButton_C_305_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__GashaLever_SBButton_C_305_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__GashaLever_SBButton_C_305_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__GashaLever_SBButton_C_305_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GashaLever_C">();
	}
	static class UGashaLever_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGashaLever_C>();
	}
};
static_assert(alignof(UGashaLever_C) == 0x000008, "Wrong alignment on UGashaLever_C");
static_assert(sizeof(UGashaLever_C) == 0x0002C0, "Wrong size on UGashaLever_C");
static_assert(offsetof(UGashaLever_C, UberGraphFrame) == 0x000278, "Member 'UGashaLever_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGashaLever_C, AnimPush) == 0x000280, "Member 'UGashaLever_C::AnimPush' has a wrong offset!");
static_assert(offsetof(UGashaLever_C, Btn) == 0x000288, "Member 'UGashaLever_C::Btn' has a wrong offset!");
static_assert(offsetof(UGashaLever_C, SwitchBg) == 0x000290, "Member 'UGashaLever_C::SwitchBg' has a wrong offset!");
static_assert(offsetof(UGashaLever_C, EventRotateAnimFinished) == 0x000298, "Member 'UGashaLever_C::EventRotateAnimFinished' has a wrong offset!");
static_assert(offsetof(UGashaLever_C, EventOnClicked) == 0x0002A8, "Member 'UGashaLever_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UGashaLever_C, bHovered) == 0x0002B8, "Member 'UGashaLever_C::bHovered' has a wrong offset!");
static_assert(offsetof(UGashaLever_C, bClose) == 0x0002B9, "Member 'UGashaLever_C::bClose' has a wrong offset!");

}

