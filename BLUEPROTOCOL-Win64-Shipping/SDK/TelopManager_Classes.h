#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass TelopManager.TelopManager_C
	 * Size -> 0x0058 (FullSize[0x0320] - InheritedSize[0x02C8])
	 */
	class UTelopManager_C : public USBTelopManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTelopChallenge_C*                                   Telop_ArenaChallenge;                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTelopClearDungeon_C*                                Telop_ClearDungeon;                                      // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTelopGameOver_C*                                    Telop_GameOver;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTelopMission_C*                                     Telop_Mission;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTelopNormal_C*                                      Telop_Normal;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTelopProficiency_C*                                 Telop_Proficiency;                                       // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTelopReadyGo_C*                                     Telop_ReadyGo;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTelopType1_C*                                       Telop_Type1;                                             // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTelopType2_C*                                       Telop_Type2;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTelopType3_C*                                       Telop_Type3;                                             // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnReversePallet();
		void TermReversePallet();
		void InitReversePallet();
		class USBTelopBase* OnGetTelop(ESBTelopType TelopType);
		void OnProficiencyUp(class UObject* Object);
		void TermProficiency();
		void InitProficiency();
		void TermSuspend();
		void InitSuspend();
		void TermDefenceBattleJingle();
		void InitDefenceBattleJingle();
		void TermTimeAttack();
		void InitTimeAttack();
		void OnLearningSkill(TArray<struct FCharaSkillMasteryInfo>* NewSkill);
		void TermLearningSkill();
		void InitLearningSkill();
		void OnTerminate();
		void OnInitialize();
		void TermInterruptQuest();
		void InitInterruptQuest();
		void TermRaidJingle();
		void InitRaidJingle();
		void OnClassLVUPJingle(class UObject* Object);
		void TermClassLvUpJingle();
		void InitClassLvUpJingle();
		void OnAdventureBoardJingleComplete();
		void OnAdventureBoardJingleClear(ESBAdventureBoardClearStatus Type);
		void TermAdventureBoardJingle();
		void InitAdventureBoardJingle();
		void OnQuestJingleCancel(class UObject* Param);
		void OnQuestJingleComplete(class UObject* Param);
		void OnQuestJingleUpdate2(TArray<int32_t> InputPin);
		void OnQuestJingleUpdate(class UObject* Param);
		void OnQuestJingleAccepted(class UObject* Param);
		void TermQuestJingle();
		void InitQuestJingle();
		void CustomEvent_5(class UObject* Sender, class UObject* Param);
		void BindProficiencyUp();
		void UnbindProficiencyUp();
		void CustomEvent_2(class UObject* Sender, class UObject* Param);
		void BindSuspend();
		void UnbindSuspend();
		void OnSuspend(class UObject* Sender, class UObject* Param);
		void BindOpenCommandMenu();
		void UnbindOpenCommandMenu();
		void OnOpenCommandMenu(class UObject* Sender, class UObject* Param);
		void BindCloseCommandMenu();
		void UnbindCloseCommandMenu();
		void OnCloseCommandMenu(class UObject* Sender, class UObject* Param);
		void BindDefenceBattleStart();
		void UnbindDefenceBattleStart();
		void CustomEvent_3(class UObject* Sender, class UObject* Param);
		void BindTimeAttackBackToStartJingle();
		void UnBindTimeAttackBackToStartJingle();
		void OnTimeAttackBackToStartJingle(class UObject* Sender, class UObject* Param);
		void BindLearningSkill();
		void UnbindLearningSkill();
		void OnLearningSkillEvent(class UObject* Sender, class UObject* Param);
		void BindInterruptQuestJoin();
		void BindInterruptQuestSuccess();
		void BindInterruptQuestFailed();
		void UnbindInterruptQuestJoin();
		void UnbindInterruptQuestSuccess();
		void UnbindInterruptQuestFailed();
		void OnInterruptQuestJoin(class UObject* Sender, class UObject* Param);
		void OnInterruptQuestSuccess(class UObject* Sender, class UObject* Param);
		void OnInterruptQuestFailed(class UObject* Sender, class UObject* Param);
		void BindRaidStart();
		void UnbindRaidStart();
		void CustomEvent_1(class UObject* Sender, class UObject* Param);
		void BindClassLvUpJingle();
		void UnbindClassLvUpJingle();
		void OnClassLevelUpEvent(class UObject* Sender, class UObject* Param);
		void BindAdventureBoardJingleClear();
		void BindAdventureBoardJingleComplete();
		void UnbindAdventureBoardJingleClear();
		void UnbindAdventureBoardJingleComplete();
		void OnAdventureBoardClear(class UObject* Sender, class UObject* Param);
		void OnAdventureBoardComplete(class UObject* Sender, class UObject* Param);
		void BindQuestJingleAccept();
		void BindQuestJingleUpdate();
		void BindQuestJingleClear();
		void BindQuestJingleCancel();
		void UnbindReversePallet();
		void BindReversePallet();
		void OnReceiveAcceptedQuestEvent(class UObject* Sender, class UObject* Param);
		void OnReceiveUpdateQuestProgressEvent(class UObject* Sender, class UObject* Param);
		void OnReceiveCompleteQuestEvent(class UObject* Sender, class UObject* Param);
		void OnReceiveCancelQuest(class UObject* Sender, class UObject* Param);
		void BindQuestJingleUpdate2();
		void UnbindQuestJingleUpdate2();
		void OnUpdatedQuestsJoin(TArray<int32_t> QuestIndexes);
		void UnbindQuestJingleAccept();
		void UnbindQuestJingleClear();
		void UnbindQuestJingleUpdate();
		void UnbindQuestJingleCancel();
		void BndEvt__TelopManager_Telop_Type1_K2Node_ComponentBoundEvent_3_OnFinishDelegate__DelegateSignature();
		void BndEvt__TelopManager_Telop_Type2_K2Node_ComponentBoundEvent_4_OnFinishDelegate__DelegateSignature();
		void BndEvt__TelopManager_Telop_Type3_K2Node_ComponentBoundEvent_6_OnFinishDelegate__DelegateSignature();
		void BndEvt__TelopManager_Telop_GameOver_K2Node_ComponentBoundEvent_12_OnFinishDelegate__DelegateSignature();
		void BndEvt__TelopManager_Telop_ClearDungeon_K2Node_ComponentBoundEvent_13_OnFinishDelegate__DelegateSignature();
		void BndEvt__TelopManager_Telop_ArenaChallenge_K2Node_ComponentBoundEvent_14_OnFinishDelegate__DelegateSignature();
		void BndEvt__TelopManager_Telop_Mission_K2Node_ComponentBoundEvent_15_OnFinishDelegate__DelegateSignature();
		void BndEvt__TelopManager_Telop_ReadyGo_K2Node_ComponentBoundEvent_16_OnFinishDelegate__DelegateSignature();
		void BndEvt__TelopManager_Telop_Normal_K2Node_ComponentBoundEvent_17_OnFinishDelegate__DelegateSignature();
		void BndEvt__TelopManager_Telop_Proficiency_K2Node_ComponentBoundEvent_0_OnFinishDelegate__DelegateSignature();
		void ExecuteUbergraph_TelopManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
