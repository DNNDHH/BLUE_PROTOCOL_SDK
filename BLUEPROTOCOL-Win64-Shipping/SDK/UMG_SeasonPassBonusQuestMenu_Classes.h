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
	 * WidgetBlueprintGeneratedClass UMG_SeasonPassBonusQuestMenu.UMG_SeasonPassBonusQuestMenu_C
	 * Size -> 0x00C8 (FullSize[0x0350] - InheritedSize[0x0288])
	 */
	class UUMG_SeasonPassBonusQuestMenu_C : public USBSeasonPassQuestMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    InAnimation;                                             // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_Bonus;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBDateTimeTextBlock*                                SBDateTimeTextBlock_QuestDesc;                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_QuestName;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestBonusListMain_C*                 UMG_SeasonPassQuestBonusListMain;                        // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestList_C*                          UMG_SeasonPassQuestList;                                 // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_172;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FString>                                      BookmarkTypeList;                                        // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		ESBSeasonPassQuestFilterType                               FilterType;                                              // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_01OE[0x7];                                   // 0x02D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      FilterNameList;                                          // 0x02E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TabSelect;                                               // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZJO1[0x4];                                   // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESBSeasonPassQuestFilterType>                       DailyFilterList;                                         // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<ESBSeasonPassQuestFilterType>                       WeeklyFilterList;                                        // 0x0308(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<ESBSeasonPassQuestFilterType>                       SeasonFilterList;                                        // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<ESBSeasonPassQuestFilterType>                       BonusFilterList;                                         // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TutorialHelpIdList;                                      // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetUIBlocker(bool IsBlock);
		void UpdateQuestItemList(const struct FSBSeasonPassQuestListManager& InQuestListManager);
		void UpdateCycleQuestData(ESBSeasonPassQuestCycleType InCycleType);
		void UpdateSubMenuExclation();
		void UpdateQuestData();
		void DisplayRmShop();
		void SetData();
		void InitParam();
		void InitializeOpenMenuType(const class FString& InputPin);
		void SwitchSelect(const class FString& OpenBookMarkType, const class FName& ParamName);
		void BookmarkUpdateRequest();
		void Construct();
		void StartInit();
		void TermRequesTiming();
		void UpdateCheckEvent();
		void SwitchOut();
		void SwitchIn(const class FString& OpenBookMarkType, const class FName& ParamName);
		void BindSubMenuExcramation();
		void SubMenuExramation_Event(class UObject* Sender, class UObject* Param);
		void ExecuteUbergraph_UMG_SeasonPassBonusQuestMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
