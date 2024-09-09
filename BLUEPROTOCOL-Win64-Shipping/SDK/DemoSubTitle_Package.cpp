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
	 * 		Name   -> Function DemoSubTitle.DemoSubTitle_C.GetAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDemoSubTitleAnimationType                         InAnimationType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidgetAnimation*                            OutAnimation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDemoSubTitle_C::GetAnimation(EDemoSubTitleAnimationType InAnimationType, class UWidgetAnimation** OutAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoSubTitle.DemoSubTitle_C.GetAnimation");
		
		UDemoSubTitle_C_GetAnimation_Params params {};
		params.InAnimationType = InAnimationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAnimation != nullptr)
			*OutAnimation = params.OutAnimation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DemoSubTitle.DemoSubTitle_C.Construct
	 * 		Flags  -> ()
	 */
	void UDemoSubTitle_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoSubTitle.DemoSubTitle_C.Construct");
		
		UDemoSubTitle_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DemoSubTitle.DemoSubTitle_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDemoSubTitle_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoSubTitle.DemoSubTitle_C.OnAnimationFinished");
		
		UDemoSubTitle_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DemoSubTitle.DemoSubTitle_C.Finish
	 * 		Flags  -> ()
	 */
	void UDemoSubTitle_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoSubTitle.DemoSubTitle_C.Finish");
		
		UDemoSubTitle_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DemoSubTitle.DemoSubTitle_C.FailedFinish
	 * 		Flags  -> ()
	 */
	void UDemoSubTitle_C::FailedFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoSubTitle.DemoSubTitle_C.FailedFinish");
		
		UDemoSubTitle_C_FailedFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DemoSubTitle.DemoSubTitle_C.ExecuteUbergraph_DemoSubTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDemoSubTitle_C::ExecuteUbergraph_DemoSubTitle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoSubTitle.DemoSubTitle_C.ExecuteUbergraph_DemoSubTitle");
		
		UDemoSubTitle_C_ExecuteUbergraph_DemoSubTitle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function DemoSubTitle.DemoSubTitle_C.OnFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UDemoSubTitle_C::OnFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DemoSubTitle.DemoSubTitle_C.OnFinish__DelegateSignature");
		
		UDemoSubTitle_C_OnFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDemoSubTitle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDemoSubTitle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DemoSubTitle.DemoSubTitle_C");
		return ptr;
	}

}


