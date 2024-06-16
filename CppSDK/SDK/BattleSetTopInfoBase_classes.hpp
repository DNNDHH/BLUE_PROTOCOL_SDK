#pragma once

 

// Package: BattleSetTopInfoBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleSetTopInfoBase.BattleSetTopInfoBase_C
// 0x0078 (0x02F0 - 0x0278)
class UBattleSetTopInfoBase_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTopInfoWeaponIconPressed;                        // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTopInfoTacticalSkillIconPressed;                 // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTopInfoBattleImagineIconPressed;                 // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTopInfoClassAbilityIconPressed;                  // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTopInfoInnerImagineIconPressed;                  // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UBattleSetTopInfoForCommandMenuMode_C*  TopInfoForCommandMenuMode;                         // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattleSetTopInfoForStorageMode_C*      TopInfoForStorageMode;                             // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsStorageMode;                                    // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnTopInfoWeaponIconPressed__DelegateSignature();
	void OnTopInfoTacticalSkillIconPressed__DelegateSignature(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel);
	void OnTopInfoBattleImagineIconPressed__DelegateSignature(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
	void OnTopInfoClassAbilityIconPressed__DelegateSignature(int32 InSkillSlotId, int32 InSkillId);
	void OnTopInfoInnerImagineIconPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId);
	void ExecuteUbergraph_BattleSetTopInfoBase(int32 EntryPoint);
	void Destruct();
	void OnInnerImagineIconPressed(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId);
	void OnClassAbilityIconPressed(int32 InSkillSlotId, int32 InSkillId);
	void OnBattleImagineIconPressed(ESkillActionPosition InBattleImagineSAP, const class FString& InBattleImagineUniqueId);
	void OnTacticalSkillIconPressed(ESkillActionPosition InTacticalSkillSAP, int32 InSkillId, int32 InSkillLevel);
	void OnWeaponIconPressed();
	void Construct();
	void SetupInfo(bool Param_bIsStorageMode);
	void SetupWeaponInfo();
	void SetupAllSkillInfo();
	void SetupBattleImagineInfo();
	void SetupTacticalSkillInfo();
	void SetupClassAbilityInfo();
	void SetupInnerImagineInfo();
	void SetupBattleCordeInfo(int32 InCordeId, bool InSetupByCurrentEquip, bool InIsStorageMode);
	void GetIsWeaponLost(bool* OutIsWeaponLost);
	void UnbindChildEvents();
	void ResetSkillInfoSubPalette(bool bInIsSubPaletteReleased);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleSetTopInfoBase_C">();
	}
	static class UBattleSetTopInfoBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleSetTopInfoBase_C>();
	}
};
static_assert(alignof(UBattleSetTopInfoBase_C) == 0x000008, "Wrong alignment on UBattleSetTopInfoBase_C");
static_assert(sizeof(UBattleSetTopInfoBase_C) == 0x0002F0, "Wrong size on UBattleSetTopInfoBase_C");
static_assert(offsetof(UBattleSetTopInfoBase_C, UberGraphFrame) == 0x000278, "Member 'UBattleSetTopInfoBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoBase_C, CanvasPanel_0) == 0x000280, "Member 'UBattleSetTopInfoBase_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoBase_C, OnTopInfoWeaponIconPressed) == 0x000288, "Member 'UBattleSetTopInfoBase_C::OnTopInfoWeaponIconPressed' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoBase_C, OnTopInfoTacticalSkillIconPressed) == 0x000298, "Member 'UBattleSetTopInfoBase_C::OnTopInfoTacticalSkillIconPressed' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoBase_C, OnTopInfoBattleImagineIconPressed) == 0x0002A8, "Member 'UBattleSetTopInfoBase_C::OnTopInfoBattleImagineIconPressed' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoBase_C, OnTopInfoClassAbilityIconPressed) == 0x0002B8, "Member 'UBattleSetTopInfoBase_C::OnTopInfoClassAbilityIconPressed' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoBase_C, OnTopInfoInnerImagineIconPressed) == 0x0002C8, "Member 'UBattleSetTopInfoBase_C::OnTopInfoInnerImagineIconPressed' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoBase_C, TopInfoForCommandMenuMode) == 0x0002D8, "Member 'UBattleSetTopInfoBase_C::TopInfoForCommandMenuMode' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoBase_C, TopInfoForStorageMode) == 0x0002E0, "Member 'UBattleSetTopInfoBase_C::TopInfoForStorageMode' has a wrong offset!");
static_assert(offsetof(UBattleSetTopInfoBase_C, bIsStorageMode) == 0x0002E8, "Member 'UBattleSetTopInfoBase_C::bIsStorageMode' has a wrong offset!");

}

