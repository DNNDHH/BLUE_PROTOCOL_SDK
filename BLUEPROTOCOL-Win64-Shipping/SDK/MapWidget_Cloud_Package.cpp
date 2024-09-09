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
	 * 		Name   -> Function MapWidget_Cloud.MapWidget_Cloud_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_Cloud_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Cloud.MapWidget_Cloud_C.Construct");
		
		UMapWidget_Cloud_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Cloud.MapWidget_Cloud_C.OnCloudReachedLeftEdgeOfTheScreen
	 * 		Flags  -> ()
	 */
	void UMapWidget_Cloud_C::OnCloudReachedLeftEdgeOfTheScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Cloud.MapWidget_Cloud_C.OnCloudReachedLeftEdgeOfTheScreen");
		
		UMapWidget_Cloud_C_OnCloudReachedLeftEdgeOfTheScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Cloud.MapWidget_Cloud_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMapWidget_Cloud_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Cloud.MapWidget_Cloud_C.Destruct");
		
		UMapWidget_Cloud_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Cloud.MapWidget_Cloud_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_Cloud_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Cloud.MapWidget_Cloud_C.PreConstruct");
		
		UMapWidget_Cloud_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_Cloud.MapWidget_Cloud_C.ExecuteUbergraph_MapWidget_Cloud
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_Cloud_C::ExecuteUbergraph_MapWidget_Cloud(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_Cloud.MapWidget_Cloud_C.ExecuteUbergraph_MapWidget_Cloud");
		
		UMapWidget_Cloud_C_ExecuteUbergraph_MapWidget_Cloud_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_Cloud_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_Cloud_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_Cloud.MapWidget_Cloud_C");
		return ptr;
	}

}


