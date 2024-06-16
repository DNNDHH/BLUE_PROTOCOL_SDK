#pragma once

 

// Package: ImagineInheritSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineInheritSelect.ImagineInheritSelect_C
// 0x04E0 (0x0758 - 0x0278)
class UImagineInheritSelect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutAnim;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SelectAnim;                                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BtnAnim;                                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnim;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAbilityInfoDescView_C*                 AbilityInfoDescView;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Rest;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Select;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnChange;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose03_C*                          CmnClose03;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Selector;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_ViewMaster;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_158;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_415;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_454;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineAssetView_C*                    ImagineAssetView;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnReset;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Select;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Switcher;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FOwnItemInfo                           Target;                                            // 0x0330(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FOwnItemInfo>                   Materials;                                         // 0x0448(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnSelectPerk;                                      // 0x0458(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBMasterImagine                       MasterData;                                        // 0x0468(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUserWidget*                            Dialogs;                                           // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           SelectAbility;                                     // 0x0520(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          OpenDialog;                                        // 0x0638(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D83[0x7];                                     // 0x0639(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           BeginSelectAbility;                                // 0x0640(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void OnClose__DelegateSignature();
	void OnSelectPerk__DelegateSignature(const struct FOwnItemInfo& SelectedPerk);
	void ExecuteUbergraph_ImagineInheritSelect(int32 EntryPoint);
	void BndEvt__ImagineInheritSelect_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature();
	void WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1();
	void Destruct();
	void RequestClose();
	void OnDialogClosed();
	void BndEvt__ImagineInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ImagineInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ImagineInheritSelect_Btn_Rest_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ImagineInheritSelect_Btn_Select_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ImagineInheritSelect_Btn_Select_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ImagineInheritSelect_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void OnSelect(const struct FOwnItemInfo& Param_Target);
	void BndEvt__ImagineInheritSelect_Btn_Select_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Initialize();
	void CloseDialog();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineInheritSelect_C">();
	}
	static class UImagineInheritSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineInheritSelect_C>();
	}
};
static_assert(alignof(UImagineInheritSelect_C) == 0x000008, "Wrong alignment on UImagineInheritSelect_C");
static_assert(sizeof(UImagineInheritSelect_C) == 0x000758, "Wrong size on UImagineInheritSelect_C");
static_assert(offsetof(UImagineInheritSelect_C, UberGraphFrame) == 0x000278, "Member 'UImagineInheritSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, OutAnim) == 0x000280, "Member 'UImagineInheritSelect_C::OutAnim' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, SelectAnim) == 0x000288, "Member 'UImagineInheritSelect_C::SelectAnim' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, BtnAnim) == 0x000290, "Member 'UImagineInheritSelect_C::BtnAnim' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, InAnim) == 0x000298, "Member 'UImagineInheritSelect_C::InAnim' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, AbilityInfoDescView) == 0x0002A0, "Member 'UImagineInheritSelect_C::AbilityInfoDescView' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Btn_Rest) == 0x0002A8, "Member 'UImagineInheritSelect_C::Btn_Rest' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Btn_Select) == 0x0002B0, "Member 'UImagineInheritSelect_C::Btn_Select' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, BtnChange) == 0x0002B8, "Member 'UImagineInheritSelect_C::BtnChange' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, CmnClose03) == 0x0002C0, "Member 'UImagineInheritSelect_C::CmnClose03' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Cvs_Selector) == 0x0002C8, "Member 'UImagineInheritSelect_C::Cvs_Selector' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Cvs_ViewMaster) == 0x0002D0, "Member 'UImagineInheritSelect_C::Cvs_ViewMaster' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Image) == 0x0002D8, "Member 'UImagineInheritSelect_C::Image' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Image_158) == 0x0002E0, "Member 'UImagineInheritSelect_C::Image_158' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Image_415) == 0x0002E8, "Member 'UImagineInheritSelect_C::Image_415' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Image_454) == 0x0002F0, "Member 'UImagineInheritSelect_C::Image_454' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, ImagineAssetView) == 0x0002F8, "Member 'UImagineInheritSelect_C::ImagineAssetView' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Txt_BtnReset) == 0x000300, "Member 'UImagineInheritSelect_C::Txt_BtnReset' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Txt_Select) == 0x000308, "Member 'UImagineInheritSelect_C::Txt_Select' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, UIBlocker) == 0x000310, "Member 'UImagineInheritSelect_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, WS_Switcher) == 0x000318, "Member 'UImagineInheritSelect_C::WS_Switcher' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, OnClose) == 0x000320, "Member 'UImagineInheritSelect_C::OnClose' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Target) == 0x000330, "Member 'UImagineInheritSelect_C::Target' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Materials) == 0x000448, "Member 'UImagineInheritSelect_C::Materials' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, OnSelectPerk) == 0x000458, "Member 'UImagineInheritSelect_C::OnSelectPerk' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, MasterData) == 0x000468, "Member 'UImagineInheritSelect_C::MasterData' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, Dialogs) == 0x000518, "Member 'UImagineInheritSelect_C::Dialogs' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, SelectAbility) == 0x000520, "Member 'UImagineInheritSelect_C::SelectAbility' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, OpenDialog) == 0x000638, "Member 'UImagineInheritSelect_C::OpenDialog' has a wrong offset!");
static_assert(offsetof(UImagineInheritSelect_C, BeginSelectAbility) == 0x000640, "Member 'UImagineInheritSelect_C::BeginSelectAbility' has a wrong offset!");

}

