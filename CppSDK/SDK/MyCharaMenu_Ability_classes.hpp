#pragma once

 

// Package: MyCharaMenu_Ability

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_Ability.MyCharaMenu_Ability_C
// 0x0100 (0x03B0 - 0x02B0)
class UMyCharaMenu_Ability_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEffect_Ability_C*                      Effect_Ability_99;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEffect_Ability_C*                      Effect_Ability_207;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_117;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Ability;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<ESBCharaEquipType, class FString>        Uids;                                              // 0x02D8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         PerkId;                                            // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AbilityValue1;                                     // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBAbilityMasterData                   AbilityMaster;                                     // 0x0330(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBCharaEquipType                             CharaEquipType;                                    // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8B13[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AbilityText;                                       // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                   ToolTipDesc;                                       // 0x0390(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         AbilityValue2;                                     // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MyCharaMenu_Ability(int32 EntryPoint);
	void Generate_Base_Skill();
	void Generate_Imagines();
	void Generate_Weapons();
	void Generate_Passive_Skill();
	void Collect_Unique_Ids();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_Ability_C">();
	}
	static class UMyCharaMenu_Ability_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_Ability_C>();
	}
};
static_assert(alignof(UMyCharaMenu_Ability_C) == 0x000008, "Wrong alignment on UMyCharaMenu_Ability_C");
static_assert(sizeof(UMyCharaMenu_Ability_C) == 0x0003B0, "Wrong size on UMyCharaMenu_Ability_C");
static_assert(offsetof(UMyCharaMenu_Ability_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharaMenu_Ability_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Ability_C, Effect_Ability_99) == 0x0002B8, "Member 'UMyCharaMenu_Ability_C::Effect_Ability_99' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Ability_C, Effect_Ability_207) == 0x0002C0, "Member 'UMyCharaMenu_Ability_C::Effect_Ability_207' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Ability_C, Image_117) == 0x0002C8, "Member 'UMyCharaMenu_Ability_C::Image_117' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Ability_C, VB_Ability) == 0x0002D0, "Member 'UMyCharaMenu_Ability_C::VB_Ability' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Ability_C, Uids) == 0x0002D8, "Member 'UMyCharaMenu_Ability_C::Uids' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Ability_C, PerkId) == 0x000328, "Member 'UMyCharaMenu_Ability_C::PerkId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Ability_C, AbilityValue1) == 0x00032C, "Member 'UMyCharaMenu_Ability_C::AbilityValue1' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Ability_C, AbilityMaster) == 0x000330, "Member 'UMyCharaMenu_Ability_C::AbilityMaster' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Ability_C, CharaEquipType) == 0x000378, "Member 'UMyCharaMenu_Ability_C::CharaEquipType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Ability_C, AbilityText) == 0x000380, "Member 'UMyCharaMenu_Ability_C::AbilityText' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Ability_C, ToolTipDesc) == 0x000390, "Member 'UMyCharaMenu_Ability_C::ToolTipDesc' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_Ability_C, AbilityValue2) == 0x0003A8, "Member 'UMyCharaMenu_Ability_C::AbilityValue2' has a wrong offset!");

}

