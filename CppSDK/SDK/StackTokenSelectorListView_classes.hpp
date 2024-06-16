#pragma once

 

// Package: StackTokenSelectorListView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StackTokenSelectorListView.StackTokenSelectorListView_C
// 0x0190 (0x0408 - 0x0278)
class UStackTokenSelectorListView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InAnim;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_Close;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            CmnBtn16;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Slot;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_541;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             SB_Tickets;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectClose;                                     // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UStackTokenSelectorListItem_C*          SelectTicket;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           TargetData;                                        // 0x02E8(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          Anim;                                              // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6CF9[0x3];                                     // 0x0401(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectedTokenId;                                   // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void OnSelectClose__DelegateSignature(int32 TokenID);
	void ExecuteUbergraph_StackTokenSelectorListView(int32 EntryPoint);
	void WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0();
	void Destruct();
	void OnPressCancel();
	void BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature();
	void Set_Window_Alignment(const struct FVector2D& InAlignment);
	void SetWindowPosition(const struct FVector2D& InPosition);
	void BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Close();
	void OnSelectTicket(class UStackTokenSelectorListItem_C* Target);
	void Construct();
	void Initialize();
	void UpdateCheck(class UStackTokenSelectorListItem_C* OnSelect);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StackTokenSelectorListView_C">();
	}
	static class UStackTokenSelectorListView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStackTokenSelectorListView_C>();
	}
};
static_assert(alignof(UStackTokenSelectorListView_C) == 0x000008, "Wrong alignment on UStackTokenSelectorListView_C");
static_assert(sizeof(UStackTokenSelectorListView_C) == 0x000408, "Wrong size on UStackTokenSelectorListView_C");
static_assert(offsetof(UStackTokenSelectorListView_C, UberGraphFrame) == 0x000278, "Member 'UStackTokenSelectorListView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, InAnim) == 0x000280, "Member 'UStackTokenSelectorListView_C::InAnim' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, Btn_Close) == 0x000288, "Member 'UStackTokenSelectorListView_C::Btn_Close' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, CmnBtn16) == 0x000290, "Member 'UStackTokenSelectorListView_C::CmnBtn16' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, CmnClose02) == 0x000298, "Member 'UStackTokenSelectorListView_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, Cvs_Slot) == 0x0002A0, "Member 'UStackTokenSelectorListView_C::Cvs_Slot' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, Image_1) == 0x0002A8, "Member 'UStackTokenSelectorListView_C::Image_1' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, Image_541) == 0x0002B0, "Member 'UStackTokenSelectorListView_C::Image_541' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, SB_Tickets) == 0x0002B8, "Member 'UStackTokenSelectorListView_C::SB_Tickets' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, OnClose) == 0x0002C0, "Member 'UStackTokenSelectorListView_C::OnClose' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, OnSelectClose) == 0x0002D0, "Member 'UStackTokenSelectorListView_C::OnSelectClose' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, SelectTicket) == 0x0002E0, "Member 'UStackTokenSelectorListView_C::SelectTicket' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, TargetData) == 0x0002E8, "Member 'UStackTokenSelectorListView_C::TargetData' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, Anim) == 0x000400, "Member 'UStackTokenSelectorListView_C::Anim' has a wrong offset!");
static_assert(offsetof(UStackTokenSelectorListView_C, SelectedTokenId) == 0x000404, "Member 'UStackTokenSelectorListView_C::SelectedTokenId' has a wrong offset!");

}

