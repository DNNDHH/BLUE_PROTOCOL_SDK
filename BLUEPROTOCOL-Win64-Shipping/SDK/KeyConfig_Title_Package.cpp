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
	 * 		Name   -> Function KeyConfig_Title.KeyConfig_Title_C.SetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TextId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_Title_C::SetTitle(int32_t TextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Title.KeyConfig_Title_C.SetTitle");
		
		UKeyConfig_Title_C_SetTitle_Params params {};
		params.TextId = TextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyConfig_Title_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyConfig_Title_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyConfig_Title.KeyConfig_Title_C");
		return ptr;
	}

}


