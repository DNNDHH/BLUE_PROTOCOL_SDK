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
	 * 		Name   -> Function SkillTree_SkillIconPassiveAlways.SkillTree_SkillIconPassiveAlways_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillTree_SkillIconPassiveAlways_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconPassiveAlways.SkillTree_SkillIconPassiveAlways_C.Construct");
		
		USkillTree_SkillIconPassiveAlways_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconPassiveAlways.SkillTree_SkillIconPassiveAlways_C.ExecuteUbergraph_SkillTree_SkillIconPassiveAlways
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTree_SkillIconPassiveAlways_C::ExecuteUbergraph_SkillTree_SkillIconPassiveAlways(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconPassiveAlways.SkillTree_SkillIconPassiveAlways_C.ExecuteUbergraph_SkillTree_SkillIconPassiveAlways");
		
		USkillTree_SkillIconPassiveAlways_C_ExecuteUbergraph_SkillTree_SkillIconPassiveAlways_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillTree_SkillIconPassiveAlways_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillTree_SkillIconPassiveAlways_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillTree_SkillIconPassiveAlways.SkillTree_SkillIconPassiveAlways_C");
		return ptr;
	}

}


