#pragma once

 

// Package: WeaponCustomPerkSlotItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponCustomPerkSlotItem.WeaponCustomPerkSlotItem_C
// 0x0230 (0x04A8 - 0x0278)
class UWeaponCustomPerkSlotItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInArrow;                                       // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Bdr_NewPerk;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Protect;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Change;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_ChangeLock;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_CraftResult;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Default;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Down;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Keep;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_NoChange;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_None;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_PerkValue2;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_ResultRemove;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Selected;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_StrageIcon;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Up;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_DontProtect;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Perk1Max;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Perk2Max;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Perk2Values;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Protect;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_9;                                           // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_10;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_164;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_206;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_217;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_262;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_519;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_753;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_849;                                         // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkRarityView_C*                      NewPerkMaxRarity;                                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkRarityView_C*                      NewPerkMinRarity;                                  // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkRarityView_C*                      PerkRarityView;                                    // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Slot1;                                          // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Slot2;                                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Slot3;                                          // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SB_Slot4;                                          // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_AbilityName;                                   // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Desc1;                                         // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Desc2;                                         // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_MinValue_2;                                    // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_MinValue_3;                                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Perk1Max;                                      // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Perk1Min;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Perk2Max;                                      // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Perk2Min;                                      // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Value1;                                        // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Value2;                                        // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Background;                                     // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_BdrPerkView;                                    // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Change;                                         // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Protect;                                        // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_SizeChanger;                                    // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBCharacterWeaponPerkData             SBCharacter_Weapon_Perk_Data;                      // 0x0470(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_680E[0x4];                                     // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnProtectClicked;                                  // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsProtected;                                      // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsEmpty;                                          // 0x04A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnProtectClicked__DelegateSignature();
	void ExecuteUbergraph_WeaponCustomPerkSlotItem(int32 EntryPoint);
	void BndEvt__WeaponCustomPerkSlotItem_Btn_Protect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ApplyData();
	void SetWeaponData(const struct FSBCharacterWeaponPerkData& Param_SBCharacter_Weapon_Perk_Data);
	void SetProtectButtonVisible(bool bVisible);
	void SetItemData(const int32 Param_Index);
	void SetEmpty();
	void UpdateSlotHeight(int32 Param_Index);
	void UpdateProtectBtn();
	void SetNewPerkVisible(bool bVisible);
	void SetChangeData(bool bChangeData);
	void ActivateCraftResult(bool bActive);

	void IsProtected(bool* Param_IsProtected) const;
	void GetData(struct FSBCharacterWeaponPerkData* Data) const;
	void IsEmpty(bool* Param_bIsEmpty) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponCustomPerkSlotItem_C">();
	}
	static class UWeaponCustomPerkSlotItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponCustomPerkSlotItem_C>();
	}
};
static_assert(alignof(UWeaponCustomPerkSlotItem_C) == 0x000008, "Wrong alignment on UWeaponCustomPerkSlotItem_C");
static_assert(sizeof(UWeaponCustomPerkSlotItem_C) == 0x0004A8, "Wrong size on UWeaponCustomPerkSlotItem_C");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, UberGraphFrame) == 0x000278, "Member 'UWeaponCustomPerkSlotItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, AnimInArrow) == 0x000280, "Member 'UWeaponCustomPerkSlotItem_C::AnimInArrow' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Bdr_NewPerk) == 0x000288, "Member 'UWeaponCustomPerkSlotItem_C::Bdr_NewPerk' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Btn_Protect) == 0x000290, "Member 'UWeaponCustomPerkSlotItem_C::Btn_Protect' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, CommonIcon) == 0x000298, "Member 'UWeaponCustomPerkSlotItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_) == 0x0002A0, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_Change) == 0x0002A8, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_Change' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_ChangeLock) == 0x0002B0, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_ChangeLock' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_CraftResult) == 0x0002B8, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_CraftResult' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_Default) == 0x0002C0, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_Default' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_Down) == 0x0002C8, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_Down' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_Keep) == 0x0002D0, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_Keep' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_NoChange) == 0x0002D8, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_NoChange' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_None) == 0x0002E0, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_None' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_PerkValue2) == 0x0002E8, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_PerkValue2' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_ResultRemove) == 0x0002F0, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_ResultRemove' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_Selected) == 0x0002F8, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_Selected' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_StrageIcon) == 0x000300, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_StrageIcon' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Cvs_Up) == 0x000308, "Member 'UWeaponCustomPerkSlotItem_C::Cvs_Up' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, HB_DontProtect) == 0x000310, "Member 'UWeaponCustomPerkSlotItem_C::HB_DontProtect' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, HB_Perk1Max) == 0x000318, "Member 'UWeaponCustomPerkSlotItem_C::HB_Perk1Max' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, HB_Perk2Max) == 0x000320, "Member 'UWeaponCustomPerkSlotItem_C::HB_Perk2Max' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, HB_Perk2Values) == 0x000328, "Member 'UWeaponCustomPerkSlotItem_C::HB_Perk2Values' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, HB_Protect) == 0x000330, "Member 'UWeaponCustomPerkSlotItem_C::HB_Protect' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_2) == 0x000338, "Member 'UWeaponCustomPerkSlotItem_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_3) == 0x000340, "Member 'UWeaponCustomPerkSlotItem_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_4) == 0x000348, "Member 'UWeaponCustomPerkSlotItem_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_5) == 0x000350, "Member 'UWeaponCustomPerkSlotItem_C::Image_5' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_6) == 0x000358, "Member 'UWeaponCustomPerkSlotItem_C::Image_6' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_7) == 0x000360, "Member 'UWeaponCustomPerkSlotItem_C::Image_7' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_8) == 0x000368, "Member 'UWeaponCustomPerkSlotItem_C::Image_8' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_9) == 0x000370, "Member 'UWeaponCustomPerkSlotItem_C::Image_9' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_10) == 0x000378, "Member 'UWeaponCustomPerkSlotItem_C::Image_10' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_164) == 0x000380, "Member 'UWeaponCustomPerkSlotItem_C::Image_164' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_206) == 0x000388, "Member 'UWeaponCustomPerkSlotItem_C::Image_206' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_217) == 0x000390, "Member 'UWeaponCustomPerkSlotItem_C::Image_217' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_262) == 0x000398, "Member 'UWeaponCustomPerkSlotItem_C::Image_262' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_519) == 0x0003A0, "Member 'UWeaponCustomPerkSlotItem_C::Image_519' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_753) == 0x0003A8, "Member 'UWeaponCustomPerkSlotItem_C::Image_753' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Image_849) == 0x0003B0, "Member 'UWeaponCustomPerkSlotItem_C::Image_849' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, NewPerkMaxRarity) == 0x0003B8, "Member 'UWeaponCustomPerkSlotItem_C::NewPerkMaxRarity' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, NewPerkMinRarity) == 0x0003C0, "Member 'UWeaponCustomPerkSlotItem_C::NewPerkMinRarity' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, PerkRarityView) == 0x0003C8, "Member 'UWeaponCustomPerkSlotItem_C::PerkRarityView' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, SB_Slot1) == 0x0003D0, "Member 'UWeaponCustomPerkSlotItem_C::SB_Slot1' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, SB_Slot2) == 0x0003D8, "Member 'UWeaponCustomPerkSlotItem_C::SB_Slot2' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, SB_Slot3) == 0x0003E0, "Member 'UWeaponCustomPerkSlotItem_C::SB_Slot3' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, SB_Slot4) == 0x0003E8, "Member 'UWeaponCustomPerkSlotItem_C::SB_Slot4' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Txt_AbilityName) == 0x0003F0, "Member 'UWeaponCustomPerkSlotItem_C::Txt_AbilityName' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Txt_Desc1) == 0x0003F8, "Member 'UWeaponCustomPerkSlotItem_C::Txt_Desc1' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Txt_Desc2) == 0x000400, "Member 'UWeaponCustomPerkSlotItem_C::Txt_Desc2' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Txt_MinValue_2) == 0x000408, "Member 'UWeaponCustomPerkSlotItem_C::Txt_MinValue_2' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Txt_MinValue_3) == 0x000410, "Member 'UWeaponCustomPerkSlotItem_C::Txt_MinValue_3' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Txt_Perk1Max) == 0x000418, "Member 'UWeaponCustomPerkSlotItem_C::Txt_Perk1Max' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Txt_Perk1Min) == 0x000420, "Member 'UWeaponCustomPerkSlotItem_C::Txt_Perk1Min' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Txt_Perk2Max) == 0x000428, "Member 'UWeaponCustomPerkSlotItem_C::Txt_Perk2Max' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Txt_Perk2Min) == 0x000430, "Member 'UWeaponCustomPerkSlotItem_C::Txt_Perk2Min' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Txt_Value1) == 0x000438, "Member 'UWeaponCustomPerkSlotItem_C::Txt_Value1' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, Txt_Value2) == 0x000440, "Member 'UWeaponCustomPerkSlotItem_C::Txt_Value2' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, WS_Background) == 0x000448, "Member 'UWeaponCustomPerkSlotItem_C::WS_Background' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, WS_BdrPerkView) == 0x000450, "Member 'UWeaponCustomPerkSlotItem_C::WS_BdrPerkView' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, WS_Change) == 0x000458, "Member 'UWeaponCustomPerkSlotItem_C::WS_Change' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, WS_Protect) == 0x000460, "Member 'UWeaponCustomPerkSlotItem_C::WS_Protect' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, WS_SizeChanger) == 0x000468, "Member 'UWeaponCustomPerkSlotItem_C::WS_SizeChanger' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, SBCharacter_Weapon_Perk_Data) == 0x000470, "Member 'UWeaponCustomPerkSlotItem_C::SBCharacter_Weapon_Perk_Data' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, OnProtectClicked) == 0x000490, "Member 'UWeaponCustomPerkSlotItem_C::OnProtectClicked' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, bIsProtected) == 0x0004A0, "Member 'UWeaponCustomPerkSlotItem_C::bIsProtected' has a wrong offset!");
static_assert(offsetof(UWeaponCustomPerkSlotItem_C, bIsEmpty) == 0x0004A1, "Member 'UWeaponCustomPerkSlotItem_C::bIsEmpty' has a wrong offset!");

}

