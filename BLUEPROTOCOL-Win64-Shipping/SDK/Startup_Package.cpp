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
	 * 		Name   -> Function Startup.Startup_C.SequenceEvent__ENTRYPOINTStartup_1
	 * 		Flags  -> ()
	 */
	void UStartup_C::SequenceEvent__ENTRYPOINTStartup_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.SequenceEvent__ENTRYPOINTStartup_1");
		
		UStartup_C_SequenceEvent__ENTRYPOINTStartup_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.UpdateWatchTime
	 * 		Flags  -> ()
	 */
	void UStartup_C::UpdateWatchTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.UpdateWatchTime");
		
		UStartup_C_UpdateWatchTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.Is Today Watched
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsTodayWatch                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UStartup_C::IsTodayWatched(bool* IsTodayWatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.Is Today Watched");
		
		UStartup_C_IsTodayWatched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTodayWatch != nullptr)
			*IsTodayWatch = params.IsTodayWatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.StartAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            InAnimation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InStartTimeOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStartup_C::StartAnimation(class UWidgetAnimation* InAnimation, float InStartTimeOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.StartAnimation");
		
		UStartup_C_StartAnimation_Params params {};
		params.InAnimation = InAnimation;
		params.InStartTimeOffset = InStartTimeOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.TrySkip
	 * 		Flags  -> ()
	 */
	void UStartup_C::TrySkip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.TrySkip");
		
		UStartup_C_TrySkip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.InitSkipPoint
	 * 		Flags  -> ()
	 */
	void UStartup_C::InitSkipPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.InitSkipPoint");
		
		UStartup_C_InitSkipPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.InitAnimationDelegate
	 * 		Flags  -> ()
	 */
	void UStartup_C::InitAnimationDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.InitAnimationDelegate");
		
		UStartup_C_InitAnimationDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.PlayStackTop
	 * 		Flags  -> ()
	 */
	void UStartup_C::PlayStackTop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.PlayStackTop");
		
		UStartup_C_PlayStackTop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.AnimFinished
	 * 		Flags  -> ()
	 */
	void UStartup_C::AnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.AnimFinished");
		
		UStartup_C_AnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.Construct
	 * 		Flags  -> ()
	 */
	void UStartup_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.Construct");
		
		UStartup_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.CallFinish
	 * 		Flags  -> ()
	 */
	void UStartup_C::CallFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.CallFinish");
		
		UStartup_C_CallFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UStartup_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.CustomEvent_2");
		
		UStartup_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.BndEvt__AllowSkip_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStartup_C::BndEvt__AllowSkip_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.BndEvt__AllowSkip_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature");
		
		UStartup_C_BndEvt__AllowSkip_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.RequestBGM
	 * 		Flags  -> ()
	 */
	void UStartup_C::RequestBGM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.RequestBGM");
		
		UStartup_C_RequestBGM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.OnAnimationStarted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStartup_C::OnAnimationStarted(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.OnAnimationStarted");
		
		UStartup_C_OnAnimationStarted_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.Destruct
	 * 		Flags  -> ()
	 */
	void UStartup_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.Destruct");
		
		UStartup_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UStartup_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.CustomEvent_1");
		
		UStartup_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.TerminationRequest
	 * 		Flags  -> ()
	 */
	void UStartup_C::TerminationRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.TerminationRequest");
		
		UStartup_C_TerminationRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.TryRemove
	 * 		Flags  -> ()
	 */
	void UStartup_C::TryRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.TryRemove");
		
		UStartup_C_TryRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.ExecuteUbergraph_Startup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UStartup_C::ExecuteUbergraph_Startup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.ExecuteUbergraph_Startup");
		
		UStartup_C_ExecuteUbergraph_Startup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Startup.Startup_C.OnFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UStartup_C::OnFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Startup.Startup_C.OnFinish__DelegateSignature");
		
		UStartup_C_OnFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStartup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStartup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Startup.Startup_C");
		return ptr;
	}

}


