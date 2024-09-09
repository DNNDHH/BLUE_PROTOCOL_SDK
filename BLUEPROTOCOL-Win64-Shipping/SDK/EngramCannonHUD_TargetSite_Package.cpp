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
	 * 		Name   -> Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdateArrowVisible
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_TargetSite_C::UpdateArrowVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdateArrowVisible");
		
		UEngramCannonHUD_TargetSite_C_UpdateArrowVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdateWidgetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     WidgetObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MoveSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEngramCannonHUD_TargetSite_C::UpdateWidgetLocation(class UWidget* WidgetObject, const struct FVector& Location, float DeltaTime, float MoveSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdateWidgetLocation");
		
		UEngramCannonHUD_TargetSite_C_UpdateWidgetLocation_Params params {};
		params.WidgetObject = WidgetObject;
		params.Location = Location;
		params.DeltaTime = DeltaTime;
		params.MoveSpeed = MoveSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdatePoint
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_TargetSite_C::UpdatePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.UpdatePoint");
		
		UEngramCannonHUD_TargetSite_C_UpdatePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.InitPoint
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_TargetSite_C::InitPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.InitPoint");
		
		UEngramCannonHUD_TargetSite_C_InitPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Get Camera Foward Point
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UEngramCannonHUD_TargetSite_C::GetCameraFowardPoint(float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Get Camera Foward Point");
		
		UEngramCannonHUD_TargetSite_C_GetCameraFowardPoint_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Construct
	 * 		Flags  -> ()
	 */
	void UEngramCannonHUD_TargetSite_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Construct");
		
		UEngramCannonHUD_TargetSite_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEngramCannonHUD_TargetSite_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.Tick");
		
		UEngramCannonHUD_TargetSite_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.ExecuteUbergraph_EngramCannonHUD_TargetSite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEngramCannonHUD_TargetSite_C::ExecuteUbergraph_EngramCannonHUD_TargetSite(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C.ExecuteUbergraph_EngramCannonHUD_TargetSite");
		
		UEngramCannonHUD_TargetSite_C_ExecuteUbergraph_EngramCannonHUD_TargetSite_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramCannonHUD_TargetSite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramCannonHUD_TargetSite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EngramCannonHUD_TargetSite.EngramCannonHUD_TargetSite_C");
		return ptr;
	}

}


