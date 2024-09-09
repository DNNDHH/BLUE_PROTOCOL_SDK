/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.SetSkillAbilityType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBSkillAbilityType                                InSkillAbilityType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillLevelInfoForBattleSet_C::SetSkillAbilityType(ESBSkillAbilityType InSkillAbilityType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.SetSkillAbilityType");
		
		USkillLevelInfoForBattleSet_C_SetSkillAbilityType_Params params {};
		params.InSkillAbilityType = InSkillAbilityType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.SetSkillLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSkillLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillLevelInfoForBattleSet_C::SetSkillLevel(int32_t InSkillLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.SetSkillLevel");
		
		USkillLevelInfoForBattleSet_C_SetSkillLevel_Params params {};
		params.InSkillLevel = InSkillLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillLevelInfoForBattleSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.PreConstruct");
		
		USkillLevelInfoForBattleSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.ExecuteUbergraph_SkillLevelInfoForBattleSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillLevelInfoForBattleSet_C::ExecuteUbergraph_SkillLevelInfoForBattleSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.ExecuteUbergraph_SkillLevelInfoForBattleSet");
		
		USkillLevelInfoForBattleSet_C_ExecuteUbergraph_SkillLevelInfoForBattleSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillLevelInfoForBattleSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillLevelInfoForBattleSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C");
		return ptr;
	}

}


