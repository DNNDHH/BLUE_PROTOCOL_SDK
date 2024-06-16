#pragma once

 

// Package: WeaponSynthePart_PerkSlotItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlotDataChangeType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_PerkSlotItem.WeaponSynthePart_PerkSlotItem_C
// 0x00F8 (0x0370 - 0x0278)
class UWeaponSynthePart_PerkSlotItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Button;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CP_Ability1;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CP_Ability2;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CP_PerkRarity;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CP_Select;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CP_StrageIcon;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_upgrade;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_ButtonLock_C*         Part_Lock;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkRarityView_C*                      Part_Rarity;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_SlotIcon_C*           Part_SlotIcon;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_TagChange_C*          Part_TagChange;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponSynthePart_WindowAbilityChange_C* Part_WindowAbilityChange;                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_AbilityName_1;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_AbilityName_2;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_AbilityValue_1;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_AbilityValue_2;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ItemName;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Result;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_BG_Size;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Option;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Overlap;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Slot_Num;                                          // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterWeaponPerkData             PerkData;                                          // 0x032C(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UCommonToolTip_AbilityPerk_C*           AbilityDescToolTip;                                // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedLock;                                     // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked__DelegateSignature();
	void OnClickedLock__DelegateSignature(bool Param_IsLock);
	void ExecuteUbergraph_WeaponSynthePart_PerkSlotItem(int32 EntryPoint);
	void Construct();
	void BndEvt__WeaponSynthePart_PerkSlotItem_Part_ButtonLock_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool Param_IsLock);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WeaponSynthePart_PerkSlotItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Initialize();
	void SetupShort(const struct FSBCharacterWeaponPerkData& Param_PerkData);
	void SetupLong(const struct FSBCharacterWeaponPerkData& Param_PerkData);
	void SetupEmpty();
	void SetPerkData(const struct FSBCharacterWeaponPerkData& InPerkData);
	void SetVisibleSelect(bool InVisible);
	void SetVisibleButton(bool InVisible);
	void SetupOverlapAddSlot();
	void SetupOverlapRemove(bool IsRemove);
	void SetupOverlapLock(bool InVisible);
	void SetupOverlapSelect();
	void SetSlot(int32 SlotNum);
	void SetSlotIcon(int32 SlotNum);
	void SetPerk(const struct FSBCharacterWeaponPerkData& WeaponPerkData);
	void SetPerkEmpty();
	void SetItemName(const class FText& InText);
	void SetAbility1Visible(bool InVisible);
	void SetAbility1Name(const class FText& InText);
	void SetAbility1Value(class FName RowName, const struct FSBCharacterWeaponPerkData& InWeaponPerkData);
	void SetAbility2Visible(bool InVisible);
	void SetAbility2Name(const class FText& InText);
	void SetAbility2Value(class FName RowName, const struct FSBCharacterWeaponPerkData& InWeaponPerkData);
	void SetRarityVisible(bool InVisible);
	void SetRarity(int32 InRarity);
	void SetupTag(const struct FSBCharacterWeaponPerkData& Before, const struct FSBCharacterWeaponPerkData& After);
	void SetupLock(bool Param_IsLock);
	void SetupLocking();
	void SetOptionVisible(bool InVisible);
	void UpdateLock(bool Param_IsLock);
	void SetAbilityChangeWindowVisible(bool InVisible);
	void SetupAbilityChangeWindowNone();
	void SetupAbilityChangeWindowLock();
	void SetupAbilityChangeWindowValue();
	void SetSlotBGSize(int32 SlotNum);
	class UWidget* GetAbilityDescToolTipWidget();
	void SetupOverlapUnSelect();
	void SetOverlapVisible(bool InVisible);
	void SetOverlapAddSlot();
	void SetOverlapRemove();
	void SetOverlapLock();
	void SetOverlapSelect();
	void SetVisibleIcon(bool InVisible);
	void SetOverlapUnSelect();
	void SetChangeShow(bool bShow);

	void GetPerkData(struct FSBCharacterWeaponPerkData* Param_PerkData) const;
	void IsEmptyPerkData(bool* Result) const;
	void IsVisibleSelect(bool* NewParam) const;
	bool IsOptionVisible() const;
	void GetSlotDataChangeType(const struct FSBCharacterWeaponPerkData& Before, const struct FSBCharacterWeaponPerkData& After, ESlotDataChangeType* Type) const;
	void IsLock(bool* Param_IsLock) const;
	void DebugPrint(const class FString& InStr, float Duration) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_PerkSlotItem_C">();
	}
	static class UWeaponSynthePart_PerkSlotItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_PerkSlotItem_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_PerkSlotItem_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_PerkSlotItem_C");
static_assert(sizeof(UWeaponSynthePart_PerkSlotItem_C) == 0x000370, "Wrong size on UWeaponSynthePart_PerkSlotItem_C");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_PerkSlotItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Button) == 0x000280, "Member 'UWeaponSynthePart_PerkSlotItem_C::Button' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, CP_Ability1) == 0x000288, "Member 'UWeaponSynthePart_PerkSlotItem_C::CP_Ability1' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, CP_Ability2) == 0x000290, "Member 'UWeaponSynthePart_PerkSlotItem_C::CP_Ability2' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, CP_PerkRarity) == 0x000298, "Member 'UWeaponSynthePart_PerkSlotItem_C::CP_PerkRarity' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, CP_Select) == 0x0002A0, "Member 'UWeaponSynthePart_PerkSlotItem_C::CP_Select' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, CP_StrageIcon) == 0x0002A8, "Member 'UWeaponSynthePart_PerkSlotItem_C::CP_StrageIcon' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Img_upgrade) == 0x0002B0, "Member 'UWeaponSynthePart_PerkSlotItem_C::Img_upgrade' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Part_Lock) == 0x0002B8, "Member 'UWeaponSynthePart_PerkSlotItem_C::Part_Lock' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Part_Rarity) == 0x0002C0, "Member 'UWeaponSynthePart_PerkSlotItem_C::Part_Rarity' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Part_SlotIcon) == 0x0002C8, "Member 'UWeaponSynthePart_PerkSlotItem_C::Part_SlotIcon' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Part_TagChange) == 0x0002D0, "Member 'UWeaponSynthePart_PerkSlotItem_C::Part_TagChange' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Part_WindowAbilityChange) == 0x0002D8, "Member 'UWeaponSynthePart_PerkSlotItem_C::Part_WindowAbilityChange' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Txt_AbilityName_1) == 0x0002E0, "Member 'UWeaponSynthePart_PerkSlotItem_C::Txt_AbilityName_1' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Txt_AbilityName_2) == 0x0002E8, "Member 'UWeaponSynthePart_PerkSlotItem_C::Txt_AbilityName_2' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Txt_AbilityValue_1) == 0x0002F0, "Member 'UWeaponSynthePart_PerkSlotItem_C::Txt_AbilityValue_1' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Txt_AbilityValue_2) == 0x0002F8, "Member 'UWeaponSynthePart_PerkSlotItem_C::Txt_AbilityValue_2' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Txt_ItemName) == 0x000300, "Member 'UWeaponSynthePart_PerkSlotItem_C::Txt_ItemName' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Txt_Result) == 0x000308, "Member 'UWeaponSynthePart_PerkSlotItem_C::Txt_Result' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, WS_BG_Size) == 0x000310, "Member 'UWeaponSynthePart_PerkSlotItem_C::WS_BG_Size' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, WS_Option) == 0x000318, "Member 'UWeaponSynthePart_PerkSlotItem_C::WS_Option' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, WS_Overlap) == 0x000320, "Member 'UWeaponSynthePart_PerkSlotItem_C::WS_Overlap' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, Slot_Num) == 0x000328, "Member 'UWeaponSynthePart_PerkSlotItem_C::Slot_Num' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, PerkData) == 0x00032C, "Member 'UWeaponSynthePart_PerkSlotItem_C::PerkData' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, AbilityDescToolTip) == 0x000348, "Member 'UWeaponSynthePart_PerkSlotItem_C::AbilityDescToolTip' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, OnClicked) == 0x000350, "Member 'UWeaponSynthePart_PerkSlotItem_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_PerkSlotItem_C, OnClickedLock) == 0x000360, "Member 'UWeaponSynthePart_PerkSlotItem_C::OnClickedLock' has a wrong offset!");

}

