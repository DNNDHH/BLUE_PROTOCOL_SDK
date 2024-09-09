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
	 * 		Name   -> Function JankenWindow.JankenWindow_C.GetJointGestureComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USBJointGestureComponent*                    OutJointGestureComponent                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJankenWindow_C::GetJointGestureComponent(bool* IsValid, class USBJointGestureComponent** OutJointGestureComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.GetJointGestureComponent");
		
		UJankenWindow_C_GetJointGestureComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (OutJointGestureComponent != nullptr)
			*OutJointGestureComponent = params.OutJointGestureComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.GetResultText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBJankenHandType                                  MyHandType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBJankenHandType                                  TargetHandType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutText                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UJankenWindow_C::GetResultText(ESBJankenHandType MyHandType, ESBJankenHandType TargetHandType, class FString* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.GetResultText");
		
		UJankenWindow_C_GetResultText_Params params {};
		params.MyHandType = MyHandType;
		params.TargetHandType = TargetHandType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.GetJankenHandText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBJankenHandType                                  InHnadType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutText                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UJankenWindow_C::GetJankenHandText(ESBJankenHandType InHnadType, class FString* OutText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.GetJankenHandText");
		
		UJankenWindow_C_GetJankenHandText_Params params {};
		params.InHnadType = InHnadType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutText != nullptr)
			*OutText = params.OutText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.JankenResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UJankenWindow_C::JankenResult(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.JankenResult");
		
		UJankenWindow_C_JankenResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.SelectButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJankenWindow_C::SelectButton(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.SelectButton");
		
		UJankenWindow_C_SelectButton_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.SetTimer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              InTimer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJankenWindow_C::SetTimer(float InTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.SetTimer");
		
		UJankenWindow_C_SetTimer_Params params {};
		params.InTimer = InTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UJankenWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.Destruct");
		
		UJankenWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.Close
	 * 		Flags  -> ()
	 */
	void UJankenWindow_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.Close");
		
		UJankenWindow_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJankenWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.Tick");
		
		UJankenWindow_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UJankenWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.Construct");
		
		UJankenWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UJankenWindow_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1");
		
		UJankenWindow_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UJankenWindow_C::BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");
		
		UJankenWindow_C_BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.ExecuteUbergraph_JankenWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UJankenWindow_C::ExecuteUbergraph_JankenWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.ExecuteUbergraph_JankenWindow");
		
		UJankenWindow_C_ExecuteUbergraph_JankenWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function JankenWindow.JankenWindow_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UJankenWindow_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function JankenWindow.JankenWindow_C.OnClose__DelegateSignature");
		
		UJankenWindow_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJankenWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJankenWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JankenWindow.JankenWindow_C");
		return ptr;
	}

}


