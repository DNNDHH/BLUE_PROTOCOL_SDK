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
	 * 		Name   -> Function EventIconToolTip.EventIconToolTip_C.SetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUnidentified                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEventIconToolTip_C::SetInfo(int32_t InItemIndex, bool bUnidentified)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventIconToolTip.EventIconToolTip_C.SetInfo");
		
		UEventIconToolTip_C_SetInfo_Params params {};
		params.InItemIndex = InItemIndex;
		params.bUnidentified = bUnidentified;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventIconToolTip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventIconToolTip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventIconToolTip.EventIconToolTip_C");
		return ptr;
	}

}


