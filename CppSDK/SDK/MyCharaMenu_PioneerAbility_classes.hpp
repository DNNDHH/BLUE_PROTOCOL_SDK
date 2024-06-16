#pragma once

 

// Package: MyCharaMenu_PioneerAbility

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_PioneerAbility.MyCharaMenu_PioneerAbility_C
// 0x0080 (0x02F8 - 0x0278)
class UMyCharaMenu_PioneerAbility_C final : public USBMyCharaPioneerAbilityWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEffect_Container_C*                    Effect_Container;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEffect_Container_C*                    Effect_Container_70;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PioneerAbilityIcon;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Ability;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<ESBCharaEquipType, class FString>        Uids;                                              // 0x02A0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBWarehouseAbilityComponent*           WarehouseAbilityComponent;                         // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MyCharaMenu_PioneerAbility(int32 EntryPoint);
	void Generate_Passive_Skill();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_PioneerAbility_C">();
	}
	static class UMyCharaMenu_PioneerAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_PioneerAbility_C>();
	}
};
static_assert(alignof(UMyCharaMenu_PioneerAbility_C) == 0x000008, "Wrong alignment on UMyCharaMenu_PioneerAbility_C");
static_assert(sizeof(UMyCharaMenu_PioneerAbility_C) == 0x0002F8, "Wrong size on UMyCharaMenu_PioneerAbility_C");
static_assert(offsetof(UMyCharaMenu_PioneerAbility_C, UberGraphFrame) == 0x000278, "Member 'UMyCharaMenu_PioneerAbility_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PioneerAbility_C, Effect_Container) == 0x000280, "Member 'UMyCharaMenu_PioneerAbility_C::Effect_Container' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PioneerAbility_C, Effect_Container_70) == 0x000288, "Member 'UMyCharaMenu_PioneerAbility_C::Effect_Container_70' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PioneerAbility_C, PioneerAbilityIcon) == 0x000290, "Member 'UMyCharaMenu_PioneerAbility_C::PioneerAbilityIcon' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PioneerAbility_C, VB_Ability) == 0x000298, "Member 'UMyCharaMenu_PioneerAbility_C::VB_Ability' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PioneerAbility_C, Uids) == 0x0002A0, "Member 'UMyCharaMenu_PioneerAbility_C::Uids' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_PioneerAbility_C, WarehouseAbilityComponent) == 0x0002F0, "Member 'UMyCharaMenu_PioneerAbility_C::WarehouseAbilityComponent' has a wrong offset!");

}

