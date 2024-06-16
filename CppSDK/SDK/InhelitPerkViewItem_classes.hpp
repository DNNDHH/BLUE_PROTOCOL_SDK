#pragma once

 

// Package: InhelitPerkViewItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InhelitPerkViewItem.InhelitPerkViewItem_C
// 0x0070 (0x02E8 - 0x0278)
class UInhelitPerkViewItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            BtnChange;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnPurge;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInheritCustomPerkSlotItem_C*           InheritCustomPerkSlotItem;                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBStackBPerk                          PerkData;                                          // 0x0298(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             SelectChange;                                      // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SelectPurge;                                       // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SelectChange__DelegateSignature(const struct FSBStackBPerk& SelectData);
	void SelectPurge__DelegateSignature(const struct FSBStackBPerk& SelectPerk);
	void ExecuteUbergraph_InhelitPerkViewItem(int32 EntryPoint);
	void BndEvt__InhelitPerkViewItem_BtnChange_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__InhelitPerkViewItem_BtnPurge_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void SetPerkData(const struct FSBStackBPerk& SBCharacter_Weapon_Perk_Data);
	void SetEmpty();
	void DisableChange();
	void DisablePurge();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InhelitPerkViewItem_C">();
	}
	static class UInhelitPerkViewItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInhelitPerkViewItem_C>();
	}
};
static_assert(alignof(UInhelitPerkViewItem_C) == 0x000008, "Wrong alignment on UInhelitPerkViewItem_C");
static_assert(sizeof(UInhelitPerkViewItem_C) == 0x0002E8, "Wrong size on UInhelitPerkViewItem_C");
static_assert(offsetof(UInhelitPerkViewItem_C, UberGraphFrame) == 0x000278, "Member 'UInhelitPerkViewItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInhelitPerkViewItem_C, BtnChange) == 0x000280, "Member 'UInhelitPerkViewItem_C::BtnChange' has a wrong offset!");
static_assert(offsetof(UInhelitPerkViewItem_C, BtnPurge) == 0x000288, "Member 'UInhelitPerkViewItem_C::BtnPurge' has a wrong offset!");
static_assert(offsetof(UInhelitPerkViewItem_C, InheritCustomPerkSlotItem) == 0x000290, "Member 'UInhelitPerkViewItem_C::InheritCustomPerkSlotItem' has a wrong offset!");
static_assert(offsetof(UInhelitPerkViewItem_C, PerkData) == 0x000298, "Member 'UInhelitPerkViewItem_C::PerkData' has a wrong offset!");
static_assert(offsetof(UInhelitPerkViewItem_C, SelectChange) == 0x0002C8, "Member 'UInhelitPerkViewItem_C::SelectChange' has a wrong offset!");
static_assert(offsetof(UInhelitPerkViewItem_C, SelectPurge) == 0x0002D8, "Member 'UInhelitPerkViewItem_C::SelectPurge' has a wrong offset!");

}

