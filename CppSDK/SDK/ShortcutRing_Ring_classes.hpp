#pragma once

 

// Package: ShortcutRing_Ring

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShortcutRing_Ring.ShortcutRing_Ring_C
// 0x0080 (0x0378 - 0x02F8)
class UShortcutRing_Ring_C final : public USBShortcutRingRing
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0300(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UShortcutringIcon_C*                    ShortcutringIcon_0;                                // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortcutringIcon_C*                    ShortcutringIcon_1;                                // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortcutringIcon_C*                    ShortcutringIcon_2;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortcutringIcon_C*                    ShortcutringIcon_3;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortcutringIcon_C*                    ShortcutringIcon_4;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortcutringIcon_C*                    ShortcutringIcon_5;                                // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortcutringIcon_C*                    ShortcutringIcon_6;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShortcutringIcon_C*                    ShortcutringIcon_7;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnInOutFinished;                                   // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickRight;                                      // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnInOutFinished__DelegateSignature(float AnimationCurrentTime);
	void OnClick__DelegateSignature(int32 Param_Index);
	void OnClickRight__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_ShortcutRing_Ring(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void WidgetAnimationEvt_InOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_15_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_14_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_13_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_12_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_11_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_10_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_9_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_8_OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_7_K2Node_ComponentBoundEvent_7_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_6_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_5_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_4_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
	void BndEvt__ShortcutringIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
	void PlayAnimIn();
	void PlayAnimOut();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutRing_Ring_C">();
	}
	static class UShortcutRing_Ring_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutRing_Ring_C>();
	}
};
static_assert(alignof(UShortcutRing_Ring_C) == 0x000008, "Wrong alignment on UShortcutRing_Ring_C");
static_assert(sizeof(UShortcutRing_Ring_C) == 0x000378, "Wrong size on UShortcutRing_Ring_C");
static_assert(offsetof(UShortcutRing_Ring_C, UberGraphFrame) == 0x0002F8, "Member 'UShortcutRing_Ring_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UShortcutRing_Ring_C, InOut) == 0x000300, "Member 'UShortcutRing_Ring_C::InOut' has a wrong offset!");
static_assert(offsetof(UShortcutRing_Ring_C, ShortcutringIcon_0) == 0x000308, "Member 'UShortcutRing_Ring_C::ShortcutringIcon_0' has a wrong offset!");
static_assert(offsetof(UShortcutRing_Ring_C, ShortcutringIcon_1) == 0x000310, "Member 'UShortcutRing_Ring_C::ShortcutringIcon_1' has a wrong offset!");
static_assert(offsetof(UShortcutRing_Ring_C, ShortcutringIcon_2) == 0x000318, "Member 'UShortcutRing_Ring_C::ShortcutringIcon_2' has a wrong offset!");
static_assert(offsetof(UShortcutRing_Ring_C, ShortcutringIcon_3) == 0x000320, "Member 'UShortcutRing_Ring_C::ShortcutringIcon_3' has a wrong offset!");
static_assert(offsetof(UShortcutRing_Ring_C, ShortcutringIcon_4) == 0x000328, "Member 'UShortcutRing_Ring_C::ShortcutringIcon_4' has a wrong offset!");
static_assert(offsetof(UShortcutRing_Ring_C, ShortcutringIcon_5) == 0x000330, "Member 'UShortcutRing_Ring_C::ShortcutringIcon_5' has a wrong offset!");
static_assert(offsetof(UShortcutRing_Ring_C, ShortcutringIcon_6) == 0x000338, "Member 'UShortcutRing_Ring_C::ShortcutringIcon_6' has a wrong offset!");
static_assert(offsetof(UShortcutRing_Ring_C, ShortcutringIcon_7) == 0x000340, "Member 'UShortcutRing_Ring_C::ShortcutringIcon_7' has a wrong offset!");
static_assert(offsetof(UShortcutRing_Ring_C, OnInOutFinished) == 0x000348, "Member 'UShortcutRing_Ring_C::OnInOutFinished' has a wrong offset!");
static_assert(offsetof(UShortcutRing_Ring_C, OnClick) == 0x000358, "Member 'UShortcutRing_Ring_C::OnClick' has a wrong offset!");
static_assert(offsetof(UShortcutRing_Ring_C, OnClickRight) == 0x000368, "Member 'UShortcutRing_Ring_C::OnClickRight' has a wrong offset!");

}

