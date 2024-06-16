#pragma once

 

// Package: InhelitPerkSelector

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InhelitPerkSelector.InhelitPerkSelector_C
// 0x0108 (0x0380 - 0x0278)
class UInhelitPerkSelector_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Cansel;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Decide;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnClose;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnCansel;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnDecide;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_SlotView;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBStackBPerk                          Target;                                            // 0x02B0(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FSBStackBPerk>                  Materials;                                         // 0x02E0(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	TMap<class UPerkSlotButton_C*, struct FSBStackBPerk> TargetList;                                        // 0x02F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UPerkSlotButton_C*                      SelectBtn;                                         // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectChange;                                    // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSBStackBPerk>                  SetMaterials;                                      // 0x0368(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         Capacity;                                          // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnSelectChange__DelegateSignature(const struct FSBStackBPerk& Before, const struct FSBStackBPerk& Select);
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_InhelitPerkSelector(int32 EntryPoint);
	void BndEvt__InhelitPerkSelector_BtnClose_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InhelitPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InhelitPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__InhelotPerkSelector_Btn_Cansel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__InhelotPerkSelector_Btn_Decide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnSelectListItem(class UPerkSlotButton_C* SelectedButton);
	void Construct();
	void GenerateList();
	void AllSelectNone();
	void IsPerkSelected(const struct FSBStackBPerk& Perk, bool* bSelected);

	void IsPerkContains(bool* IsContains) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InhelitPerkSelector_C">();
	}
	static class UInhelitPerkSelector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInhelitPerkSelector_C>();
	}
};
static_assert(alignof(UInhelitPerkSelector_C) == 0x000008, "Wrong alignment on UInhelitPerkSelector_C");
static_assert(sizeof(UInhelitPerkSelector_C) == 0x000380, "Wrong size on UInhelitPerkSelector_C");
static_assert(offsetof(UInhelitPerkSelector_C, UberGraphFrame) == 0x000278, "Member 'UInhelitPerkSelector_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, Btn_Cansel) == 0x000280, "Member 'UInhelitPerkSelector_C::Btn_Cansel' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, Btn_Decide) == 0x000288, "Member 'UInhelitPerkSelector_C::Btn_Decide' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, BtnClose) == 0x000290, "Member 'UInhelitPerkSelector_C::BtnClose' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, Txt_BtnCansel) == 0x000298, "Member 'UInhelitPerkSelector_C::Txt_BtnCansel' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, Txt_BtnDecide) == 0x0002A0, "Member 'UInhelitPerkSelector_C::Txt_BtnDecide' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, VB_SlotView) == 0x0002A8, "Member 'UInhelitPerkSelector_C::VB_SlotView' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, Target) == 0x0002B0, "Member 'UInhelitPerkSelector_C::Target' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, Materials) == 0x0002E0, "Member 'UInhelitPerkSelector_C::Materials' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, TargetList) == 0x0002F0, "Member 'UInhelitPerkSelector_C::TargetList' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, SelectBtn) == 0x000340, "Member 'UInhelitPerkSelector_C::SelectBtn' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, OnSelectChange) == 0x000348, "Member 'UInhelitPerkSelector_C::OnSelectChange' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, OnClose) == 0x000358, "Member 'UInhelitPerkSelector_C::OnClose' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, SetMaterials) == 0x000368, "Member 'UInhelitPerkSelector_C::SetMaterials' has a wrong offset!");
static_assert(offsetof(UInhelitPerkSelector_C, Capacity) == 0x000378, "Member 'UInhelitPerkSelector_C::Capacity' has a wrong offset!");

}

