#pragma once

 

// Package: SkillTreeFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class USkillTreeFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void IsEnableConditionClassLevel(int32 SkillId, int32 SkillLevel, class UObject* __WorldContext, bool* Enable);
	static void IsEnableConditionSkill(int32 SkillId, class UObject* __WorldContext, bool* Enable);
	static void GetDerivedSkillIdArray(int32 SkillId, class UObject* __WorldContext, TArray<int32>* DerivedSkillArray);
	static void GetSkillLevelUpOrLearnUnableMessage(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues Param_Index, class UObject* __WorldContext, class FText* Result);
	static void TryGetSkillMovieID(int32 SkillId, int32 SkillLV, class UObject* __WorldContext, bool* Result, class FName* MovieID);
	static class FText GetSkillLevelText(int32 Level, class UObject* __WorldContext);
	static void TryGetSkillImage(int32 SkillId, int32 SkillLV, class UObject* __WorldContext, TSoftObjectPtr<class UMediaSource>* MediaSource, TSoftObjectPtr<class UTexture2D>* Image, TSoftObjectPtr<class UTexture2D>* ImageIcon);
	static class FText GetSkillAbillityTypeText(ESBSkillAbilityType InAbilityType, class UObject* __WorldContext);
	static void Get_Base_Skill(class UObject* __WorldContext, TArray<struct FSBSkillDataMasterData>* List);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillTreeFunctionLibrary_C">();
	}
	static class USkillTreeFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillTreeFunctionLibrary_C>();
	}
};
static_assert(alignof(USkillTreeFunctionLibrary_C) == 0x000008, "Wrong alignment on USkillTreeFunctionLibrary_C");
static_assert(sizeof(USkillTreeFunctionLibrary_C) == 0x000028, "Wrong size on USkillTreeFunctionLibrary_C");

}

