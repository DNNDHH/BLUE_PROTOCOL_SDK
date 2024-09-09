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
	 * 		Name   -> Function SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C.PlayAnim
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeHyouiActive_Effect_C::PlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C.PlayAnim");
		
		USkillInfoGaugeHyouiActive_Effect_C_PlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C.Construct
	 * 		Flags  -> ()
	 */
	void USkillInfoGaugeHyouiActive_Effect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C.Construct");
		
		USkillInfoGaugeHyouiActive_Effect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C.ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USkillInfoGaugeHyouiActive_Effect_C::ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C.ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect");
		
		USkillInfoGaugeHyouiActive_Effect_C_ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkillInfoGaugeHyouiActive_Effect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillInfoGaugeHyouiActive_Effect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C");
		return ptr;
	}

}


