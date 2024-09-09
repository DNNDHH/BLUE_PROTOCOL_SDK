#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass BP_RsDialog_Payment.BP_RsDialog_Payment_C
	 * Size -> 0x0050 (FullSize[0x02C8] - InheritedSize[0x0278])
	 */
	class UBP_RsDialog_Payment_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      Box_Amount;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RsDialog_PaymentSelect_C*                        BP_PaymentSelect01;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RsDialog_PaymentSelect_C*                        BP_PaymentSelect02;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RsDialog_ProductTitle_C*                         BP_ProductTitle;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn27_C*                                         Btn_Check;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Amount;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ESBRmShopMenuType                                          CurrentShopType;                                         // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DFTT[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnButtonClicked;                                         // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void BndEvt__BP_PaymentSelect02_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature();
		void SetDialogInfo(ERsDialogProductTitleType ProductTilteType, int32_t ItemSetId, const class FText& ProductName, int32_t RankFrom, int32_t RankTo, bool ShowPurchaseNum, int32_t PurchaseNum, ERsDialogPaymentType PaymentType01, int32_t PurchasePrice01, ERsDialogPaymentType PaymentType02, int32_t PurchasePrice02);
		void BndEvt__BP_PaymentSelect01_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
		void BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void ExecuteUbergraph_BP_RsDialog_Payment(int32_t EntryPoint);
		void OnButtonClicked__DelegateSignature(ERsDialogButtonType Type);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
