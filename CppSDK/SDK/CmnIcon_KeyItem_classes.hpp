#pragma once

 

// Package: CmnIcon_KeyItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnIcon_KeyItem.CmnIcon_KeyItem_C
// 0x0050 (0x02C8 - 0x0278)
class UCmnIcon_KeyItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Roll;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CmnLiquidMemoryActiveLight;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_BPMark;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bEventEnemyDrop;                                   // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bChallengeQuestDrop;                               // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEventMapEntry;                                    // 0x029A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92BE[0x5];                                     // 0x029B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TermId;                                            // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                   TooltipTxt;                                        // 0x02B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_CmnIcon_KeyItem(int32 EntryPoint);
	void Construct();
	void SetDataByRewardType(ESBRewardItemType RewardType, int32 ID);
	void SetData(ESBDungeonEntryConditionItemType ItemType, int32 ItemIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnIcon_KeyItem_C">();
	}
	static class UCmnIcon_KeyItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnIcon_KeyItem_C>();
	}
};
static_assert(alignof(UCmnIcon_KeyItem_C) == 0x000008, "Wrong alignment on UCmnIcon_KeyItem_C");
static_assert(sizeof(UCmnIcon_KeyItem_C) == 0x0002C8, "Wrong size on UCmnIcon_KeyItem_C");
static_assert(offsetof(UCmnIcon_KeyItem_C, UberGraphFrame) == 0x000278, "Member 'UCmnIcon_KeyItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnIcon_KeyItem_C, Anm_Roll) == 0x000280, "Member 'UCmnIcon_KeyItem_C::Anm_Roll' has a wrong offset!");
static_assert(offsetof(UCmnIcon_KeyItem_C, CmnLiquidMemoryActiveLight) == 0x000288, "Member 'UCmnIcon_KeyItem_C::CmnLiquidMemoryActiveLight' has a wrong offset!");
static_assert(offsetof(UCmnIcon_KeyItem_C, Icon_BPMark) == 0x000290, "Member 'UCmnIcon_KeyItem_C::Icon_BPMark' has a wrong offset!");
static_assert(offsetof(UCmnIcon_KeyItem_C, bEventEnemyDrop) == 0x000298, "Member 'UCmnIcon_KeyItem_C::bEventEnemyDrop' has a wrong offset!");
static_assert(offsetof(UCmnIcon_KeyItem_C, bChallengeQuestDrop) == 0x000299, "Member 'UCmnIcon_KeyItem_C::bChallengeQuestDrop' has a wrong offset!");
static_assert(offsetof(UCmnIcon_KeyItem_C, bEventMapEntry) == 0x00029A, "Member 'UCmnIcon_KeyItem_C::bEventMapEntry' has a wrong offset!");
static_assert(offsetof(UCmnIcon_KeyItem_C, TermId) == 0x0002A0, "Member 'UCmnIcon_KeyItem_C::TermId' has a wrong offset!");
static_assert(offsetof(UCmnIcon_KeyItem_C, TooltipTxt) == 0x0002B0, "Member 'UCmnIcon_KeyItem_C::TooltipTxt' has a wrong offset!");

}

