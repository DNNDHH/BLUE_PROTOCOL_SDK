#pragma once

 

// Package: Fang_expedition_ProbabilityListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_ProbabilityListItem.Fang_expedition_ProbabilityListItem_C
// 0x0090 (0x0308 - 0x0278)
class UFang_expedition_ProbabilityListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Item_1;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Rate;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Title_1;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LotIcon1;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LotIcon2;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LotIcon3;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NumOverlay;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NumText;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NumTextBG;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         GroupType;                                         // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBFang_expeditionRandomRewardData     RewardData;                                        // 0x02E4(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void OnClicked__DelegateSignature(const struct FSBMasterReward& Param_RewardData);
	void ExecuteUbergraph_Fang_expedition_ProbabilityListItem(int32 EntryPoint);
	void BndEvt__Fang_expedition_ProbabilityListItem_Btn_Item_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetData(int32 Type, const struct FSBFang_expeditionRandomRewardData& RandomReward);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_ProbabilityListItem_C">();
	}
	static class UFang_expedition_ProbabilityListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_ProbabilityListItem_C>();
	}
};
static_assert(alignof(UFang_expedition_ProbabilityListItem_C) == 0x000008, "Wrong alignment on UFang_expedition_ProbabilityListItem_C");
static_assert(sizeof(UFang_expedition_ProbabilityListItem_C) == 0x000308, "Wrong size on UFang_expedition_ProbabilityListItem_C");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_ProbabilityListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, Btn_Item_1) == 0x000280, "Member 'UFang_expedition_ProbabilityListItem_C::Btn_Item_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, CommonIcon) == 0x000288, "Member 'UFang_expedition_ProbabilityListItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, Label_Rate) == 0x000290, "Member 'UFang_expedition_ProbabilityListItem_C::Label_Rate' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, Label_Title_1) == 0x000298, "Member 'UFang_expedition_ProbabilityListItem_C::Label_Title_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, LotIcon1) == 0x0002A0, "Member 'UFang_expedition_ProbabilityListItem_C::LotIcon1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, LotIcon2) == 0x0002A8, "Member 'UFang_expedition_ProbabilityListItem_C::LotIcon2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, LotIcon3) == 0x0002B0, "Member 'UFang_expedition_ProbabilityListItem_C::LotIcon3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, NumOverlay) == 0x0002B8, "Member 'UFang_expedition_ProbabilityListItem_C::NumOverlay' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, NumText) == 0x0002C0, "Member 'UFang_expedition_ProbabilityListItem_C::NumText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, NumTextBG) == 0x0002C8, "Member 'UFang_expedition_ProbabilityListItem_C::NumTextBG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, OnClicked) == 0x0002D0, "Member 'UFang_expedition_ProbabilityListItem_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, GroupType) == 0x0002E0, "Member 'UFang_expedition_ProbabilityListItem_C::GroupType' has a wrong offset!");
static_assert(offsetof(UFang_expedition_ProbabilityListItem_C, RewardData) == 0x0002E4, "Member 'UFang_expedition_ProbabilityListItem_C::RewardData' has a wrong offset!");

}

