#pragma once

 

// Package: BP_RsDialog_PaymentSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "RsDialogPaymentType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C
// 0x0040 (0x02B8 - 0x0278)
class UBP_RsDialog_PaymentSelect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn27_C*                            Btn_Purchase;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconSwitcher;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Amount;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Message;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Unit;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnButtonClicked;                                   // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnButtonClicked__DelegateSignature();
	void ExecuteUbergraph_BP_RsDialog_PaymentSelect(int32 EntryPoint);
	void BndEvt__Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void SetPaymentInfo(ERsDialogPaymentType PaymentType, int32 PurchasePrice);
	void ExecutionConfirmText(ERsDialogPaymentType Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RsDialog_PaymentSelect_C">();
	}
	static class UBP_RsDialog_PaymentSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RsDialog_PaymentSelect_C>();
	}
};
static_assert(alignof(UBP_RsDialog_PaymentSelect_C) == 0x000008, "Wrong alignment on UBP_RsDialog_PaymentSelect_C");
static_assert(sizeof(UBP_RsDialog_PaymentSelect_C) == 0x0002B8, "Wrong size on UBP_RsDialog_PaymentSelect_C");
static_assert(offsetof(UBP_RsDialog_PaymentSelect_C, UberGraphFrame) == 0x000278, "Member 'UBP_RsDialog_PaymentSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_PaymentSelect_C, Btn_Purchase) == 0x000280, "Member 'UBP_RsDialog_PaymentSelect_C::Btn_Purchase' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_PaymentSelect_C, IconSwitcher) == 0x000288, "Member 'UBP_RsDialog_PaymentSelect_C::IconSwitcher' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_PaymentSelect_C, Txt_Amount) == 0x000290, "Member 'UBP_RsDialog_PaymentSelect_C::Txt_Amount' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_PaymentSelect_C, Txt_Message) == 0x000298, "Member 'UBP_RsDialog_PaymentSelect_C::Txt_Message' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_PaymentSelect_C, Txt_Unit) == 0x0002A0, "Member 'UBP_RsDialog_PaymentSelect_C::Txt_Unit' has a wrong offset!");
static_assert(offsetof(UBP_RsDialog_PaymentSelect_C, OnButtonClicked) == 0x0002A8, "Member 'UBP_RsDialog_PaymentSelect_C::OnButtonClicked' has a wrong offset!");

}

