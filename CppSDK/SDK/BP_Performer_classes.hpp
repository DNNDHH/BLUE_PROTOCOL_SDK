#pragma once

 

// Package: BP_Performer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_PlayerCharacter_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Performer.BP_Performer_C
// 0x0030 (0x4270 - 0x4240)
class ABP_Performer_C final : public ABP_PlayerCharacter_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Performer_C;                     // 0x4240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBPCPerformerComponent*                SBPCPerformer;                                     // 0x4248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerAimHUDComponent_C*            BP_PlayerAimHUDComponent;                          // 0x4250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_P021HUDComponent_C*                 BP_P021HUDComponent;                               // 0x4258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonBattleHudComponent_C*            CommonBattleHudComponent;                          // 0x4260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Performer(int32 EntryPoint);
	void UnSheathe(ESBWeaponEquipType EquipType);
	void Sheathe();
	void OnHitForPlayerReticle(float Damage, bool bWeakHit);
	void OnRayHitForPlayerReticle(bool bHit, bool bProperDistance);
	void CreateClassHUD();
	void CreateHUD();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Performer_C">();
	}
	static class ABP_Performer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Performer_C>();
	}
};
static_assert(alignof(ABP_Performer_C) == 0x000010, "Wrong alignment on ABP_Performer_C");
static_assert(sizeof(ABP_Performer_C) == 0x004270, "Wrong size on ABP_Performer_C");
static_assert(offsetof(ABP_Performer_C, UberGraphFrame_BP_Performer_C) == 0x004240, "Member 'ABP_Performer_C::UberGraphFrame_BP_Performer_C' has a wrong offset!");
static_assert(offsetof(ABP_Performer_C, SBPCPerformer) == 0x004248, "Member 'ABP_Performer_C::SBPCPerformer' has a wrong offset!");
static_assert(offsetof(ABP_Performer_C, BP_PlayerAimHUDComponent) == 0x004250, "Member 'ABP_Performer_C::BP_PlayerAimHUDComponent' has a wrong offset!");
static_assert(offsetof(ABP_Performer_C, BP_P021HUDComponent) == 0x004258, "Member 'ABP_Performer_C::BP_P021HUDComponent' has a wrong offset!");
static_assert(offsetof(ABP_Performer_C, CommonBattleHudComponent) == 0x004260, "Member 'ABP_Performer_C::CommonBattleHudComponent' has a wrong offset!");

}

