#pragma once

 

// Package: DhcBattleTopWeaponInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C
// 0x01D0 (0x0448 - 0x0278)
class UDhcBattleTopWeaponInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnAlertIcon_C*                        AlertIcon;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttackValueTxt;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttributePowerValueTxt;                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnForPadCursorMove;                               // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LevelHeadingTxt;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelValueTxt;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SPEffectDescTxt;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SPEffectValueTxt;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        StackBIcon;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          WeaponIcon;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WeaponNameTxt;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsWeaponLost;                                     // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62B3[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_Weapon_C*     CachedToolTipWidget;                               // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x02F0(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBDhcBattlePlayerEquipWeaponInfo      EquipWeaponInfo;                                   // 0x0408(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_DhcBattleTopWeaponInfo(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Setup(const struct FSBDhcBattlePlayerEquipWeaponInfo& InEquipWeaponInfo);
	void SetAlertIconVisibility(bool InIsVisible, bool InIsLost);
	void GetIsWeaponLost(bool* OutIsLost);
	void SetStackBIcon(int32 InStackBNum, int32 InStackBMax);
	void CreateToolTipWidgetifNeeded(class UCommonIconToolTipContent_Weapon_C** OutWidget);
	class UWidget* Get_BtnForPadCursorMove_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DhcBattleTopWeaponInfo_C">();
	}
	static class UDhcBattleTopWeaponInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDhcBattleTopWeaponInfo_C>();
	}
};
static_assert(alignof(UDhcBattleTopWeaponInfo_C) == 0x000008, "Wrong alignment on UDhcBattleTopWeaponInfo_C");
static_assert(sizeof(UDhcBattleTopWeaponInfo_C) == 0x000448, "Wrong size on UDhcBattleTopWeaponInfo_C");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, UberGraphFrame) == 0x000278, "Member 'UDhcBattleTopWeaponInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, AlertIcon) == 0x000280, "Member 'UDhcBattleTopWeaponInfo_C::AlertIcon' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, AttackValueTxt) == 0x000288, "Member 'UDhcBattleTopWeaponInfo_C::AttackValueTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, AttributeIcon) == 0x000290, "Member 'UDhcBattleTopWeaponInfo_C::AttributeIcon' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, AttributePowerValueTxt) == 0x000298, "Member 'UDhcBattleTopWeaponInfo_C::AttributePowerValueTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, BtnForPadCursorMove) == 0x0002A0, "Member 'UDhcBattleTopWeaponInfo_C::BtnForPadCursorMove' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, LevelHeadingTxt) == 0x0002A8, "Member 'UDhcBattleTopWeaponInfo_C::LevelHeadingTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, LevelValueTxt) == 0x0002B0, "Member 'UDhcBattleTopWeaponInfo_C::LevelValueTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, SPEffectDescTxt) == 0x0002B8, "Member 'UDhcBattleTopWeaponInfo_C::SPEffectDescTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, SPEffectValueTxt) == 0x0002C0, "Member 'UDhcBattleTopWeaponInfo_C::SPEffectValueTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, StackBIcon) == 0x0002C8, "Member 'UDhcBattleTopWeaponInfo_C::StackBIcon' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, WeaponIcon) == 0x0002D0, "Member 'UDhcBattleTopWeaponInfo_C::WeaponIcon' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, WeaponNameTxt) == 0x0002D8, "Member 'UDhcBattleTopWeaponInfo_C::WeaponNameTxt' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, bIsWeaponLost) == 0x0002E0, "Member 'UDhcBattleTopWeaponInfo_C::bIsWeaponLost' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, CachedToolTipWidget) == 0x0002E8, "Member 'UDhcBattleTopWeaponInfo_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, OwnItemInfo) == 0x0002F0, "Member 'UDhcBattleTopWeaponInfo_C::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(UDhcBattleTopWeaponInfo_C, EquipWeaponInfo) == 0x000408, "Member 'UDhcBattleTopWeaponInfo_C::EquipWeaponInfo' has a wrong offset!");

}

