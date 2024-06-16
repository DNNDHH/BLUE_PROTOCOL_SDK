#pragma once

 

// Package: HateAlert

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HateAlert.HateAlert_C
// 0x0010 (0x0290 - 0x0280)
class UHateAlert_C final : public USBHateAlertWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHateAlertIcon_C*                       HateAlertIcon;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HateAlert(int32 EntryPoint);
	void OnIsTrainingBattleState();
	void OnFindByEnemy();
	void OnEnemyTarget();
	void OnHide();
	void ParentsCallTick(float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HateAlert_C">();
	}
	static class UHateAlert_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHateAlert_C>();
	}
};
static_assert(alignof(UHateAlert_C) == 0x000008, "Wrong alignment on UHateAlert_C");
static_assert(sizeof(UHateAlert_C) == 0x000290, "Wrong size on UHateAlert_C");
static_assert(offsetof(UHateAlert_C, UberGraphFrame) == 0x000280, "Member 'UHateAlert_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHateAlert_C, HateAlertIcon) == 0x000288, "Member 'UHateAlert_C::HateAlertIcon' has a wrong offset!");

}

