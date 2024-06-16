#pragma once

 

// Package: Fang_expedition_AreaList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_AreaList.Fang_expedition_AreaList_C
// 0x0108 (0x0380 - 0x0278)
class UFang_expedition_AreaList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_Dungeon;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_Field;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_Town;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_DungeonGroup_C*        Fang_expedition_DungeonGroup;                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListGroup_C*       FieldGroup;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListGroup_C*       TownGroup;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         TownIdList;                                        // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         FieldMapIdList;                                    // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         DungeonIdList;                                     // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBFang_expeditionData                 Fang_expeditionData;                               // 0x02E8(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnListItemSelect_Town;                             // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnListItemSelect_Field;                            // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDungeonExpeditionSelect;                         // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDungeonTicketClicked;                            // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDungeonStandbyClicked;                           // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDungeonAnimationFinish;                          // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnListItemSelect_Town__DelegateSignature(int32 Param_Index);
	void OnListItemSelect_Field__DelegateSignature(const class FString& Field, int32 Param_Index);
	void OnDungeonExpeditionSelect__DelegateSignature(int32 Param_Index, const struct FSBFang_expeditionPlayData& PlayData);
	void OnDungeonTicketClicked__DelegateSignature(int32 Param_Index);
	void OnDungeonStandbyClicked__DelegateSignature(int32 Param_Index);
	void OnDungeonAnimationFinish__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_AreaList(int32 EntryPoint);
	void Destruct();
	void CB_DungeonAnimationFinish();
	void CB_DungeonStandbyClick(int32 Param_Index);
	void CB_DungeonExpeditionClick(int32 Param_Index, const struct FSBFang_expeditionPlayData& PlayData);
	void CB_DungeonTicketButtonClick(int32 Param_Index);
	void CB_ListItemClick_Field(const class FString& Field, int32 Param_Index);
	void CB_ListItemClick_Town(int32 Param_Index);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetExpeditionData(const struct FSBFang_expeditionData& Expedition_Data);
	void Initialize();
	void GetFieldAreaData(int32 Param_Index, struct FSBFang_expeditionAreaData* Data);
	void SetBtn_Town(int32 Param_Index);
	void SetBtn_Field(int32 Param_Index);
	void SetBtn_Dungeon(int32 Param_Index);
	void ClearBtn();
	void PlayDungeonSlotAnimation(int32 Param_Index);
	void Finish();
	void GetTownId(int32 ListIndex, class FString* ID);
	void CheckNewMarkFieldList(const class FString& FieldName);
	void CheckNewMark(const class FString& InParam, bool* OutParam);
	void Update_New_MarkList(const class FString& InId);
	void SortFieldMapIdList(TArray<class FString>& MapIdList);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_AreaList_C">();
	}
	static class UFang_expedition_AreaList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_AreaList_C>();
	}
};
static_assert(alignof(UFang_expedition_AreaList_C) == 0x000008, "Wrong alignment on UFang_expedition_AreaList_C");
static_assert(sizeof(UFang_expedition_AreaList_C) == 0x000380, "Wrong size on UFang_expedition_AreaList_C");
static_assert(offsetof(UFang_expedition_AreaList_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_AreaList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, BG) == 0x000280, "Member 'UFang_expedition_AreaList_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, Box_Dungeon) == 0x000288, "Member 'UFang_expedition_AreaList_C::Box_Dungeon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, Box_Field) == 0x000290, "Member 'UFang_expedition_AreaList_C::Box_Field' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, Box_Town) == 0x000298, "Member 'UFang_expedition_AreaList_C::Box_Town' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, Fang_expedition_DungeonGroup) == 0x0002A0, "Member 'UFang_expedition_AreaList_C::Fang_expedition_DungeonGroup' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, FieldGroup) == 0x0002A8, "Member 'UFang_expedition_AreaList_C::FieldGroup' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, TownGroup) == 0x0002B0, "Member 'UFang_expedition_AreaList_C::TownGroup' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, TownIdList) == 0x0002B8, "Member 'UFang_expedition_AreaList_C::TownIdList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, FieldMapIdList) == 0x0002C8, "Member 'UFang_expedition_AreaList_C::FieldMapIdList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, DungeonIdList) == 0x0002D8, "Member 'UFang_expedition_AreaList_C::DungeonIdList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, Fang_expeditionData) == 0x0002E8, "Member 'UFang_expedition_AreaList_C::Fang_expeditionData' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, OnListItemSelect_Town) == 0x000320, "Member 'UFang_expedition_AreaList_C::OnListItemSelect_Town' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, OnListItemSelect_Field) == 0x000330, "Member 'UFang_expedition_AreaList_C::OnListItemSelect_Field' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, OnDungeonExpeditionSelect) == 0x000340, "Member 'UFang_expedition_AreaList_C::OnDungeonExpeditionSelect' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, OnDungeonTicketClicked) == 0x000350, "Member 'UFang_expedition_AreaList_C::OnDungeonTicketClicked' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, OnDungeonStandbyClicked) == 0x000360, "Member 'UFang_expedition_AreaList_C::OnDungeonStandbyClicked' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaList_C, OnDungeonAnimationFinish) == 0x000370, "Member 'UFang_expedition_AreaList_C::OnDungeonAnimationFinish' has a wrong offset!");

}

