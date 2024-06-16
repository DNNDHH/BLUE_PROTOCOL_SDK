#pragma once

 

// Package: DamageUI

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "DamageUI_NumberData_structs.hpp"
#include "Engine_structs.hpp"
#include "DamageUI_DamageCorrectionIconData_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DamageUI.DamageUI_C
// 0x0058 (0x0308 - 0x02B0)
class UDamageUI_C final : public USBDamageUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOutScale;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InOut;                                             // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_0;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Numbers;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FDamageUI_NumberData>           NumberData_Enemy;                                  // 0x02D8(0x0010)(Edit, BlueprintVisible)
	TArray<struct FDamageUI_NumberData>           NumberData_Player;                                 // 0x02E8(0x0010)(Edit, BlueprintVisible)
	TArray<struct FDamageUI_DamageCorrectionIconData> DamageCorrectionIconInfos;                         // 0x02F8(0x0010)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_DamageUI(int32 EntryPoint);
	void Destruct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void UnbindUIVisibleSettingDelegate();
	void BindUIVisibleSettingDelegate();
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void SetMiss();
	void SetNumber();
	void SetDamageCorrectionIcon();
	void PlayAnim();
	void SetBorderAlignment();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DamageUI_C">();
	}
	static class UDamageUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDamageUI_C>();
	}
};
static_assert(alignof(UDamageUI_C) == 0x000008, "Wrong alignment on UDamageUI_C");
static_assert(sizeof(UDamageUI_C) == 0x000308, "Wrong size on UDamageUI_C");
static_assert(offsetof(UDamageUI_C, UberGraphFrame) == 0x0002B0, "Member 'UDamageUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDamageUI_C, InOutScale) == 0x0002B8, "Member 'UDamageUI_C::InOutScale' has a wrong offset!");
static_assert(offsetof(UDamageUI_C, InOut) == 0x0002C0, "Member 'UDamageUI_C::InOut' has a wrong offset!");
static_assert(offsetof(UDamageUI_C, Border_0) == 0x0002C8, "Member 'UDamageUI_C::Border_0' has a wrong offset!");
static_assert(offsetof(UDamageUI_C, Numbers) == 0x0002D0, "Member 'UDamageUI_C::Numbers' has a wrong offset!");
static_assert(offsetof(UDamageUI_C, NumberData_Enemy) == 0x0002D8, "Member 'UDamageUI_C::NumberData_Enemy' has a wrong offset!");
static_assert(offsetof(UDamageUI_C, NumberData_Player) == 0x0002E8, "Member 'UDamageUI_C::NumberData_Player' has a wrong offset!");
static_assert(offsetof(UDamageUI_C, DamageCorrectionIconInfos) == 0x0002F8, "Member 'UDamageUI_C::DamageCorrectionIconInfos' has a wrong offset!");

}

