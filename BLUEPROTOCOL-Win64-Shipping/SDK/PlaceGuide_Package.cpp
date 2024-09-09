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
	 * 		Name   -> Function PlaceGuide.PlaceGuide_C.HideRequestDemo
	 * 		Flags  -> ()
	 */
	void UPlaceGuide_C::HideRequestDemo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuide.PlaceGuide_C.HideRequestDemo");
		
		UPlaceGuide_C_HideRequestDemo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuide.PlaceGuide_C.CheckRequest
	 * 		Flags  -> ()
	 */
	void UPlaceGuide_C::CheckRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuide.PlaceGuide_C.CheckRequest");
		
		UPlaceGuide_C_CheckRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuide.PlaceGuide_C.HideRequest
	 * 		Flags  -> ()
	 */
	void UPlaceGuide_C::HideRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuide.PlaceGuide_C.HideRequest");
		
		UPlaceGuide_C_HideRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuide.PlaceGuide_C.ShowRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LocationId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaceGuide_C::ShowRequest(const class FName& LocationId, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuide.PlaceGuide_C.ShowRequest");
		
		UPlaceGuide_C_ShowRequest_Params params {};
		params.LocationId = LocationId;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuide.PlaceGuide_C.BndEvt__ContentWidget_K2Node_ComponentBoundEvent_0_OnPlayEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlaceGuide_C::BndEvt__ContentWidget_K2Node_ComponentBoundEvent_0_OnPlayEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuide.PlaceGuide_C.BndEvt__ContentWidget_K2Node_ComponentBoundEvent_0_OnPlayEnd__DelegateSignature");
		
		UPlaceGuide_C_BndEvt__ContentWidget_K2Node_ComponentBoundEvent_0_OnPlayEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuide.PlaceGuide_C.ShowRequestDemo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InLocationID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaceGuide_C::ShowRequestDemo(const class FName& InLocationID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuide.PlaceGuide_C.ShowRequestDemo");
		
		UPlaceGuide_C_ShowRequestDemo_Params params {};
		params.InLocationID = InLocationID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuide.PlaceGuide_C.OnPlayEnd_Event_1
	 * 		Flags  -> ()
	 */
	void UPlaceGuide_C::OnPlayEnd_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuide.PlaceGuide_C.OnPlayEnd_Event_1");
		
		UPlaceGuide_C_OnPlayEnd_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlaceGuide.PlaceGuide_C.ExecuteUbergraph_PlaceGuide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlaceGuide_C::ExecuteUbergraph_PlaceGuide(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlaceGuide.PlaceGuide_C.ExecuteUbergraph_PlaceGuide");
		
		UPlaceGuide_C_ExecuteUbergraph_PlaceGuide_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlaceGuide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlaceGuide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlaceGuide.PlaceGuide_C");
		return ptr;
	}

}


