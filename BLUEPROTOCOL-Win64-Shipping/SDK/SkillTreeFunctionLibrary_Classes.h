#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass SkillTreeFunctionLibrary.SkillTreeFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USkillTreeFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetBaseSkill(class UObject* __WorldContext, TArray<struct FSBSkillDataMasterData>* List);
		class FText GetSkillAbillityTypeText(ESBSkillAbilityType InAbilityType, class UObject* __WorldContext);
		void TryGetSkillImage(int32_t SkillId, int32_t SkillLV, class UObject* __WorldContext);
		class FText GetSkillLevelText(int32_t Level, class UObject* __WorldContext);
		void TryGetSkillMovieID(int32_t SkillId, int32_t SkillLV, class UObject* __WorldContext, bool* Result, class FName* MovieID);
		void GetSkillLevelUpOrLearnUnableMessage(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues Index, class UObject* __WorldContext, class FText* Result);
		void GetDerivedSkillIdArray(int32_t SkillId, class UObject* __WorldContext, TArray<int32_t>* DerivedSkillArray);
		void IsEnableConditionSkill(int32_t SkillId, class UObject* __WorldContext, bool* enable);
		void IsEnableConditionClassLevel(int32_t SkillId, int32_t SkillLevel, class UObject* __WorldContext, bool* enable);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
