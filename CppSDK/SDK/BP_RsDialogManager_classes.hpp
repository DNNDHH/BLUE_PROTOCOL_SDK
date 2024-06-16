#pragma once

 

// Package: BP_RsDialogManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "ST_RsDialogCommonInfo_structs.hpp"
#include "RsDialogProductTitleType_structs.hpp"
#include "RsDialogType_structs.hpp"
#include "RsDialogCurrencyPaidType_structs.hpp"
#include "RsDialogPaymentType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialogManager.BP_RsDialogManager_C
// 0x01F0 (0x0480 - 0x0290)
class UBP_RsDialogManager_C final : public USBRmShopMenuChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut_Dialog;                                    // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn_Dialog;                                     // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut_Base;                                      // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn_Base;                                       // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_RsDialog_Caution_C*                 BP_RsDialog_Caution;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_ChargeRoseOrb_C*           BP_RsDialog_ChargeRoseOrb;                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_Completed_C*               BP_RsDialog_Completed;                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_ErrorCode_C*               BP_RsDialog_ErrorCode;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_InputCoupon_C*             BP_RsDialog_InputCoupon;                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_LimitCondition_C*          BP_RsDialog_LimitCondition;                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_Payment_C*                 BP_RsDialog_Payment;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_Processing_C*              BP_RsDialog_Processing;                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_Purchase_C*                BP_RsDialog_Purchase;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_UseItem_C*                 BP_RsDialog_UseItem;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem2_C*                Btn_Commerce;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           Btn_Exit;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DBtn_99;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DBtn_01;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DBtn_02;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DBtn_03;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DBtn_04;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DBtn_05;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DBtn_06;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DBtn_07;                                           // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DBtn_08;                                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DBtn_09;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_Credit_C*                     FlatShop_Credit;                                   // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Base;                                    // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Cover;                                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBCursorStateHandle                   CursorHandle;                                      // 0x0388(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	ESBRmShopMenuType                             ShopType;                                          // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExecUI;                                          // 0x038D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsExecDialog;                                      // 0x038E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAnim_Base;                                       // 0x038F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAnim_Dialog;                                     // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsProcessing;                                      // 0x0391(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ERsDialogType                                 NowDialog;                                         // 0x0392(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ERsDialogType                                 NextDialog;                                        // 0x0393(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5688[0x4];                                     // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ERsDialogType                                 NextDialog_Reserve;                                // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5689[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_RsDialogCommonInfo                 DialogCommonInfo;                                  // 0x03B0(0x0048)(Edit, BlueprintVisible, HasGetValueTypeHash)
	ERsDialogButtonType                           PaymentType;                                       // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_568A[0x3];                                     // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PassedTime;                                        // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Input_CouponCode;                                  // 0x0400(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUseCoupon;                                       // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          LockDialog;                                        // 0x0420(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ERsDialogCurrencyPaidType                     CurrencyPaidType;                                  // 0x0421(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_568B[0x6];                                     // 0x0422(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ERsDialogCurrencyPaidType, class UAkAudioEvent*> SeMap;                                             // 0x0428(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsESC;                                             // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsLack;                                           // 0x0479(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnButtonClicked__DelegateSignature(ERsDialogType RsDialogType, ERsDialogButtonType ClickedButtonType);
	void OnUseCoupon__DelegateSignature(const class FString& CouponCode);
	void ExecuteUbergraph_BP_RsDialogManager(int32 EntryPoint);
	void BndEvt__BP_RsDialogManager_Btn_Commerce_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature();
	void OnCloseDialog();
	void RegistInput();
	void BndEvt__BP_RsDialogManager_Btn_Exit_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature();
	void CheckEndAnimIn_Event();
	void SetSeasonPoint(int32 SP);
	void SetBPPoint(int32 BP);
	void SetRoseOrb(int32 Free, int32 Paid, const struct FDateTime& FreeExpired, const struct FDateTime& PaidExpired);
	void NextDialog_Event();
	void JumpShopMenu(ESBRmShopMenuType Shop);
	void BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature();
	void BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature();
	void BndEvt__DBtn_09_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DBtn_08_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void CloseDialog_Force();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__DBtn_07_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SetCommonInfo(ERsDialogProductTitleType ProductTilteType, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo, bool ShowPurchaseNum, int32 PurchaseNum, ERsDialogPaymentType PaymentType01, int32 PurchasePrice01, ERsDialogPaymentType PaymentType02, int32 PurchasePrice02, bool PaidOnly);
	void HideDialog();
	void BndEvt__DBtn_06_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DBtn_05_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DBtn_04_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DBtn_03_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DBtn_02_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DBtn_01_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SwitchDialog(ERsDialogType Type);
	void BndEvt__DBtn_07_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EndAnimOut_Dialog();
	void EndAnimIn_Dialog();
	void EndAnimOut_Base();
	void EndAnimIn_Base();
	void EndUI();
	void StartUI();
	void Hide();
	void Show();
	void ShowDialog_Caution();
	void Destruct();
	void Construct();
	void SetDiscountRate_SeasonPass(int32 Rate);
	void SetDiscountRate(int32 Rate);
	void BndEvt__BP_RsDialog_Purchase_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ShowDialog_Purchase();
	void BndEvt__BP_RsDialog_Payment_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ShowDialog_Payment();
	void PlaySE_Completed();
	void BndEvt__BP_RsDialog_Completed_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ShowDialog_Completed(bool ShowMsgStoreLetter, ERsDialogCurrencyPaidType PaidType);
	void BndEvt__BP_RsDialog_UseItem_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ShowDialog_UseItem(const class FText& EffectDescription);
	void BndEvt__BP_RsDialogManager_BP_RsDialog_Processing_K2Node_ComponentBoundEvent_12_OnDialogEnd__DelegateSignature();
	void ShowDialog_Processing();
	void BndEvt__BP_RsDialog_ErrorCode_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ShowDialog_ErrorMessage(int32 ErrorCode);
	void BndEvt__BP_RsDialog_ChargeRoseOrb_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ShowDialog_ChargeRoseOrb();
	void AddItem_LimitCondition(bool IsAchieve, const class FString& Text);
	void BndEvt__BP_RsDialog_LimitCondition_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ShowDialog_LimitCondition();
	void BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_1_OnUseCoupon__DelegateSignature(const class FString& Code);
	void BndEvt__BP_RsDialog_InputCoupon_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ShowDialog_InputCoupon();
	void BndEvt__BP_RsDialog_Caution_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void SetErrorMessage(int32 MessageId, int32 ErrorCode);
	void Initialize();
	void Set_Shop_Type(ESBRmShopMenuType Param_ShopType);
	void Set_Next_Dialog(ERsDialogType Param_NextDialog);
	void SwitchNextDialog();
	void ExitClickedEscBtn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialogManager_C">();
	}
	static class UBP_RsDialogManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialogManager_C>();
	}
};
static_assert(alignof(UBP_RsDialogManager_C) == 0x000008, "Wrong alignment on UBP_RsDialogManager_C");
static_assert(sizeof(UBP_RsDialogManager_C) == 0x000480, "Wrong size on UBP_RsDialogManager_C");
static_assert(offsetof(UBP_RsDialogManager_C, UberGraphFrame) == 0x000290, "Member 'UBP_RsDialogManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, AnimOut_Dialog) == 0x000298, "Member 'UBP_RsDialogManager_C::AnimOut_Dialog' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, AnimIn_Dialog) == 0x0002A0, "Member 'UBP_RsDialogManager_C::AnimIn_Dialog' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, AnimOut_Base) == 0x0002A8, "Member 'UBP_RsDialogManager_C::AnimOut_Base' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, AnimIn_Base) == 0x0002B0, "Member 'UBP_RsDialogManager_C::AnimIn_Base' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, BP_RsDialog_Caution) == 0x0002B8, "Member 'UBP_RsDialogManager_C::BP_RsDialog_Caution' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, BP_RsDialog_ChargeRoseOrb) == 0x0002C0, "Member 'UBP_RsDialogManager_C::BP_RsDialog_ChargeRoseOrb' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, BP_RsDialog_Completed) == 0x0002C8, "Member 'UBP_RsDialogManager_C::BP_RsDialog_Completed' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, BP_RsDialog_ErrorCode) == 0x0002D0, "Member 'UBP_RsDialogManager_C::BP_RsDialog_ErrorCode' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, BP_RsDialog_InputCoupon) == 0x0002D8, "Member 'UBP_RsDialogManager_C::BP_RsDialog_InputCoupon' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, BP_RsDialog_LimitCondition) == 0x0002E0, "Member 'UBP_RsDialogManager_C::BP_RsDialog_LimitCondition' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, BP_RsDialog_Payment) == 0x0002E8, "Member 'UBP_RsDialogManager_C::BP_RsDialog_Payment' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, BP_RsDialog_Processing) == 0x0002F0, "Member 'UBP_RsDialogManager_C::BP_RsDialog_Processing' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, BP_RsDialog_Purchase) == 0x0002F8, "Member 'UBP_RsDialogManager_C::BP_RsDialog_Purchase' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, BP_RsDialog_UseItem) == 0x000300, "Member 'UBP_RsDialogManager_C::BP_RsDialog_UseItem' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, Btn_Commerce) == 0x000308, "Member 'UBP_RsDialogManager_C::Btn_Commerce' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, Btn_Exit) == 0x000310, "Member 'UBP_RsDialogManager_C::Btn_Exit' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, DBtn_99) == 0x000318, "Member 'UBP_RsDialogManager_C::DBtn_99' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, DBtn_01) == 0x000320, "Member 'UBP_RsDialogManager_C::DBtn_01' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, DBtn_02) == 0x000328, "Member 'UBP_RsDialogManager_C::DBtn_02' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, DBtn_03) == 0x000330, "Member 'UBP_RsDialogManager_C::DBtn_03' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, DBtn_04) == 0x000338, "Member 'UBP_RsDialogManager_C::DBtn_04' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, DBtn_05) == 0x000340, "Member 'UBP_RsDialogManager_C::DBtn_05' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, DBtn_06) == 0x000348, "Member 'UBP_RsDialogManager_C::DBtn_06' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, DBtn_07) == 0x000350, "Member 'UBP_RsDialogManager_C::DBtn_07' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, DBtn_08) == 0x000358, "Member 'UBP_RsDialogManager_C::DBtn_08' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, DBtn_09) == 0x000360, "Member 'UBP_RsDialogManager_C::DBtn_09' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, FlatShop_Credit) == 0x000368, "Member 'UBP_RsDialogManager_C::FlatShop_Credit' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, Switcher) == 0x000370, "Member 'UBP_RsDialogManager_C::Switcher' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, UIBlocker_Base) == 0x000378, "Member 'UBP_RsDialogManager_C::UIBlocker_Base' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, UIBlocker_Cover) == 0x000380, "Member 'UBP_RsDialogManager_C::UIBlocker_Cover' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, CursorHandle) == 0x000388, "Member 'UBP_RsDialogManager_C::CursorHandle' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, ShopType) == 0x00038C, "Member 'UBP_RsDialogManager_C::ShopType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, IsExecUI) == 0x00038D, "Member 'UBP_RsDialogManager_C::IsExecUI' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, IsExecDialog) == 0x00038E, "Member 'UBP_RsDialogManager_C::IsExecDialog' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, IsAnim_Base) == 0x00038F, "Member 'UBP_RsDialogManager_C::IsAnim_Base' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, IsAnim_Dialog) == 0x000390, "Member 'UBP_RsDialogManager_C::IsAnim_Dialog' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, IsProcessing) == 0x000391, "Member 'UBP_RsDialogManager_C::IsProcessing' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, NowDialog) == 0x000392, "Member 'UBP_RsDialogManager_C::NowDialog' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, NextDialog) == 0x000393, "Member 'UBP_RsDialogManager_C::NextDialog' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, OnButtonClicked) == 0x000398, "Member 'UBP_RsDialogManager_C::OnButtonClicked' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, NextDialog_Reserve) == 0x0003A8, "Member 'UBP_RsDialogManager_C::NextDialog_Reserve' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, DialogCommonInfo) == 0x0003B0, "Member 'UBP_RsDialogManager_C::DialogCommonInfo' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, PaymentType) == 0x0003F8, "Member 'UBP_RsDialogManager_C::PaymentType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, PassedTime) == 0x0003FC, "Member 'UBP_RsDialogManager_C::PassedTime' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, Input_CouponCode) == 0x000400, "Member 'UBP_RsDialogManager_C::Input_CouponCode' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, OnUseCoupon) == 0x000410, "Member 'UBP_RsDialogManager_C::OnUseCoupon' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, LockDialog) == 0x000420, "Member 'UBP_RsDialogManager_C::LockDialog' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, CurrencyPaidType) == 0x000421, "Member 'UBP_RsDialogManager_C::CurrencyPaidType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, SeMap) == 0x000428, "Member 'UBP_RsDialogManager_C::SeMap' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, IsESC) == 0x000478, "Member 'UBP_RsDialogManager_C::IsESC' has a wrong offset!");
static_assert(offsetof(UBP_RsDialogManager_C, bIsLack) == 0x000479, "Member 'UBP_RsDialogManager_C::bIsLack' has a wrong offset!");

}

