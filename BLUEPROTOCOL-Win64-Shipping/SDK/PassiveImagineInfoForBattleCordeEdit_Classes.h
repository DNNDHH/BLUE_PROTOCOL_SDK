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
	 * WidgetBlueprintGeneratedClass PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C
	 * Size -> 0x0029 (FullSize[0x02A1] - InheritedSize[0x0278])
	 */
	class UPassiveImagineInfoForBattleCordeEdit_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Bg01;                                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBoxForImagineSlot;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FString>                                      PassiveImagineUniqueIds;                                 // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsStorageMode;                                          // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** OutSwitcher);
		void SetStorageMode(bool InIsStorageMode);
		void Setup(TArray<class FString>* InPassiveImagineUniqueIds, bool InSetupByCurrEquip, ESBClassType InClassType);
		void GetPassiveImagineIconBtn(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* OutIsValid, class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C** OutImagineIconBtn);
		void CreatePassiveImagineIconBtnList();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_PassiveImagineInfoForBattleCordeEdit(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
