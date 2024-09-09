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
	 * WidgetBlueprintGeneratedClass EmoteCategoryMenu.EmoteCategoryMenu_C
	 * Size -> 0x006C (FullSize[0x02E4] - InheritedSize[0x0278])
	 */
	class UEmoteCategoryMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      CategoryList;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    SelectButtonIndex;                                       // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9VFO[0x4];                                   // 0x028C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            HistoryEmoteIds;                                         // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnEmoteListUpdate;                                       // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FSBLimitedTimeGroupInfo>                     LimitedTimeGroupList;                                    // 0x02B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      EmotionList;                                             // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    MaxEmoteNum;                                             // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsHistoryIconDisp;                                       // 0x02D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       IsFavoriteIconDisp;                                      // 0x02D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_SDIS[0x2];                                   // 0x02D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NormalCategoryId;                                        // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LimitedTimeCategoriId;                                   // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FavoriteCategoriId;                                      // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddHistoryEmoteIds(int32_t AddEmotionId);
		void SaveEmoteHisoryIdsData();
		void GetEmotionList(int32_t InSortType, TArray<class FString>* OutEmotionList);
		void UpdateCategory();
		void UpdateHistoryList();
		void LoadEmoteHistoryIdsData();
		void CreateCategory();
		void OnClickedEvent(int32_t Index);
		void Construct();
		void Destruct();
		void ExecuteUbergraph_EmoteCategoryMenu(int32_t EntryPoint);
		void OnEmoteListUpdate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
