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
	 * 		Name   -> Function AttributeIcon.AttributeIcon_C.SetAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBAttribute                                       InAttribute                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAttributeIcon_C::SetAttribute(ESBAttribute InAttribute)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AttributeIcon.AttributeIcon_C.SetAttribute");
		
		UAttributeIcon_C_SetAttribute_Params params {};
		params.InAttribute = InAttribute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttributeIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttributeIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AttributeIcon.AttributeIcon_C");
		return ptr;
	}

}


