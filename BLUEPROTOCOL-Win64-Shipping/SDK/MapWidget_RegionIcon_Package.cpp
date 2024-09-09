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
	 * 		Name   -> Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.SetRegion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InRegionMapId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_RegionIcon_C::SetRegion(const class FString& InRegionMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.SetRegion");
		
		UMapWidget_RegionIcon_C_SetRegion_Params params {};
		params.InRegionMapId = InRegionMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UMapWidget_RegionIcon_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.GetToolTipWidget_1");
		
		UMapWidget_RegionIcon_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_RegionIcon_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.Construct");
		
		UMapWidget_RegionIcon_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_RegionIcon_C::BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature");
		
		UMapWidget_RegionIcon_C_BndEvt__Button_WarpPoint_K2Node_ComponentBoundEvent_179_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.ExecuteUbergraph_MapWidget_RegionIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_RegionIcon_C::ExecuteUbergraph_MapWidget_RegionIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.ExecuteUbergraph_MapWidget_RegionIcon");
		
		UMapWidget_RegionIcon_C_ExecuteUbergraph_MapWidget_RegionIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InRegionMapId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMapWidget_RegionIcon_C::OnPressed__DelegateSignature(const class FString& InRegionMapId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_RegionIcon.MapWidget_RegionIcon_C.OnPressed__DelegateSignature");
		
		UMapWidget_RegionIcon_C_OnPressed__DelegateSignature_Params params {};
		params.InRegionMapId = InRegionMapId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_RegionIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_RegionIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_RegionIcon.MapWidget_RegionIcon_C");
		return ptr;
	}

}


