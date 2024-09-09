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
	 * 		Name   -> Function EventShopCheckList_Destination.EventShopCheckList_Destination_C.SetIsOver
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_Destination_C::SetIsOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList_Destination.EventShopCheckList_Destination_C.SetIsOver");
		
		UEventShopCheckList_Destination_C_SetIsOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList_Destination.EventShopCheckList_Destination_C.Construct
	 * 		Flags  -> ()
	 */
	void UEventShopCheckList_Destination_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList_Destination.EventShopCheckList_Destination_C.Construct");
		
		UEventShopCheckList_Destination_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopCheckList_Destination.EventShopCheckList_Destination_C.ExecuteUbergraph_EventShopCheckList_Destination
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopCheckList_Destination_C::ExecuteUbergraph_EventShopCheckList_Destination(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopCheckList_Destination.EventShopCheckList_Destination_C.ExecuteUbergraph_EventShopCheckList_Destination");
		
		UEventShopCheckList_Destination_C_ExecuteUbergraph_EventShopCheckList_Destination_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopCheckList_Destination_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopCheckList_Destination_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopCheckList_Destination.EventShopCheckList_Destination_C");
		return ptr;
	}

}


