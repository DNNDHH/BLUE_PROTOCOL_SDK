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
	 * 		Name   -> Function LoadingStatusDebug.LoadingStatusDebug_C.UpdateVisibility
	 * 		Flags  -> ()
	 */
	void ULoadingStatusDebug_C::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingStatusDebug.LoadingStatusDebug_C.UpdateVisibility");
		
		ULoadingStatusDebug_C_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingStatusDebug.LoadingStatusDebug_C.UpdateStatus
	 * 		Flags  -> ()
	 */
	void ULoadingStatusDebug_C::UpdateStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingStatusDebug.LoadingStatusDebug_C.UpdateStatus");
		
		ULoadingStatusDebug_C_UpdateStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingStatusDebug.LoadingStatusDebug_C.Construct
	 * 		Flags  -> ()
	 */
	void ULoadingStatusDebug_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingStatusDebug.LoadingStatusDebug_C.Construct");
		
		ULoadingStatusDebug_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingStatusDebug.LoadingStatusDebug_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadingStatusDebug_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingStatusDebug.LoadingStatusDebug_C.Tick");
		
		ULoadingStatusDebug_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingStatusDebug.LoadingStatusDebug_C.BndEvt__LoadingStatusDebug_CmnClose01_93_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoadingStatusDebug_C::BndEvt__LoadingStatusDebug_CmnClose01_93_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingStatusDebug.LoadingStatusDebug_C.BndEvt__LoadingStatusDebug_CmnClose01_93_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		ULoadingStatusDebug_C_BndEvt__LoadingStatusDebug_CmnClose01_93_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoadingStatusDebug.LoadingStatusDebug_C.ExecuteUbergraph_LoadingStatusDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoadingStatusDebug_C::ExecuteUbergraph_LoadingStatusDebug(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoadingStatusDebug.LoadingStatusDebug_C.ExecuteUbergraph_LoadingStatusDebug");
		
		ULoadingStatusDebug_C_ExecuteUbergraph_LoadingStatusDebug_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoadingStatusDebug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoadingStatusDebug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoadingStatusDebug.LoadingStatusDebug_C");
		return ptr;
	}

}


