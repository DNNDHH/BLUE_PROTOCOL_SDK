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
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.GetCurrInteractWaitTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrInteractWaitTime                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarpCountDown_C::GetCurrInteractWaitTime(float* CurrInteractWaitTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.GetCurrInteractWaitTime");
		
		UWarpCountDown_C_GetCurrInteractWaitTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrInteractWaitTime != nullptr)
			*CurrInteractWaitTime = params.CurrInteractWaitTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.PlayAnimOut
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::PlayAnimOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.PlayAnimOut");
		
		UWarpCountDown_C_PlayAnimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.PlayAnimIn
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::PlayAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.PlayAnimIn");
		
		UWarpCountDown_C_PlayAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.OnCountdownCancelDelegate_イベント
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::OnCountdownCancelDelegate_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.OnCountdownCancelDelegate_イベント");
		
		UWarpCountDown_C_OnCountdownCancelDelegate__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.OnCountdownInteractionDelegate_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPress                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWarpCountDown_C::OnCountdownInteractionDelegate_(bool bPress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.OnCountdownInteractionDelegate_イベント");
		
		UWarpCountDown_C_OnCountdownInteractionDelegate__Params params {};
		params.bPress = bPress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.OnInteractRelease
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::OnInteractRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.OnInteractRelease");
		
		UWarpCountDown_C_OnInteractRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.OnInteractPress
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::OnInteractPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.OnInteractPress");
		
		UWarpCountDown_C_OnInteractPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.ClearInputParam
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::ClearInputParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.ClearInputParam");
		
		UWarpCountDown_C_ClearInputParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.SetInputBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsInputBlock                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWarpCountDown_C::SetInputBlock(bool IsInputBlock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.SetInputBlock");
		
		UWarpCountDown_C_SetInputBlock_Params params {};
		params.IsInputBlock = IsInputBlock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.UpdateInteractGauge
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::UpdateInteractGauge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.UpdateInteractGauge");
		
		UWarpCountDown_C_UpdateInteractGauge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.SetRemainCount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InRemainCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarpCountDown_C::SetRemainCount(float InRemainCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.SetRemainCount");
		
		UWarpCountDown_C_SetRemainCount_Params params {};
		params.InRemainCount = InRemainCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.SetLabel
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::SetLabel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.SetLabel");
		
		UWarpCountDown_C_SetLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.Update
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarpCountDown_C::Update(float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.Update");
		
		UWarpCountDown_C_Update_Params params {};
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.Unbind
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::Unbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.Unbind");
		
		UWarpCountDown_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.Bind
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.Bind");
		
		UWarpCountDown_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.Terminate
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::Terminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.Terminate");
		
		UWarpCountDown_C_Terminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.Initialize
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.Initialize");
		
		UWarpCountDown_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.Construct
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.Construct");
		
		UWarpCountDown_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarpCountDown_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.Tick");
		
		UWarpCountDown_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.Destruct
	 * 		Flags  -> ()
	 */
	void UWarpCountDown_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.Destruct");
		
		UWarpCountDown_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarpCountDown_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.OnAnimationFinished");
		
		UWarpCountDown_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WarpCountDown.WarpCountDown_C.ExecuteUbergraph_WarpCountDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWarpCountDown_C::ExecuteUbergraph_WarpCountDown(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WarpCountDown.WarpCountDown_C.ExecuteUbergraph_WarpCountDown");
		
		UWarpCountDown_C_ExecuteUbergraph_WarpCountDown_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWarpCountDown_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWarpCountDown_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WarpCountDown.WarpCountDown_C");
		return ptr;
	}

}


