#pragma once

 

// Package: WeaponSynthePart_WindowAbilityChange

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponSynthePart_WindowAbilityChange.WeaponSynthePart_WindowAbilityChange_C
// 0x0090 (0x0308 - 0x0278)
class UWeaponSynthePart_WindowAbilityChange_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimArrow;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UPerkRarityView_C*                      PerkRarityViewLeft;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPerkRarityView_C*                      PerkRarityViewRight;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextTitle;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextValue1_0;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextValue1_1;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextValue1_2;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextValue2_0;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextValue2_1;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextValue2_2;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VBValue;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WSTitle;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WSValue1;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WSValue2;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         AbilityEffectId;                                   // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Ability_DBRow_Name_1;                              // 0x02F4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Ability_DBRow_Name_2;                              // 0x02FC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WeaponSynthePart_WindowAbilityChange(int32 EntryPoint);
	void Construct();
	void Initialize();
	void Setup(int32 InAbilityEffectId, class FName AbilityDBRowName1, class FName AbilityDBRowName2);
	void SetupNone();
	void SetupLock();
	void SetupValue();
	void SetVisibleTitle(bool Param_IsVisible);
	void SetVisibleValue(bool Param_IsVisible);
	void SetVisibleValue1(bool Param_IsVisible);
	void SetVisibleValue2(bool Param_IsVisible);
	void SetTitleText(bool IsProtect);
	void SetTitleRarity(int32 RarityMin, int32 RarityMax);
	void SetValue1(int32 ValueMin, int32 ValueMax);
	void SetValue2(int32 ValueMin, int32 ValueMax);
	void PlayAnimArrow();
	void StopAnimArrow();

	void ConvertValueToString(int32 Value, int32 UIAttribute, class FString* OutStr) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponSynthePart_WindowAbilityChange_C">();
	}
	static class UWeaponSynthePart_WindowAbilityChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponSynthePart_WindowAbilityChange_C>();
	}
};
static_assert(alignof(UWeaponSynthePart_WindowAbilityChange_C) == 0x000008, "Wrong alignment on UWeaponSynthePart_WindowAbilityChange_C");
static_assert(sizeof(UWeaponSynthePart_WindowAbilityChange_C) == 0x000308, "Wrong size on UWeaponSynthePart_WindowAbilityChange_C");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, UberGraphFrame) == 0x000278, "Member 'UWeaponSynthePart_WindowAbilityChange_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, AnimArrow) == 0x000280, "Member 'UWeaponSynthePart_WindowAbilityChange_C::AnimArrow' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, PerkRarityViewLeft) == 0x000288, "Member 'UWeaponSynthePart_WindowAbilityChange_C::PerkRarityViewLeft' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, PerkRarityViewRight) == 0x000290, "Member 'UWeaponSynthePart_WindowAbilityChange_C::PerkRarityViewRight' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, TextTitle) == 0x000298, "Member 'UWeaponSynthePart_WindowAbilityChange_C::TextTitle' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, TextValue1_0) == 0x0002A0, "Member 'UWeaponSynthePart_WindowAbilityChange_C::TextValue1_0' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, TextValue1_1) == 0x0002A8, "Member 'UWeaponSynthePart_WindowAbilityChange_C::TextValue1_1' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, TextValue1_2) == 0x0002B0, "Member 'UWeaponSynthePart_WindowAbilityChange_C::TextValue1_2' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, TextValue2_0) == 0x0002B8, "Member 'UWeaponSynthePart_WindowAbilityChange_C::TextValue2_0' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, TextValue2_1) == 0x0002C0, "Member 'UWeaponSynthePart_WindowAbilityChange_C::TextValue2_1' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, TextValue2_2) == 0x0002C8, "Member 'UWeaponSynthePart_WindowAbilityChange_C::TextValue2_2' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, VBValue) == 0x0002D0, "Member 'UWeaponSynthePart_WindowAbilityChange_C::VBValue' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, WSTitle) == 0x0002D8, "Member 'UWeaponSynthePart_WindowAbilityChange_C::WSTitle' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, WSValue1) == 0x0002E0, "Member 'UWeaponSynthePart_WindowAbilityChange_C::WSValue1' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, WSValue2) == 0x0002E8, "Member 'UWeaponSynthePart_WindowAbilityChange_C::WSValue2' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, AbilityEffectId) == 0x0002F0, "Member 'UWeaponSynthePart_WindowAbilityChange_C::AbilityEffectId' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, Ability_DBRow_Name_1) == 0x0002F4, "Member 'UWeaponSynthePart_WindowAbilityChange_C::Ability_DBRow_Name_1' has a wrong offset!");
static_assert(offsetof(UWeaponSynthePart_WindowAbilityChange_C, Ability_DBRow_Name_2) == 0x0002FC, "Member 'UWeaponSynthePart_WindowAbilityChange_C::Ability_DBRow_Name_2' has a wrong offset!");

}

