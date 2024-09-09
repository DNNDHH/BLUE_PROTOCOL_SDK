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
	 * 		Name   -> Function UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_PhotoModePlayerControlViewHeader_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C.Construct");
		
		UUMG_PhotoModePlayerControlViewHeader_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C.SetShowHeaderItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_PhotoModePlayerControlViewHeader_C::SetShowHeaderItem(bool bValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C.SetShowHeaderItem");
		
		UUMG_PhotoModePlayerControlViewHeader_C_SetShowHeaderItem_Params params {};
		params.bValue = bValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C.ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_PhotoModePlayerControlViewHeader_C::ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C.ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader");
		
		UUMG_PhotoModePlayerControlViewHeader_C_ExecuteUbergraph_UMG_PhotoModePlayerControlViewHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_PhotoModePlayerControlViewHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_PhotoModePlayerControlViewHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_PhotoModePlayerControlViewHeader.UMG_PhotoModePlayerControlViewHeader_C");
		return ptr;
	}

}


