#pragma once

 

// Package: CommonBattleHudComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CommonBattleHudComponent.CommonBattleHudComponent_C
// 0x0018 (0x00D0 - 0x00B8)
class UCommonBattleHudComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Reticle_ChargeLevel_C*              ChargeLevel;                                       // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSetup;                                            // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CommonBattleHudComponent(int32 EntryPoint);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void AttackHit(bool IsCritical);
	void SetRayHit(bool bRayHit);
	void SetupHUD();
	void DestroyHud();
	void OnTick();
	void UpdateHud();
	void ShowHUD(bool bShow);

	bool IsEnable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonBattleHudComponent_C">();
	}
	static class UCommonBattleHudComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonBattleHudComponent_C>();
	}
};
static_assert(alignof(UCommonBattleHudComponent_C) == 0x000008, "Wrong alignment on UCommonBattleHudComponent_C");
static_assert(sizeof(UCommonBattleHudComponent_C) == 0x0000D0, "Wrong size on UCommonBattleHudComponent_C");
static_assert(offsetof(UCommonBattleHudComponent_C, UberGraphFrame) == 0x0000B8, "Member 'UCommonBattleHudComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonBattleHudComponent_C, ChargeLevel) == 0x0000C0, "Member 'UCommonBattleHudComponent_C::ChargeLevel' has a wrong offset!");
static_assert(offsetof(UCommonBattleHudComponent_C, bSetup) == 0x0000C8, "Member 'UCommonBattleHudComponent_C::bSetup' has a wrong offset!");

}

