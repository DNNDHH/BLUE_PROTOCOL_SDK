#pragma once

 

// Package: WeaponSynthePart_TokenBoxItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_TokenBoxItem.WeaponSynthePart_TokenBoxItem_C
// 0x00B0 (0x0328 - 0x0278)
class UWeaponSynthePart_TokenBoxItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBox_C*                          CB_Select;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Amount;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Cost;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Name;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bSelectable;                                       // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5CC6[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBFusionTicketMasterData              TicketMasterData;                                  // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FMasterToken                           MasterToken;                                       // 0x02C8(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Const_Rate;                                        // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSelected__DelegateSignature(bool IsChecked, class UWeaponSynthePart_TokenBoxItem_C* This);
	void ExecuteUbergraph_WeaponSynthePart_TokenBoxItem(int32 EntryPoint);
	void BndEvt__CB_Select_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void Construct();
	void Setup(const struct FSBFusionTicketMasterData& TicketData, int32 ConstRate);
	void SetNameText(const class FText& InText);
	void SetName();
	void SetNameColor(bool IsEnable);
	void SetCostText(const class FText& InText);
	void SetCost();
	void SetAmountText(const class FText& InText);
	void SetAmount();
	void SetEnable(bool bInIsEnabled);
	void SetSelect(bool bSelect);
	void IsSelect(bool* Selected);
	void GetTokenId(int32* ID);
	void GetCost(int32* NeedCount);
	int32 GetAmount();
	bool IsValidCost();
	void CreateDialog(const class FText& Message, class UBP_Dialog_C** OutDialog);

	void GetType(ESBFusionTicketType* Ticket_Type) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_TokenBoxItem_C">();
	}
	static class UWeaponSynthePart_TokenBoxItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_TokenBoxItem_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_TokenBoxItem_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_TokenBoxItem_C");
static_assert(sizeof(UWeaponSynthePart_TokenBoxItem_C) == 0x000328, "Wrong size on UWeaponSynthePart_TokenBoxItem_C");
static_assert(offsetof(UWeaponSynthePart_TokenBoxItem_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_TokenBoxItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBoxItem_C, CB_Select) == 0x000280, "Member 'UWeaponSynthePart_TokenBoxItem_C::CB_Select' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBoxItem_C, Txt_Amount) == 0x000288, "Member 'UWeaponSynthePart_TokenBoxItem_C::Txt_Amount' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBoxItem_C, Txt_Cost) == 0x000290, "Member 'UWeaponSynthePart_TokenBoxItem_C::Txt_Cost' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBoxItem_C, Txt_Name) == 0x000298, "Member 'UWeaponSynthePart_TokenBoxItem_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBoxItem_C, bSelectable) == 0x0002A0, "Member 'UWeaponSynthePart_TokenBoxItem_C::bSelectable' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBoxItem_C, OnSelected) == 0x0002A8, "Member 'UWeaponSynthePart_TokenBoxItem_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBoxItem_C, TicketMasterData) == 0x0002B8, "Member 'UWeaponSynthePart_TokenBoxItem_C::TicketMasterData' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBoxItem_C, MasterToken) == 0x0002C8, "Member 'UWeaponSynthePart_TokenBoxItem_C::MasterToken' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBoxItem_C, Const_Rate) == 0x000320, "Member 'UWeaponSynthePart_TokenBoxItem_C::Const_Rate' has a wrong offset!");

}

