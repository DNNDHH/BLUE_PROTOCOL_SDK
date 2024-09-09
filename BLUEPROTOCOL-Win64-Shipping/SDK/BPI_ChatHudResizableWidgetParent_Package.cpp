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
	 * 		Name   -> Function BPI_ChatHudResizableWidgetParent.BPI_ChatHudResizableWidgetParent_C.SetWindowSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ChatHudResizableWidgetParent_C::SetWindowSize(const struct FVector2D& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ChatHudResizableWidgetParent.BPI_ChatHudResizableWidgetParent_C.SetWindowSize");
		
		UBPI_ChatHudResizableWidgetParent_C_SetWindowSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ChatHudResizableWidgetParent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ChatHudResizableWidgetParent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ChatHudResizableWidgetParent.BPI_ChatHudResizableWidgetParent_C");
		return ptr;
	}

}


