#pragma once

 

// Package: WeaponInfoForBattleSetTop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C
// 0x0088 (0x0300 - 0x0278)
class UWeaponInfoForBattleSetTop_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             AttackValueTxt;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAttributeIcon_C*                       AttributeIcon;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             AttributePowerValueTxt;                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LevelHeadingTxt;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelValueTxt;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SPEffectDescTxt;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SPEffectValueTxt;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        StackBIcon;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemIconBtn_C*                         WeaponIcon;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             WeaponNameTxt;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnWeaponSkinIcon_C*                   WeaponSkinIcon;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 WeaponUniqueID;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnWeaponIconClicked;                               // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsStackB;                                         // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnWeaponIconClicked__DelegateSignature();
	void ExecuteUbergraph_WeaponInfoForBattleSetTop(int32 EntryPoint);
	void BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem);
	void Construct();
	void Setup();
	void SetStackBIconByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponInfoForBattleSetTop_C">();
	}
	static class UWeaponInfoForBattleSetTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponInfoForBattleSetTop_C>();
	}
};
static_assert(alignof(UWeaponInfoForBattleSetTop_C) == 0x000008, "Wrong alignment on UWeaponInfoForBattleSetTop_C");
static_assert(sizeof(UWeaponInfoForBattleSetTop_C) == 0x000300, "Wrong size on UWeaponInfoForBattleSetTop_C");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, UberGraphFrame) == 0x000278, "Member 'UWeaponInfoForBattleSetTop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, AttackValueTxt) == 0x000280, "Member 'UWeaponInfoForBattleSetTop_C::AttackValueTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, AttributeIcon) == 0x000288, "Member 'UWeaponInfoForBattleSetTop_C::AttributeIcon' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, AttributePowerValueTxt) == 0x000290, "Member 'UWeaponInfoForBattleSetTop_C::AttributePowerValueTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, LevelHeadingTxt) == 0x000298, "Member 'UWeaponInfoForBattleSetTop_C::LevelHeadingTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, LevelValueTxt) == 0x0002A0, "Member 'UWeaponInfoForBattleSetTop_C::LevelValueTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, SPEffectDescTxt) == 0x0002A8, "Member 'UWeaponInfoForBattleSetTop_C::SPEffectDescTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, SPEffectValueTxt) == 0x0002B0, "Member 'UWeaponInfoForBattleSetTop_C::SPEffectValueTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, StackBIcon) == 0x0002B8, "Member 'UWeaponInfoForBattleSetTop_C::StackBIcon' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, WeaponIcon) == 0x0002C0, "Member 'UWeaponInfoForBattleSetTop_C::WeaponIcon' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, WeaponNameTxt) == 0x0002C8, "Member 'UWeaponInfoForBattleSetTop_C::WeaponNameTxt' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, WeaponSkinIcon) == 0x0002D0, "Member 'UWeaponInfoForBattleSetTop_C::WeaponSkinIcon' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, WeaponUniqueID) == 0x0002D8, "Member 'UWeaponInfoForBattleSetTop_C::WeaponUniqueID' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, OnWeaponIconClicked) == 0x0002E8, "Member 'UWeaponInfoForBattleSetTop_C::OnWeaponIconClicked' has a wrong offset!");
static_assert(offsetof(UWeaponInfoForBattleSetTop_C, bIsStackB) == 0x0002F8, "Member 'UWeaponInfoForBattleSetTop_C::bIsStackB' has a wrong offset!");

}

