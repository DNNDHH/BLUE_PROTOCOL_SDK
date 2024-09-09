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
	 * WidgetBlueprintGeneratedClass Fang_expedition_AreaList.Fang_expedition_AreaList_C
	 * Size -> 0x0108 (FullSize[0x0380] - InheritedSize[0x0278])
	 */
	class UFang_expedition_AreaList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BG;                                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            Box_Dungeon;                                             // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            Box_Field;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            Box_Town;                                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_DungeonGroup_C*                     Fang_expedition_DungeonGroup;                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_AreaListGroup_C*                    FieldGroup;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFang_expedition_AreaListGroup_C*                    TownGroup;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FString>                                      TownIdList;                                              // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      FieldMapIdList;                                          // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      DungeonIdList;                                           // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBFang_expeditionData                              Fang_expeditionData;                                     // 0x02E8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnListItemSelect_Town;                                   // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnListItemSelect_Field;                                  // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDungeonExpeditionSelect;                               // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDungeonTicketClicked;                                  // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDungeonStandbyClicked;                                 // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnDungeonAnimationFinish;                                // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SortFieldMapIdList(TArray<class FString>* MapIdList);
		void UpdateNewMarkList(const class FString& InId);
		void CheckNewMark(const class FString& InParam, bool* OutParam);
		void CheckNewMarkFieldList(const class FString& FieldName);
		void GetTownId(int32_t listIndex, class FString* ID);
		void Finish();
		void PlayDungeonSlotAnimation(int32_t Index);
		void ClearBtn();
		void SetBtn_Dungeon(int32_t Index);
		void SetBtn_Field(int32_t Index);
		void SetBtn_Town(int32_t Index);
		void GetFieldAreaData(int32_t Index, struct FSBFang_expeditionAreaData* Data);
		void Initialize();
		void SetExpeditionData(const struct FSBFang_expeditionData& Expedition_Data);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void CB_ListItemClick_Town(int32_t Index);
		void CB_ListItemClick_Field(const class FString& Field, int32_t Index);
		void CB_DungeonTicketButtonClick(int32_t Index);
		void CB_DungeonExpeditionClick(int32_t Index, const struct FSBFang_expeditionPlayData& PlayData);
		void CB_DungeonStandbyClick(int32_t Index);
		void CB_DungeonAnimationFinish();
		void Destruct();
		void ExecuteUbergraph_Fang_expedition_AreaList(int32_t EntryPoint);
		void OnDungeonAnimationFinish__DelegateSignature();
		void OnDungeonStandbyClicked__DelegateSignature(int32_t Index);
		void OnDungeonTicketClicked__DelegateSignature(int32_t Index);
		void OnDungeonExpeditionSelect__DelegateSignature(int32_t Index, const struct FSBFang_expeditionPlayData& PlayData);
		void OnListItemSelect_Field__DelegateSignature(const class FString& Field, int32_t Index);
		void OnListItemSelect_Town__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
