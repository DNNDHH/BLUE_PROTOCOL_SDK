#pragma once

 

// Package: Fang_expedition_DungeonList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DungeonList.Fang_expedition_DungeonList_C
// 0x0090 (0x0308 - 0x0278)
class UFang_expedition_DungeonList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DungeonIcon;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        Fang_expedition_AreaListItem;                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        Fang_expedition_AreaListItem_78;                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        Fang_expedition_AreaListItem_177;                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        Fang_expedition_AreaListItem_268;                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ListBase;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NoPlacePanel;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBListBox*                             SBListBox_51;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ItemCount;                                         // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5473[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFang_expedition_AreaListItem_C*> WidgetList;                                        // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnDungeonAreaSelect;                               // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCloseButtonPress;                                // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnDungeonAreaSelect__DelegateSignature(int32 Param_Index, const struct FSBFang_expeditionAreaData& AreaData);
	void OnCloseButtonPress__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_DungeonList(int32 EntryPoint);
	void BndEvt__Fang_expedition_DungeonList_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void SetData(const struct FSBFang_expeditionAreaData& AreaData);
	void Clear();
	void CB_ItemSelect(int32 Param_Index);
	void ShowEmptyText(bool InParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DungeonList_C">();
	}
	static class UFang_expedition_DungeonList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DungeonList_C>();
	}
};
static_assert(alignof(UFang_expedition_DungeonList_C) == 0x000008, "Wrong alignment on UFang_expedition_DungeonList_C");
static_assert(sizeof(UFang_expedition_DungeonList_C) == 0x000308, "Wrong size on UFang_expedition_DungeonList_C");
static_assert(offsetof(UFang_expedition_DungeonList_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DungeonList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, BG) == 0x000280, "Member 'UFang_expedition_DungeonList_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, CmnClose01) == 0x000288, "Member 'UFang_expedition_DungeonList_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, DungeonIcon) == 0x000290, "Member 'UFang_expedition_DungeonList_C::DungeonIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, Fang_expedition_AreaListItem) == 0x000298, "Member 'UFang_expedition_DungeonList_C::Fang_expedition_AreaListItem' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, Fang_expedition_AreaListItem_78) == 0x0002A0, "Member 'UFang_expedition_DungeonList_C::Fang_expedition_AreaListItem_78' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, Fang_expedition_AreaListItem_177) == 0x0002A8, "Member 'UFang_expedition_DungeonList_C::Fang_expedition_AreaListItem_177' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, Fang_expedition_AreaListItem_268) == 0x0002B0, "Member 'UFang_expedition_DungeonList_C::Fang_expedition_AreaListItem_268' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, ListBase) == 0x0002B8, "Member 'UFang_expedition_DungeonList_C::ListBase' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, NoPlacePanel) == 0x0002C0, "Member 'UFang_expedition_DungeonList_C::NoPlacePanel' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, SBListBox_51) == 0x0002C8, "Member 'UFang_expedition_DungeonList_C::SBListBox_51' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, ItemCount) == 0x0002D0, "Member 'UFang_expedition_DungeonList_C::ItemCount' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, WidgetList) == 0x0002D8, "Member 'UFang_expedition_DungeonList_C::WidgetList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, OnDungeonAreaSelect) == 0x0002E8, "Member 'UFang_expedition_DungeonList_C::OnDungeonAreaSelect' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DungeonList_C, OnCloseButtonPress) == 0x0002F8, "Member 'UFang_expedition_DungeonList_C::OnCloseButtonPress' has a wrong offset!");

}

