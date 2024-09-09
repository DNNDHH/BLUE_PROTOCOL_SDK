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
	 * 		Name   -> Function KeyConfig_Radio.KeyConfig_Radio_C.SetNewMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowNewMark                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_Radio_C::SetNewMark(bool bShowNewMark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Radio.KeyConfig_Radio_C.SetNewMark");
		
		UKeyConfig_Radio_C_SetNewMark_Params params {};
		params.bShowNewMark = bShowNewMark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Radio.KeyConfig_Radio_C.SetChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bChanged                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_Radio_C::SetChanged(bool bChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Radio.KeyConfig_Radio_C.SetChanged");
		
		UKeyConfig_Radio_C_SetChanged_Params params {};
		params.bChanged = bChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Radio.KeyConfig_Radio_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UKeyConfig_Radio_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Radio.KeyConfig_Radio_C.PreConstruct");
		
		UKeyConfig_Radio_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Radio.KeyConfig_Radio_C.ReInitData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FRadioButtonData>                    RadioButtonData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UKeyConfig_Radio_C::ReInitData(TArray<struct FRadioButtonData> RadioButtonData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Radio.KeyConfig_Radio_C.ReInitData");
		
		UKeyConfig_Radio_C_ReInitData_Params params {};
		params.RadioButtonData = RadioButtonData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Radio.KeyConfig_Radio_C.SelectButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class URadioButton_C*                              RadioButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_Radio_C::SelectButton(bool IsChecked, class URadioButton_C* RadioButton, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Radio.KeyConfig_Radio_C.SelectButton");
		
		UKeyConfig_Radio_C_SelectButton_Params params {};
		params.IsChecked = IsChecked;
		params.RadioButton = RadioButton;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Radio.KeyConfig_Radio_C.Set Focus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_Radio_C::SetFocus(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Radio.KeyConfig_Radio_C.Set Focus");
		
		UKeyConfig_Radio_C_SetFocus_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Radio.KeyConfig_Radio_C.ExecuteUbergraph_KeyConfig_Radio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_Radio_C::ExecuteUbergraph_KeyConfig_Radio(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Radio.KeyConfig_Radio_C.ExecuteUbergraph_KeyConfig_Radio");
		
		UKeyConfig_Radio_C_ExecuteUbergraph_KeyConfig_Radio_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function KeyConfig_Radio.KeyConfig_Radio_C.SelectRadioButton__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EConfig_KeyconfigItems                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UKeyConfig_Radio_C::SelectRadioButton__DelegateSignature(int32_t Index, EConfig_KeyconfigItems Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function KeyConfig_Radio.KeyConfig_Radio_C.SelectRadioButton__DelegateSignature");
		
		UKeyConfig_Radio_C_SelectRadioButton__DelegateSignature_Params params {};
		params.Index = Index;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKeyConfig_Radio_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKeyConfig_Radio_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KeyConfig_Radio.KeyConfig_Radio_C");
		return ptr;
	}

}


