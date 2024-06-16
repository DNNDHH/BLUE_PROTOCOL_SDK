#pragma once

 

// Package: GashaShopSubWindow_Rate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GashaShopSubWindow_Rate.GashaShopSubWindow_Rate_C
// 0x0328 (0x05A0 - 0x0278)
class UGashaShopSubWindow_Rate_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBannerIcon_C*                          BannerIcon;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BonusDisplayButton;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BonusDisplayButton_Canvas;                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             Box_Detail_Description;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnNotes;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_PurchaseTypeSwitchingTab;                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_StepUpGasha;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Layout;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Title;                                 // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn27_C*                            CloseBtnProductList;                               // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGashaMenu_ProductListItem_C*           GashaMenu_ProductListItem;                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGashaMenu_ProductListItem_C*           GashaMenu_ProductListItem_1;                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGashaMenu_ProductListItem_C*           GashaMenu_ProductListItem_2;                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGashaMenu_ProductListItem_C*           GashaMenu_ProductListItem_3;                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGashaMenu_ProductListItem_C*           GashaMenu_ProductListItem_4;                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGashaMenu_ProductListItem_C*           GashaMenu_ProductListItem_5;                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGashaMenu_ProductListItem_C*           GashaMenu_ProductListItem_6;                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGashaMenu_ProductListRateLine_C*       GashaMenu_ProductListRateLine;                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULapCount_C*                            LapCount;                                          // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPurchaseTypeSwitchingTab_C*            PurchaseTypeSwitchingTab;                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_30;                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStepList_Gasha_C*                      StepList_Gasha;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch_TextType;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_TotalRate;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextTotalRateA;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextTotalRateB;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextTotalRateC;                                    // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextTotalRateS;                                    // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TotalRate_A;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TotalRate_B;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TotalRate_C;                                       // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TotalRate_S;                                       // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTitle;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSBGashaReward>                 RewardList;                                        // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBGashaInfo                           GashaInfo;                                         // 0x03C8(0x01C8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGashaShopSubWindow_C*                  SubWindowWidget;                                   // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsStepUp;                                          // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_GashaShopSubWindow_Rate(int32 EntryPoint);
	void SubWindow_Close();
	void Destruct();
	void OnClose_SubWindow();
	void BndEvt__GashaShopSubWindow_Rate_BtnNotes_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__GashaShopSubWindow_Rate_BonusDisplayButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__GashaShopSubWindow_Rate_CloseBtnProductList_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Construct();
	void UpdateBanner(const class FString& Title, const class FString& Banner);
	void BndEvt__GashaShopSubWindow_Rate_StepList_Gasha_K2Node_ComponentBoundEvent_0_OnChangeStep__DelegateSignature(const struct FSBGashaInfo& Param_GashaInfo);
	void UpdateStapUpGasha(int32 Type);
	void BndEvt__GashaShopSubWindow_Rate_PurchaseTypeSwitchingTab_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32 BtnId);
	void InitUpdateTab();
	void SetInfo(TArray<struct FSBGashaReward>& InRewardList);
	void UpdateProductList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GashaShopSubWindow_Rate_C">();
	}
	static class UGashaShopSubWindow_Rate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGashaShopSubWindow_Rate_C>();
	}
};
static_assert(alignof(UGashaShopSubWindow_Rate_C) == 0x000008, "Wrong alignment on UGashaShopSubWindow_Rate_C");
static_assert(sizeof(UGashaShopSubWindow_Rate_C) == 0x0005A0, "Wrong size on UGashaShopSubWindow_Rate_C");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, UberGraphFrame) == 0x000278, "Member 'UGashaShopSubWindow_Rate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, AnimOut) == 0x000280, "Member 'UGashaShopSubWindow_Rate_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, AnimIn) == 0x000288, "Member 'UGashaShopSubWindow_Rate_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, BannerIcon) == 0x000290, "Member 'UGashaShopSubWindow_Rate_C::BannerIcon' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, BG) == 0x000298, "Member 'UGashaShopSubWindow_Rate_C::BG' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, BonusDisplayButton) == 0x0002A0, "Member 'UGashaShopSubWindow_Rate_C::BonusDisplayButton' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, BonusDisplayButton_Canvas) == 0x0002A8, "Member 'UGashaShopSubWindow_Rate_C::BonusDisplayButton_Canvas' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, Box_Detail_Description) == 0x0002B0, "Member 'UGashaShopSubWindow_Rate_C::Box_Detail_Description' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, BtnNotes) == 0x0002B8, "Member 'UGashaShopSubWindow_Rate_C::BtnNotes' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, Canvas_PurchaseTypeSwitchingTab) == 0x0002C0, "Member 'UGashaShopSubWindow_Rate_C::Canvas_PurchaseTypeSwitchingTab' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, Canvas_StepUpGasha) == 0x0002C8, "Member 'UGashaShopSubWindow_Rate_C::Canvas_StepUpGasha' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, CanvasPanel_Layout) == 0x0002D0, "Member 'UGashaShopSubWindow_Rate_C::CanvasPanel_Layout' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, CanvasPanel_Title) == 0x0002D8, "Member 'UGashaShopSubWindow_Rate_C::CanvasPanel_Title' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, CloseBtnProductList) == 0x0002E0, "Member 'UGashaShopSubWindow_Rate_C::CloseBtnProductList' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, GashaMenu_ProductListItem) == 0x0002E8, "Member 'UGashaShopSubWindow_Rate_C::GashaMenu_ProductListItem' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, GashaMenu_ProductListItem_1) == 0x0002F0, "Member 'UGashaShopSubWindow_Rate_C::GashaMenu_ProductListItem_1' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, GashaMenu_ProductListItem_2) == 0x0002F8, "Member 'UGashaShopSubWindow_Rate_C::GashaMenu_ProductListItem_2' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, GashaMenu_ProductListItem_3) == 0x000300, "Member 'UGashaShopSubWindow_Rate_C::GashaMenu_ProductListItem_3' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, GashaMenu_ProductListItem_4) == 0x000308, "Member 'UGashaShopSubWindow_Rate_C::GashaMenu_ProductListItem_4' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, GashaMenu_ProductListItem_5) == 0x000310, "Member 'UGashaShopSubWindow_Rate_C::GashaMenu_ProductListItem_5' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, GashaMenu_ProductListItem_6) == 0x000318, "Member 'UGashaShopSubWindow_Rate_C::GashaMenu_ProductListItem_6' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, GashaMenu_ProductListRateLine) == 0x000320, "Member 'UGashaShopSubWindow_Rate_C::GashaMenu_ProductListRateLine' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, LapCount) == 0x000328, "Member 'UGashaShopSubWindow_Rate_C::LapCount' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, PurchaseTypeSwitchingTab) == 0x000330, "Member 'UGashaShopSubWindow_Rate_C::PurchaseTypeSwitchingTab' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, SBRuntimeTextBlock_30) == 0x000338, "Member 'UGashaShopSubWindow_Rate_C::SBRuntimeTextBlock_30' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, StepList_Gasha) == 0x000340, "Member 'UGashaShopSubWindow_Rate_C::StepList_Gasha' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, Switch_TextType) == 0x000348, "Member 'UGashaShopSubWindow_Rate_C::Switch_TextType' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, Text_TotalRate) == 0x000350, "Member 'UGashaShopSubWindow_Rate_C::Text_TotalRate' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, TextTotalRateA) == 0x000358, "Member 'UGashaShopSubWindow_Rate_C::TextTotalRateA' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, TextTotalRateB) == 0x000360, "Member 'UGashaShopSubWindow_Rate_C::TextTotalRateB' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, TextTotalRateC) == 0x000368, "Member 'UGashaShopSubWindow_Rate_C::TextTotalRateC' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, TextTotalRateS) == 0x000370, "Member 'UGashaShopSubWindow_Rate_C::TextTotalRateS' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, TotalRate_A) == 0x000378, "Member 'UGashaShopSubWindow_Rate_C::TotalRate_A' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, TotalRate_B) == 0x000380, "Member 'UGashaShopSubWindow_Rate_C::TotalRate_B' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, TotalRate_C) == 0x000388, "Member 'UGashaShopSubWindow_Rate_C::TotalRate_C' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, TotalRate_S) == 0x000390, "Member 'UGashaShopSubWindow_Rate_C::TotalRate_S' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, TxtTitle) == 0x000398, "Member 'UGashaShopSubWindow_Rate_C::TxtTitle' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, UIBlocker) == 0x0003A0, "Member 'UGashaShopSubWindow_Rate_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, RewardList) == 0x0003A8, "Member 'UGashaShopSubWindow_Rate_C::RewardList' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, OnClose) == 0x0003B8, "Member 'UGashaShopSubWindow_Rate_C::OnClose' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, GashaInfo) == 0x0003C8, "Member 'UGashaShopSubWindow_Rate_C::GashaInfo' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, SubWindowWidget) == 0x000590, "Member 'UGashaShopSubWindow_Rate_C::SubWindowWidget' has a wrong offset!");
static_assert(offsetof(UGashaShopSubWindow_Rate_C, IsStepUp) == 0x000598, "Member 'UGashaShopSubWindow_Rate_C::IsStepUp' has a wrong offset!");

}

