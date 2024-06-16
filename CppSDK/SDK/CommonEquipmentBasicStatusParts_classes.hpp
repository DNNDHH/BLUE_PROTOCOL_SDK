#pragma once

 

// Package: CommonEquipmentBasicStatusParts

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonEquipmentBasicStatusParts.CommonEquipmentBasicStatusParts_C
// 0x0290 (0x0508 - 0x0278)
class UCommonEquipmentBasicStatusParts_C final : public UUserWidget
{
public:
	class UTextBlock*                             AttackValueTxt;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           AttributeGrp;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    AttributeHeadingTxt;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    AttributeHeadingTxt_1;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttributePowerValueTxt;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Body;                                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CPOrDefenseHeadingTxt;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CPOrDefenseUnitOfValue;                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CPOrDefenseValueTxt;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForUseLimit;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForWeaponSkinIconAndTags;                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine01;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine02;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine03;                                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine04;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine05;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ImagineAbilityDescTxt;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ImagineAbilityHeadingTxt;                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LevelHeadingTxt;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LevelTitleTxt;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelValueTxt;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LvSyncImage;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_AttributePower;                            // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_AttributePowerValue;                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SPEffectDescTxt;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SPEffectHeadingTxt;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SPEffectValueTxt;                                  // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       StatusItemForDEX;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       StatusItemForINT;                                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       StatusItemForMND;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       StatusItemForSTR;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGenericStatusItemForBattleSet_C*       StatusItemForVIT;                                  // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForWeaponSPEffectAndImagineAbility;        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        TagNotForBPP;                                      // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        TagNotForSale;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        TagNotForStackB;                                   // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryUsed_C*                       TagUsed;                                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   UseLimitDateTimeTxt;                               // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    UseLimitHeadingTxt;                                // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnWeaponSkinIcon_C*                   WeaponSkinIcon;                                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x03C0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsForStorage;                                     // 0x04D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsLevelSync;                                      // 0x04D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8116[0x6];                                     // 0x04DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            DefaultTextColor;                                  // 0x04E0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SetupByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, bool InIsForStorage);
	void SetupWeaponStatusByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, bool InIsForStorage);
	void SetupImagineStatusByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, bool InIsForStorage);
	void SetupByMasterData(int32 InEquipmentId, EItemType InEquipmentItemType, bool bInitTagsByMaster);
	void SetupWeaponStatusByMasterData(int32 InWeaponID, bool bInitTagsByMaster);
	void SetupImagineStatusByMasterData(int32 InImagineId, bool bInitTagsByMaster);
	void AdjustToWeaponStatusMode();
	void AdjustToImagineStatusMode();
	void SetLevelAndExpLevelSync(const struct FOwnItemInfo& InOwnItemInfo);
	void SetupWeaponStatusByRecepiId(int32 RecepiId);
	void SetupImagineStatusByRecepiId(int32 RecepiId);
	void SetupByRecepiId(int32 ID, EItemType Type);
	void SetLevelSync(bool Param_bIsLevelSync);
	void Set_SPEffect_Text_Color(const struct FSlateColor& InColorAndOpacity);
	void SetIntToText(class UTextBlock* Target, int32 Value, bool UseGrouping);
	void HideBasicTagInfos();
	void SetSPEffectTextAsRecipi(int32 InRecipiId);
	void UpdateLimitRecepiByWeapon(const struct FCraftMasterData& MasterData);
	void UpdateLimitRecepiByImagine(const struct FMasterImagineRecepi& MasterData);
	void UpdateLimitInfoByWeaponId(int32 RecipiId);
	void UpdateLimitInfoByImagineId(int32 RecipiId);
	void SetPrevInfo(const struct FOwnItemInfo& Prev);
	void SetUpWeaponSkinIconAndTagsByImagineMaster(const struct FSBMasterImagine& LocalImagineMaster);
	void SetUpWeaponSkinIconAndTagsByWeaponMaster(const struct FSBWeaponMasterData& LocalWeaponMaster);
	void ShowBasicTagInfos();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonEquipmentBasicStatusParts_C">();
	}
	static class UCommonEquipmentBasicStatusParts_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonEquipmentBasicStatusParts_C>();
	}
};
static_assert(alignof(UCommonEquipmentBasicStatusParts_C) == 0x000008, "Wrong alignment on UCommonEquipmentBasicStatusParts_C");
static_assert(sizeof(UCommonEquipmentBasicStatusParts_C) == 0x000508, "Wrong size on UCommonEquipmentBasicStatusParts_C");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, AttackValueTxt) == 0x000278, "Member 'UCommonEquipmentBasicStatusParts_C::AttackValueTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, AttributeGrp) == 0x000280, "Member 'UCommonEquipmentBasicStatusParts_C::AttributeGrp' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, AttributeHeadingTxt) == 0x000288, "Member 'UCommonEquipmentBasicStatusParts_C::AttributeHeadingTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, AttributeHeadingTxt_1) == 0x000290, "Member 'UCommonEquipmentBasicStatusParts_C::AttributeHeadingTxt_1' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, AttributeIcon) == 0x000298, "Member 'UCommonEquipmentBasicStatusParts_C::AttributeIcon' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, AttributePowerValueTxt) == 0x0002A0, "Member 'UCommonEquipmentBasicStatusParts_C::AttributePowerValueTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, Body) == 0x0002A8, "Member 'UCommonEquipmentBasicStatusParts_C::Body' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, CPOrDefenseHeadingTxt) == 0x0002B0, "Member 'UCommonEquipmentBasicStatusParts_C::CPOrDefenseHeadingTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, CPOrDefenseUnitOfValue) == 0x0002B8, "Member 'UCommonEquipmentBasicStatusParts_C::CPOrDefenseUnitOfValue' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, CPOrDefenseValueTxt) == 0x0002C0, "Member 'UCommonEquipmentBasicStatusParts_C::CPOrDefenseValueTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, HBoxForUseLimit) == 0x0002C8, "Member 'UCommonEquipmentBasicStatusParts_C::HBoxForUseLimit' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, HBoxForWeaponSkinIconAndTags) == 0x0002D0, "Member 'UCommonEquipmentBasicStatusParts_C::HBoxForWeaponSkinIconAndTags' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, HLine01) == 0x0002D8, "Member 'UCommonEquipmentBasicStatusParts_C::HLine01' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, HLine02) == 0x0002E0, "Member 'UCommonEquipmentBasicStatusParts_C::HLine02' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, HLine03) == 0x0002E8, "Member 'UCommonEquipmentBasicStatusParts_C::HLine03' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, HLine04) == 0x0002F0, "Member 'UCommonEquipmentBasicStatusParts_C::HLine04' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, HLine05) == 0x0002F8, "Member 'UCommonEquipmentBasicStatusParts_C::HLine05' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, ImagineAbilityDescTxt) == 0x000300, "Member 'UCommonEquipmentBasicStatusParts_C::ImagineAbilityDescTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, ImagineAbilityHeadingTxt) == 0x000308, "Member 'UCommonEquipmentBasicStatusParts_C::ImagineAbilityHeadingTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, LevelHeadingTxt) == 0x000310, "Member 'UCommonEquipmentBasicStatusParts_C::LevelHeadingTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, LevelTitleTxt) == 0x000318, "Member 'UCommonEquipmentBasicStatusParts_C::LevelTitleTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, LevelValueTxt) == 0x000320, "Member 'UCommonEquipmentBasicStatusParts_C::LevelValueTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, LvSyncImage) == 0x000328, "Member 'UCommonEquipmentBasicStatusParts_C::LvSyncImage' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, SizeBox_AttributePower) == 0x000330, "Member 'UCommonEquipmentBasicStatusParts_C::SizeBox_AttributePower' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, SizeBox_AttributePowerValue) == 0x000338, "Member 'UCommonEquipmentBasicStatusParts_C::SizeBox_AttributePowerValue' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, SPEffectDescTxt) == 0x000340, "Member 'UCommonEquipmentBasicStatusParts_C::SPEffectDescTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, SPEffectHeadingTxt) == 0x000348, "Member 'UCommonEquipmentBasicStatusParts_C::SPEffectHeadingTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, SPEffectValueTxt) == 0x000350, "Member 'UCommonEquipmentBasicStatusParts_C::SPEffectValueTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, StatusItemForDEX) == 0x000358, "Member 'UCommonEquipmentBasicStatusParts_C::StatusItemForDEX' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, StatusItemForINT) == 0x000360, "Member 'UCommonEquipmentBasicStatusParts_C::StatusItemForINT' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, StatusItemForMND) == 0x000368, "Member 'UCommonEquipmentBasicStatusParts_C::StatusItemForMND' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, StatusItemForSTR) == 0x000370, "Member 'UCommonEquipmentBasicStatusParts_C::StatusItemForSTR' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, StatusItemForVIT) == 0x000378, "Member 'UCommonEquipmentBasicStatusParts_C::StatusItemForVIT' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, SwitcherForWeaponSPEffectAndImagineAbility) == 0x000380, "Member 'UCommonEquipmentBasicStatusParts_C::SwitcherForWeaponSPEffectAndImagineAbility' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, TagNotForBPP) == 0x000388, "Member 'UCommonEquipmentBasicStatusParts_C::TagNotForBPP' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, TagNotForSale) == 0x000390, "Member 'UCommonEquipmentBasicStatusParts_C::TagNotForSale' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, TagNotForStackB) == 0x000398, "Member 'UCommonEquipmentBasicStatusParts_C::TagNotForStackB' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, TagUsed) == 0x0003A0, "Member 'UCommonEquipmentBasicStatusParts_C::TagUsed' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, UseLimitDateTimeTxt) == 0x0003A8, "Member 'UCommonEquipmentBasicStatusParts_C::UseLimitDateTimeTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, UseLimitHeadingTxt) == 0x0003B0, "Member 'UCommonEquipmentBasicStatusParts_C::UseLimitHeadingTxt' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, WeaponSkinIcon) == 0x0003B8, "Member 'UCommonEquipmentBasicStatusParts_C::WeaponSkinIcon' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, OwnItemInfo) == 0x0003C0, "Member 'UCommonEquipmentBasicStatusParts_C::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, bIsForStorage) == 0x0004D8, "Member 'UCommonEquipmentBasicStatusParts_C::bIsForStorage' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, bIsLevelSync) == 0x0004D9, "Member 'UCommonEquipmentBasicStatusParts_C::bIsLevelSync' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentBasicStatusParts_C, DefaultTextColor) == 0x0004E0, "Member 'UCommonEquipmentBasicStatusParts_C::DefaultTextColor' has a wrong offset!");

}

