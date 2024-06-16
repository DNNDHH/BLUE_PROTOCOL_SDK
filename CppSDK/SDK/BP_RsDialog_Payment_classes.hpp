#pragma once

 

// Package: BP_RsDialog_Payment

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RsDialogPaymentType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "RsDialogButtonType_structs.hpp"
#include "UMG_classes.hpp"
#include "RsDialogProductTitleType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_Payment.BP_RsDialog_Payment_C
// 0x0050 (0x02C8 - 0x0278)
class UBP_RsDialog_Payment_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         Box_Amount;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_PaymentSelect_C*           BP_PaymentSelect01;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_PaymentSelect_C*           BP_PaymentSelect02;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_RsDialog_ProductTitle_C*            BP_ProductTitle;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_Check;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Amount;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBRmShopMenuType                             CurrentShopType;                                   // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_554F[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
	void ExecuteUbergraph_BP_RsDialog_Payment(int32 EntryPoint);
	void BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void BndEvt__BP_PaymentSelect01_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void SetDialogInfo(ERsDialogProductTitleType ProductTilteType, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo, bool ShowPurchaseNum, int32 PurchaseNum, ERsDialogPaymentType PaymentType01, int32 PurchasePrice01, ERsDialogPaymentType PaymentType02, int32 PurchasePrice02);
	void BndEvt__BP_PaymentSelect02_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_Payment_C">();
	}
	static class UBP_RsDialog_Payment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_Payment_C>();
	}
};
static_assert(alignof(UBP_RsDialog_Payment_C) == 0x000008, "Wrong alignment on UBP_RsDialog_Payment_C");
static_assert(sizeof(UBP_RsDialog_Payment_C) == 0x0002C8, "Wrong size on UBP_RsDialog_Payment_C");
static_assert(offsetof(UBP_RsDialog_Payment_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_Payment_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Payment_C, Box_Amount) == 0x000280, "Member 'UBP_RsDialog_Payment_C::Box_Amount' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Payment_C, BP_PaymentSelect01) == 0x000288, "Member 'UBP_RsDialog_Payment_C::BP_PaymentSelect01' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Payment_C, BP_PaymentSelect02) == 0x000290, "Member 'UBP_RsDialog_Payment_C::BP_PaymentSelect02' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Payment_C, BP_ProductTitle) == 0x000298, "Member 'UBP_RsDialog_Payment_C::BP_ProductTitle' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Payment_C, Btn_Check) == 0x0002A0, "Member 'UBP_RsDialog_Payment_C::Btn_Check' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Payment_C, Txt_Amount) == 0x0002A8, "Member 'UBP_RsDialog_Payment_C::Txt_Amount' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Payment_C, CurrentShopType) == 0x0002B0, "Member 'UBP_RsDialog_Payment_C::CurrentShopType' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_Payment_C, OnButtonClicked) == 0x0002B8, "Member 'UBP_RsDialog_Payment_C::OnButtonClicked' has a wrong offset!");

}

