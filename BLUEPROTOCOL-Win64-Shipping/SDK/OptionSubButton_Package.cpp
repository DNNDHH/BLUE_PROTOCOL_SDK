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
	 * 		Name   -> Function OptionSubButton.OptionSubButton_C.SetBtnImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UImage*                                      BtnType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionSubButton_C::SetBtnImage(class UImage* BtnType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionSubButton.OptionSubButton_C.SetBtnImage");
		
		UOptionSubButton_C_SetBtnImage_Params params {};
		params.BtnType = BtnType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionSubButton.OptionSubButton_C.SetEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionSubButton_C::SetEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionSubButton.OptionSubButton_C.SetEnable");
		
		UOptionSubButton_C_SetEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionSubButton.OptionSubButton_C.Set Menu Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InFocus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionSubButton_C::SetMenuFocus(bool InFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionSubButton.OptionSubButton_C.Set Menu Focus");
		
		UOptionSubButton_C_SetMenuFocus_Params params {};
		params.InFocus = InFocus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionSubButton.OptionSubButton_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptionSubButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionSubButton.OptionSubButton_C.Construct");
		
		UOptionSubButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionSubButton.OptionSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionSubButton_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionSubButton.OptionSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UOptionSubButton_C_BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionSubButton.OptionSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionSubButton_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionSubButton.OptionSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");
		
		UOptionSubButton_C_BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionSubButton.OptionSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionSubButton_C::BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionSubButton.OptionSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature");
		
		UOptionSubButton_C_BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionSubButton.OptionSubButton_C.ExecuteUbergraph_OptionSubButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionSubButton_C::ExecuteUbergraph_OptionSubButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionSubButton.OptionSubButton_C.ExecuteUbergraph_OptionSubButton");
		
		UOptionSubButton_C_ExecuteUbergraph_OptionSubButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionSubButton.OptionSubButton_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionSubButton_C::OnClick__DelegateSignature(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionSubButton.OptionSubButton_C.OnClick__DelegateSignature");
		
		UOptionSubButton_C_OnClick__DelegateSignature_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionSubButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionSubButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionSubButton.OptionSubButton_C");
		return ptr;
	}

}


