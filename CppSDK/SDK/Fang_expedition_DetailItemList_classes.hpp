#pragma once

 

// Package: Fang_expedition_DetailItemList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DetailItemList.Fang_expedition_DetailItemList_C
// 0x00B8 (0x0330 - 0x0278)
class UFang_expedition_DetailItemList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFang_expedition_DetailItemListItem_C*  Fang_expedition_DetailItemListItem;                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListItem_C*  Fang_expedition_DetailItemListItem_61;             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListItem_C*  Fang_expedition_DetailItemListItem_131;            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListItem_C*  Fang_expedition_DetailItemListItem_250;            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListItem_C*  Fang_expedition_DetailItemListItem_337;            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            LeftButton;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PageBox;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListPagePoint_C* PagePoint1;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListPagePoint_C* PagePoint2;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListPagePoint_C* PagePoint3;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DetailItemListPagePoint_C* PagePoint4;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            RightButton;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSBMasterReward>                BaseRewardList;                                    // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         PageIndex;                                         // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PageNum;                                           // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RandomType;                                        // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E25[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFang_expedition_DetailItemListItem_C*> IconWidgetList;                                    // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UFang_expedition_DetailItemListPagePoint_C*> PageButtonList;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FSBFang_expeditionRandomRewardData> RandomRewardList;                                  // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Fang_expedition_DetailItemList(int32 EntryPoint);
	void Destruct();
	void CB_OnPageButtonClick(const int32 Param_Index);
	void BndEvt__Fang_expedition_DetailItemList_RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Fang_expedition_DetailItemList_LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetRewardData(TArray<struct FSBMasterReward>& RewardList);
	void ChangePage(int32 Page);
	void ChangePage_FixedItem(int32 Page);
	void UpdatePageButtonVisibility();
	void SetRandomRewardData(TArray<struct FSBFang_expeditionRandomRewardData>& RandomReward);
	void ChangePage_RandomItem(int32 Page);
	void SetupPageButton();
	void AddRandomRewardData(TArray<struct FSBFang_expeditionRandomRewardData>& RandomReward);
	void SetupRandomRewardPage(int32 Page);
	void ResetRewardData();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DetailItemList_C">();
	}
	static class UFang_expedition_DetailItemList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DetailItemList_C>();
	}
};
static_assert(alignof(UFang_expedition_DetailItemList_C) == 0x000008, "Wrong alignment on UFang_expedition_DetailItemList_C");
static_assert(sizeof(UFang_expedition_DetailItemList_C) == 0x000330, "Wrong size on UFang_expedition_DetailItemList_C");
static_assert(offsetof(UFang_expedition_DetailItemList_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DetailItemList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, Fang_expedition_DetailItemListItem) == 0x000280, "Member 'UFang_expedition_DetailItemList_C::Fang_expedition_DetailItemListItem' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, Fang_expedition_DetailItemListItem_61) == 0x000288, "Member 'UFang_expedition_DetailItemList_C::Fang_expedition_DetailItemListItem_61' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, Fang_expedition_DetailItemListItem_131) == 0x000290, "Member 'UFang_expedition_DetailItemList_C::Fang_expedition_DetailItemListItem_131' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, Fang_expedition_DetailItemListItem_250) == 0x000298, "Member 'UFang_expedition_DetailItemList_C::Fang_expedition_DetailItemListItem_250' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, Fang_expedition_DetailItemListItem_337) == 0x0002A0, "Member 'UFang_expedition_DetailItemList_C::Fang_expedition_DetailItemListItem_337' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, LeftButton) == 0x0002A8, "Member 'UFang_expedition_DetailItemList_C::LeftButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, PageBox) == 0x0002B0, "Member 'UFang_expedition_DetailItemList_C::PageBox' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, PagePoint1) == 0x0002B8, "Member 'UFang_expedition_DetailItemList_C::PagePoint1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, PagePoint2) == 0x0002C0, "Member 'UFang_expedition_DetailItemList_C::PagePoint2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, PagePoint3) == 0x0002C8, "Member 'UFang_expedition_DetailItemList_C::PagePoint3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, PagePoint4) == 0x0002D0, "Member 'UFang_expedition_DetailItemList_C::PagePoint4' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, RightButton) == 0x0002D8, "Member 'UFang_expedition_DetailItemList_C::RightButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, BaseRewardList) == 0x0002E0, "Member 'UFang_expedition_DetailItemList_C::BaseRewardList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, PageIndex) == 0x0002F0, "Member 'UFang_expedition_DetailItemList_C::PageIndex' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, PageNum) == 0x0002F4, "Member 'UFang_expedition_DetailItemList_C::PageNum' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, RandomType) == 0x0002F8, "Member 'UFang_expedition_DetailItemList_C::RandomType' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, IconWidgetList) == 0x000300, "Member 'UFang_expedition_DetailItemList_C::IconWidgetList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, PageButtonList) == 0x000310, "Member 'UFang_expedition_DetailItemList_C::PageButtonList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailItemList_C, RandomRewardList) == 0x000320, "Member 'UFang_expedition_DetailItemList_C::RandomRewardList' has a wrong offset!");

}

