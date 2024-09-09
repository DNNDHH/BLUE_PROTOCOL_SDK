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
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.PlayAnimOut
	 * 		Flags  -> ()
	 */
	void UBalloonWindow_C::PlayAnimOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.PlayAnimOut");
		
		UBalloonWindow_C_PlayAnimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.PlayAnimIn
	 * 		Flags  -> ()
	 */
	void UBalloonWindow_C::PlayAnimIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.PlayAnimIn");
		
		UBalloonWindow_C_PlayAnimIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.OnShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBBalloonWindowRequest                     InRequest                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBalloonWindow_C::OnShow(const struct FSBBalloonWindowRequest& InRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.OnShow");
		
		UBalloonWindow_C_OnShow_Params params {};
		params.InRequest = InRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.OnTick
	 * 		Flags  -> ()
	 */
	void UBalloonWindow_C::OnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.OnTick");
		
		UBalloonWindow_C_OnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.CheckDistanceLimit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBalloonWindow_C::CheckDistanceLimit(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.CheckDistanceLimit");
		
		UBalloonWindow_C_CheckDistanceLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.GetBasePosition
	 * 		Flags  -> ()
	 */
	struct FVector UBalloonWindow_C::GetBasePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.GetBasePosition");
		
		UBalloonWindow_C_GetBasePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.AdjustPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector2D UBalloonWindow_C::AdjustPosition(const struct FVector2D& Position, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.AdjustPosition");
		
		UBalloonWindow_C_AdjustPosition_Params params {};
		params.Position = Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.GetFaceCaptureComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USceneCaptureComponent2D*                    Component                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBalloonWindow_C::GetFaceCaptureComponent(class USceneCaptureComponent2D** Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.GetFaceCaptureComponent");
		
		UBalloonWindow_C_GetFaceCaptureComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Component != nullptr)
			*Component = params.Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBBalloonWindowRequest                     SBBalloonWindowRequest                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBalloonWindow_C::SetText(const struct FSBBalloonWindowRequest& SBBalloonWindowRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.SetText");
		
		UBalloonWindow_C_SetText_Params params {};
		params.SBBalloonWindowRequest = SBBalloonWindowRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.OnDestruct
	 * 		Flags  -> ()
	 */
	void UBalloonWindow_C::OnDestruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.OnDestruct");
		
		UBalloonWindow_C_OnDestruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UBalloonWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.Destruct");
		
		UBalloonWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBalloonWindow_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.OnAnimationFinished");
		
		UBalloonWindow_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BalloonWindow.BalloonWindow_C.ExecuteUbergraph_BalloonWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBalloonWindow_C::ExecuteUbergraph_BalloonWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BalloonWindow.BalloonWindow_C.ExecuteUbergraph_BalloonWindow");
		
		UBalloonWindow_C_ExecuteUbergraph_BalloonWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBalloonWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBalloonWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BalloonWindow.BalloonWindow_C");
		return ptr;
	}

}


