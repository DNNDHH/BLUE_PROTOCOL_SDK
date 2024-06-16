#pragma once

 

// Package: GashaShopSubWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RsDialogPaymentType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GashaShopSubWindow.GashaShopSubWindow_C
// 0x03B0 (0x0628 - 0x0278)
class UGashaShopSubWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_RsDialog_ProductAmount_C*           BP_RsDialog_ProductAmount;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URmShopMenu_MenuItem2_C*                Btn_Commerce;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           Btn_Exit;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Off;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_On;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            CloseBtnLackOfTickets;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            CloseBtnLackOfTickets_1;                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            CloseBtnWarning;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_Credit_C*                     FlatShop_Credit;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_Credit_C*                     FlatShop_Credit_1;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGashaLever_C*                          GashaLever;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGashaShopSubWindow_Rate_C*             GashaShopSubWindow_Rate;                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_383;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULapCount_C*                            LapCount;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Message;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOwnGashaTicketItem_C*                  OwnGashaTicketItem_1;                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOwnGashaTicketItem_C*                  OwnGashaTicketItem_2;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOwnGashaTicketItem_C*                  OwnGashaTicketItem_587;                            // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStepList_Gasha_C*                      StepList_Gasha;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStepTextItem_Gasha_C*                  StepTextItem_Gasha;                                // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchDispType;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSkipButton;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType;                                        // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Txt_Caution;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       Txt_Caution_Ticket;                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtAmount;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAmountNum;                                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtOff1;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtOff2;                                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtOn1;                                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtOn2;                                            // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTitle_1;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtWarningComment;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBox_TicketSelect;                                 // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SwitchId;                                          // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_9105[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBGashaReward>                 RewardList;                                        // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnExecution;                                       // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnChangeSkipBtn;                                   // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSkip;                                            // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9106[0x7];                                     // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnShopRoseOrbBtn;                                  // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnShopBPPBtn;                                      // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBGashaPurchaseType                          PurchaseType;                                      // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9107[0x7];                                     // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TicketIdList;                                      // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 TicketPriceList;                                   // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBGashaInfo                           GashaInfo;                                         // 0x0440(0x01C8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsClose;                                           // 0x0608(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9108[0x7];                                     // 0x0609(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 StepUpGashaId;                                     // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         InitStepNumByWarning;                              // 0x0620(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void OnExecution__DelegateSignature(const struct FSBGashaTickets& TicketData, int32 TicketPlayCount);
	void OnChangeSkipBtn__DelegateSignature(bool Param_IsSkip);
	void OnShopRoseOrbBtn__DelegateSignature();
	void OnShopBPPBtn__DelegateSignature();
	void ExecuteUbergraph_GashaShopSubWindow(int32 EntryPoint);
	void BndEvt__GashaShopSubWindow_Btn_Commerce_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature();
	void BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_11_OnBPPointClicked__DelegateSignature();
	void BndEvt__GashaShopSubWindow_FlatShop_Credit_1_K2Node_ComponentBoundEvent_10_OnRoseOrbClicked__DelegateSignature();
	void BndEvt__GashaShopSubWindow_CloseBtnLackOfTickets_1_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature();
	void BndEvt__GashaShopSubWindow_Btn_Exit_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature();
	void Destruct();
	void OnTicketGashaLever();
	void BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_8_OnBPPointClicked__DelegateSignature();
	void BndEvt__FlatShop_Credit_K2Node_ComponentBoundEvent_0_OnRoseOrbClicked__DelegateSignature();
	void SelectTicketAnimFinished(const struct FSBGashaTickets& TicketData, int32 InAmount);
	void BndEvt__GashaLever_K2Node_ComponentBoundEvent_7_EventRotateAnimFinished__DelegateSignature();
	void BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__CloseBtnLackOfTickets_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__Btn_Off_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_On_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__CmnBtn27_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void Close();
	void Construct();
	void BndEvt__GashaShopSubWindow_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature(const struct FSBGashaInfo& Param_GashaInfo);
	void StepUpConstruct();
	void Update_Product_List();
	void Set_Info(TArray<struct FSBGashaReward>& InRewardList);
	void SetExecutionInfo(bool IsTickets, const class FString& InTitleName, ESBGashaPurchaseType Param_PurchaseType, int32 Amount, int32 Price, const struct FSBGashaPrices& GashaPrice, TArray<struct FSBGashaTickets>& GashaTickets, bool InitSkip, int32 Gender, bool PaidOnly);
	void SelectTicket(const struct FSBGashaTickets& TicketData, int32 InAmount);
	void SetWarningComment(const class FString& GashaId);
	void Set_Credit(int32 Price, ESBGashaCurrencyType CurrencyType, bool PaidOnly);
	void Update_Warning_Comment();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GashaShopSubWindow_C">();
	}
	static class UGashaShopSubWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGashaShopSubWindow_C>();
	}
};
static_assert(alignof(UGashaShopSubWindow_C) == 0x000008, "Wrong alignment on UGashaShopSubWindow_C");
static_assert(sizeof(UGashaShopSubWindow_C) == 0x000628, "Wrong size on UGashaShopSubWindow_C");
static_assert(offsetof(UGashaShopSubWindow_C, UberGraphFrame) == 0x000278, "Member 'UGashaShopSubWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, AnimOut) == 0x000280, "Member 'UGashaShopSubWindow_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, AnimIn) == 0x000288, "Member 'UGashaShopSubWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, BP_RsDialog_ProductAmount) == 0x000290, "Member 'UGashaShopSubWindow_C::BP_RsDialog_ProductAmount' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, Btn_Commerce) == 0x000298, "Member 'UGashaShopSubWindow_C::Btn_Commerce' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, Btn_Exit) == 0x0002A0, "Member 'UGashaShopSubWindow_C::Btn_Exit' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, Btn_Off) == 0x0002A8, "Member 'UGashaShopSubWindow_C::Btn_Off' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, Btn_On) == 0x0002B0, "Member 'UGashaShopSubWindow_C::Btn_On' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, CloseBtnLackOfTickets) == 0x0002B8, "Member 'UGashaShopSubWindow_C::CloseBtnLackOfTickets' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, CloseBtnLackOfTickets_1) == 0x0002C0, "Member 'UGashaShopSubWindow_C::CloseBtnLackOfTickets_1' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, CloseBtnWarning) == 0x0002C8, "Member 'UGashaShopSubWindow_C::CloseBtnWarning' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, FlatShop_Credit) == 0x0002D0, "Member 'UGashaShopSubWindow_C::FlatShop_Credit' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, FlatShop_Credit_1) == 0x0002D8, "Member 'UGashaShopSubWindow_C::FlatShop_Credit_1' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, GashaLever) == 0x0002E0, "Member 'UGashaShopSubWindow_C::GashaLever' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, GashaShopSubWindow_Rate) == 0x0002E8, "Member 'UGashaShopSubWindow_C::GashaShopSubWindow_Rate' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, Image_383) == 0x0002F0, "Member 'UGashaShopSubWindow_C::Image_383' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, LapCount) == 0x0002F8, "Member 'UGashaShopSubWindow_C::LapCount' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, Message) == 0x000300, "Member 'UGashaShopSubWindow_C::Message' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, OwnGashaTicketItem_1) == 0x000308, "Member 'UGashaShopSubWindow_C::OwnGashaTicketItem_1' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, OwnGashaTicketItem_2) == 0x000310, "Member 'UGashaShopSubWindow_C::OwnGashaTicketItem_2' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, OwnGashaTicketItem_587) == 0x000318, "Member 'UGashaShopSubWindow_C::OwnGashaTicketItem_587' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, StepList_Gasha) == 0x000320, "Member 'UGashaShopSubWindow_C::StepList_Gasha' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, StepTextItem_Gasha) == 0x000328, "Member 'UGashaShopSubWindow_C::StepTextItem_Gasha' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, SwitchDispType) == 0x000330, "Member 'UGashaShopSubWindow_C::SwitchDispType' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, SwitchSkipButton) == 0x000338, "Member 'UGashaShopSubWindow_C::SwitchSkipButton' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, SwitchType) == 0x000340, "Member 'UGashaShopSubWindow_C::SwitchType' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, Txt_Caution) == 0x000348, "Member 'UGashaShopSubWindow_C::Txt_Caution' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, Txt_Caution_Ticket) == 0x000350, "Member 'UGashaShopSubWindow_C::Txt_Caution_Ticket' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, TxtAmount) == 0x000358, "Member 'UGashaShopSubWindow_C::TxtAmount' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, TxtAmountNum) == 0x000360, "Member 'UGashaShopSubWindow_C::TxtAmountNum' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, TxtOff1) == 0x000368, "Member 'UGashaShopSubWindow_C::TxtOff1' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, TxtOff2) == 0x000370, "Member 'UGashaShopSubWindow_C::TxtOff2' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, TxtOn1) == 0x000378, "Member 'UGashaShopSubWindow_C::TxtOn1' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, TxtOn2) == 0x000380, "Member 'UGashaShopSubWindow_C::TxtOn2' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, TxtTitle_1) == 0x000388, "Member 'UGashaShopSubWindow_C::TxtTitle_1' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, TxtWarningComment) == 0x000390, "Member 'UGashaShopSubWindow_C::TxtWarningComment' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, UIBlocker) == 0x000398, "Member 'UGashaShopSubWindow_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, VBox_TicketSelect) == 0x0003A0, "Member 'UGashaShopSubWindow_C::VBox_TicketSelect' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, OnClose) == 0x0003A8, "Member 'UGashaShopSubWindow_C::OnClose' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, SwitchId) == 0x0003B8, "Member 'UGashaShopSubWindow_C::SwitchId' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, RewardList) == 0x0003C0, "Member 'UGashaShopSubWindow_C::RewardList' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, OnExecution) == 0x0003D0, "Member 'UGashaShopSubWindow_C::OnExecution' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, OnChangeSkipBtn) == 0x0003E0, "Member 'UGashaShopSubWindow_C::OnChangeSkipBtn' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, IsSkip) == 0x0003F0, "Member 'UGashaShopSubWindow_C::IsSkip' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, OnShopRoseOrbBtn) == 0x0003F8, "Member 'UGashaShopSubWindow_C::OnShopRoseOrbBtn' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, OnShopBPPBtn) == 0x000408, "Member 'UGashaShopSubWindow_C::OnShopBPPBtn' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, PurchaseType) == 0x000418, "Member 'UGashaShopSubWindow_C::PurchaseType' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, TicketIdList) == 0x000420, "Member 'UGashaShopSubWindow_C::TicketIdList' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, TicketPriceList) == 0x000430, "Member 'UGashaShopSubWindow_C::TicketPriceList' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, GashaInfo) == 0x000440, "Member 'UGashaShopSubWindow_C::GashaInfo' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, IsClose) == 0x000608, "Member 'UGashaShopSubWindow_C::IsClose' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, StepUpGashaId) == 0x000610, "Member 'UGashaShopSubWindow_C::StepUpGashaId' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_C, InitStepNumByWarning) == 0x000620, "Member 'UGashaShopSubWindow_C::InitStepNumByWarning' has a wrong offset!");

}

