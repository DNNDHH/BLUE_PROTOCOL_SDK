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
	 * WidgetBlueprintGeneratedClass UMG_SeasonPassQuestList.UMG_SeasonPassQuestList_C
	 * Size -> 0x003A (FullSize[0x02B2] - InheritedSize[0x0278])
	 */
	class UUMG_SeasonPassQuestList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      List_HorizontalBox;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USelectBlankText_C*                                  SelectBlankText_295;                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestListHeader_C*                    UMG_SeasonPassQuestListHeader;                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestListHeader_C*                    UMG_SeasonPassQuestListHeader_2;                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Content;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UObject*                                             OwnerMenu;                                               // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBSeasonPassQuestFilterType                               FilterType;                                              // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBSeasonPassQuestCycleType                                CycleType;                                               // 0x02B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetNoQuestText(bool bIsEnableBlankText);
		void ChangeQuestListActive(ESBSeasonPassQuestType InQuestType, bool InIsActive);
		void SetListYSize(float InYsize);
		void ChangeWeeklyListActive(int32_t InWeekCount, bool InIsActive);
		void ClearListItem();
		void CreateFilterList(TArray<int32_t>* InTextIdList, TArray<class FString>* OutStringList);
		void GetFilterList(ESBSeasonPassQuestCycleType InCycle, TArray<ESBSeasonPassQuestFilterType>* OutStringList);
		void SetOwnerMenu(class UObject* InOwnerMenu);
		void CreateWeeklyListItem(class USBSeasonPassQuestMenuListData* Data, ESBSeasonPassQuestFilterType InFilterType);
		void CreateDailyHeader(ESBSeasonPassQuestType QuestType);
		void CreateListItem(class USBSeasonPassQuestMenuListData* InOwner, TArray<struct FSBSeasonPassQuestItemData>* InDataList, ESBSeasonPassQuestCycleType InCycleType, bool InIsNowWeek);
		void SetData(class USBSeasonPassQuestMenuListData* Data, ESBSeasonPassQuestFilterType InFilterType);
		void ExecuteUbergraph_UMG_SeasonPassQuestList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
