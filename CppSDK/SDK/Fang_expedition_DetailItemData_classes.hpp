#pragma once

 

// Package: Fang_expedition_DetailItemData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DetailItemData.Fang_expedition_DetailItemData_C
// 0x01C8 (0x0440 - 0x0278)
class UFang_expedition_DetailItemData_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             AreaDetailText;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow1;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow2;                                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow3;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow4;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Arrow_Switcher;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_ToSelect;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            CmnBtn16;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemList_C*      DetailItemList01;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemList_C*      DetailItemList02;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ExpeditionLimitPanel;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailRelease_C*       Fang_expedition_DetailRelease;                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Arrow;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InfoIcon;                                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemReplacedAnm_C* ItemReplacedAnm01;                                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemReplacedAnm_C* ItemReplacedAnm02;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ReleaseConditionsPanel;                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RequesterNameText;                                 // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RewardBG;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailTimeBtn_C*       TimeButton1;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailTimeBtn_C*       TimeButton2;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailTimeBtn_C*       TimeButton3;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailTimeBtn_C*       TimeButton4;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine_1;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VLine_2;                                           // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBFang_expeditionAreaData             TempAreaData;                                      // 0x0358(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TimeIndex;                                         // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         FangVariety;                                       // 0x0404(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickRandomRewardListView;                       // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickFangSelectButton;                           // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          AreaViewType;                                      // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E75[0x7];                                     // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_MultiLine_C*  ToolTip;                                           // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTable;                                         // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClickRandomRewardListView__DelegateSignature(const struct FSBFang_expeditionAreaData& AreaData, int32 Param_TimeIndex, int32 FangValue);
	void OnClickFangSelectButton__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_DetailItemData(int32 EntryPoint);
	void BndEvt__Fang_expedition_DetailItemData_TimeButton4_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature();
	void BndEvt__Fang_expedition_DetailItemData_TimeButton3_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature();
	void BndEvt__Fang_expedition_DetailItemData_TimeButton2_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature();
	void BndEvt__Fang_expedition_DetailItemData_TimeButton1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
	void Destruct();
	void BndEvt__Fang_expedition_DetailItemData_Btn_ToSelect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__Fang_expedition_DetailItemData_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Construct();
	void SetAreaData(const struct FSBFang_expeditionAreaData& AreaData);
	void UpdateTimeButtonText();
	void ChangeTimeIndex(int32 Param_Index, bool AnimationSkip);
	void UpdateRewardList(bool AnimationSkip);
	void ChangeFangValue(int32 Value, bool AnimationSkip);
	void SetFangVarietyNum(int32 Num);
	void UpdateRandomRewardData();
	void GetAreaData(struct FSBFang_expeditionAreaData* Data);
	void GetSelectTimeIndex(int32* Param_Index);
	void SetNextButtonDisabled(bool IsDisable);
	void CheckAnimationSkip(int32 InValue, bool* OutParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DetailItemData_C">();
	}
	static class UFang_expedition_DetailItemData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DetailItemData_C>();
	}
};
static_assert(alignof(UFang_expedition_DetailItemData_C) == 0x000008, "Wrong alignment on UFang_expedition_DetailItemData_C");
static_assert(sizeof(UFang_expedition_DetailItemData_C) == 0x000440, "Wrong size on UFang_expedition_DetailItemData_C");
static_assert(offsetof(UFang_expedition_DetailItemData_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DetailItemData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, AreaDetailText) == 0x000280, "Member 'UFang_expedition_DetailItemData_C::AreaDetailText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, Arrow1) == 0x000288, "Member 'UFang_expedition_DetailItemData_C::Arrow1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, Arrow2) == 0x000290, "Member 'UFang_expedition_DetailItemData_C::Arrow2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, Arrow3) == 0x000298, "Member 'UFang_expedition_DetailItemData_C::Arrow3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, Arrow4) == 0x0002A0, "Member 'UFang_expedition_DetailItemData_C::Arrow4' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, Arrow_Switcher) == 0x0002A8, "Member 'UFang_expedition_DetailItemData_C::Arrow_Switcher' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, BG) == 0x0002B0, "Member 'UFang_expedition_DetailItemData_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, Btn_ToSelect) == 0x0002B8, "Member 'UFang_expedition_DetailItemData_C::Btn_ToSelect' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, CmnBtn16) == 0x0002C0, "Member 'UFang_expedition_DetailItemData_C::CmnBtn16' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, DetailItemList01) == 0x0002C8, "Member 'UFang_expedition_DetailItemData_C::DetailItemList01' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, DetailItemList02) == 0x0002D0, "Member 'UFang_expedition_DetailItemData_C::DetailItemList02' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, ExpeditionLimitPanel) == 0x0002D8, "Member 'UFang_expedition_DetailItemData_C::ExpeditionLimitPanel' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, Fang_expedition_DetailRelease) == 0x0002E0, "Member 'UFang_expedition_DetailItemData_C::Fang_expedition_DetailRelease' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, HLine) == 0x0002E8, "Member 'UFang_expedition_DetailItemData_C::HLine' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, Img_Arrow) == 0x0002F0, "Member 'UFang_expedition_DetailItemData_C::Img_Arrow' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, InfoIcon) == 0x0002F8, "Member 'UFang_expedition_DetailItemData_C::InfoIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, ItemReplacedAnm01) == 0x000300, "Member 'UFang_expedition_DetailItemData_C::ItemReplacedAnm01' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, ItemReplacedAnm02) == 0x000308, "Member 'UFang_expedition_DetailItemData_C::ItemReplacedAnm02' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, ReleaseConditionsPanel) == 0x000310, "Member 'UFang_expedition_DetailItemData_C::ReleaseConditionsPanel' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, RequesterNameText) == 0x000318, "Member 'UFang_expedition_DetailItemData_C::RequesterNameText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, RewardBG) == 0x000320, "Member 'UFang_expedition_DetailItemData_C::RewardBG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, TimeButton1) == 0x000328, "Member 'UFang_expedition_DetailItemData_C::TimeButton1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, TimeButton2) == 0x000330, "Member 'UFang_expedition_DetailItemData_C::TimeButton2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, TimeButton3) == 0x000338, "Member 'UFang_expedition_DetailItemData_C::TimeButton3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, TimeButton4) == 0x000340, "Member 'UFang_expedition_DetailItemData_C::TimeButton4' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, VLine_1) == 0x000348, "Member 'UFang_expedition_DetailItemData_C::VLine_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, VLine_2) == 0x000350, "Member 'UFang_expedition_DetailItemData_C::VLine_2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, TempAreaData) == 0x000358, "Member 'UFang_expedition_DetailItemData_C::TempAreaData' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, TimeIndex) == 0x000400, "Member 'UFang_expedition_DetailItemData_C::TimeIndex' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, FangVariety) == 0x000404, "Member 'UFang_expedition_DetailItemData_C::FangVariety' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, OnClickRandomRewardListView) == 0x000408, "Member 'UFang_expedition_DetailItemData_C::OnClickRandomRewardListView' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, OnClickFangSelectButton) == 0x000418, "Member 'UFang_expedition_DetailItemData_C::OnClickFangSelectButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, AreaViewType) == 0x000428, "Member 'UFang_expedition_DetailItemData_C::AreaViewType' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, ToolTip) == 0x000430, "Member 'UFang_expedition_DetailItemData_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemData_C, TextTable) == 0x000438, "Member 'UFang_expedition_DetailItemData_C::TextTable' has a wrong offset!");

}

