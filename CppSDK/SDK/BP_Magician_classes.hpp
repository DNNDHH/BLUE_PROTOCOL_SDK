#pragma once

 

// Package: BP_Magician

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlayerCharacter_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Magician.BP_Magician_C
// 0x0030 (0x4270 - 0x4240)
class ABP_Magician_C final : public ABP_PlayerCharacter_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Magician_C;                      // 0x4240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBPCMagicianComponent*                 SBPCMagician;                                      // 0x4248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_P011HUDComponent_C*                 BP_WizardHUDComponent;                             // 0x4250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerAimHUDComponent_C*            BP_PlayerAimHUDComponent;                          // 0x4258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonBattleHudComponent_C*            CommonBattleHudComponent;                          // 0x4260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Magician(int32 EntryPoint);
	void CreateClassHUD();
	void OnHitForPlayerReticle(float Damage, bool bWeakHit);
	void Sheathe();
	void UnSheathe(ESBWeaponEquipType EquipType);
	void OnRayHitForPlayerReticle(bool bHit, bool bProperDistance);
	void CreateHUD();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Magician_C">();
	}
	static class ABP_Magician_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Magician_C>();
	}
};
static_assert(alignof(ABP_Magician_C) == 0x000010, "Wrong alignment on ABP_Magician_C");
static_assert(sizeof(ABP_Magician_C) == 0x004270, "Wrong size on ABP_Magician_C");
static_assert(offsetof(ABP_Magician_C, UberGraphFrame_BP_Magician_C) == 0x004240, "Member 'ABP_Magician_C::UberGraphFrame_BP_Magician_C' has a wrong offset!");
static_assert(offsetof(ABP_Magician_C, SBPCMagician) == 0x004248, "Member 'ABP_Magician_C::SBPCMagician' has a wrong offset!");
static_assert(offsetof(ABP_Magician_C, BP_WizardHUDComponent) == 0x004250, "Member 'ABP_Magician_C::BP_WizardHUDComponent' has a wrong offset!");
static_assert(offsetof(ABP_Magician_C, BP_PlayerAimHUDComponent) == 0x004258, "Member 'ABP_Magician_C::BP_PlayerAimHUDComponent' has a wrong offset!");
static_assert(offsetof(ABP_Magician_C, CommonBattleHudComponent) == 0x004260, "Member 'ABP_Magician_C::CommonBattleHudComponent' has a wrong offset!");

}

