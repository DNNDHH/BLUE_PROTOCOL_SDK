#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "EntryConditionType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C
// 0x0048 (0x02C0 - 0x0278)
class UUMG_MatchingMenu_EntryConditionList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUniformGridPanel*                      UniformGridPanelList;                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_705B[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPressedButton;                                   // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPressedButtonClass;                              // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPressedButtonQuest;                              // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPressedButton__DelegateSignature(EntryConditionType EntryConditionType, int32 Value, const struct FVector2D& Position);
	void OnPressedButtonClass__DelegateSignature(const struct FVector2D& Position);
	void OnPressedButtonQuest__DelegateSignature(const struct FVector2D& Position);
	void ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList(int32 EntryPoint);
	void Construct();
	void Clear();
	void AddCondition_BattleScore(bool Passed, int32 BattleScore);
	void AddCondition_Equipment(bool Passed, int32 EntryConditionId);
	void AddCondition_Common(class UUMG_MatchingMenu_EntryConditionListItem_C* Item);
	void OnPressedButton_Equipment(int32 EntryConditionId, const struct FVector2D& Position);
	void AddCondition_AdventurerRank(bool Passed, int32 AdventurerRank);
	void AddCondition_PartyState(bool Passed, ESBEntryConditionPartyState RequiredPartyState);
	void SetVisibleUnderline();
	void AddCondition_ClassLevel(bool Passed, int32 ClassLevel);
	void AddCondition_SubClassBonus(bool Passed, int32 MaxSubClassLv, int32 MaxScbNum);
	void AddCondition_QuestClear(bool Passed);
	void AddCondition_ClassType(bool Passed);
	void OnPressedButton_ClassType(int32 EntryConditionId, const struct FVector2D& Position);
	void OnPressedButton_QuestClear(int32 EntryConditionId, const struct FVector2D& Position);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_EntryConditionList_C">();
	}
	static class UUMG_MatchingMenu_EntryConditionList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_EntryConditionList_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_EntryConditionList_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_EntryConditionList_C");
static_assert(sizeof(UUMG_MatchingMenu_EntryConditionList_C) == 0x0002C0, "Wrong size on UUMG_MatchingMenu_EntryConditionList_C");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionList_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_EntryConditionList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionList_C, UniformGridPanelList) == 0x000280, "Member 'UUMG_MatchingMenu_EntryConditionList_C::UniformGridPanelList' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionList_C, Count) == 0x000288, "Member 'UUMG_MatchingMenu_EntryConditionList_C::Count' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionList_C, OnPressedButton) == 0x000290, "Member 'UUMG_MatchingMenu_EntryConditionList_C::OnPressedButton' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionList_C, OnPressedButtonClass) == 0x0002A0, "Member 'UUMG_MatchingMenu_EntryConditionList_C::OnPressedButtonClass' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionList_C, OnPressedButtonQuest) == 0x0002B0, "Member 'UUMG_MatchingMenu_EntryConditionList_C::OnPressedButtonQuest' has a wrong offset!");

}

