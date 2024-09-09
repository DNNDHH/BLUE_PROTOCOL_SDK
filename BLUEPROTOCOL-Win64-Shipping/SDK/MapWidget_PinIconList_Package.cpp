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
	 * 		Name   -> Function MapWidget_PinIconList.MapWidget_PinIconList_C.SetAllPinIconEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               InIncludeEraser                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_PinIconList_C::SetAllPinIconEnable(bool IsEnable, bool InIncludeEraser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconList.MapWidget_PinIconList_C.SetAllPinIconEnable");
		
		UMapWidget_PinIconList_C_SetAllPinIconEnable_Params params {};
		params.IsEnable = IsEnable;
		params.InIncludeEraser = InIncludeEraser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconList.MapWidget_PinIconList_C.SetPinIconEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapPinType                                        InPinType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_PinIconList_C::SetPinIconEnable(EMapPinType InPinType, bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconList.MapWidget_PinIconList_C.SetPinIconEnable");
		
		UMapWidget_PinIconList_C_SetPinIconEnable_Params params {};
		params.InPinType = InPinType;
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconList.MapWidget_PinIconList_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapWidget_PinIconList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconList.MapWidget_PinIconList_C.Construct");
		
		UMapWidget_PinIconList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconList.MapWidget_PinIconList_C.PinIconPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_PinIconBtn_C*                     InPressedIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PinIconList_C::PinIconPressed(class UMapWidget_PinIconBtn_C* InPressedIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconList.MapWidget_PinIconList_C.PinIconPressed");
		
		UMapWidget_PinIconList_C_PinIconPressed_Params params {};
		params.InPressedIcon = InPressedIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconList.MapWidget_PinIconList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMapWidget_PinIconList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconList.MapWidget_PinIconList_C.Destruct");
		
		UMapWidget_PinIconList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinIconBtnPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_PinIconBtn_C*                     InPressedIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PinIconList_C::OnPinIconBtnPressed(class UMapWidget_PinIconBtn_C* InPressedIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinIconBtnPressed");
		
		UMapWidget_PinIconList_C_OnPinIconBtnPressed_Params params {};
		params.InPressedIcon = InPressedIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinEraserIconBtnPressed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_PinEraserIconBtn_C*               InPressedIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PinIconList_C::OnPinEraserIconBtnPressed(class UMapWidget_PinEraserIconBtn_C* InPressedIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinEraserIconBtnPressed");
		
		UMapWidget_PinIconList_C_OnPinEraserIconBtnPressed_Params params {};
		params.InPressedIcon = InPressedIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconList.MapWidget_PinIconList_C.EraserIconPressed
	 * 		Flags  -> ()
	 */
	void UMapWidget_PinIconList_C::EraserIconPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconList.MapWidget_PinIconList_C.EraserIconPressed");
		
		UMapWidget_PinIconList_C_EraserIconPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconList.MapWidget_PinIconList_C.ExecuteUbergraph_MapWidget_PinIconList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PinIconList_C::ExecuteUbergraph_MapWidget_PinIconList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconList.MapWidget_PinIconList_C.ExecuteUbergraph_MapWidget_PinIconList");
		
		UMapWidget_PinIconList_C_ExecuteUbergraph_MapWidget_PinIconList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinIconSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapPinType                                        InSelectedPinType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PinIconList_C::OnPinIconSelected__DelegateSignature(EMapPinType InSelectedPinType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconList.MapWidget_PinIconList_C.OnPinIconSelected__DelegateSignature");
		
		UMapWidget_PinIconList_C_OnPinIconSelected__DelegateSignature_Params params {};
		params.InSelectedPinType = InSelectedPinType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_PinIconList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_PinIconList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_PinIconList.MapWidget_PinIconList_C");
		return ptr;
	}

}


