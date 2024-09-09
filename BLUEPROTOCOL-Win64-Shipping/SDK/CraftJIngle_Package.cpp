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
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.GetisFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isFail                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftJIngle_C::GetisFailure(bool* isFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.GetisFailure");
		
		UCraftJIngle_C_GetisFailure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isFail != nullptr)
			*isFail = params.isFail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.GetIsCritical
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCritical                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftJIngle_C::GetIsCritical(bool* IsCritical)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.GetIsCritical");
		
		UCraftJIngle_C_GetIsCritical_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsCritical != nullptr)
			*IsCritical = params.IsCritical;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.GetIsSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSuccess                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftJIngle_C::GetIsSuccess(bool* IsSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.GetIsSuccess");
		
		UCraftJIngle_C_GetIsSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSuccess != nullptr)
			*IsSuccess = params.IsSuccess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.SetStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCritical                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFail                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCraftJIngle_C::SetStatus(bool IsSuccess, bool IsCritical, bool isFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.SetStatus");
		
		UCraftJIngle_C_SetStatus_Params params {};
		params.IsSuccess = IsSuccess;
		params.IsCritical = IsCritical;
		params.isFail = isFail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.Construct
	 * 		Flags  -> ()
	 */
	void UCraftJIngle_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.Construct");
		
		UCraftJIngle_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.OnAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftJIngle_C::OnAnimationStarted(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.OnAnimationStarted");
		
		UCraftJIngle_C_OnAnimationStarted_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftJIngle_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.OnAnimationFinished");
		
		UCraftJIngle_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.Play Success
	 * 		Flags  -> ()
	 */
	void UCraftJIngle_C::PlaySuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.Play Success");
		
		UCraftJIngle_C_PlaySuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.Play Failure
	 * 		Flags  -> ()
	 */
	void UCraftJIngle_C::PlayFailure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.Play Failure");
		
		UCraftJIngle_C_PlayFailure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.Play Critical
	 * 		Flags  -> ()
	 */
	void UCraftJIngle_C::PlayCritical()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.Play Critical");
		
		UCraftJIngle_C_PlayCritical_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.KickSE
	 * 		Flags  -> ()
	 */
	void UCraftJIngle_C::KickSE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.KickSE");
		
		UCraftJIngle_C_KickSE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.ExecuteUbergraph_CraftJIngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCraftJIngle_C::ExecuteUbergraph_CraftJIngle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.ExecuteUbergraph_CraftJIngle");
		
		UCraftJIngle_C_ExecuteUbergraph_CraftJIngle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CraftJIngle.CraftJIngle_C.OnAnimFinished__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCraftJIngle_C::OnAnimFinished__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CraftJIngle.CraftJIngle_C.OnAnimFinished__DelegateSignature");
		
		UCraftJIngle_C_OnAnimFinished__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftJIngle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftJIngle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CraftJIngle.CraftJIngle_C");
		return ptr;
	}

}


