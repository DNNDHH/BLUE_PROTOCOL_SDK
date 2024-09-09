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
	 * 		Name   -> Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillTree_SkillIconTacticalAbility_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.Construct");
		
		USkillTree_SkillIconTacticalAbility_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.SelectActiveAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESkillTreeAbilityType                              AbilityType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTree_SkillIconTacticalAbility_C::SelectActiveAbility(ESkillTreeAbilityType AbilityType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.SelectActiveAbility");
		
		USkillTree_SkillIconTacticalAbility_C_SelectActiveAbility_Params params {};
		params.AbilityType = AbilityType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.ExecuteUbergraph_SkillTree_SkillIconTacticalAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTree_SkillIconTacticalAbility_C::ExecuteUbergraph_SkillTree_SkillIconTacticalAbility(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.ExecuteUbergraph_SkillTree_SkillIconTacticalAbility");
		
		USkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillTree_SkillIconTacticalAbility_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillTree_SkillIconTacticalAbility_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C");
		return ptr;
	}

}


