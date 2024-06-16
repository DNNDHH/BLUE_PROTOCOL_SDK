#pragma once

 

// Package: FilterSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Filter_Type_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FilterSelector.FilterSelector_C
// 0x00B8 (0x0330 - 0x0278)
class UFilterSelector_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnApply;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnReset;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilter_BattleBuildNotRegisted_C*       Filter_BattleBuildNotRegisted;                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilter_BattleBuildRegisted_C*          Filter_BattleBuildRegisted;                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilter_BuildEquipments_C*              Filter_BuildEquipments;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilter_CanReceive_C*                   Filter_CanReceive;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilter_Equiped_C*                      Filter_Equiped;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilter_Lock_C*                         Filter_Lock;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilter_StackBApplied_C*                Filter_StackBApplied;                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilter_StackBNotApplied_C*             Filter_StackBNotApplied;                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_FilterLists;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Img_Line3;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFilter_Type                                  Filter_Type;                                       // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bDontUseConstruct;                                 // 0x02F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9798[0x6];                                     // 0x02F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USBItemFilterWidgetBase*>        Lists;                                             // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnFilterApply;                                     // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bInitialized;                                      // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_FilterSelector(int32 EntryPoint);
	void BndEvt__FilterSelector_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void ChangeFilterType(EFilter_Type FilterType);
	void ConstructFromExternal(EFilter_Type Param_Filter_Type);
	void Close();
	void BndEvt__CmnBtn16_124_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void PlayAnimIn();
	void PlayAnimOut();
	void FindLatestFilterLayouts(struct FFilter_Item* FilterData1);

	void GetFilters(TArray<struct FFilterGroup>* Filter1) const;
	void IsAnimInOutPlaying(bool* OutIsPlaying) const;
	void IsVisible_(class UUserWidget* Widget, bool* Param_Visibility) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FilterSelector_C">();
	}
	static class UFilterSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFilterSelector_C>();
	}
};
static_assert(alignof(UFilterSelector_C) == 0x000008, "Wrong alignment on UFilterSelector_C");
static_assert(sizeof(UFilterSelector_C) == 0x000330, "Wrong size on UFilterSelector_C");
static_assert(offsetof(UFilterSelector_C, UberGraphFrame) == 0x000278, "Member 'UFilterSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, AnimInOut) == 0x000280, "Member 'UFilterSelector_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, BtnApply) == 0x000288, "Member 'UFilterSelector_C::BtnApply' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, BtnReset) == 0x000290, "Member 'UFilterSelector_C::BtnReset' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, CmnClose02) == 0x000298, "Member 'UFilterSelector_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, Filter_BattleBuildNotRegisted) == 0x0002A0, "Member 'UFilterSelector_C::Filter_BattleBuildNotRegisted' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, Filter_BattleBuildRegisted) == 0x0002A8, "Member 'UFilterSelector_C::Filter_BattleBuildRegisted' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, Filter_BuildEquipments) == 0x0002B0, "Member 'UFilterSelector_C::Filter_BuildEquipments' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, Filter_CanReceive) == 0x0002B8, "Member 'UFilterSelector_C::Filter_CanReceive' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, Filter_Equiped) == 0x0002C0, "Member 'UFilterSelector_C::Filter_Equiped' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, Filter_Lock) == 0x0002C8, "Member 'UFilterSelector_C::Filter_Lock' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, Filter_StackBApplied) == 0x0002D0, "Member 'UFilterSelector_C::Filter_StackBApplied' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, Filter_StackBNotApplied) == 0x0002D8, "Member 'UFilterSelector_C::Filter_StackBNotApplied' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, HB_FilterLists) == 0x0002E0, "Member 'UFilterSelector_C::HB_FilterLists' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, Img_Line3) == 0x0002E8, "Member 'UFilterSelector_C::Img_Line3' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, Filter_Type) == 0x0002F0, "Member 'UFilterSelector_C::Filter_Type' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, bDontUseConstruct) == 0x0002F1, "Member 'UFilterSelector_C::bDontUseConstruct' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, Lists) == 0x0002F8, "Member 'UFilterSelector_C::Lists' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, OnFilterApply) == 0x000308, "Member 'UFilterSelector_C::OnFilterApply' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, OnClose) == 0x000318, "Member 'UFilterSelector_C::OnClose' has a wrong offset!");
static_assert(offsetof(UFilterSelector_C, bInitialized) == 0x000328, "Member 'UFilterSelector_C::bInitialized' has a wrong offset!");

}

