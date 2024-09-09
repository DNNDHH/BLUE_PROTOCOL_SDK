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
	 * WidgetBlueprintGeneratedClass GashaShopSubWindow.GashaShopSubWindow_C
	 * Size -> 0x03A4 (FullSize[0x061C] - InheritedSize[0x0278])
	 */
	class UGashaShopSubWindow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBP_RsDialog_ProductAmount_C*                        BP_RsDialog_ProductAmount;                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URmShopMenu_MenuItem2_C*                             Btn_Commerce;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        Btn_Exit;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_Off;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_On;                                                  // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn27_C*                                         CloseBtnLackOfTickets;                                   // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn27_C*                                         CloseBtnLackOfTickets_2;                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn27_C*                                         CloseBtnWarning;                                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFlatShop_Credit_C*                                  FlatShop_Credit;                                         // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFlatShop_Credit_C*                                  FlatShop_Credit_2;                                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGashaLever_C*                                       GashaLever;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGashaShopSubWindow_Rate_C*                          GashaShopSubWindow_Rate;                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULapCount_C*                                         LapCount;                                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRichTextBlock*                                    Message;                                                 // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOwnGashaTicketItem_C*                               OwnGashaTicketItem_2;                                    // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOwnGashaTicketItem_C*                               OwnGashaTicketItem_3;                                    // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOwnGashaTicketItem_C*                               OwnGashaTicketItem_588;                                  // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStepList_Gasha_C*                                   StepList_Gasha;                                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStepTextItem_Gasha_C*                               StepTextItem_Gasha;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchDispType;                                          // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchSkipButton;                                        // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchType;                                              // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRichTextBlock*                                    Txt_Caution;                                             // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRichTextBlock*                                    Txt_Caution_Ticket;                                      // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtAmount;                                               // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtAmountNum;                                            // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtOff1;                                                 // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtOff2;                                                 // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtOn1;                                                  // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtOn2;                                                  // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtTitle_2;                                              // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtWarningComment;                                       // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBox_TicketSelect;                                       // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    SwitchId;                                                // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_3Q6S[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBGashaReward>                              RewardList;                                              // 0x03B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnExecution;                                             // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnChangeSkipBtn;                                         // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsSkip;                                                  // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5H9S[0x7];                                   // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnShopRoseOrbBtn;                                        // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnShopBPPBtn;                                            // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ESBGashaPurchaseType                                       PurchaseType;                                            // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E0Y2[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            TicketIdList;                                            // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            TicketPriceList;                                         // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBGashaInfo                                        GashaInfo;                                               // 0x0438(0x01C8) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsClose;                                                 // 0x0600(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2JIK[0x7];                                   // 0x0601(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StepUpGashaId;                                           // 0x0608(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    InitStepNumByWarning;                                    // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void ListenCancelKey();
		void SetText(const class FText& InText);
		void UpdateWarningComment();
		void SetCredit(int32_t Price, ESBGashaCurrencyType CurrencyType, bool PaidOnly);
		void SetWarningComment(const class FString& GashaId);
		void SelectTicket(const struct FSBGashaTickets& TicketData, int32_t InAmount);
		void SetExecutionInfo(bool IsTickets, const class FString& InTitleName, ESBGashaPurchaseType PurchaseType, int32_t Amount, int32_t Price, const struct FSBGashaPrices& GashaPrice, TArray<struct FSBGashaTickets>* GashaTickets, bool InitSkip, int32_t Gender, bool PaidOnly);
		void SetInfo(TArray<struct FSBGashaReward>* InRewardList);
		void UpdateProductList();
		void StepUpConstruct();
		void BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature(const struct FSBGashaInfo& GashaInfo);
		void Construct();
		void Close();
		void BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
		void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
		void BndEvt__Btn_On_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Btn_Off_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CloseBtnLackOfTickets_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
		void BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
		void BndEvt__GashaLever_K2Node_ComponentBoundEvent_7_EventRotateAnimFinished__DelegateSignature();
		void SelectTicketAnimFinished(const struct FSBGashaTickets& TicketData, int32_t InAmount);
		void BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_0_OnRoseOrbClicked__DelegateSignature();
		void BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_8_OnBPPointClicked__DelegateSignature();
		void OnTicketGashaLever();
		void Destruct();
		void BndEvt__GashaShopSubWindow_Btn_Exit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature();
		void BndEvt__GashaShopSubWindow_CloseBtnLackOfTickets_1_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature();
		void BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature();
		void BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature();
		void BndEvt__GashaShopSubWindow_Btn_Commerce_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature();
		void ExecuteUbergraph_GashaShopSubWindow(int32_t EntryPoint);
		void OnShopBPPBtn__DelegateSignature();
		void OnShopRoseOrbBtn__DelegateSignature();
		void OnChangeSkipBtn__DelegateSignature(bool IsSkip);
		void OnExecution__DelegateSignature(const struct FSBGashaTickets& TicketData, int32_t TicketPlayCount);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
