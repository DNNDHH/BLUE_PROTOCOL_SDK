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
	 * 		Name   -> Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.SetIconBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_PinEraserIconBtn_C::SetIconBtnEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.SetIconBtnEnable");
		
		UMapWidget_PinEraserIconBtn_C_SetIconBtnEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_PinEraserIconBtn_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature");
		
		UMapWidget_PinEraserIconBtn_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.ExecuteUbergraph_MapWidget_PinEraserIconBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PinEraserIconBtn_C::ExecuteUbergraph_MapWidget_PinEraserIconBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.ExecuteUbergraph_MapWidget_PinEraserIconBtn");
		
		UMapWidget_PinEraserIconBtn_C_ExecuteUbergraph_MapWidget_PinEraserIconBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_PinEraserIconBtn_C*               InPressedIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PinEraserIconBtn_C::OnPressed__DelegateSignature(class UMapWidget_PinEraserIconBtn_C* InPressedIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C.OnPressed__DelegateSignature");
		
		UMapWidget_PinEraserIconBtn_C_OnPressed__DelegateSignature_Params params {};
		params.InPressedIcon = InPressedIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_PinEraserIconBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_PinEraserIconBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_PinEraserIconBtn.MapWidget_PinEraserIconBtn_C");
		return ptr;
	}

}


