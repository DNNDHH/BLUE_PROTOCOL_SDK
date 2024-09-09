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
	 * WidgetBlueprintGeneratedClass UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C
	 * Size -> 0x0048 (FullSize[0x02C0] - InheritedSize[0x0278])
	 */
	class UUMG_MatchingMenu_EntryConditionList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUniformGridPanel*                                   UniformGridPanelList;                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    Count;                                                   // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6INP[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPressedButton;                                         // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPressedButtonClass;                                    // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPressedButtonQuest;                                    // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void AddCondition_NeedPlayers(bool Passed, int32_t PlayerNum);
		void OnPressedButton_QuestClear(int32_t EntryConditionId, const struct FVector2D& Position);
		void OnPressedButton_ClassType(int32_t EntryConditionId, const struct FVector2D& Position);
		void AddCondition_ClassType(bool Passed);
		void AddCondition_QuestClear(bool Passed);
		void AddCondition_SubClassBonus(bool Passed, int32_t MaxSubClassLv, int32_t MaxScbNum);
		void AddCondition_ClassLevel(bool Passed, int32_t ClassLevel);
		void SetVisibleUnderline();
		void AddCondition_PartyState(bool Passed, ESBEntryConditionPartyState RequiredPartyState);
		void AddCondition_AdventurerRank(bool Passed, int32_t AdventurerRank);
		void OnPressedButton_Equipment(int32_t EntryConditionId, const struct FVector2D& Position);
		void AddCondition_Common(class UUMG_MatchingMenu_EntryConditionListItem_C* item);
		void AddCondition_Equipment(bool Passed, int32_t EntryConditionId);
		void AddCondition_BattleScore(bool Passed, int32_t BattleScore);
		void Clear();
		void Construct();
		void ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList(int32_t EntryPoint);
		void OnPressedButtonQuest__DelegateSignature(const struct FVector2D& Position);
		void OnPressedButtonClass__DelegateSignature(const struct FVector2D& Position);
		void OnPressedButton__DelegateSignature(EntryConditionType EntryConditionType, int32_t Value, const struct FVector2D& Position);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
