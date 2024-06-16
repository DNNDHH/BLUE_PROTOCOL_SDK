#pragma once

 

// Package: Fang_expedition_IconList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_IconList.Fang_expedition_IconList_C
// 0x00F8 (0x0370 - 0x0278)
class UFang_expedition_IconList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFilterButton_C*                        FilterButton;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             IconPanel;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIconBtn;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIconBtn_79;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIconBtn_437;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIconBtn_491;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIconBtn_545;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIconBtn_632;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIconBtn_693;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIconBtn_836;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIconBtn_896;                                   // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         ItemIconBtn_953;                                   // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            ResetButton1;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_37;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SelectCountNum;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SelectCountText;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USortBox_C*                             SortBox;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UItemIconBtn_C*>                 IconList;                                          // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class USBTemporallyStorage*                   Storage;                                           // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UItemIconBtn_C*>                 SelectedIconList;                                  // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         FangMax;                                           // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EC9[0x4];                                     // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFangSelectChange;                                // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FString>                         SelectedFangIdList;                                // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFilterGroup>                   FilterData;                                        // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBItemSortType                               SortType;                                          // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OnLog;                                             // 0x0369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ECA[0x2];                                     // 0x036A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SelectTimeStamp;                                   // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnFangSelectChange__DelegateSignature(TArray<class FString>& UniqueIds);
	void ExecuteUbergraph_Fang_expedition_IconList(int32 EntryPoint);
	void BndEvt__Fang_expedition_IconList_ResetButton1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void Destruct();
	void UnBindEvent();
	void BindEvent();
	void Construct();
	void InitFangList(int32 MaxFangCount, bool Reset);
	void CB_OnIconSelect(class UItemIconBtn_C* SelectIconBtn);
	void ClearIconData();
	void UpdateIconVisibleStatus();
	void CallFangSelectChange();
	void CB_FilterChange(TArray<struct FFilterGroup>& Filter);
	void CB_SortChange(ESBItemSortType Param_SortType);
	void InitFangList_UniqueId(int32 MaxFangCount, TArray<class FString>& UniqueId);
	void SetIconSelectLog(bool On);
	void IsActiveSelect(bool Select, bool* Active);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_IconList_C">();
	}
	static class UFang_expedition_IconList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_IconList_C>();
	}
};
static_assert(alignof(UFang_expedition_IconList_C) == 0x000008, "Wrong alignment on UFang_expedition_IconList_C");
static_assert(sizeof(UFang_expedition_IconList_C) == 0x000370, "Wrong size on UFang_expedition_IconList_C");
static_assert(offsetof(UFang_expedition_IconList_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_IconList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, FilterButton) == 0x000280, "Member 'UFang_expedition_IconList_C::FilterButton' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, IconPanel) == 0x000288, "Member 'UFang_expedition_IconList_C::IconPanel' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, ItemIconBtn) == 0x000290, "Member 'UFang_expedition_IconList_C::ItemIconBtn' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, ItemIconBtn_79) == 0x000298, "Member 'UFang_expedition_IconList_C::ItemIconBtn_79' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, ItemIconBtn_437) == 0x0002A0, "Member 'UFang_expedition_IconList_C::ItemIconBtn_437' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, ItemIconBtn_491) == 0x0002A8, "Member 'UFang_expedition_IconList_C::ItemIconBtn_491' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, ItemIconBtn_545) == 0x0002B0, "Member 'UFang_expedition_IconList_C::ItemIconBtn_545' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, ItemIconBtn_632) == 0x0002B8, "Member 'UFang_expedition_IconList_C::ItemIconBtn_632' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, ItemIconBtn_693) == 0x0002C0, "Member 'UFang_expedition_IconList_C::ItemIconBtn_693' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, ItemIconBtn_836) == 0x0002C8, "Member 'UFang_expedition_IconList_C::ItemIconBtn_836' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, ItemIconBtn_896) == 0x0002D0, "Member 'UFang_expedition_IconList_C::ItemIconBtn_896' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, ItemIconBtn_953) == 0x0002D8, "Member 'UFang_expedition_IconList_C::ItemIconBtn_953' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, ResetButton1) == 0x0002E0, "Member 'UFang_expedition_IconList_C::ResetButton1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, ScrollBox_37) == 0x0002E8, "Member 'UFang_expedition_IconList_C::ScrollBox_37' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, SelectCountNum) == 0x0002F0, "Member 'UFang_expedition_IconList_C::SelectCountNum' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, SelectCountText) == 0x0002F8, "Member 'UFang_expedition_IconList_C::SelectCountText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, SortBox) == 0x000300, "Member 'UFang_expedition_IconList_C::SortBox' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, IconList) == 0x000308, "Member 'UFang_expedition_IconList_C::IconList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, Storage) == 0x000318, "Member 'UFang_expedition_IconList_C::Storage' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, SelectedIconList) == 0x000320, "Member 'UFang_expedition_IconList_C::SelectedIconList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, FangMax) == 0x000330, "Member 'UFang_expedition_IconList_C::FangMax' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, OnFangSelectChange) == 0x000338, "Member 'UFang_expedition_IconList_C::OnFangSelectChange' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, SelectedFangIdList) == 0x000348, "Member 'UFang_expedition_IconList_C::SelectedFangIdList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, FilterData) == 0x000358, "Member 'UFang_expedition_IconList_C::FilterData' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, SortType) == 0x000368, "Member 'UFang_expedition_IconList_C::SortType' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, OnLog) == 0x000369, "Member 'UFang_expedition_IconList_C::OnLog' has a wrong offset!");
static_assert(offsetof(UFang_expedition_IconList_C, SelectTimeStamp) == 0x00036C, "Member 'UFang_expedition_IconList_C::SelectTimeStamp' has a wrong offset!");

}

