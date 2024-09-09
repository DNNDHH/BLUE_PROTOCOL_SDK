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
	 * 		Name   -> Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.SetIconVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFang_expedition_ExpeditionHeartAnm_C::SetIconVisibility(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.SetIconVisibility");
		
		UFang_expedition_ExpeditionHeartAnm_C_SetIconVisibility_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.Construct
	 * 		Flags  -> ()
	 */
	void UFang_expedition_ExpeditionHeartAnm_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.Construct");
		
		UFang_expedition_ExpeditionHeartAnm_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFang_expedition_ExpeditionHeartAnm_C::ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm");
		
		UFang_expedition_ExpeditionHeartAnm_C_ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFang_expedition_ExpeditionHeartAnm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFang_expedition_ExpeditionHeartAnm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C");
		return ptr;
	}

}


