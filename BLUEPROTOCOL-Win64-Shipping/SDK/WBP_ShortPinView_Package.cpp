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
	 * 		Name   -> Function WBP_ShortPinView.WBP_ShortPinView_C.SetPinPositionBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBShortPinWidget*                           Pin                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShortPinView_C::SetPinPositionBP(class USBShortPinWidget* Pin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShortPinView.WBP_ShortPinView_C.SetPinPositionBP");
		
		UWBP_ShortPinView_C_SetPinPositionBP_Params params {};
		params.Pin = Pin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShortPinView.WBP_ShortPinView_C.GetPlayerShortPinComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBPlayerShortPinComponent*                  PlayerShortPinComponent                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShortPinView_C::GetPlayerShortPinComponent(class USBPlayerShortPinComponent** PlayerShortPinComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShortPinView.WBP_ShortPinView_C.GetPlayerShortPinComponent");
		
		UWBP_ShortPinView_C_GetPlayerShortPinComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerShortPinComponent != nullptr)
			*PlayerShortPinComponent = params.PlayerShortPinComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShortPinView.WBP_ShortPinView_C.IsReleaseRayButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ShortPinView_C::IsReleaseRayButton(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShortPinView.WBP_ShortPinView_C.IsReleaseRayButton");
		
		UWBP_ShortPinView_C_IsReleaseRayButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShortPinView.WBP_ShortPinView_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ShortPinView_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShortPinView.WBP_ShortPinView_C.Construct");
		
		UWBP_ShortPinView_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShortPinView.WBP_ShortPinView_C.UpdateKeyConfig
	 * 		Flags  -> ()
	 */
	void UWBP_ShortPinView_C::UpdateKeyConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShortPinView.WBP_ShortPinView_C.UpdateKeyConfig");
		
		UWBP_ShortPinView_C_UpdateKeyConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShortPinView.WBP_ShortPinView_C.SetUIVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_ShortPinView_C::SetUIVisible(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShortPinView.WBP_ShortPinView_C.SetUIVisible");
		
		UWBP_ShortPinView_C_SetUIVisible_Params params {};
		params.InUIType = InUIType;
		params.bInVisibility = bInVisibility;
		params.bInInstantly = bInInstantly;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ShortPinView.WBP_ShortPinView_C.ExecuteUbergraph_WBP_ShortPinView
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ShortPinView_C::ExecuteUbergraph_WBP_ShortPinView(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ShortPinView.WBP_ShortPinView_C.ExecuteUbergraph_WBP_ShortPinView");
		
		UWBP_ShortPinView_C_ExecuteUbergraph_WBP_ShortPinView_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ShortPinView_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ShortPinView_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ShortPinView.WBP_ShortPinView_C");
		return ptr;
	}

}


