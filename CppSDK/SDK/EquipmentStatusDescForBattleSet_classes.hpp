#pragma once

 

// Package: EquipmentStatusDescForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquipmentStatusDescForBattleSet.EquipmentStatusDescForBattleSet_C
// 0x00F0 (0x0368 - 0x0278)
class UEquipmentStatusDescForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BagIcon;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentStatusDescBase_C*       Base;                                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    DefaultMessageTxt;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentBasicStatusParts_C*     EquipmentBasicStatusParts;                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentImagePartsBase_C*       EquipmentImage;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForBagAndStorageIcon;                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLineForImagineRemoveBtn;                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentAbilityInfoDesc_C*      ImagineAbilityDesc;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            ImagineRemoveBtn;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StorageIcon;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForAbilityDesc;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForStatusType;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           UniqueStatusGrp;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBoxForImagineRemoveBtnGrp;                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BattleImagineSkillInfoParts_C*     WBP_BattleImagineSkillInfoParts;                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotList_C*     WeaponAbilityInfoSlotList;                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWeaponAbilityInfoSlotListDetailed_C* WeaponAbilityInfoSlotListDetailed;                 // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherForDesc;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherForUniqueStatus;                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_BattleSetInfoType                           InfoType;                                          // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             EquipType;                                         // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsBaseBgNormalType;                               // 0x031A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsStorageMode;                                    // 0x031B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsEquipmentImage3D;                               // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsEquipmentModelCaptureStudioConstructed;         // 0x031D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsEquipmentModelLoading;                          // 0x031E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45CB[0x1];                                     // 0x031F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EquipmentIdForRegisterModelLoad;                   // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StatusTypeId;                                      // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRequestWeaponModelLoad;                          // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequestBattleImagineModelLoad;                   // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnImagineRemoveBtnPressed;                         // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                              WindowSize;                                        // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bIsEquipInStorage;                                 // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnRequestWeaponModelLoad__DelegateSignature(const struct FInventoryItemData& InWeaponInventoryItemData);
	void OnRequestBattleImagineModelLoad__DelegateSignature(const struct FInventoryItemData& InBattleImagineInventoryItemData);
	void OnImagineRemoveBtnPressed__DelegateSignature();
	void ExecuteUbergraph_EquipmentStatusDescForBattleSet(int32 EntryPoint);
	void BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void UpdateDesc(const class FString& InEquipmentUniqueId);
	void UpdateWeaponDesc(const class FString& InWeaponUniqueId);
	void UpdateImagineDesc(const class FString& InImagineUniqueId);
	void SwitchStatusType(int32 InStatusTypeId);
	void SetUsingEquipmentImage2Dor3D(bool InUse3D);
	void SwitchDescType(bool InIsDescDefault);
	void SetInfoType(E_BattleSetInfoType InInfoType);
	void SetStorageMode(bool InIsForStorage);
	void SetEquipmentModelCaptureImageVisibility(bool InIsVisible);
	void SetDescToDefault(bool InIsDescDefault);
	void SwitchBaseBgType(bool InIsNormalType);
	void SetImagineRemoveBtnVisibility(bool InIsVisible);
	void SetEquipType(ESBCharaEquipType InEquipType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipmentStatusDescForBattleSet_C">();
	}
	static class UEquipmentStatusDescForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquipmentStatusDescForBattleSet_C>();
	}
};
static_assert(alignof(UEquipmentStatusDescForBattleSet_C) == 0x000008, "Wrong alignment on UEquipmentStatusDescForBattleSet_C");
static_assert(sizeof(UEquipmentStatusDescForBattleSet_C) == 0x000368, "Wrong size on UEquipmentStatusDescForBattleSet_C");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'UEquipmentStatusDescForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, BagIcon) == 0x000280, "Member 'UEquipmentStatusDescForBattleSet_C::BagIcon' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, Base) == 0x000288, "Member 'UEquipmentStatusDescForBattleSet_C::Base' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, DefaultMessageTxt) == 0x000290, "Member 'UEquipmentStatusDescForBattleSet_C::DefaultMessageTxt' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, EquipmentBasicStatusParts) == 0x000298, "Member 'UEquipmentStatusDescForBattleSet_C::EquipmentBasicStatusParts' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, EquipmentImage) == 0x0002A0, "Member 'UEquipmentStatusDescForBattleSet_C::EquipmentImage' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, HBoxForBagAndStorageIcon) == 0x0002A8, "Member 'UEquipmentStatusDescForBattleSet_C::HBoxForBagAndStorageIcon' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, HLineForImagineRemoveBtn) == 0x0002B0, "Member 'UEquipmentStatusDescForBattleSet_C::HLineForImagineRemoveBtn' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, ImagineAbilityDesc) == 0x0002B8, "Member 'UEquipmentStatusDescForBattleSet_C::ImagineAbilityDesc' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, ImagineRemoveBtn) == 0x0002C0, "Member 'UEquipmentStatusDescForBattleSet_C::ImagineRemoveBtn' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, StorageIcon) == 0x0002C8, "Member 'UEquipmentStatusDescForBattleSet_C::StorageIcon' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, SwitcherForAbilityDesc) == 0x0002D0, "Member 'UEquipmentStatusDescForBattleSet_C::SwitcherForAbilityDesc' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, SwitcherForStatusType) == 0x0002D8, "Member 'UEquipmentStatusDescForBattleSet_C::SwitcherForStatusType' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, UniqueStatusGrp) == 0x0002E0, "Member 'UEquipmentStatusDescForBattleSet_C::UniqueStatusGrp' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, VBoxForImagineRemoveBtnGrp) == 0x0002E8, "Member 'UEquipmentStatusDescForBattleSet_C::VBoxForImagineRemoveBtnGrp' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, WBP_BattleImagineSkillInfoParts) == 0x0002F0, "Member 'UEquipmentStatusDescForBattleSet_C::WBP_BattleImagineSkillInfoParts' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, WeaponAbilityInfoSlotList) == 0x0002F8, "Member 'UEquipmentStatusDescForBattleSet_C::WeaponAbilityInfoSlotList' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, WeaponAbilityInfoSlotListDetailed) == 0x000300, "Member 'UEquipmentStatusDescForBattleSet_C::WeaponAbilityInfoSlotListDetailed' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, WidgetSwitcherForDesc) == 0x000308, "Member 'UEquipmentStatusDescForBattleSet_C::WidgetSwitcherForDesc' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, WidgetSwitcherForUniqueStatus) == 0x000310, "Member 'UEquipmentStatusDescForBattleSet_C::WidgetSwitcherForUniqueStatus' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, InfoType) == 0x000318, "Member 'UEquipmentStatusDescForBattleSet_C::InfoType' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, EquipType) == 0x000319, "Member 'UEquipmentStatusDescForBattleSet_C::EquipType' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, bIsBaseBgNormalType) == 0x00031A, "Member 'UEquipmentStatusDescForBattleSet_C::bIsBaseBgNormalType' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, bIsStorageMode) == 0x00031B, "Member 'UEquipmentStatusDescForBattleSet_C::bIsStorageMode' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, bIsEquipmentImage3D) == 0x00031C, "Member 'UEquipmentStatusDescForBattleSet_C::bIsEquipmentImage3D' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, bIsEquipmentModelCaptureStudioConstructed) == 0x00031D, "Member 'UEquipmentStatusDescForBattleSet_C::bIsEquipmentModelCaptureStudioConstructed' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, bIsEquipmentModelLoading) == 0x00031E, "Member 'UEquipmentStatusDescForBattleSet_C::bIsEquipmentModelLoading' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, EquipmentIdForRegisterModelLoad) == 0x000320, "Member 'UEquipmentStatusDescForBattleSet_C::EquipmentIdForRegisterModelLoad' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, StatusTypeId) == 0x000324, "Member 'UEquipmentStatusDescForBattleSet_C::StatusTypeId' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, OnRequestWeaponModelLoad) == 0x000328, "Member 'UEquipmentStatusDescForBattleSet_C::OnRequestWeaponModelLoad' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, OnRequestBattleImagineModelLoad) == 0x000338, "Member 'UEquipmentStatusDescForBattleSet_C::OnRequestBattleImagineModelLoad' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, OnImagineRemoveBtnPressed) == 0x000348, "Member 'UEquipmentStatusDescForBattleSet_C::OnImagineRemoveBtnPressed' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, WindowSize) == 0x000358, "Member 'UEquipmentStatusDescForBattleSet_C::WindowSize' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescForBattleSet_C, bIsEquipInStorage) == 0x000360, "Member 'UEquipmentStatusDescForBattleSet_C::bIsEquipInStorage' has a wrong offset!");

}

