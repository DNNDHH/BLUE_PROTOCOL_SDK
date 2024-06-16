#pragma once

 

// Package: Fang_expedition_AreaListSelectWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C
// 0x0088 (0x0300 - 0x0278)
class UFang_expedition_AreaListSelectWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           AreaListBox;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        Fang_expedition_AreaListItem;                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        Fang_expedition_AreaListItem_70;                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_AreaListItem_C*        Fang_expedition_AreaListItem_106;                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_MapIcon_C*             Fang_expedition_MapIcon;                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine_1;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSBFang_expeditionAreaData>     ListData;                                          // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFang_expedition_AreaListItem_C*> ListItems;                                         // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnListItemClick;                                   // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCloseButtonClick;                                // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnListItemClick__DelegateSignature(int32 Param_Index);
	void OnCloseButtonClick__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_AreaListSelectWindow(int32 EntryPoint);
	void BndEvt__Fang_expedition_AreaListSelectWindow_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void Clear();
	void AddData(const struct FSBFang_expeditionAreaData& AreaData);
	void CB_OnClick(int32 Param_Index);
	void GetData(int32 Param_Index, struct FSBFang_expeditionAreaData* AreaData);
	void SetStatus(ESBFang_expeditionStatus Status, bool Time, bool New);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_AreaListSelectWindow_C">();
	}
	static class UFang_expedition_AreaListSelectWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_AreaListSelectWindow_C>();
	}
};
static_assert(alignof(UFang_expedition_AreaListSelectWindow_C) == 0x000008, "Wrong alignment on UFang_expedition_AreaListSelectWindow_C");
static_assert(sizeof(UFang_expedition_AreaListSelectWindow_C) == 0x000300, "Wrong size on UFang_expedition_AreaListSelectWindow_C");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_AreaListSelectWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, AreaListBox) == 0x000280, "Member 'UFang_expedition_AreaListSelectWindow_C::AreaListBox' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, BG) == 0x000288, "Member 'UFang_expedition_AreaListSelectWindow_C::BG' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, CmnClose01) == 0x000290, "Member 'UFang_expedition_AreaListSelectWindow_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, Fang_expedition_AreaListItem) == 0x000298, "Member 'UFang_expedition_AreaListSelectWindow_C::Fang_expedition_AreaListItem' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, Fang_expedition_AreaListItem_70) == 0x0002A0, "Member 'UFang_expedition_AreaListSelectWindow_C::Fang_expedition_AreaListItem_70' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, Fang_expedition_AreaListItem_106) == 0x0002A8, "Member 'UFang_expedition_AreaListSelectWindow_C::Fang_expedition_AreaListItem_106' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, Fang_expedition_MapIcon) == 0x0002B0, "Member 'UFang_expedition_AreaListSelectWindow_C::Fang_expedition_MapIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, HLine_1) == 0x0002B8, "Member 'UFang_expedition_AreaListSelectWindow_C::HLine_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, ListData) == 0x0002C0, "Member 'UFang_expedition_AreaListSelectWindow_C::ListData' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, ListItems) == 0x0002D0, "Member 'UFang_expedition_AreaListSelectWindow_C::ListItems' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, OnListItemClick) == 0x0002E0, "Member 'UFang_expedition_AreaListSelectWindow_C::OnListItemClick' has a wrong offset!");
static_assert(offsetof(UFang_expedition_AreaListSelectWindow_C, OnCloseButtonClick) == 0x0002F0, "Member 'UFang_expedition_AreaListSelectWindow_C::OnCloseButtonClick' has a wrong offset!");

}

