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
	 * 		Name   -> Function P020_Desire.P020_Desire_C.SetEdit Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               TrueIsEditMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP020_Desire_C::SetEditMode(bool TrueIsEditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Desire.P020_Desire_C.SetEdit Mode");
		
		UP020_Desire_C_SetEditMode_Params params {};
		params.TrueIsEditMode = TrueIsEditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Desire.P020_Desire_C.ChangeVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UP020_Desire_C::ChangeVisible(bool NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Desire.P020_Desire_C.ChangeVisible");
		
		UP020_Desire_C_ChangeVisible_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Desire.P020_Desire_C.BindOnStartintervalDesire
	 * 		Flags  -> ()
	 */
	void UP020_Desire_C::BindOnStartintervalDesire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Desire.P020_Desire_C.BindOnStartintervalDesire");
		
		UP020_Desire_C_BindOnStartintervalDesire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Desire.P020_Desire_C.OnStartIntervalDesire
	 * 		Flags  -> ()
	 */
	void UP020_Desire_C::OnStartIntervalDesire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Desire.P020_Desire_C.OnStartIntervalDesire");
		
		UP020_Desire_C_OnStartIntervalDesire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Desire.P020_Desire_C.UnBindOnStartintervalDesire
	 * 		Flags  -> ()
	 */
	void UP020_Desire_C::UnBindOnStartintervalDesire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Desire.P020_Desire_C.UnBindOnStartintervalDesire");
		
		UP020_Desire_C_UnBindOnStartintervalDesire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Desire.P020_Desire_C.OnEndIntervalDesire
	 * 		Flags  -> ()
	 */
	void UP020_Desire_C::OnEndIntervalDesire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Desire.P020_Desire_C.OnEndIntervalDesire");
		
		UP020_Desire_C_OnEndIntervalDesire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Desire.P020_Desire_C.BindOnEndIntervalDesire
	 * 		Flags  -> ()
	 */
	void UP020_Desire_C::BindOnEndIntervalDesire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Desire.P020_Desire_C.BindOnEndIntervalDesire");
		
		UP020_Desire_C_BindOnEndIntervalDesire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Desire.P020_Desire_C.UnBindOnEndIntervalDesire
	 * 		Flags  -> ()
	 */
	void UP020_Desire_C::UnBindOnEndIntervalDesire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Desire.P020_Desire_C.UnBindOnEndIntervalDesire");
		
		UP020_Desire_C_UnBindOnEndIntervalDesire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Desire.P020_Desire_C.Construct
	 * 		Flags  -> ()
	 */
	void UP020_Desire_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Desire.P020_Desire_C.Construct");
		
		UP020_Desire_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Desire.P020_Desire_C.Destruct
	 * 		Flags  -> ()
	 */
	void UP020_Desire_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Desire.P020_Desire_C.Destruct");
		
		UP020_Desire_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Desire.P020_Desire_C.UpdateGauge
	 * 		Flags  -> ()
	 */
	void UP020_Desire_C::UpdateGauge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Desire.P020_Desire_C.UpdateGauge");
		
		UP020_Desire_C_UpdateGauge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function P020_Desire.P020_Desire_C.ExecuteUbergraph_P020_Desire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UP020_Desire_C::ExecuteUbergraph_P020_Desire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function P020_Desire.P020_Desire_C.ExecuteUbergraph_P020_Desire");
		
		UP020_Desire_C_ExecuteUbergraph_P020_Desire_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UP020_Desire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UP020_Desire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass P020_Desire.P020_Desire_C");
		return ptr;
	}

}


