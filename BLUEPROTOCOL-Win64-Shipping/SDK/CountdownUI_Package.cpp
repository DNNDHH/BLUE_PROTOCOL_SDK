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
	 * 		Name   -> Function CountdownUI.CountdownUI_C.SetYPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownUI_C::SetYPosition(float Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.SetYPosition");
		
		UCountdownUI_C_SetYPosition_Params params {};
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.CheckCountCancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NotCancel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCountdownUI_C::CheckCountCancel(bool* NotCancel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.CheckCountCancel");
		
		UCountdownUI_C_CheckCountCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NotCancel != nullptr)
			*NotCancel = params.NotCancel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.SetBlockInputForCountdownUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InBlockInput                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCountdownUI_C::SetBlockInputForCountdownUI(bool InBlockInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.SetBlockInputForCountdownUI");
		
		UCountdownUI_C_SetBlockInputForCountdownUI_Params params {};
		params.InBlockInput = InBlockInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.UpdateInteractionGauge
	 * 		Flags  -> ()
	 */
	void UCountdownUI_C::UpdateInteractionGauge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.UpdateInteractionGauge");
		
		UCountdownUI_C_UpdateInteractionGauge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.IsChatModeActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCountdownUI_C::IsChatModeActive(bool* IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.IsChatModeActive");
		
		UCountdownUI_C_IsChatModeActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.SetMessageTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsCountdown                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCountdownUI_C::SetMessageTextId(int32_t InTextId, bool IsCountdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.SetMessageTextId");
		
		UCountdownUI_C_SetMessageTextId_Params params {};
		params.InTextId = InTextId;
		params.IsCountdown = IsCountdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.SetCountdownTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownUI_C::SetCountdownTime(int32_t InTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.SetCountdownTime");
		
		UCountdownUI_C_SetCountdownTime_Params params {};
		params.InTime = InTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.SetCountdownTimeValueText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownUI_C::SetCountdownTimeValueText(int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.SetCountdownTimeValueText");
		
		UCountdownUI_C_SetCountdownTimeValueText_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.SetMessageText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsCountdown                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCountdownUI_C::SetMessageText(const class FText& InText, bool IsCountdown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.SetMessageText");
		
		UCountdownUI_C_SetMessageText_Params params {};
		params.InText = InText;
		params.IsCountdown = IsCountdown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.Construct
	 * 		Flags  -> ()
	 */
	void UCountdownUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.Construct");
		
		UCountdownUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.Tick");
		
		UCountdownUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.BeginInteractionWait
	 * 		Flags  -> ()
	 */
	void UCountdownUI_C::BeginInteractionWait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.BeginInteractionWait");
		
		UCountdownUI_C_BeginInteractionWait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.StartCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InMessage                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            InCountdownTime                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownUI_C::StartCountdown(const class FText& InMessage, int32_t InCountdownTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.StartCountdown");
		
		UCountdownUI_C_StartCountdown_Params params {};
		params.InMessage = InMessage;
		params.InCountdownTime = InCountdownTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.Hide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECountdownResult                                   Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownUI_C::Hide(ECountdownResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.Hide");
		
		UCountdownUI_C_Hide_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.StartCountdown_ECountdownType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECountdownType                                     InCountdownType                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InCountdownTime                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownUI_C::StartCountdown_ECountdownType(ECountdownType InCountdownType, int32_t InCountdownTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.StartCountdown_ECountdownType");
		
		UCountdownUI_C_StartCountdown_ECountdownType_Params params {};
		params.InCountdownType = InCountdownType;
		params.InCountdownTime = InCountdownTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.OnPressInteraction
	 * 		Flags  -> ()
	 */
	void UCountdownUI_C::OnPressInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.OnPressInteraction");
		
		UCountdownUI_C_OnPressInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.OnReleaseInteraction
	 * 		Flags  -> ()
	 */
	void UCountdownUI_C::OnReleaseInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.OnReleaseInteraction");
		
		UCountdownUI_C_OnReleaseInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.StartNoCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InMessage                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCountdownUI_C::StartNoCountdown(const class FText& InMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.StartNoCountdown");
		
		UCountdownUI_C_StartNoCountdown_Params params {};
		params.InMessage = InMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.StartNoCountdown_ECountdownType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECountdownType                                     InCountdownType                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownUI_C::StartNoCountdown_ECountdownType(ECountdownType InCountdownType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.StartNoCountdown_ECountdownType");
		
		UCountdownUI_C_StartNoCountdown_ECountdownType_Params params {};
		params.InCountdownType = InCountdownType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.OnCountdownCancelDelegate_イベント
	 * 		Flags  -> ()
	 */
	void UCountdownUI_C::OnCountdownCancelDelegate_()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.OnCountdownCancelDelegate_イベント");
		
		UCountdownUI_C_OnCountdownCancelDelegate__Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.OnCountdownInteractionDelegate_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bPress                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCountdownUI_C::OnCountdownInteractionDelegate_(bool bPress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.OnCountdownInteractionDelegate_イベント");
		
		UCountdownUI_C_OnCountdownInteractionDelegate__Params params {};
		params.bPress = bPress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownUI_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.OnAnimationFinished");
		
		UCountdownUI_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.Destruct
	 * 		Flags  -> ()
	 */
	void UCountdownUI_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.Destruct");
		
		UCountdownUI_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.StartNoCountdown_BattleAreaMessage
	 * 		Flags  -> ()
	 */
	void UCountdownUI_C::StartNoCountdown_BattleAreaMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.StartNoCountdown_BattleAreaMessage");
		
		UCountdownUI_C_StartNoCountdown_BattleAreaMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.UnbindCountdownCancelDelegate
	 * 		Flags  -> ()
	 */
	void UCountdownUI_C::UnbindCountdownCancelDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.UnbindCountdownCancelDelegate");
		
		UCountdownUI_C_UnbindCountdownCancelDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.UIVisibleSettingChangeDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCountdownUI_C::UIVisibleSettingChangeDelegate_Event(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.UIVisibleSettingChangeDelegate_Event");
		
		UCountdownUI_C_UIVisibleSettingChangeDelegate_Event_Params params {};
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
	 * 		Name   -> Function CountdownUI.CountdownUI_C.ExecuteUbergraph_CountdownUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCountdownUI_C::ExecuteUbergraph_CountdownUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.ExecuteUbergraph_CountdownUI");
		
		UCountdownUI_C_ExecuteUbergraph_CountdownUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.OnCountdownCancel__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCountdownUI_C::OnCountdownCancel__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.OnCountdownCancel__DelegateSignature");
		
		UCountdownUI_C_OnCountdownCancel__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CountdownUI.CountdownUI_C.OnCountdownEnd__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCountdownUI_C::OnCountdownEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CountdownUI.CountdownUI_C.OnCountdownEnd__DelegateSignature");
		
		UCountdownUI_C_OnCountdownEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCountdownUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCountdownUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CountdownUI.CountdownUI_C");
		return ptr;
	}

}


