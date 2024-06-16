#pragma once

 

// Package: Fang_expedition_DetailPlayData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DetailPlayData.Fang_expedition_DetailPlayData_C
// 0x0340 (0x05B8 - 0x0278)
class UFang_expedition_DetailPlayData_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_StartBtn_Eff;                                  // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BaseCircle_S;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    BaseTimeText;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ButtonTypeSwitch;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            CmnBtn16;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemList_C*      DetailItemList01;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemList_C*      DetailItemList02;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            ExpeditionStartButton;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_BreakButton1_C*        Fang_expedition_BreakButton1;                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_BreakButton2_C*        Fang_expedition_BreakButton2;                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_ExpeditionMountData_C* Fang_expedition_ExpeditionMountData;               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FangSelectBG;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FangSelectBG_1;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Finish_TextPanel;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            FinishButton;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine;                                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_1;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_2;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_3;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_4;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBG1;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBG2;                                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBG3;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow_1;                                     // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow_2;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_StartBtn_Eff;                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoIcon;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemReplacedAnm_C* ItemReplacedAnm01;                                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemReplacedAnm_C* ItemReplacedAnm02;                                 // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RewardBG;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_3;                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_4;                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectImajin_MountDataBG;                          // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SelectImajin_TimerPanel;                           // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_PlayFinish;                                 // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            TicketSelect_Btn;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TimeText;                                          // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          TokenIcon1;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          TokenIcon2;                                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          TokenIcon3;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    UsableTicketText;                                  // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine_1;                                           // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine_2;                                           // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine_3;                                           // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBFang_expeditionPlayData             TempPlayData;                                      // 0x03F0(0x0120)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnExpeditionCancelClicked;                         // 0x0510(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnExpeditionUseTicketClicked;                      // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickRandomRewardListView;                       // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         FangVariety;                                       // 0x0540(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5E45[0x4];                                     // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickExpeditionFinish;                           // 0x0548(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 SelectTokenIds;                                    // 0x0558(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClickTicketWindowOpen;                           // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickExpeditionStart;                            // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCommonIconToolTipContent_MultiLine_C*  ToolTip;                                           // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTable;                                         // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayMode;                                          // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E46[0x7];                                     // 0x0599(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickRandomRewardListView_PlayData;              // 0x05A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectTimeIndex;                                   // 0x05B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnExpeditionCancelClicked__DelegateSignature();
	void OnExpeditionUseTicketClicked__DelegateSignature();
	void OnClickRandomRewardListView__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex, int32 FangValue);
	void OnClickExpeditionFinish__DelegateSignature(const class FString& ExpeditionId);
	void OnClickTicketWindowOpen__DelegateSignature(TArray<int32>& SelectedTokenIds);
	void OnClickExpeditionStart__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, TArray<int32>& TokenIds);
	void OnClickRandomRewardListView_PlayData__DelegateSignature(const struct FSBFang_expeditionPlayData& PlayData);
	void ExecuteUbergraph_Fang_expedition_DetailPlayData(int32 EntryPoint);
	void OnFastFinish();
	void BndEvt__Fang_expedition_DetailPlayData_ExpeditionStartButton_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__Fang_expedition_DetailPlayData_TicketSelect_Btn_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__Fang_expedition_DetailPlayData_FinishButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__Fang_expedition_DetailPlayData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Destruct();
	void CB_OnExpeditionTicketClick();
	void CB_OnExpeditionCancelClick();
	void Construct();
	void SetPlayData(struct FSBFang_expeditionPlayData& PlayData, int32 CancelCount);
	void SetFangSelectMode(const struct FSBFang_expeditionAreaData& AreaData, int32 TimeIndex);
	void SetSelectFangIds(TArray<class FString>& UniqueIds, bool AnimationSkip);
	void UpdateTokenIconVisibility();
	void UsableTokenCheck(bool* WasUseToken);
	void SetUseTokenData(TArray<int32>& TokenList);
	void SetShortTime(int32 TimeIndex);
	void SetBaseTime(int32 TimeData);
	void UpdateRandomFixedReward(TArray<struct FSBMasterReward>& RewardData);
	void SetShortTimeEx();
	void GetEtcTime(int32 SelectType, int32* EtcTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DetailPlayData_C">();
	}
	static class UFang_expedition_DetailPlayData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DetailPlayData_C>();
	}
};
static_assert(alignof(UFang_expedition_DetailPlayData_C) == 0x000008, "Wrong alignment on UFang_expedition_DetailPlayData_C");
static_assert(sizeof(UFang_expedition_DetailPlayData_C) == 0x0005B8, "Wrong size on UFang_expedition_DetailPlayData_C");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DetailPlayData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, Anm_StartBtn_Eff) == 0x000280, "Member 'UFang_expedition_DetailPlayData_C::Anm_StartBtn_Eff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, BaseCircle_S) == 0x000288, "Member 'UFang_expedition_DetailPlayData_C::BaseCircle_S' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, BaseTimeText) == 0x000290, "Member 'UFang_expedition_DetailPlayData_C::BaseTimeText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, BG) == 0x000298, "Member 'UFang_expedition_DetailPlayData_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, ButtonTypeSwitch) == 0x0002A0, "Member 'UFang_expedition_DetailPlayData_C::ButtonTypeSwitch' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, CmnBtn16) == 0x0002A8, "Member 'UFang_expedition_DetailPlayData_C::CmnBtn16' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, DetailItemList01) == 0x0002B0, "Member 'UFang_expedition_DetailPlayData_C::DetailItemList01' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, DetailItemList02) == 0x0002B8, "Member 'UFang_expedition_DetailPlayData_C::DetailItemList02' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, ExpeditionStartButton) == 0x0002C0, "Member 'UFang_expedition_DetailPlayData_C::ExpeditionStartButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, Fang_expedition_BreakButton1) == 0x0002C8, "Member 'UFang_expedition_DetailPlayData_C::Fang_expedition_BreakButton1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, Fang_expedition_BreakButton2) == 0x0002D0, "Member 'UFang_expedition_DetailPlayData_C::Fang_expedition_BreakButton2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, Fang_expedition_ExpeditionMountData) == 0x0002D8, "Member 'UFang_expedition_DetailPlayData_C::Fang_expedition_ExpeditionMountData' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, FangSelectBG) == 0x0002E0, "Member 'UFang_expedition_DetailPlayData_C::FangSelectBG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, FangSelectBG_1) == 0x0002E8, "Member 'UFang_expedition_DetailPlayData_C::FangSelectBG_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, Finish_TextPanel) == 0x0002F0, "Member 'UFang_expedition_DetailPlayData_C::Finish_TextPanel' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, FinishButton) == 0x0002F8, "Member 'UFang_expedition_DetailPlayData_C::FinishButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, HLine) == 0x000300, "Member 'UFang_expedition_DetailPlayData_C::HLine' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, HLine_1) == 0x000308, "Member 'UFang_expedition_DetailPlayData_C::HLine_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, HLine_2) == 0x000310, "Member 'UFang_expedition_DetailPlayData_C::HLine_2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, HLine_3) == 0x000318, "Member 'UFang_expedition_DetailPlayData_C::HLine_3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, HLine_4) == 0x000320, "Member 'UFang_expedition_DetailPlayData_C::HLine_4' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, IconBG1) == 0x000328, "Member 'UFang_expedition_DetailPlayData_C::IconBG1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, IconBG2) == 0x000330, "Member 'UFang_expedition_DetailPlayData_C::IconBG2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, IconBG3) == 0x000338, "Member 'UFang_expedition_DetailPlayData_C::IconBG3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, Image_Arrow) == 0x000340, "Member 'UFang_expedition_DetailPlayData_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, Image_Arrow_1) == 0x000348, "Member 'UFang_expedition_DetailPlayData_C::Image_Arrow_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, Image_Arrow_2) == 0x000350, "Member 'UFang_expedition_DetailPlayData_C::Image_Arrow_2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, Image_StartBtn_Eff) == 0x000358, "Member 'UFang_expedition_DetailPlayData_C::Image_StartBtn_Eff' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, InfoIcon) == 0x000360, "Member 'UFang_expedition_DetailPlayData_C::InfoIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, ItemReplacedAnm01) == 0x000368, "Member 'UFang_expedition_DetailPlayData_C::ItemReplacedAnm01' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, ItemReplacedAnm02) == 0x000370, "Member 'UFang_expedition_DetailPlayData_C::ItemReplacedAnm02' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, RewardBG) == 0x000378, "Member 'UFang_expedition_DetailPlayData_C::RewardBG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, SBRuntimeTextBlock_3) == 0x000380, "Member 'UFang_expedition_DetailPlayData_C::SBRuntimeTextBlock_3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, SBRuntimeTextBlock_4) == 0x000388, "Member 'UFang_expedition_DetailPlayData_C::SBRuntimeTextBlock_4' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, SelectImajin_MountDataBG) == 0x000390, "Member 'UFang_expedition_DetailPlayData_C::SelectImajin_MountDataBG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, SelectImajin_TimerPanel) == 0x000398, "Member 'UFang_expedition_DetailPlayData_C::SelectImajin_TimerPanel' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, Spacer_PlayFinish) == 0x0003A0, "Member 'UFang_expedition_DetailPlayData_C::Spacer_PlayFinish' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, TicketSelect_Btn) == 0x0003A8, "Member 'UFang_expedition_DetailPlayData_C::TicketSelect_Btn' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, TimeText) == 0x0003B0, "Member 'UFang_expedition_DetailPlayData_C::TimeText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, TokenIcon1) == 0x0003B8, "Member 'UFang_expedition_DetailPlayData_C::TokenIcon1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, TokenIcon2) == 0x0003C0, "Member 'UFang_expedition_DetailPlayData_C::TokenIcon2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, TokenIcon3) == 0x0003C8, "Member 'UFang_expedition_DetailPlayData_C::TokenIcon3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, UsableTicketText) == 0x0003D0, "Member 'UFang_expedition_DetailPlayData_C::UsableTicketText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, VLine_1) == 0x0003D8, "Member 'UFang_expedition_DetailPlayData_C::VLine_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, VLine_2) == 0x0003E0, "Member 'UFang_expedition_DetailPlayData_C::VLine_2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, VLine_3) == 0x0003E8, "Member 'UFang_expedition_DetailPlayData_C::VLine_3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, TempPlayData) == 0x0003F0, "Member 'UFang_expedition_DetailPlayData_C::TempPlayData' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, OnExpeditionCancelClicked) == 0x000510, "Member 'UFang_expedition_DetailPlayData_C::OnExpeditionCancelClicked' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, OnExpeditionUseTicketClicked) == 0x000520, "Member 'UFang_expedition_DetailPlayData_C::OnExpeditionUseTicketClicked' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, OnClickRandomRewardListView) == 0x000530, "Member 'UFang_expedition_DetailPlayData_C::OnClickRandomRewardListView' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, FangVariety) == 0x000540, "Member 'UFang_expedition_DetailPlayData_C::FangVariety' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, OnClickExpeditionFinish) == 0x000548, "Member 'UFang_expedition_DetailPlayData_C::OnClickExpeditionFinish' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, SelectTokenIds) == 0x000558, "Member 'UFang_expedition_DetailPlayData_C::SelectTokenIds' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, OnClickTicketWindowOpen) == 0x000568, "Member 'UFang_expedition_DetailPlayData_C::OnClickTicketWindowOpen' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, OnClickExpeditionStart) == 0x000578, "Member 'UFang_expedition_DetailPlayData_C::OnClickExpeditionStart' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, ToolTip) == 0x000588, "Member 'UFang_expedition_DetailPlayData_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, TextTable) == 0x000590, "Member 'UFang_expedition_DetailPlayData_C::TextTable' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, PlayMode) == 0x000598, "Member 'UFang_expedition_DetailPlayData_C::PlayMode' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, OnClickRandomRewardListView_PlayData) == 0x0005A0, "Member 'UFang_expedition_DetailPlayData_C::OnClickRandomRewardListView_PlayData' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailPlayData_C, SelectTimeIndex) == 0x0005B0, "Member 'UFang_expedition_DetailPlayData_C::SelectTimeIndex' has a wrong offset!");

}

