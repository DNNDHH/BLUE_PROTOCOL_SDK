#pragma once

 

// Package: SkillLevelInfoForBattleSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C
// 0x0010 (0x0288 - 0x0278)
class USkillLevelInfoForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             SkillLevelValueTxt;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillLevelInfoForBattleSet(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetSkillLevel(int32 InSkillLevel);
	void SetSkillAbilityType(ESBSkillAbilityType InSkillAbilityType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillLevelInfoForBattleSet_C">();
	}
	static class USkillLevelInfoForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillLevelInfoForBattleSet_C>();
	}
};
static_assert(alignof(USkillLevelInfoForBattleSet_C) == 0x000008, "Wrong alignment on USkillLevelInfoForBattleSet_C");
static_assert(sizeof(USkillLevelInfoForBattleSet_C) == 0x000288, "Wrong size on USkillLevelInfoForBattleSet_C");
static_assert(offsetof(USkillLevelInfoForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'USkillLevelInfoForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillLevelInfoForBattleSet_C, SkillLevelValueTxt) == 0x000280, "Member 'USkillLevelInfoForBattleSet_C::SkillLevelValueTxt' has a wrong offset!");

}

