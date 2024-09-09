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
	 * 		Name   -> Function RectangleImage.RectangleImage_C.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URectangleImage_C::SetSize(const struct FVector2D& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RectangleImage.RectangleImage_C.SetSize");
		
		URectangleImage_C_SetSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RectangleImage.RectangleImage_C.SetPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URectangleImage_C::SetPosition(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RectangleImage.RectangleImage_C.SetPosition");
		
		URectangleImage_C_SetPosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URectangleImage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URectangleImage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RectangleImage.RectangleImage_C");
		return ptr;
	}

}


