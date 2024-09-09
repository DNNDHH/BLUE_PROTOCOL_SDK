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
	 * 		Name   -> Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.SetIconBtnEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapWidget_PinIconBtn_C::SetIconBtnEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.SetIconBtnEnable");
		
		UMapWidget_PinIconBtn_C_SetIconBtnEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.SetIconTextureByPinType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMapPinType                                        InPinType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PinIconBtn_C::SetIconTextureByPinType(EMapPinType InPinType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.SetIconTextureByPinType");
		
		UMapWidget_PinIconBtn_C_SetIconTextureByPinType_Params params {};
		params.InPinType = InPinType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapWidget_PinIconBtn_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature");
		
		UMapWidget_PinIconBtn_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_158_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.ExecuteUbergraph_MapWidget_PinIconBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PinIconBtn_C::ExecuteUbergraph_MapWidget_PinIconBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.ExecuteUbergraph_MapWidget_PinIconBtn");
		
		UMapWidget_PinIconBtn_C_ExecuteUbergraph_MapWidget_PinIconBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.OnPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMapWidget_PinIconBtn_C*                     InPressedIcon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapWidget_PinIconBtn_C::OnPressed__DelegateSignature(class UMapWidget_PinIconBtn_C* InPressedIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapWidget_PinIconBtn.MapWidget_PinIconBtn_C.OnPressed__DelegateSignature");
		
		UMapWidget_PinIconBtn_C_OnPressed__DelegateSignature_Params params {};
		params.InPressedIcon = InPressedIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapWidget_PinIconBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapWidget_PinIconBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapWidget_PinIconBtn.MapWidget_PinIconBtn_C");
		return ptr;
	}

}


