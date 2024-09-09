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
	 * WidgetBlueprintGeneratedClass SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C
	 * Size -> 0x0098 (FullSize[0x0310] - InheritedSize[0x0278])
	 */
	class USkillInfoIconForBattleImagine_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCmnAlertIcon_C*                                     AlertIconForBattleImagine;                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoItem_C*                                    BattileImagine;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULevelInfo1ForBattleSet_C*                           BattleImagineLevel;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBattleScoreInfo_C*                                  BattleScoreInfo;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         BtnForPadCursorMove;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButtonForBattleImagine;                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_StackB_S_C*                                     StackBIcon;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUserWidget*                                         CachedToolTipWidget;                                     // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESkillActionPosition                                       SkillActionPosition;                                     // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_737H[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BattleImagineUniqueId;                                   // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnBattleImagineIconPressed;                              // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsTooltipBattleImagineIconActive;                       // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W1CX[0x3];                                   // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ImagineLevel;                                            // 0x02EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ClassLevel;                                              // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PerkId;                                                  // 0x02F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StackBNum;                                               // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StackBMax;                                               // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BattleScore;                                             // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D978[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBattleScoreInfoSwitcher_C*                          InfoSwitcher;                                            // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C* InSwitcher);
		void SetBattleImagineInfoForDhcBattle(const struct FSBDhcBattlePlayerEquipImagineInfo& InBattleImagineInfo, ESBClassType InClassType, int32_t InClassLevel);
		void SetBtnForPadCursorMoveVisible(bool InIsVisible);
		void SetStackBIconByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo);
		void InitSkillStopUpdate(ESkillActionPosition InSkillActionPosition);
		void InitSkillEmptyColor(ESkillActionPosition InSkillActionPosition);
		void UpdateBattleImagineIcon(ESkillActionPosition InSkillActionPosition, int32_t InImagineId, const class FString& inImagineUniqueId, int32_t InStackBNum, int32_t InStackBMax, bool InIsTermLimited);
		void SetBattleImagineAlertIconVisibility(bool InIsVisible);
		void SetBattleImagineLevelVisibility(bool InIsVisible);
		void SetBattleImagineLevel(int32_t InLevel, const class FString& inImagineUniqueId, ESBClassType InClassType, bool InForceLevelSyncOff);
		void SetBattleImagineButtonOff();
		void SetIsBattleImagineEmpty(ESkillActionPosition InSkillActionPosition, bool InIsEmpty);
		void SetBattleImagineInfo(const class FString& inImagineUniqueId, bool InIsInformationHidden, bool InIsStorageMode, bool InIsImagineIconActive, ESBClassType InClassType, bool InDontDisplayAlertIcon, bool InForceLevelSyncOff);
		void CreateTooltipForBattleImagine(const struct FST_ToolTipInfo& InImagineTooltipInfo, bool InIsNotUseTooltip);
		void Construct();
		void BndEvt__MyCharaMenu_SkillInfoItemBaseForBattleSet_SBButtonForBattleImagine1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_SkillInfoIconForBattleImagine(int32_t EntryPoint);
		void OnBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
