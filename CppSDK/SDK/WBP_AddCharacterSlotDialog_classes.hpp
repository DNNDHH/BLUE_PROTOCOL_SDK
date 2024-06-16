#pragma once

 

// Package: WBP_AddCharacterSlotDialog

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_AddCharacterSlotDialog.WBP_AddCharacterSlotDialog_C
// 0x01B8 (0x0430 - 0x0278)
class UWBP_AddCharacterSlotDialog_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_1;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_2;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackGround1;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg2;                                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem2_C*                Btn_Commerce;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            CancelButton;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CancelText;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CharacterSelectAddButton;                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ExpansionButton;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ExpansionText;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_895;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoIcon1;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoIcon2;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2;                                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line3;                                             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RoseOrbIcon;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RoseOrbIcon_1;                                     // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RoseOrbIcon_2;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_2;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_6;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_8;                              // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_10;                             // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_11;                             // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_13;                             // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_16;                             // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_22;                             // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextSlotAfterNam;                                  // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextSlotNowNam;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_117;                                // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEnd;                                             // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Add;                                               // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D33[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           UIBlocker_0;                                       // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBuySlot;                                         // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Free;                                              // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Paid;                                              // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Purchase_Amount;                                   // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AfterFree;                                         // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AfterPaid;                                         // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AddMax;                                            // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_MultiLine_C*  WarningToolTop;                                    // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Payable;                                           // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D34[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_MultipleSelectDialog_C*            MultiDialog;                                       // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCryptoCurrency                      SBCrypto_Currency;                                 // 0x0408(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void OnEnd__DelegateSignature(class UWBP_AddCharacterSlotDialog_C* Widget, bool Param_Add);
	void OnBuySlot__DelegateSignature();
	void ExecuteUbergraph_WBP_AddCharacterSlotDialog(int32 EntryPoint);
	void BndEvt__WBP_AddCharacterSlotDialog_Btn_Commerce_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature();
	void Initializeinput();
	void CreateReturn();
	void CustomEvent_2(int32 Result);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__WBP_AddCharacterSlotDialog_CancelButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_AddCharacterSlotDialog_CancelButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_AddCharacterSlotDialog_ExpansionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_AddCharacterSlotDialog_ExpansionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_AddCharacterSlotDialog_CmnBack01_K2Node_ComponentBoundEvent_3_EventClicked__DelegateSignature();
	void BuiFinish(bool Success, int32 RetCode);
	void BndEvt__WBP_AddCharacterSlotDialog_SBButton_C_7_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Initialize(int32 SlotNowMax, int32 SlotAddMax, int32 PurchaseAmount, const struct FSBCryptoCurrency& SBCryptoCurrency);
	void BndEvt__WBP_AddCharacterSlotDialog_SBButton_C_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EndEvent();
	void CancelEvent();
	class UWidget* GetWarningToolTipWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_AddCharacterSlotDialog_C">();
	}
	static class UWBP_AddCharacterSlotDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_AddCharacterSlotDialog_C>();
	}
};
static_assert(alignof(UWBP_AddCharacterSlotDialog_C) == 0x000008, "Wrong alignment on UWBP_AddCharacterSlotDialog_C");
static_assert(sizeof(UWBP_AddCharacterSlotDialog_C) == 0x000430, "Wrong size on UWBP_AddCharacterSlotDialog_C");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, UberGraphFrame) == 0x000278, "Member 'UWBP_AddCharacterSlotDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, AnimOut) == 0x000280, "Member 'UWBP_AddCharacterSlotDialog_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, AnimIn) == 0x000288, "Member 'UWBP_AddCharacterSlotDialog_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Arrow) == 0x000290, "Member 'UWBP_AddCharacterSlotDialog_C::Arrow' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Arrow_1) == 0x000298, "Member 'UWBP_AddCharacterSlotDialog_C::Arrow_1' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Arrow_2) == 0x0002A0, "Member 'UWBP_AddCharacterSlotDialog_C::Arrow_2' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, BackGround1) == 0x0002A8, "Member 'UWBP_AddCharacterSlotDialog_C::BackGround1' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Bg1) == 0x0002B0, "Member 'UWBP_AddCharacterSlotDialog_C::Bg1' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Bg2) == 0x0002B8, "Member 'UWBP_AddCharacterSlotDialog_C::Bg2' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Btn_Commerce) == 0x0002C0, "Member 'UWBP_AddCharacterSlotDialog_C::Btn_Commerce' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, CancelButton) == 0x0002C8, "Member 'UWBP_AddCharacterSlotDialog_C::CancelButton' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, CancelText) == 0x0002D0, "Member 'UWBP_AddCharacterSlotDialog_C::CancelText' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, CharacterSelectAddButton) == 0x0002D8, "Member 'UWBP_AddCharacterSlotDialog_C::CharacterSelectAddButton' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, CmnBack01) == 0x0002E0, "Member 'UWBP_AddCharacterSlotDialog_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, CmnImageThrobber) == 0x0002E8, "Member 'UWBP_AddCharacterSlotDialog_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, ExpansionButton) == 0x0002F0, "Member 'UWBP_AddCharacterSlotDialog_C::ExpansionButton' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, ExpansionText) == 0x0002F8, "Member 'UWBP_AddCharacterSlotDialog_C::ExpansionText' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Image_895) == 0x000300, "Member 'UWBP_AddCharacterSlotDialog_C::Image_895' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, InfoIcon1) == 0x000308, "Member 'UWBP_AddCharacterSlotDialog_C::InfoIcon1' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, InfoIcon2) == 0x000310, "Member 'UWBP_AddCharacterSlotDialog_C::InfoIcon2' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Line1) == 0x000318, "Member 'UWBP_AddCharacterSlotDialog_C::Line1' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Line2) == 0x000320, "Member 'UWBP_AddCharacterSlotDialog_C::Line2' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Line3) == 0x000328, "Member 'UWBP_AddCharacterSlotDialog_C::Line3' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, RoseOrbIcon) == 0x000330, "Member 'UWBP_AddCharacterSlotDialog_C::RoseOrbIcon' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, RoseOrbIcon_1) == 0x000338, "Member 'UWBP_AddCharacterSlotDialog_C::RoseOrbIcon_1' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, RoseOrbIcon_2) == 0x000340, "Member 'UWBP_AddCharacterSlotDialog_C::RoseOrbIcon_2' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, SBRuntimeTextBlock_2) == 0x000348, "Member 'UWBP_AddCharacterSlotDialog_C::SBRuntimeTextBlock_2' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, SBRuntimeTextBlock_6) == 0x000350, "Member 'UWBP_AddCharacterSlotDialog_C::SBRuntimeTextBlock_6' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, SBRuntimeTextBlock_8) == 0x000358, "Member 'UWBP_AddCharacterSlotDialog_C::SBRuntimeTextBlock_8' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, SBRuntimeTextBlock_10) == 0x000360, "Member 'UWBP_AddCharacterSlotDialog_C::SBRuntimeTextBlock_10' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, SBRuntimeTextBlock_11) == 0x000368, "Member 'UWBP_AddCharacterSlotDialog_C::SBRuntimeTextBlock_11' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, SBRuntimeTextBlock_13) == 0x000370, "Member 'UWBP_AddCharacterSlotDialog_C::SBRuntimeTextBlock_13' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, SBRuntimeTextBlock_16) == 0x000378, "Member 'UWBP_AddCharacterSlotDialog_C::SBRuntimeTextBlock_16' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, SBRuntimeTextBlock_22) == 0x000380, "Member 'UWBP_AddCharacterSlotDialog_C::SBRuntimeTextBlock_22' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, TextSlotAfterNam) == 0x000388, "Member 'UWBP_AddCharacterSlotDialog_C::TextSlotAfterNam' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, TextSlotNowNam) == 0x000390, "Member 'UWBP_AddCharacterSlotDialog_C::TextSlotNowNam' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, UIBlocker) == 0x000398, "Member 'UWBP_AddCharacterSlotDialog_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, WidgetSwitcher_117) == 0x0003A0, "Member 'UWBP_AddCharacterSlotDialog_C::WidgetSwitcher_117' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, OnEnd) == 0x0003A8, "Member 'UWBP_AddCharacterSlotDialog_C::OnEnd' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Add) == 0x0003B8, "Member 'UWBP_AddCharacterSlotDialog_C::Add' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, UIBlocker_0) == 0x0003C0, "Member 'UWBP_AddCharacterSlotDialog_C::UIBlocker_0' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, OnBuySlot) == 0x0003C8, "Member 'UWBP_AddCharacterSlotDialog_C::OnBuySlot' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Free) == 0x0003D8, "Member 'UWBP_AddCharacterSlotDialog_C::Free' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Paid) == 0x0003DC, "Member 'UWBP_AddCharacterSlotDialog_C::Paid' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Purchase_Amount) == 0x0003E0, "Member 'UWBP_AddCharacterSlotDialog_C::Purchase_Amount' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, AfterFree) == 0x0003E4, "Member 'UWBP_AddCharacterSlotDialog_C::AfterFree' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, AfterPaid) == 0x0003E8, "Member 'UWBP_AddCharacterSlotDialog_C::AfterPaid' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, AddMax) == 0x0003EC, "Member 'UWBP_AddCharacterSlotDialog_C::AddMax' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, WarningToolTop) == 0x0003F0, "Member 'UWBP_AddCharacterSlotDialog_C::WarningToolTop' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, Payable) == 0x0003F8, "Member 'UWBP_AddCharacterSlotDialog_C::Payable' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, MultiDialog) == 0x000400, "Member 'UWBP_AddCharacterSlotDialog_C::MultiDialog' has a wrong offset!");
static_assert(offsetof(UWBP_AddCharacterSlotDialog_C, SBCrypto_Currency) == 0x000408, "Member 'UWBP_AddCharacterSlotDialog_C::SBCrypto_Currency' has a wrong offset!");

}

