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
	 * WidgetBlueprintGeneratedClass PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C
	 * Size -> 0x0031 (FullSize[0x02A9] - InheritedSize[0x0278])
	 */
	class UPassiveImagineInfoUnitForBattleSet_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C*    ImagineIconBtn;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 ImagineTypeTxt;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ESBPlayerPassiveImagineSlotType                            ImagineSlotType;                                         // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_RXLU[0x7];                                   // 0x0291(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnImagineIconBtnClicked;                                 // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsDhcBattleTopMenuMode;                                 // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C* InSwitcher);
		void SetPassiveImagineForDhcBattle(const struct FSBDhcBattlePlayerEquipImagineInfo& InImagineInfo, const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType);
		void SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode);
		void ForcePassiveImagineIconLevelSyncOff(bool bInForceLevelSyncOff);
		void SetButtonOff();
		void SetPassiveImagineIconAlertVisibility(bool InIsAlertVisible);
		void SetPassiveImagineIconEmpty(bool InIsEmpty);
		void SetPassiveImagineByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType);
		void GetImagineSlotType(ESBPlayerPassiveImagineSlotType* OutImagineSlotType);
		void SetImagineSlotType(ESBPlayerPassiveImagineSlotType InImagineSlotType);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32_t InPassiveImagineItemId);
		void ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet(int32_t EntryPoint);
		void OnImagineIconBtnClicked__DelegateSignature(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32_t InPassiveImagineItemId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
