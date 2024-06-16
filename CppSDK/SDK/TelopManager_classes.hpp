#pragma once

 

// Package: TelopManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TelopManager.TelopManager_C
// 0x0058 (0x0320 - 0x02C8)
class UTelopManager_C final : public USBTelopManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTelopChallenge_C*                      Telop_ArenaChallenge;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopClearDungeon_C*                   Telop_ClearDungeon;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopGameOver_C*                       Telop_GameOver;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopMission_C*                        Telop_Mission;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopNormal_C*                         Telop_Normal;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopProficiency_C*                    Telop_Proficiency;                                 // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopReadyGo_C*                        Telop_ReadyGo;                                     // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopType1_C*                          Telop_Type1;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopType2_C*                          Telop_Type2;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTelopType3_C*                          Telop_Type3;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TelopManager(int32 EntryPoint);
	void BndEvt__TelopManager_Telop_Proficiency_K2Node_ComponentBoundEvent_0_OnFinishDelegate__DelegateSignature();
	void BndEvt__TelopManager_Telop_Normal_K2Node_ComponentBoundEvent_17_OnFinishDelegate__DelegateSignature();
	void BndEvt__TelopManager_Telop_ReadyGo_K2Node_ComponentBoundEvent_16_OnFinishDelegate__DelegateSignature();
	void BndEvt__TelopManager_Telop_Mission_K2Node_ComponentBoundEvent_15_OnFinishDelegate__DelegateSignature();
	void BndEvt__TelopManager_Telop_ArenaChallenge_K2Node_ComponentBoundEvent_14_OnFinishDelegate__DelegateSignature();
	void BndEvt__TelopManager_Telop_ClearDungeon_K2Node_ComponentBoundEvent_13_OnFinishDelegate__DelegateSignature();
	void BndEvt__TelopManager_Telop_GameOver_K2Node_ComponentBoundEvent_12_OnFinishDelegate__DelegateSignature();
	void BndEvt__TelopManager_Telop_Type3_K2Node_ComponentBoundEvent_6_OnFinishDelegate__DelegateSignature();
	void BndEvt__TelopManager_Telop_Type2_K2Node_ComponentBoundEvent_4_OnFinishDelegate__DelegateSignature();
	void BndEvt__TelopManager_Telop_Type1_K2Node_ComponentBoundEvent_3_OnFinishDelegate__DelegateSignature();
	void UnbindQuestJingleCancel();
	void UnbindQuestJingleUpdate();
	void UnbindQuestJingleClear();
	void UnbindQuestJingleAccept();
	void OnUpdatedQuestsJoin(const TArray<int32>& QuestIndexes);
	void UnbindQuestJingleUpdate2();
	void BindQuestJingleUpdate2();
	void OnReceiveCancelQuest(class UObject* Sender, class UObject* Param);
	void OnReceiveCompleteQuestEvent(class UObject* Sender, class UObject* Param);
	void OnReceiveUpdateQuestProgressEvent(class UObject* Sender, class UObject* Param);
	void OnReceiveAcceptedQuestEvent(class UObject* Sender, class UObject* Param);
	void BindReversePallet();
	void UnbindReversePallet();
	void BindQuestJingleCancel();
	void BindQuestJingleClear();
	void BindQuestJingleUpdate();
	void BindQuestJingleAccept();
	void OnAdventureBoardComplete(class UObject* Sender, class UObject* Param);
	void OnAdventureBoardClear(class UObject* Sender, class UObject* Param);
	void UnbindAdventureBoardJingleComplete();
	void UnbindAdventureBoardJingleClear();
	void BindAdventureBoardJingleComplete();
	void BindAdventureBoardJingleClear();
	void OnClassLevelUpEvent(class UObject* Sender, class UObject* Param);
	void UnbindClassLvUpJingle();
	void BindClassLvUpJingle();
	void CustomEvent_0(class UObject* Sender, class UObject* Param);
	void UnbindRaidStart();
	void BindRaidStart();
	void OnInterruptQuestFailed(class UObject* Sender, class UObject* Param);
	void OnInterruptQuestSuccess(class UObject* Sender, class UObject* Param);
	void OnInterruptQuestJoin(class UObject* Sender, class UObject* Param);
	void UnbindInterruptQuestFailed();
	void UnbindInterruptQuestSuccess();
	void UnbindInterruptQuestJoin();
	void BindInterruptQuestFailed();
	void BindInterruptQuestSuccess();
	void BindInterruptQuestJoin();
	void OnLearningSkillEvent(class UObject* Sender, class UObject* Param);
	void UnbindLearningSkill();
	void BindLearningSkill();
	void OnTimeAttackBackToStartJingle(class UObject* Sender, class UObject* Param);
	void UnBindTimeAttackBackToStartJingle();
	void BindTimeAttackBackToStartJingle();
	void CustomEvent_2(class UObject* Sender, class UObject* Param);
	void UnbindDefenceBattleStart();
	void BindDefenceBattleStart();
	void OnCloseCommandMenu(class UObject* Sender, class UObject* Param);
	void UnbindCloseCommandMenu();
	void BindCloseCommandMenu();
	void OnOpenCommandMenu(class UObject* Sender, class UObject* Param);
	void UnbindOpenCommandMenu();
	void BindOpenCommandMenu();
	void OnSuspend(class UObject* Sender, class UObject* Param);
	void UnbindSuspend();
	void BindSuspend();
	void CustomEvent_1(class UObject* Sender, class UObject* Param);
	void UnbindProficiencyUp();
	void BindProficiencyUp();
	void CustomEvent_4(class UObject* Sender, class UObject* Param);
	void InitQuestJingle();
	void TermQuestJingle();
	void OnQuestJingleAccepted(class UObject* Param);
	void OnQuestJingleUpdate(class UObject* Param);
	void OnQuestJingleUpdate2(const TArray<int32>& InputPin);
	void OnQuestJingleComplete(class UObject* Param);
	void OnQuestJingleCancel(class UObject* Param);
	void InitAdventureBoardJingle();
	void TermAdventureBoardJingle();
	void OnAdventureBoardJingleClear(ESBAdventureBoardClearStatus Type);
	void OnAdventureBoardJingleComplete();
	void InitClassLvUpJingle();
	void TermClassLvUpJingle();
	void OnClassLVUPJingle(class UObject* Object);
	void InitRaidJingle();
	void TermRaidJingle();
	void InitInterruptQuest();
	void TermInterruptQuest();
	void OnInitialize();
	void OnTerminate();
	void InitLearningSkill();
	void TermLearningSkill();
	void OnLearningSkill(TArray<struct FCharaSkillMasteryInfo>& NewSkill);
	void InitTimeAttack();
	void TermTimeAttack();
	void InitDefenceBattleJingle();
	void TermDefenceBattleJingle();
	void InitSuspend();
	void TermSuspend();
	void InitProficiency();
	void TermProficiency();
	void OnProficiencyUp(class UObject* Object);
	class USBTelopBase* OnGetTelop(ESBTelopType TelopType);
	void InitReversePallet();
	void TermReversePallet();
	void OnReversePallet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TelopManager_C">();
	}
	static class UTelopManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTelopManager_C>();
	}
};
static_assert(alignof(UTelopManager_C) == 0x000008, "Wrong alignment on UTelopManager_C");
static_assert(sizeof(UTelopManager_C) == 0x000320, "Wrong size on UTelopManager_C");
static_assert(offsetof(UTelopManager_C, UberGraphFrame) == 0x0002C8, "Member 'UTelopManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTelopManager_C, Telop_ArenaChallenge) == 0x0002D0, "Member 'UTelopManager_C::Telop_ArenaChallenge' has a wrong offset!");
static_assert(offsetof(UTelopManager_C, Telop_ClearDungeon) == 0x0002D8, "Member 'UTelopManager_C::Telop_ClearDungeon' has a wrong offset!");
static_assert(offsetof(UTelopManager_C, Telop_GameOver) == 0x0002E0, "Member 'UTelopManager_C::Telop_GameOver' has a wrong offset!");
static_assert(offsetof(UTelopManager_C, Telop_Mission) == 0x0002E8, "Member 'UTelopManager_C::Telop_Mission' has a wrong offset!");
static_assert(offsetof(UTelopManager_C, Telop_Normal) == 0x0002F0, "Member 'UTelopManager_C::Telop_Normal' has a wrong offset!");
static_assert(offsetof(UTelopManager_C, Telop_Proficiency) == 0x0002F8, "Member 'UTelopManager_C::Telop_Proficiency' has a wrong offset!");
static_assert(offsetof(UTelopManager_C, Telop_ReadyGo) == 0x000300, "Member 'UTelopManager_C::Telop_ReadyGo' has a wrong offset!");
static_assert(offsetof(UTelopManager_C, Telop_Type1) == 0x000308, "Member 'UTelopManager_C::Telop_Type1' has a wrong offset!");
static_assert(offsetof(UTelopManager_C, Telop_Type2) == 0x000310, "Member 'UTelopManager_C::Telop_Type2' has a wrong offset!");
static_assert(offsetof(UTelopManager_C, Telop_Type3) == 0x000318, "Member 'UTelopManager_C::Telop_Type3' has a wrong offset!");

}

