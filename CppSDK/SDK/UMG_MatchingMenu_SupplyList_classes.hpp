#pragma once

 

// Package: UMG_MatchingMenu_SupplyList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_SupplyList.UMG_MatchingMenu_SupplyList_C
// 0x0050 (0x02C8 - 0x0278)
class UUMG_MatchingMenu_SupplyList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonIcon_C*                          CommonIcon0;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon1;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon2;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon3;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickIcon;                                       // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSBDungeonSupply>               DungeonSupply;                                     // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClickIcon__DelegateSignature(const struct FSBDungeonSupply& Param_DungeonSupply);
	void ExecuteUbergraph_UMG_MatchingMenu_SupplyList(int32 EntryPoint);
	void BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon3_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
	void BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon2_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
	void BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon1_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
	void BndEvt__UMG_MatchingMenu_SupplyList_CommonIcon0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
	void Setup(class FName GameContentId);
	void Clear();
	void OnClickCommonIcon(int32 Param_Index);
	void Setup2();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_SupplyList_C">();
	}
	static class UUMG_MatchingMenu_SupplyList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_SupplyList_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_SupplyList_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_SupplyList_C");
static_assert(sizeof(UUMG_MatchingMenu_SupplyList_C) == 0x0002C8, "Wrong size on UUMG_MatchingMenu_SupplyList_C");
static_assert(offsetof(UUMG_MatchingMenu_SupplyList_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_SupplyList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_SupplyList_C, CommonIcon0) == 0x000280, "Member 'UUMG_MatchingMenu_SupplyList_C::CommonIcon0' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_SupplyList_C, CommonIcon1) == 0x000288, "Member 'UUMG_MatchingMenu_SupplyList_C::CommonIcon1' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_SupplyList_C, CommonIcon2) == 0x000290, "Member 'UUMG_MatchingMenu_SupplyList_C::CommonIcon2' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_SupplyList_C, CommonIcon3) == 0x000298, "Member 'UUMG_MatchingMenu_SupplyList_C::CommonIcon3' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_SupplyList_C, Switcher) == 0x0002A0, "Member 'UUMG_MatchingMenu_SupplyList_C::Switcher' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_SupplyList_C, OnClickIcon) == 0x0002A8, "Member 'UUMG_MatchingMenu_SupplyList_C::OnClickIcon' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_SupplyList_C, DungeonSupply) == 0x0002B8, "Member 'UUMG_MatchingMenu_SupplyList_C::DungeonSupply' has a wrong offset!");

}

