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
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.InitializeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOnlyDisplay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNumberInputBase_C::InitializeValue(int32_t Number, int32_t NumberMin, int32_t NumberMax, bool bOnlyDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.InitializeValue");
		
		UNumberInputBase_C_InitializeValue_Params params {};
		params.Number = Number;
		params.NumberMin = NumberMin;
		params.NumberMax = NumberMax;
		params.bOnlyDisplay = bOnlyDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.GetValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNumberInputBase_C::GetValue(int32_t* Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.GetValue");
		
		UNumberInputBase_C_GetValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Number != nullptr)
			*Number = params.Number;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.Construct
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.Construct");
		
		UNumberInputBase_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.NumberPlus
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::NumberPlus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.NumberPlus");
		
		UNumberInputBase_C_NumberPlus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.NumberMinus
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::NumberMinus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.NumberMinus");
		
		UNumberInputBase_C_NumberMinus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.StartRepeatPlus
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::StartRepeatPlus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.StartRepeatPlus");
		
		UNumberInputBase_C_StartRepeatPlus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.StartRepeatMinus
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::StartRepeatMinus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.StartRepeatMinus");
		
		UNumberInputBase_C_StartRepeatMinus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.OnPressPlusButton
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::OnPressPlusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.OnPressPlusButton");
		
		UNumberInputBase_C_OnPressPlusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.OnReleasePlusButton
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::OnReleasePlusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.OnReleasePlusButton");
		
		UNumberInputBase_C_OnReleasePlusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.OnPressMinusButton
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::OnPressMinusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.OnPressMinusButton");
		
		UNumberInputBase_C_OnPressMinusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.OnReleaseMinusButton
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::OnReleaseMinusButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.OnReleaseMinusButton");
		
		UNumberInputBase_C_OnReleaseMinusButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.ClearHandle
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::ClearHandle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.ClearHandle");
		
		UNumberInputBase_C_ClearHandle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.UpdateButtonStatus
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::UpdateButtonStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.UpdateButtonStatus");
		
		UNumberInputBase_C_UpdateButtonStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.ChangeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InChangeValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNumberInputBase_C::ChangeValue(int32_t InChangeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.ChangeValue");
		
		UNumberInputBase_C_ChangeValue_Params params {};
		params.InChangeValue = InChangeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.OnClickedMaxButton
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::OnClickedMaxButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.OnClickedMaxButton");
		
		UNumberInputBase_C_OnClickedMaxButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.OnClickedMinButton
	 * 		Flags  -> ()
	 */
	void UNumberInputBase_C::OnClickedMinButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.OnClickedMinButton");
		
		UNumberInputBase_C_OnClickedMinButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.Event_OnValueChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnlyDisplay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNumberInputBase_C::Event_OnValueChanged(bool bOnlyDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.Event_OnValueChanged");
		
		UNumberInputBase_C_Event_OnValueChanged_Params params {};
		params.bOnlyDisplay = bOnlyDisplay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.ExecuteUbergraph_NumberInputBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNumberInputBase_C::ExecuteUbergraph_NumberInputBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.ExecuteUbergraph_NumberInputBase");
		
		UNumberInputBase_C_ExecuteUbergraph_NumberInputBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NumberInputBase.NumberInputBase_C.OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNumberInputBase_C::OnValueChanged__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NumberInputBase.NumberInputBase_C.OnValueChanged__DelegateSignature");
		
		UNumberInputBase_C_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNumberInputBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNumberInputBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NumberInputBase.NumberInputBase_C");
		return ptr;
	}

}


