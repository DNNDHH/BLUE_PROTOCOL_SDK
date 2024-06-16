#pragma once

 

// Package: UMG_DetailsImagineBattleZoomIn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_DetailsImagineBattleZoomIn.UMG_DetailsImagineBattleZoomIn_C
// 0x0070 (0x02E8 - 0x0278)
class UUMG_DetailsImagineBattleZoomIn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBack01_C*                           Btn_Exit;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Imagine;                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Weapon;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_ImagineMount;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_ImagineMount_1;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_ZoomOut;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_56;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickZoomOut;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClickZoomOut__DelegateSignature();
	void ExecuteUbergraph_UMG_DetailsImagineBattleZoomIn(int32 EntryPoint);
	void BndEvt__UMG_DetailsImagineBattleZoomIn_Btn_Exit_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void OnPressCancelKey();
	void Hide();
	void Show(E_SBDetailsZoomIn Type);
	void BndEvt__SBButton_ZoomOutPlayerCapture_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_DetailsImagineBattleZoomIn_C">();
	}
	static class UUMG_DetailsImagineBattleZoomIn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_DetailsImagineBattleZoomIn_C>();
	}
};
static_assert(alignof(UUMG_DetailsImagineBattleZoomIn_C) == 0x000008, "Wrong alignment on UUMG_DetailsImagineBattleZoomIn_C");
static_assert(sizeof(UUMG_DetailsImagineBattleZoomIn_C) == 0x0002E8, "Wrong size on UUMG_DetailsImagineBattleZoomIn_C");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, UberGraphFrame) == 0x000278, "Member 'UUMG_DetailsImagineBattleZoomIn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, AnimOut) == 0x000280, "Member 'UUMG_DetailsImagineBattleZoomIn_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, AnimIn) == 0x000288, "Member 'UUMG_DetailsImagineBattleZoomIn_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, Btn_Exit) == 0x000290, "Member 'UUMG_DetailsImagineBattleZoomIn_C::Btn_Exit' has a wrong offset!");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, CanvasPanel_Imagine) == 0x000298, "Member 'UUMG_DetailsImagineBattleZoomIn_C::CanvasPanel_Imagine' has a wrong offset!");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, CanvasPanel_Weapon) == 0x0002A0, "Member 'UUMG_DetailsImagineBattleZoomIn_C::CanvasPanel_Weapon' has a wrong offset!");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, CmnOperationRotate) == 0x0002A8, "Member 'UUMG_DetailsImagineBattleZoomIn_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, Img_ImagineMount) == 0x0002B0, "Member 'UUMG_DetailsImagineBattleZoomIn_C::Img_ImagineMount' has a wrong offset!");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, Img_ImagineMount_1) == 0x0002B8, "Member 'UUMG_DetailsImagineBattleZoomIn_C::Img_ImagineMount_1' has a wrong offset!");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, SBButton_ZoomOut) == 0x0002C0, "Member 'UUMG_DetailsImagineBattleZoomIn_C::SBButton_ZoomOut' has a wrong offset!");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, UIBlocker) == 0x0002C8, "Member 'UUMG_DetailsImagineBattleZoomIn_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, WidgetSwitcher_56) == 0x0002D0, "Member 'UUMG_DetailsImagineBattleZoomIn_C::WidgetSwitcher_56' has a wrong offset!");
static_assert(offsetof(UUMG_DetailsImagineBattleZoomIn_C, OnClickZoomOut) == 0x0002D8, "Member 'UUMG_DetailsImagineBattleZoomIn_C::OnClickZoomOut' has a wrong offset!");

}

