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
	 * WidgetBlueprintGeneratedClass UMG_SeasonPassQuestWeeklyListMain.UMG_SeasonPassQuestWeeklyListMain_C
	 * Size -> 0x0061 (FullSize[0x02D9] - InheritedSize[0x0278])
	 */
	class UUMG_SeasonPassQuestWeeklyListMain_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USelectBlankText_C*                                  EmptyListMsgText;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      List_HorizontalBox;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestWeeklyListItem_C*                UMG_SeasonPassQuestWeeklyListItem;                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestWeeklyListItem_C*                UMG_SeasonPassQuestWeeklyListItem_139;                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestWeeklyListItem_C*                UMG_SeasonPassQuestWeeklyListItem_268;                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestWeeklyListItem_C*                UMG_SeasonPassQuestWeeklyListItem_387;                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestWeeklyListItem_C*                UMG_SeasonPassQuestWeeklyListItem_540;                   // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Content;                                     // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSeasonPassQuestMenuListData*                      Data;                                                    // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ListCnt;                                                 // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSeasonPreview;                                         // 0x02CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3SKB[0x3];                                   // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMG_SeasonPassQuestMenu_C*                          OwnerMenu;                                               // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBSeasonPassQuestFilterType                               FilterType;                                              // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SearchUpdateQuestItem(const struct FSBSeasonPassQuestItemData& ItemData);
		void UpdateQuestList(const struct FSBSeasonPassQuestListData& ItemList);
		void SetDataFunc(class USBSeasonPassQuestMenuListData* Data, class UUMG_SeasonPassQuestMenu_C* OwnerMenu, ESBSeasonPassQuestFilterType FilterType);
		void ForceClearUpdate();
		void TryGetItem(class UUMG_SeasonPassQuestWeeklyListItem_C** AsUMGSeasonPassQuestBonusListItem);
		void ListInitialize();
		void PreConstruct(bool IsDesignTime);
		void SetData(class USBSeasonPassQuestMenuListData* Data, class UUMG_SeasonPassQuestMenu_C* OwnerMenu, ESBSeasonPassQuestFilterType FilterType);
		void ExecuteUbergraph_UMG_SeasonPassQuestWeeklyListMain(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
