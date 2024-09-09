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
	 * 		Name   -> Function TensionTagIcon.TensionTagIcon_C.SetTensionTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBTensionTagType                                  InTensionTagId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTensionTagIcon_C::SetTensionTag(ESBTensionTagType InTensionTagId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TensionTagIcon.TensionTagIcon_C.SetTensionTag");
		
		UTensionTagIcon_C_SetTensionTag_Params params {};
		params.InTensionTagId = InTensionTagId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTensionTagIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTensionTagIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TensionTagIcon.TensionTagIcon_C");
		return ptr;
	}

}


