#pragma once

 

// Package: PurchaseTypeSwitchingTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PurchaseTypeSwitchingTab.PurchaseTypeSwitchingTab_C
// 0x0038 (0x02B0 - 0x0278)
class UPurchaseTypeSwitchingTab_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         Box_Tab;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPurchaseTypeTabItem_C*                 RoseOrb_Gasha;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPurchaseTypeTabItem_C*                 Ticket_Gasha;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SelectedBtn;                                       // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_956F[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature(int32 BtnId);
	void ExecuteUbergraph_PurchaseTypeSwitchingTab(int32 EntryPoint);
	void Construct();
	void BndEvt__PurchaseTypeSwitchingTab_Ticket_Gasha_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature(int32 BtnId);
	void BndEvt__PurchaseTypeSwitchingTab_RoseOrb_Gasha_K2Node_ComponentBoundEvent_2_OnBtnClicked__DelegateSignature(int32 BtnId);
	void CommonBtnClicked(int32 BtnId);
	void SetBtnVisivility(ESlateVisibility IsVisibility);
	void SetBtnSelected(int32 SelectedBtnID);
	void GetSelectBtn(int32* OutSelectBtnId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PurchaseTypeSwitchingTab_C">();
	}
	static class UPurchaseTypeSwitchingTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPurchaseTypeSwitchingTab_C>();
	}
};
static_assert(alignof(UPurchaseTypeSwitchingTab_C) == 0x000008, "Wrong alignment on UPurchaseTypeSwitchingTab_C");
static_assert(sizeof(UPurchaseTypeSwitchingTab_C) == 0x0002B0, "Wrong size on UPurchaseTypeSwitchingTab_C");
static_assert(offsetof(UPurchaseTypeSwitchingTab_C, UberGraphFrame) == 0x000278, "Member 'UPurchaseTypeSwitchingTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeSwitchingTab_C, Box_Tab) == 0x000280, "Member 'UPurchaseTypeSwitchingTab_C::Box_Tab' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeSwitchingTab_C, RoseOrb_Gasha) == 0x000288, "Member 'UPurchaseTypeSwitchingTab_C::RoseOrb_Gasha' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeSwitchingTab_C, Ticket_Gasha) == 0x000290, "Member 'UPurchaseTypeSwitchingTab_C::Ticket_Gasha' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeSwitchingTab_C, SelectedBtn) == 0x000298, "Member 'UPurchaseTypeSwitchingTab_C::SelectedBtn' has a wrong offset!");
static_assert(offsetof(UPurchaseTypeSwitchingTab_C, OnClicked) == 0x0002A0, "Member 'UPurchaseTypeSwitchingTab_C::OnClicked' has a wrong offset!");

}

