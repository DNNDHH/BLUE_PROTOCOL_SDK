#pragma once

 

// Package: ImagineAbilityButtonView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineAbilityButtonView.ImagineAbilityButtonView_C
// 0x0030 (0x02A8 - 0x0278)
class UImagineAbilityButtonView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            BtnReselect;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_286;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_AbilityName;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Reselect;                                          // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Reselect__DelegateSignature();
	void ExecuteUbergraph_ImagineAbilityButtonView(int32 EntryPoint);
	void BndEvt__ImagineAbilityButtonView_CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void SetData(const struct FOwnItemInfo& Info);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineAbilityButtonView_C">();
	}
	static class UImagineAbilityButtonView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineAbilityButtonView_C>();
	}
};
static_assert(alignof(UImagineAbilityButtonView_C) == 0x000008, "Wrong alignment on UImagineAbilityButtonView_C");
static_assert(sizeof(UImagineAbilityButtonView_C) == 0x0002A8, "Wrong size on UImagineAbilityButtonView_C");
static_assert(offsetof(UImagineAbilityButtonView_C, UberGraphFrame) == 0x000278, "Member 'UImagineAbilityButtonView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineAbilityButtonView_C, BtnReselect) == 0x000280, "Member 'UImagineAbilityButtonView_C::BtnReselect' has a wrong offset!");
static_assert(offsetof(UImagineAbilityButtonView_C, Image_286) == 0x000288, "Member 'UImagineAbilityButtonView_C::Image_286' has a wrong offset!");
static_assert(offsetof(UImagineAbilityButtonView_C, Txt_AbilityName) == 0x000290, "Member 'UImagineAbilityButtonView_C::Txt_AbilityName' has a wrong offset!");
static_assert(offsetof(UImagineAbilityButtonView_C, Reselect) == 0x000298, "Member 'UImagineAbilityButtonView_C::Reselect' has a wrong offset!");

}

