#pragma once

 

// Package: WeaponSynthePart_TokenBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_TokenBox.WeaponSynthePart_TokenBox_C
// 0x0030 (0x02A8 - 0x0278)
class UWeaponSynthePart_TokenBox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CPAlert;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Alert;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Tokens;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventSelect;                                       // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EventSelect__DelegateSignature();
	void ExecuteUbergraph_WeaponSynthePart_TokenBox(int32 EntryPoint);
	void Construct();
	void Destruct();
	void OnSelectToken(bool IsChecked, class UWeaponSynthePart_TokenBoxItem_C* Item);
	void BindOnSelected(class UWeaponSynthePart_TokenBoxItem_C* Target);
	void Clear();
	class UWeaponSynthePart_TokenBoxItem_C* AddItem(bool bSelectable, const struct FSBFusionTicketMasterData& SBFusionTicketMasterData, int32 Num);
	void GenerateToken(const ESBFusionTicketType Type, int32 WeaponLv, bool bSelectable, int32 Num, class UWeaponSynthePart_TokenBoxItem_C** TokenBoxItem);
	void SetEnable(int32 Param_Index, bool bInIsEnabled);
	void SetVisibleAlert(bool Param_IsVisible);
	void SetAlertText(const class FText& InText);
	void SetAlertTextID(class USBTextTableAsset* InTextTable, int32 InTextID);
	void Select(int32 Param_Index, bool IsChecked);
	void OnSelect(bool IsChecked, class UWeaponSynthePart_TokenBoxItem_C* SelectItem);
	void GetTypeItem(ESBFusionTicketType Type, class UWeaponSynthePart_TokenBoxItem_C** TokenBoxItem);
	void IsValidCostAll(bool* Result);
	int32 GetCreateNum();

	void IsSelected(bool* Param_IsSelected) const;
	void GetSelectedItem(class UWeaponSynthePart_TokenBoxItem_C** TokenBoxItem) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_TokenBox_C">();
	}
	static class UWeaponSynthePart_TokenBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_TokenBox_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_TokenBox_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_TokenBox_C");
static_assert(sizeof(UWeaponSynthePart_TokenBox_C) == 0x0002A8, "Wrong size on UWeaponSynthePart_TokenBox_C");
static_assert(offsetof(UWeaponSynthePart_TokenBox_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_TokenBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBox_C, CPAlert) == 0x000280, "Member 'UWeaponSynthePart_TokenBox_C::CPAlert' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBox_C, Txt_Alert) == 0x000288, "Member 'UWeaponSynthePart_TokenBox_C::Txt_Alert' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBox_C, VB_Tokens) == 0x000290, "Member 'UWeaponSynthePart_TokenBox_C::VB_Tokens' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_TokenBox_C, EventSelect) == 0x000298, "Member 'UWeaponSynthePart_TokenBox_C::EventSelect' has a wrong offset!");

}

