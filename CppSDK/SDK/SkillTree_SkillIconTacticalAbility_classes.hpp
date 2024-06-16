#pragma once

 

// Package: SkillTree_SkillIconTacticalAbility

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkillTree_SkillIconBase_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C
// 0x0018 (0x03A0 - 0x0388)
class USkillTree_SkillIconTacticalAbility_C final : public USkillTree_SkillIconBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SkillTree_SkillIconTacticalAbility_C; // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_EquipmentIcon2;                              // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_50;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillTree_SkillIconTacticalAbility(int32 EntryPoint);
	void SelectActiveAbility(ESkillTreeAbilityType AbilityType);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillTree_SkillIconTacticalAbility_C">();
	}
	static class USkillTree_SkillIconTacticalAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillTree_SkillIconTacticalAbility_C>();
	}
};
static_assert(alignof(USkillTree_SkillIconTacticalAbility_C) == 0x000008, "Wrong alignment on USkillTree_SkillIconTacticalAbility_C");
static_assert(sizeof(USkillTree_SkillIconTacticalAbility_C) == 0x0003A0, "Wrong size on USkillTree_SkillIconTacticalAbility_C");
static_assert(offsetof(USkillTree_SkillIconTacticalAbility_C, UberGraphFrame_SkillTree_SkillIconTacticalAbility_C) == 0x000388, "Member 'USkillTree_SkillIconTacticalAbility_C::UberGraphFrame_SkillTree_SkillIconTacticalAbility_C' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconTacticalAbility_C, Image_EquipmentIcon2) == 0x000390, "Member 'USkillTree_SkillIconTacticalAbility_C::Image_EquipmentIcon2' has a wrong offset!");
static_assert(offsetof(USkillTree_SkillIconTacticalAbility_C, WidgetSwitcher_50) == 0x000398, "Member 'USkillTree_SkillIconTacticalAbility_C::WidgetSwitcher_50' has a wrong offset!");

}

