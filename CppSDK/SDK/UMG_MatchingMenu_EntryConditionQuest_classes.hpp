#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionQuest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_EntryConditionQuest.UMG_MatchingMenu_EntryConditionQuest_C
// 0x00A8 (0x0358 - 0x02B0)
class UUMG_MatchingMenu_EntryConditionQuest_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                           Box_QuestList;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Btn_Back;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          Btn_Close;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxWindow;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                              Position;                                          // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 QuestName;                                         // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 DescText;                                          // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 NpcName;                                           // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           Quest;                                             // 0x0330(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                 LevelName;                                         // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         QuestStatus;                                       // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInAnimEnd;                                        // 0x0354(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_UMG_MatchingMenu_EntryConditionQuest(int32 EntryPoint);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void BndEvt__UMG_MatchingMenu_EntryCondition_Button_96_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnPress_Cancel();
	void BndEvt__UMG_MatchingMenu_EntryCondition_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void Construct();
	void FindQuestInfo(const struct FQuestMasterData& MasterData);
	void Find_Npc_Info(const struct FQuestMasterData& MasterData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_EntryConditionQuest_C">();
	}
	static class UUMG_MatchingMenu_EntryConditionQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_EntryConditionQuest_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_EntryConditionQuest_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_EntryConditionQuest_C");
static_assert(sizeof(UUMG_MatchingMenu_EntryConditionQuest_C) == 0x000358, "Wrong size on UUMG_MatchingMenu_EntryConditionQuest_C");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, AnimOut) == 0x0002B8, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, AnimIn) == 0x0002C0, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, Box_QuestList) == 0x0002C8, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::Box_QuestList' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, Btn_Back) == 0x0002D0, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::Btn_Back' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, Btn_Close) == 0x0002D8, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::Btn_Close' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, VerticalBoxWindow) == 0x0002E0, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::VerticalBoxWindow' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, OnClose) == 0x0002E8, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, Position) == 0x0002F8, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::Position' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, QuestName) == 0x000300, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::QuestName' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, DescText) == 0x000310, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::DescText' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, NpcName) == 0x000320, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::NpcName' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, Quest) == 0x000330, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::Quest' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, LevelName) == 0x000340, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::LevelName' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, QuestStatus) == 0x000350, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::QuestStatus' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_EntryConditionQuest_C, bInAnimEnd) == 0x000354, "Member 'UUMG_MatchingMenu_EntryConditionQuest_C::bInAnimEnd' has a wrong offset!");

}

