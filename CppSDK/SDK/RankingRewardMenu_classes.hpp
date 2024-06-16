#pragma once

 

// Package: RankingRewardMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RankingRewardMenu.RankingRewardMenu_C
// 0x00E8 (0x0360 - 0x0278)
class URankingRewardMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG001;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG002;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Caution_Text;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   EndDateTimeTextBlock_History_1;                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconTime;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image01;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image02;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image03;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line01;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line02;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line03;                                            // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Nodate_Text;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URankingRewardItem_C*                   RankingRewardItem;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URankingRewardItem_C*                   RankingRewardItem_1;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URankingRewardItem_C*                   RankingRewardItem_2;                               // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URankingRewardItem_C*                   RankingRewardItem_3;                               // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RankingTitleText;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_67;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_HoldingPeriod;                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTable;                                         // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsClosing;                                         // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8ABB[0x3];                                     // 0x0359(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ListCnt;                                           // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_RankingRewardMenu(int32 EntryPoint);
	void CustomEvent_0();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void Construct();
	void SetRankingRewardData(const struct FRankingHistoryData& RankingHistoryData, ESBClassType InClassType, bool IsTotallingEnd, int32 InMyRank);
	void ListInitialize();
	void TryGetItem(class URankingRewardItem_C** Param_RankingRewardItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RankingRewardMenu_C">();
	}
	static class URankingRewardMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URankingRewardMenu_C>();
	}
};
static_assert(alignof(URankingRewardMenu_C) == 0x000008, "Wrong alignment on URankingRewardMenu_C");
static_assert(sizeof(URankingRewardMenu_C) == 0x000360, "Wrong size on URankingRewardMenu_C");
static_assert(offsetof(URankingRewardMenu_C, UberGraphFrame) == 0x000278, "Member 'URankingRewardMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, AnimOut) == 0x000280, "Member 'URankingRewardMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, AnimIn) == 0x000288, "Member 'URankingRewardMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, BG) == 0x000290, "Member 'URankingRewardMenu_C::BG' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, BG001) == 0x000298, "Member 'URankingRewardMenu_C::BG001' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, BG002) == 0x0002A0, "Member 'URankingRewardMenu_C::BG002' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, Caution_Text) == 0x0002A8, "Member 'URankingRewardMenu_C::Caution_Text' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, CmnBack01) == 0x0002B0, "Member 'URankingRewardMenu_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, EndDateTimeTextBlock_History_1) == 0x0002B8, "Member 'URankingRewardMenu_C::EndDateTimeTextBlock_History_1' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, IconTime) == 0x0002C0, "Member 'URankingRewardMenu_C::IconTime' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, Image01) == 0x0002C8, "Member 'URankingRewardMenu_C::Image01' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, Image02) == 0x0002D0, "Member 'URankingRewardMenu_C::Image02' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, Image03) == 0x0002D8, "Member 'URankingRewardMenu_C::Image03' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, Line01) == 0x0002E0, "Member 'URankingRewardMenu_C::Line01' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, Line02) == 0x0002E8, "Member 'URankingRewardMenu_C::Line02' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, Line03) == 0x0002F0, "Member 'URankingRewardMenu_C::Line03' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, Nodate_Text) == 0x0002F8, "Member 'URankingRewardMenu_C::Nodate_Text' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, RankingRewardItem) == 0x000300, "Member 'URankingRewardMenu_C::RankingRewardItem' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, RankingRewardItem_1) == 0x000308, "Member 'URankingRewardMenu_C::RankingRewardItem_1' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, RankingRewardItem_2) == 0x000310, "Member 'URankingRewardMenu_C::RankingRewardItem_2' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, RankingRewardItem_3) == 0x000318, "Member 'URankingRewardMenu_C::RankingRewardItem_3' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, RankingTitleText) == 0x000320, "Member 'URankingRewardMenu_C::RankingTitleText' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, VerticalBox_67) == 0x000328, "Member 'URankingRewardMenu_C::VerticalBox_67' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, WidgetSwitcher_HoldingPeriod) == 0x000330, "Member 'URankingRewardMenu_C::WidgetSwitcher_HoldingPeriod' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, OnClose) == 0x000338, "Member 'URankingRewardMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, UIBlocker) == 0x000348, "Member 'URankingRewardMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, TextTable) == 0x000350, "Member 'URankingRewardMenu_C::TextTable' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, IsClosing) == 0x000358, "Member 'URankingRewardMenu_C::IsClosing' has a wrong offset!");
static_assert(offsetof(URankingRewardMenu_C, ListCnt) == 0x00035C, "Member 'URankingRewardMenu_C::ListCnt' has a wrong offset!");

}

