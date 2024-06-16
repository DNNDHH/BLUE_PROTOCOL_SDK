#pragma once

 

// Package: GuildDissolutionCheckDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildDissolutionCheckDialog.GuildDissolutionCheckDialog_C
// 0x0060 (0x02D8 - 0x0278)
class UGuildDissolutionCheckDialog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_OutDisplay;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDialogButton_C*                        ButtonNo;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDialogButton_C*                        ButtonYes;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_Agree;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_80;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_259;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDissolution;                                     // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsOpen;                                            // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnDissolution__DelegateSignature();
	void ExecuteUbergraph_GuildDissolutionCheckDialog(int32 EntryPoint);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__ButtonYes_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget);
	void BndEvt__ButtonNo_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UUserWidget* InButtonWidget);
	void BndEvt__Btn_OutDisplay_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void BndEvt__CB_Agree_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildDissolutionCheckDialog_C">();
	}
	static class UGuildDissolutionCheckDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildDissolutionCheckDialog_C>();
	}
};
static_assert(alignof(UGuildDissolutionCheckDialog_C) == 0x000008, "Wrong alignment on UGuildDissolutionCheckDialog_C");
static_assert(sizeof(UGuildDissolutionCheckDialog_C) == 0x0002D8, "Wrong size on UGuildDissolutionCheckDialog_C");
static_assert(offsetof(UGuildDissolutionCheckDialog_C, UberGraphFrame) == 0x000278, "Member 'UGuildDissolutionCheckDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildDissolutionCheckDialog_C, AnimOut) == 0x000280, "Member 'UGuildDissolutionCheckDialog_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UGuildDissolutionCheckDialog_C, AnimIn) == 0x000288, "Member 'UGuildDissolutionCheckDialog_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UGuildDissolutionCheckDialog_C, Btn_OutDisplay) == 0x000290, "Member 'UGuildDissolutionCheckDialog_C::Btn_OutDisplay' has a wrong offset!");
static_assert(offsetof(UGuildDissolutionCheckDialog_C, ButtonNo) == 0x000298, "Member 'UGuildDissolutionCheckDialog_C::ButtonNo' has a wrong offset!");
static_assert(offsetof(UGuildDissolutionCheckDialog_C, ButtonYes) == 0x0002A0, "Member 'UGuildDissolutionCheckDialog_C::ButtonYes' has a wrong offset!");
static_assert(offsetof(UGuildDissolutionCheckDialog_C, CB_Agree) == 0x0002A8, "Member 'UGuildDissolutionCheckDialog_C::CB_Agree' has a wrong offset!");
static_assert(offsetof(UGuildDissolutionCheckDialog_C, Image_80) == 0x0002B0, "Member 'UGuildDissolutionCheckDialog_C::Image_80' has a wrong offset!");
static_assert(offsetof(UGuildDissolutionCheckDialog_C, Image_259) == 0x0002B8, "Member 'UGuildDissolutionCheckDialog_C::Image_259' has a wrong offset!");
static_assert(offsetof(UGuildDissolutionCheckDialog_C, OnDissolution) == 0x0002C0, "Member 'UGuildDissolutionCheckDialog_C::OnDissolution' has a wrong offset!");
static_assert(offsetof(UGuildDissolutionCheckDialog_C, IsOpen) == 0x0002D0, "Member 'UGuildDissolutionCheckDialog_C::IsOpen' has a wrong offset!");

}

