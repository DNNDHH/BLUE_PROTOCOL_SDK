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
	 * 		Name   -> Function MapEditWindowPin.MapEditWindowPin_C.Set Pin Visible OFF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOFF                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapEditWindowPin_C::SetPinVisibleOFF(bool IsOFF)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindowPin.MapEditWindowPin_C.Set Pin Visible OFF");
		
		UMapEditWindowPin_C_SetPinVisibleOFF_Params params {};
		params.IsOFF = IsOFF;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindowPin.MapEditWindowPin_C.Set Pin Visible ON
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapEditWindowPin_C::SetPinVisibleON(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindowPin.MapEditWindowPin_C.Set Pin Visible ON");
		
		UMapEditWindowPin_C_SetPinVisibleON_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindowPin.MapEditWindowPin_C.Set Pin Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               PinChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapEditWindowPin_C::SetPinVisible(bool PinChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindowPin.MapEditWindowPin_C.Set Pin Visible");
		
		UMapEditWindowPin_C_SetPinVisible_Params params {};
		params.PinChecked = PinChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindowPin.MapEditWindowPin_C.SetTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindowPin_C::SetTitle(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindowPin.MapEditWindowPin_C.SetTitle");
		
		UMapEditWindowPin_C_SetTitle_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindowPin.MapEditWindowPin_C.BndEvt__MapEditPinWindow_PinCheckBoxON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapEditWindowPin_C::BndEvt__MapEditPinWindow_PinCheckBoxON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindowPin.MapEditWindowPin_C.BndEvt__MapEditPinWindow_PinCheckBoxON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UMapEditWindowPin_C_BndEvt__MapEditPinWindow_PinCheckBoxON_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindowPin.MapEditWindowPin_C.BndEvt__MapEditPinWindow_PinCheckBoxOFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapEditWindowPin_C::BndEvt__MapEditPinWindow_PinCheckBoxOFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindowPin.MapEditWindowPin_C.BndEvt__MapEditPinWindow_PinCheckBoxOFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UMapEditWindowPin_C_BndEvt__MapEditPinWindow_PinCheckBoxOFF_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindowPin.MapEditWindowPin_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapEditWindowPin_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindowPin.MapEditWindowPin_C.PreConstruct");
		
		UMapEditWindowPin_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindowPin.MapEditWindowPin_C.ExecuteUbergraph_MapEditWindowPin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindowPin_C::ExecuteUbergraph_MapEditWindowPin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindowPin.MapEditWindowPin_C.ExecuteUbergraph_MapEditWindowPin");
		
		UMapEditWindowPin_C_ExecuteUbergraph_MapEditWindowPin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindowPin.MapEditWindowPin_C.OnPinVisible__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapEditWindowPin_C::OnPinVisible__DelegateSignature(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindowPin.MapEditWindowPin_C.OnPinVisible__DelegateSignature");
		
		UMapEditWindowPin_C_OnPinVisible__DelegateSignature_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEditWindowPin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEditWindowPin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapEditWindowPin.MapEditWindowPin_C");
		return ptr;
	}

}


