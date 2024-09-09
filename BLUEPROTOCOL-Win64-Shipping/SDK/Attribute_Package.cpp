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
	 * 		Name   -> Function Attribute.Attribute_C.SetAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ImagineId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAttribute_C::SetAttribute(int32_t ImagineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Attribute.Attribute_C.SetAttribute");
		
		UAttribute_C_SetAttribute_Params params {};
		params.ImagineId = ImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttribute_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttribute_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Attribute.Attribute_C");
		return ptr;
	}

}


