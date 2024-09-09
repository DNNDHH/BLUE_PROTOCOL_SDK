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
	 * WidgetBlueprintGeneratedClass UMG_SeasonPassQuestBonusListMain.UMG_SeasonPassQuestBonusListMain_C
	 * Size -> 0x0068 (FullSize[0x02E0] - InheritedSize[0x0278])
	 */
	class UUMG_SeasonPassQuestBonusListMain_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      List_HorizontalBox;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USelectBlankText_C*                                  SelectBlankText_295;                                     // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestBonusListItem_C*                 UMG_SeasonPassQuestBonusListItem;                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestBonusListItem_C*                 UMG_SeasonPassQuestBonusListItem_2;                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestBonusListItem_C*                 UMG_SeasonPassQuestBonusListItem_3;                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestBonusListItem_C*                 UMG_SeasonPassQuestBonusListItem_318;                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestBonusListItem_C*                 UMG_SeasonPassQuestBonusListItem_457;                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_SeasonPassQuestBonusListItem_C*                 UMG_SeasonPassQuestBonusListItem_576;                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_Content;                                     // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBSeasonPassQuestMenuListData*                      Data;                                                    // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ListCnt;                                                 // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LZLG[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMG_SeasonPassBonusQuestMenu_C*                     OwnerMenu;                                               // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SearchUpdateQuestItem(const struct FSBSeasonPassQuestItemData& ItemData);
		void UpdateQuestItem(const struct FSBSeasonPassQuestListData& ItemList);
		void SetDataFunc(class USBSeasonPassQuestMenuListData* Data, class UUMG_SeasonPassBonusQuestMenu_C* OwnerMenu);
		void TryGetItem(class UUMG_SeasonPassQuestBonusListItem_C** AsUMGSeasonPassQuestBonusListItem);
		void ListInitialize();
		void PreConstruct(bool IsDesignTime);
		void SetData(class USBSeasonPassQuestMenuListData* Data, class UUMG_SeasonPassBonusQuestMenu_C* OwnerMenu);
		void ExecuteUbergraph_UMG_SeasonPassQuestBonusListMain(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
