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
	 * 		Name   -> Function KeyConfig_Slider.KeyConfig_Slider_C.SetNewMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowNewMark                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_Slider_C::SetNewMark(bool bShowNewMark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Slider.KeyConfig_Slider_C.SetNewMark");
		
		UKeyConfig_Slider_C_SetNewMark_Params params {};
		params.bShowNewMark = bShowNewMark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Slider.KeyConfig_Slider_C.IsChangeBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ChangeBefore                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_Slider_C::IsChangeBefore(bool* ChangeBefore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Slider.KeyConfig_Slider_C.IsChangeBefore");
		
		UKeyConfig_Slider_C_IsChangeBefore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChangeBefore != nullptr)
			*ChangeBefore = params.ChangeBefore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Slider.KeyConfig_Slider_C.SetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bChanged                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_Slider_C::SetChanged(bool bChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Slider.KeyConfig_Slider_C.SetChanged");
		
		UKeyConfig_Slider_C_SetChanged_Params params {};
		params.bChanged = bChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Slider.KeyConfig_Slider_C.GetRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_Slider_C::GetRatio(float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Slider.KeyConfig_Slider_C.GetRatio");
		
		UKeyConfig_Slider_C_GetRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Slider.KeyConfig_Slider_C.ApplyRatio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_Slider_C::ApplyRatio(float Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Slider.KeyConfig_Slider_C.ApplyRatio");
		
		UKeyConfig_Slider_C_ApplyRatio_Params params {};
		params.Ratio = Ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Slider.KeyConfig_Slider_C.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_Slider_C::GetValue(int32_t* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Slider.KeyConfig_Slider_C.GetValue");
		
		UKeyConfig_Slider_C_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Slider.KeyConfig_Slider_C.ApplyValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_Slider_C::ApplyValue(int32_t NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Slider.KeyConfig_Slider_C.ApplyValue");
		
		UKeyConfig_Slider_C_ApplyValue_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Slider.KeyConfig_Slider_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_Slider_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Slider.KeyConfig_Slider_C.PreConstruct");
		
		UKeyConfig_Slider_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Slider.KeyConfig_Slider_C.Construct
	 * 		Flags  -> ()
	 */
	void UKeyConfig_Slider_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Slider.KeyConfig_Slider_C.Construct");
		
		UKeyConfig_Slider_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Slider.KeyConfig_Slider_C.CallOnChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_Slider_C::CallOnChange(int32_t NewValue, float Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Slider.KeyConfig_Slider_C.CallOnChange");
		
		UKeyConfig_Slider_C_CallOnChange_Params params {};
		params.NewValue = NewValue;
		params.Ratio = Ratio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Slider.KeyConfig_Slider_C.ExecuteUbergraph_KeyConfig_Slider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_Slider_C::ExecuteUbergraph_KeyConfig_Slider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Slider.KeyConfig_Slider_C.ExecuteUbergraph_KeyConfig_Slider");
		
		UKeyConfig_Slider_C_ExecuteUbergraph_KeyConfig_Slider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Slider.KeyConfig_Slider_C.onChangeValue__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EConfig_KeyconfigItems                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UKeyConfig_Slider_C*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_Slider_C::onChangeValue__DelegateSignature(int32_t NewValue, float Ratio, EConfig_KeyconfigItems Type, class UKeyConfig_Slider_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Slider.KeyConfig_Slider_C.onChangeValue__DelegateSignature");
		
		UKeyConfig_Slider_C_onChangeValue__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		params.Ratio = Ratio;
		params.Type = Type;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyConfig_Slider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyConfig_Slider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyConfig_Slider.KeyConfig_Slider_C");
		return ptr;
	}

}


