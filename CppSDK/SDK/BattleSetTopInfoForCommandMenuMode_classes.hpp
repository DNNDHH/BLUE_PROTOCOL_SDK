#pragma once

 

// Package: BattleSetTopInfoForCommandMenuMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleSetTopInfoForCommandMenuMode.BattleSetTopInfoForCommandMenuMode_C
// 0x0078 (0x02F0 - 0x0278)
class UBattleSetTopInfoForCommandMenuMode_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UClassAbilityInfoForBattleSetTop_C*     ClassAbilityInfo;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPassiveImagineInfoForBattleSetTop_C*   InnerImagineInfo;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoForBattleSetTop_C*            SkillInfo;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponInfoForBattleSetTop_C*           WeaponInfo;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTopInfoWeaponIconClicked;                        // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTopInfoTacticalSkillIconPressed;                 // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTopInfoBattleImagineIconPressed;                 // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTopInfoClassAbilityIconPressed;                  // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTopInfoInnerImagineIconPressed;                  // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnTopInfoWeaponIconClicked__DelegateSignature();
	void OnTopInfoTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel);
	void OnTopInfoBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
	void OnTopInfoClassAbilityIconPressed__DelegateSignature(int32 InSkillSlotId, int32 InSkillId);
	void OnTopInfoInnerImagineIconPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId);
	void ExecuteUbergraph_BattleSetTopInfoForCommandMenuMode(int32 EntryPoint);
	void BndEvt__BattleSetTopInfoBase_InnerImagineInfoForBattleSetTop_K2Node_ComponentBoundEvent_9_OnIconBtnPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId);
	void BndEvt__BattleSetTopInfoBase_ClassAbilityInfoForBattleSetTop_K2Node_ComponentBoundEvent_8_OnClassAbilityIconClicked__DelegateSignature(int32 InSkillSlotId, int32 InSkillId);
	void BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_7_OnBattleImagineIconPresssed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
	void BndEvt__BattleSetTopInfoBase_SkillInfoForBattleSetTop_K2Node_ComponentBoundEvent_6_OnTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel);
	void BndEvt__BattleSetTopInfoBase_WeaponInfoForBattleSetTop_K2Node_ComponentBoundEvent_5_OnWeaponIconClicked__DelegateSignature();
	void SetupWeaponInfo();
	void SetupAllSkillInfo();
	void SetupBattleImagineInfo();
	void SetupTacticalSkillInfo();
	void SetupClassAbilityInfo();
	void SetupInnerImagineInfo();
	void ResetSkillInfoSubPalette(bool bInIsSubPaletteReleased);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleSetTopInfoForCommandMenuMode_C">();
	}
	static class UBattleSetTopInfoForCommandMenuMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleSetTopInfoForCommandMenuMode_C>();
	}
};
static_assert(alignof(UBattleSetTopInfoForCommandMenuMode_C) == 0x000008, "Wrong alignment on UBattleSetTopInfoForCommandMenuMode_C");
static_assert(sizeof(UBattleSetTopInfoForCommandMenuMode_C) == 0x0002F0, "Wrong size on UBattleSetTopInfoForCommandMenuMode_C");
static_assert(offsetof(UBattleSetTopInfoForCommandMenuMode_C, UberGraphFrame) == 0x000278, "Member 'UBattleSetTopInfoForCommandMenuMode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoForCommandMenuMode_C, ClassAbilityInfo) == 0x000280, "Member 'UBattleSetTopInfoForCommandMenuMode_C::ClassAbilityInfo' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoForCommandMenuMode_C, InnerImagineInfo) == 0x000288, "Member 'UBattleSetTopInfoForCommandMenuMode_C::InnerImagineInfo' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoForCommandMenuMode_C, SkillInfo) == 0x000290, "Member 'UBattleSetTopInfoForCommandMenuMode_C::SkillInfo' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoForCommandMenuMode_C, WeaponInfo) == 0x000298, "Member 'UBattleSetTopInfoForCommandMenuMode_C::WeaponInfo' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoForCommandMenuMode_C, OnTopInfoWeaponIconClicked) == 0x0002A0, "Member 'UBattleSetTopInfoForCommandMenuMode_C::OnTopInfoWeaponIconClicked' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoForCommandMenuMode_C, OnTopInfoTacticalSkillIconPressed) == 0x0002B0, "Member 'UBattleSetTopInfoForCommandMenuMode_C::OnTopInfoTacticalSkillIconPressed' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoForCommandMenuMode_C, OnTopInfoBattleImagineIconPressed) == 0x0002C0, "Member 'UBattleSetTopInfoForCommandMenuMode_C::OnTopInfoBattleImagineIconPressed' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoForCommandMenuMode_C, OnTopInfoClassAbilityIconPressed) == 0x0002D0, "Member 'UBattleSetTopInfoForCommandMenuMode_C::OnTopInfoClassAbilityIconPressed' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoForCommandMenuMode_C, OnTopInfoInnerImagineIconPressed) == 0x0002E0, "Member 'UBattleSetTopInfoForCommandMenuMode_C::OnTopInfoInnerImagineIconPressed' has a wrong offset!");

}

