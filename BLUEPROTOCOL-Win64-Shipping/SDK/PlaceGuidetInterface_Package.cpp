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
	 * 		Name   -> Function PlaceGuidetInterface.PlaceGuidetInterface_C.GetPlaceGuideWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPlaceGuide_C*                               PlaceGuideWidget                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaceGuidetInterface_C::GetPlaceGuideWidget(class UPlaceGuide_C** PlaceGuideWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuidetInterface.PlaceGuidetInterface_C.GetPlaceGuideWidget");
		
		UPlaceGuidetInterface_C_GetPlaceGuideWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlaceGuideWidget != nullptr)
			*PlaceGuideWidget = params.PlaceGuideWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaceGuidetInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaceGuidetInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlaceGuidetInterface.PlaceGuidetInterface_C");
		return ptr;
	}

}


