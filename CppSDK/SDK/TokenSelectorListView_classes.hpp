#pragma once

 

// Package: TokenSelectorListView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TokenSelectorListView.TokenSelectorListView_C
// 0x0100 (0x0378 - 0x0278)
class UTokenSelectorListView_C final : public UUserWidget
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
	class UTokenSelectorListItem_C*               SelectTicket;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftMasterData                       RecepiData;                                        // 0x02E8(0x0088)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          Anim;                                              // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void OnSelectClose__DelegateSignature(int32 TokenID);
	void ExecuteUbergraph_TokenSelectorListView(int32 EntryPoint);
	void WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0();
	void Destruct();
	void OnPressCancel();
	void BndEvt__TokenSelectorListView_CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void BndEvt__TokenSelectorListView_CmnClose02_K2Node_ComponentBoundEvent_3_OnClosed__DelegateSignature();
	void Set_Window_Alignment(const struct FVector2D& InAlignment);
	void SetWindowPosition(const struct FVector2D& InPosition);
	void BndEvt__TokenSelectorListView_Btn_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Close();
	void OnSelectTicket(class UTokenSelectorListItem_C* Target);
	void Construct();
	void Initialize();
	void UpdateCheck(class UTokenSelectorListItem_C* OnSelect);
	void SetResepiData(const struct FCraftMasterData& Param_RecepiData);
	void SetCraftCount(int32 CraftCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TokenSelectorListView_C">();
	}
	static class UTokenSelectorListView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTokenSelectorListView_C>();
	}
};
static_assert(alignof(UTokenSelectorListView_C) == 0x000008, "Wrong alignment on UTokenSelectorListView_C");
static_assert(sizeof(UTokenSelectorListView_C) == 0x000378, "Wrong size on UTokenSelectorListView_C");
static_assert(offsetof(UTokenSelectorListView_C, UberGraphFrame) == 0x000278, "Member 'UTokenSelectorListView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, InAnim) == 0x000280, "Member 'UTokenSelectorListView_C::InAnim' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, Btn_Close) == 0x000288, "Member 'UTokenSelectorListView_C::Btn_Close' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, CmnBtn16) == 0x000290, "Member 'UTokenSelectorListView_C::CmnBtn16' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, CmnClose02) == 0x000298, "Member 'UTokenSelectorListView_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, Cvs_Slot) == 0x0002A0, "Member 'UTokenSelectorListView_C::Cvs_Slot' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, Image_1) == 0x0002A8, "Member 'UTokenSelectorListView_C::Image_1' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, Image_541) == 0x0002B0, "Member 'UTokenSelectorListView_C::Image_541' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, SB_Tickets) == 0x0002B8, "Member 'UTokenSelectorListView_C::SB_Tickets' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, OnClose) == 0x0002C0, "Member 'UTokenSelectorListView_C::OnClose' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, OnSelectClose) == 0x0002D0, "Member 'UTokenSelectorListView_C::OnSelectClose' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, SelectTicket) == 0x0002E0, "Member 'UTokenSelectorListView_C::SelectTicket' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, RecepiData) == 0x0002E8, "Member 'UTokenSelectorListView_C::RecepiData' has a wrong offset!");
static_assert(offsetof(UTokenSelectorListView_C, Anim) == 0x000370, "Member 'UTokenSelectorListView_C::Anim' has a wrong offset!");

}

