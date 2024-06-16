#pragma once

 

// Package: PaymentSelect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PaymentSelect.PaymentSelect_C
// 0x00D0 (0x0348 - 0x0278)
class UPaymentSelect_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           AmazonPay1Click_Icon;                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_APayOne;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_Cancel;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem2_C*                Btn_Commerce;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            Btn_Decide;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridPanel_Icon;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_APayOne;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBox_C*                          List_Payment;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Descript;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Base;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Full;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDecide;                                          // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         PaymentCode;                                       // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 Select_Payment_Code;                               // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCancel;                                          // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UDataTable*                             DataTable;                                         // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPaymentData>                 PaymentData;                                       // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsFinish;                                          // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnDecide__DelegateSignature(const class FString& Payment);
	void OnCancel__DelegateSignature();
	void ExecuteUbergraph_PaymentSelect(int32 EntryPoint);
	void BndEvt__PaymentSelect_Btn_APayOne_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PaymentSelect_Btn_Commerce_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void Destruct();
	void OnClickClosed();
	void OnIconClicked(int32 IconIndex);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__Btn_01_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__Btn_02_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void Construct();
	void CreatePaymentList();
	class UWidget* On_List_Payment_GenerateWidget_0(const class FString& Item);
	void CheckVersion(class FName RowName, bool* Ok);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PaymentSelect_C">();
	}
	static class UPaymentSelect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPaymentSelect_C>();
	}
};
static_assert(alignof(UPaymentSelect_C) == 0x000008, "Wrong alignment on UPaymentSelect_C");
static_assert(sizeof(UPaymentSelect_C) == 0x000348, "Wrong size on UPaymentSelect_C");
static_assert(offsetof(UPaymentSelect_C, UberGraphFrame) == 0x000278, "Member 'UPaymentSelect_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, AnimOut) == 0x000280, "Member 'UPaymentSelect_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, AnimIn) == 0x000288, "Member 'UPaymentSelect_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, AmazonPay1Click_Icon) == 0x000290, "Member 'UPaymentSelect_C::AmazonPay1Click_Icon' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, Btn_APayOne) == 0x000298, "Member 'UPaymentSelect_C::Btn_APayOne' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, Btn_Cancel) == 0x0002A0, "Member 'UPaymentSelect_C::Btn_Cancel' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, Btn_Commerce) == 0x0002A8, "Member 'UPaymentSelect_C::Btn_Commerce' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, Btn_Decide) == 0x0002B0, "Member 'UPaymentSelect_C::Btn_Decide' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, GridPanel_Icon) == 0x0002B8, "Member 'UPaymentSelect_C::GridPanel_Icon' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, Icon_APayOne) == 0x0002C0, "Member 'UPaymentSelect_C::Icon_APayOne' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, List_Payment) == 0x0002C8, "Member 'UPaymentSelect_C::List_Payment' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, Txt_Descript) == 0x0002D0, "Member 'UPaymentSelect_C::Txt_Descript' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, UIBlocker_Base) == 0x0002D8, "Member 'UPaymentSelect_C::UIBlocker_Base' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, UIBlocker_Full) == 0x0002E0, "Member 'UPaymentSelect_C::UIBlocker_Full' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, OnDecide) == 0x0002E8, "Member 'UPaymentSelect_C::OnDecide' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, PaymentCode) == 0x0002F8, "Member 'UPaymentSelect_C::PaymentCode' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, Select_Payment_Code) == 0x000308, "Member 'UPaymentSelect_C::Select_Payment_Code' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, OnCancel) == 0x000318, "Member 'UPaymentSelect_C::OnCancel' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, DataTable) == 0x000328, "Member 'UPaymentSelect_C::DataTable' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, PaymentData) == 0x000330, "Member 'UPaymentSelect_C::PaymentData' has a wrong offset!");
static_assert(offsetof(UPaymentSelect_C, IsFinish) == 0x000340, "Member 'UPaymentSelect_C::IsFinish' has a wrong offset!");

}

