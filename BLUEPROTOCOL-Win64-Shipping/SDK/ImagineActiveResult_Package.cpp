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
	 * 		Name   -> Function ImagineActiveResult.ImagineActiveResult_C.Set ItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UImagineActiveResult_C::SetItemData(const struct FOwnItemInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineActiveResult.ImagineActiveResult_C.Set ItemData");
		
		UImagineActiveResult_C_SetItemData_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ImagineActiveResult.ImagineActiveResult_C.ExecuteUbergraph_ImagineActiveResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UImagineActiveResult_C::ExecuteUbergraph_ImagineActiveResult(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ImagineActiveResult.ImagineActiveResult_C.ExecuteUbergraph_ImagineActiveResult");
		
		UImagineActiveResult_C_ExecuteUbergraph_ImagineActiveResult_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImagineActiveResult_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImagineActiveResult_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ImagineActiveResult.ImagineActiveResult_C");
		return ptr;
	}

}


