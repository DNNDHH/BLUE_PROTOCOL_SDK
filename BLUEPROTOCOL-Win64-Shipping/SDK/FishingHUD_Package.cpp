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
	 * 		Name   -> Function FishingHUD.FishingHUD_C.ResultVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingHUD_C::ResultVisibility(bool On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.ResultVisibility");
		
		UFishingHUD_C_ResultVisibility_Params params {};
		params.On = On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.ResetMenu
	 * 		Flags  -> ()
	 */
	void UFishingHUD_C::ResetMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.ResetMenu");
		
		UFishingHUD_C_ResetMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.WarningBackPackIsFull
	 * 		Flags  -> ()
	 */
	void UFishingHUD_C::WarningBackPackIsFull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.WarningBackPackIsFull");
		
		UFishingHUD_C_WarningBackPackIsFull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.Reset
	 * 		Flags  -> ()
	 */
	void UFishingHUD_C::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.Reset");
		
		UFishingHUD_C_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.HookSuccess
	 * 		Flags  -> ()
	 */
	void UFishingHUD_C::HookSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.HookSuccess");
		
		UFishingHUD_C_HookSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.CheckBackPack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFishingHUD_C::CheckBackPack(bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.CheckBackPack");
		
		UFishingHUD_C_CheckBackPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.Set State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerFishingState                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishingHUD_C::SetState(EPlayerFishingState Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.Set State");
		
		UFishingHUD_C_SetState_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.DebugFunc
	 * 		Flags  -> ()
	 */
	void UFishingHUD_C::DebugFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.DebugFunc");
		
		UFishingHUD_C_DebugFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.ExitEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InButtonWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishingHUD_C::ExitEvent(class UUserWidget* InButtonWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.ExitEvent");
		
		UFishingHUD_C_ExitEvent_Params params {};
		params.InButtonWidget = InButtonWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.ContinueFishing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 InButtonWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishingHUD_C::ContinueFishing(class UUserWidget* InButtonWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.ContinueFishing");
		
		UFishingHUD_C_ContinueFishing_Params params {};
		params.InButtonWidget = InButtonWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.DialogEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishingHUD_C::DialogEnd(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.DialogEnd");
		
		UFishingHUD_C_DialogEnd_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.Destruct
	 * 		Flags  -> ()
	 */
	void UFishingHUD_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.Destruct");
		
		UFishingHUD_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.BndEvt__FishingHUD_SBButtonFullScreen_C_98_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFishingHUD_C::BndEvt__FishingHUD_SBButtonFullScreen_C_98_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.BndEvt__FishingHUD_SBButtonFullScreen_C_98_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UFishingHUD_C_BndEvt__FishingHUD_SBButtonFullScreen_C_98_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.ReceiveMessageDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBChatMessage*                              Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBChatUIMessage                            Mess                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UFishingHUD_C::ReceiveMessageDelegate(class USBChatMessage* Message, const struct FSBChatUIMessage& Mess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.ReceiveMessageDelegate");
		
		UFishingHUD_C_ReceiveMessageDelegate_Params params {};
		params.Message = Message;
		params.Mess = Mess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.EscExit
	 * 		Flags  -> ()
	 */
	void UFishingHUD_C::EscExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.EscExit");
		
		UFishingHUD_C_EscExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UFishingHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.Construct");
		
		UFishingHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishingHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.Tick");
		
		UFishingHUD_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.ExecuteUbergraph_FishingHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFishingHUD_C::ExecuteUbergraph_FishingHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.ExecuteUbergraph_FishingHUD");
		
		UFishingHUD_C_ExecuteUbergraph_FishingHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.Continue__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFishingHUD_C::Continue__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.Continue__DelegateSignature");
		
		UFishingHUD_C_Continue__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FishingHUD.FishingHUD_C.ExitFishing__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UFishingHUD_C::ExitFishing__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FishingHUD.FishingHUD_C.ExitFishing__DelegateSignature");
		
		UFishingHUD_C_ExitFishing__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFishingHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFishingHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FishingHUD.FishingHUD_C");
		return ptr;
	}

}


