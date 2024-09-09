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
	 * 		Name   -> Function SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C.SetEquipmentIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkillTree_SkillIconPassive_C::SetEquipmentIconVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C.SetEquipmentIconVisibility");
		
		USkillTree_SkillIconPassive_C_SetEquipmentIconVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C.SetIconEmpty
	 * 		Flags  -> ()
	 */
	void USkillTree_SkillIconPassive_C::SetIconEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C.SetIconEmpty");
		
		USkillTree_SkillIconPassive_C_SetIconEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillTree_SkillIconPassive_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C.Construct");
		
		USkillTree_SkillIconPassive_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C.ExecuteUbergraph_SkillTree_SkillIconPassive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillTree_SkillIconPassive_C::ExecuteUbergraph_SkillTree_SkillIconPassive(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C.ExecuteUbergraph_SkillTree_SkillIconPassive");
		
		USkillTree_SkillIconPassive_C_ExecuteUbergraph_SkillTree_SkillIconPassive_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillTree_SkillIconPassive_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillTree_SkillIconPassive_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C");
		return ptr;
	}

}


