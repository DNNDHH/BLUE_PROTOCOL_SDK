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
	 * 		Name   -> Function SkillTree_SkillIconSpecial.SkillTree_SkillIconSpecial_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillTree_SkillIconSpecial_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconSpecial.SkillTree_SkillIconSpecial_C.Construct");
		
		USkillTree_SkillIconSpecial_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconSpecial.SkillTree_SkillIconSpecial_C.ExecuteUbergraph_SkillTree_SkillIconSpecial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTree_SkillIconSpecial_C::ExecuteUbergraph_SkillTree_SkillIconSpecial(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconSpecial.SkillTree_SkillIconSpecial_C.ExecuteUbergraph_SkillTree_SkillIconSpecial");
		
		USkillTree_SkillIconSpecial_C_ExecuteUbergraph_SkillTree_SkillIconSpecial_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillTree_SkillIconSpecial_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillTree_SkillIconSpecial_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillTree_SkillIconSpecial.SkillTree_SkillIconSpecial_C");
		return ptr;
	}

}


