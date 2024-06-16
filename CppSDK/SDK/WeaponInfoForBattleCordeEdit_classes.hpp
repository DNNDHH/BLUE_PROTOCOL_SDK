#pragma once

 

// Package: WeaponInfoForBattleCordeEdit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "ST_ToolTipInfo_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponInfoForBattleCordeEdit.WeaponInfoForBattleCordeEdit_C
// 0x01E0 (0x0458 - 0x0278)
class UWeaponInfoForBattleCordeEdit_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnAlertIcon_C*                        AlertIcon;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttackValueTxt;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttributePowerValueTxt;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg01;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnForPadCursorMove;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Level;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LevelHeadingTxt;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelValueTxt;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SPEffectDescTxt;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SPEffectValueTxt;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        StackBIcon;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          WeaponIcon;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WeaponNameTxt;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnWeaponSkinIcon_C*                   WeaponSkinIcon;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         WeaponID;                                          // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_824F[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 WeaponUniqueID;                                    // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsStorageMode;                                    // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsWeaponLost;                                     // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8250[0x6];                                     // 0x0312(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     In_Item_Data;                                      // 0x0318(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsStackB;                                         // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8251[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        ToolTipInfo;                                       // 0x0380(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UCommonIconToolTip_C*                   CachedToolTipWidget;                               // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTooltipEnable;                                    // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8252[0x7];                                     // 0x0401(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      ToolTipWeaponData;                                 // 0x0408(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_WeaponInfoForBattleCordeEdit(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Setup(int32 InWeaponID, const class FString& InWeaponUniqueId, bool InSetupByCurrEquip, ESBClassType InClassType);
	void SetAlertIconVisibility(bool InIsVisible, bool InIsLost);
	void SetStorageMode(bool InIsStorageMode);
	void GetIsWeaponLost(bool* OutIsLost);
	void SetStackBIconByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo);
	void CreateToolTipWidgetifNeeded(class UCommonIconToolTip_C** OutWidget);
	class UWidget* Get_BtnForPadCursorMove_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponInfoForBattleCordeEdit_C">();
	}
	static class UWeaponInfoForBattleCordeEdit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponInfoForBattleCordeEdit_C>();
	}
};
static_assert(alignof(UWeaponInfoForBattleCordeEdit_C) == 0x000008, "Wrong alignment on UWeaponInfoForBattleCordeEdit_C");
static_assert(sizeof(UWeaponInfoForBattleCordeEdit_C) == 0x000458, "Wrong size on UWeaponInfoForBattleCordeEdit_C");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, UberGraphFrame) == 0x000278, "Member 'UWeaponInfoForBattleCordeEdit_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, AlertIcon) == 0x000280, "Member 'UWeaponInfoForBattleCordeEdit_C::AlertIcon' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, AttackValueTxt) == 0x000288, "Member 'UWeaponInfoForBattleCordeEdit_C::AttackValueTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, AttributeIcon) == 0x000290, "Member 'UWeaponInfoForBattleCordeEdit_C::AttributeIcon' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, AttributePowerValueTxt) == 0x000298, "Member 'UWeaponInfoForBattleCordeEdit_C::AttributePowerValueTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, Bg01) == 0x0002A0, "Member 'UWeaponInfoForBattleCordeEdit_C::Bg01' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, BtnForPadCursorMove) == 0x0002A8, "Member 'UWeaponInfoForBattleCordeEdit_C::BtnForPadCursorMove' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, HorizontalBox_Level) == 0x0002B0, "Member 'UWeaponInfoForBattleCordeEdit_C::HorizontalBox_Level' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, LevelHeadingTxt) == 0x0002B8, "Member 'UWeaponInfoForBattleCordeEdit_C::LevelHeadingTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, LevelValueTxt) == 0x0002C0, "Member 'UWeaponInfoForBattleCordeEdit_C::LevelValueTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, SPEffectDescTxt) == 0x0002C8, "Member 'UWeaponInfoForBattleCordeEdit_C::SPEffectDescTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, SPEffectValueTxt) == 0x0002D0, "Member 'UWeaponInfoForBattleCordeEdit_C::SPEffectValueTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, StackBIcon) == 0x0002D8, "Member 'UWeaponInfoForBattleCordeEdit_C::StackBIcon' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, WeaponIcon) == 0x0002E0, "Member 'UWeaponInfoForBattleCordeEdit_C::WeaponIcon' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, WeaponNameTxt) == 0x0002E8, "Member 'UWeaponInfoForBattleCordeEdit_C::WeaponNameTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, WeaponSkinIcon) == 0x0002F0, "Member 'UWeaponInfoForBattleCordeEdit_C::WeaponSkinIcon' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, WeaponID) == 0x0002F8, "Member 'UWeaponInfoForBattleCordeEdit_C::WeaponID' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, WeaponUniqueID) == 0x000300, "Member 'UWeaponInfoForBattleCordeEdit_C::WeaponUniqueID' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, bIsStorageMode) == 0x000310, "Member 'UWeaponInfoForBattleCordeEdit_C::bIsStorageMode' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, bIsWeaponLost) == 0x000311, "Member 'UWeaponInfoForBattleCordeEdit_C::bIsWeaponLost' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, In_Item_Data) == 0x000318, "Member 'UWeaponInfoForBattleCordeEdit_C::In_Item_Data' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, bIsStackB) == 0x000378, "Member 'UWeaponInfoForBattleCordeEdit_C::bIsStackB' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, ToolTipInfo) == 0x000380, "Member 'UWeaponInfoForBattleCordeEdit_C::ToolTipInfo' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, CachedToolTipWidget) == 0x0003F8, "Member 'UWeaponInfoForBattleCordeEdit_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, bTooltipEnable) == 0x000400, "Member 'UWeaponInfoForBattleCordeEdit_C::bTooltipEnable' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleCordeEdit_C, ToolTipWeaponData) == 0x000408, "Member 'UWeaponInfoForBattleCordeEdit_C::ToolTipWeaponData' has a wrong offset!");

}

