#pragma once

 

// Package: BP_PlayerAimHUDComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerAimHUDComponent.BP_PlayerAimHUDComponent_C
// 0x0030 (0x00E8 - 0x00B8)
class UBP_PlayerAimHUDComponent_C final : public USBPlayerAimHUDComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonAimModeUI_C*                     AimUI;                                             // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          VisibleSetting;                                    // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AimVisibility;                                     // 0x00C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9F3E[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                SlayerComp;                                        // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBBattleStatusComponent*               BattleStatusComp;                                  // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPCBerserkerComponent*                BerserkerComp;                                     // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_PlayerAimHUDComponent(int32 EntryPoint);
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void OnChangeVisibleSetting(ESBUIType InUIType, bool InVisibility);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void CreateUI();
	void RemoveUI();
	void SetAimUIVisibility(bool IsVisible);
	void UpdateAimMarkerVisibility();
	void GetClassType(ESBClassType* OutIsClassType);
	void IsControll(bool* OutIsControll);
	void Sheathe();
	void UnSheathe();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerAimHUDComponent_C">();
	}
	static class UBP_PlayerAimHUDComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerAimHUDComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerAimHUDComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerAimHUDComponent_C");
static_assert(sizeof(UBP_PlayerAimHUDComponent_C) == 0x0000E8, "Wrong size on UBP_PlayerAimHUDComponent_C");
static_assert(offsetof(UBP_PlayerAimHUDComponent_C, UberGraphFrame) == 0x0000B8, "Member 'UBP_PlayerAimHUDComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerAimHUDComponent_C, AimUI) == 0x0000C0, "Member 'UBP_PlayerAimHUDComponent_C::AimUI' has a wrong offset!");
static_assert(offsetof(UBP_PlayerAimHUDComponent_C, VisibleSetting) == 0x0000C8, "Member 'UBP_PlayerAimHUDComponent_C::VisibleSetting' has a wrong offset!");
static_assert(offsetof(UBP_PlayerAimHUDComponent_C, AimVisibility) == 0x0000C9, "Member 'UBP_PlayerAimHUDComponent_C::AimVisibility' has a wrong offset!");
static_assert(offsetof(UBP_PlayerAimHUDComponent_C, SlayerComp) == 0x0000D0, "Member 'UBP_PlayerAimHUDComponent_C::SlayerComp' has a wrong offset!");
static_assert(offsetof(UBP_PlayerAimHUDComponent_C, BattleStatusComp) == 0x0000D8, "Member 'UBP_PlayerAimHUDComponent_C::BattleStatusComp' has a wrong offset!");
static_assert(offsetof(UBP_PlayerAimHUDComponent_C, BerserkerComp) == 0x0000E0, "Member 'UBP_PlayerAimHUDComponent_C::BerserkerComp' has a wrong offset!");

}

