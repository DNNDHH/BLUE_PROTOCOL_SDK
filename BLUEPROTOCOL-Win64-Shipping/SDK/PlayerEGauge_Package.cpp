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
	 * 		Name   -> Function PlayerEGauge.PlayerEGauge_C.PlayAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PlaybackSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerEGauge_C::PlayAnim(EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerEGauge.PlayerEGauge_C.PlayAnim");
		
		UPlayerEGauge_C_PlayAnim_Params params {};
		params.PlayMode = PlayMode;
		params.PlaybackSpeed = PlaybackSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerEGauge.PlayerEGauge_C.OnInAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bForward                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerEGauge_C::OnInAnimation(bool bForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerEGauge.PlayerEGauge_C.OnInAnimation");
		
		UPlayerEGauge_C_OnInAnimation_Params params {};
		params.bForward = bForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerEGauge.PlayerEGauge_C.SetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsEdit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerEGauge_C::SetEditMode(bool bIsEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerEGauge.PlayerEGauge_C.SetEditMode");
		
		UPlayerEGauge_C_SetEditMode_Params params {};
		params.bIsEdit = bIsEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerEGauge.PlayerEGauge_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerEGauge_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerEGauge.PlayerEGauge_C.Construct");
		
		UPlayerEGauge_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerEGauge.PlayerEGauge_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UPlayerEGauge_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerEGauge.PlayerEGauge_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1");
		
		UPlayerEGauge_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerEGauge.PlayerEGauge_C.ExecuteUbergraph_PlayerEGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerEGauge_C::ExecuteUbergraph_PlayerEGauge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerEGauge.PlayerEGauge_C.ExecuteUbergraph_PlayerEGauge");
		
		UPlayerEGauge_C_ExecuteUbergraph_PlayerEGauge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerEGauge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerEGauge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerEGauge.PlayerEGauge_C");
		return ptr;
	}

}


