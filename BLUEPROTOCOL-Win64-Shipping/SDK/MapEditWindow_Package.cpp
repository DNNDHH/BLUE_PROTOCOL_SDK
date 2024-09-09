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
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.GetDialogMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (Parm, OutParm)
	 */
	void UMapEditWindow_C::GetDialogMessage(class FText* Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.GetDialogMessage");
		
		UMapEditWindow_C_GetDialogMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Message != nullptr)
			*Message = params.Message;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.DeleteDialogYesNo
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::DeleteDialogYesNo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.DeleteDialogYesNo");
		
		UMapEditWindow_C_DeleteDialogYesNo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.CreateDialogYesNo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	class UBP_Dialog_C* UMapEditWindow_C::CreateDialogYesNo(const class FText& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.CreateDialogYesNo");
		
		UMapEditWindow_C_CreateDialogYesNo_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.SetGameMode
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::SetGameMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.SetGameMode");
		
		UMapEditWindow_C_SetGameMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.SetGameModeAndUI
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::SetGameModeAndUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.SetGameModeAndUI");
		
		UMapEditWindow_C_SetGameModeAndUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.SetMapSizeTitle
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::SetMapSizeTitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.SetMapSizeTitle");
		
		UMapEditWindow_C_SetMapSizeTitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.Close
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.Close");
		
		UMapEditWindow_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.Open
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.Open");
		
		UMapEditWindow_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            WindowSizeIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              BGAlphaValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IconSizeScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Zoom                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PinChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapEditWindow_C::Initialize(int32_t WindowSizeIndex, float BGAlphaValue, float IconSizeScale, float Zoom, bool PinChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.Initialize");
		
		UMapEditWindow_C_Initialize_Params params {};
		params.WindowSizeIndex = WindowSizeIndex;
		params.BGAlphaValue = BGAlphaValue;
		params.IconSizeScale = IconSizeScale;
		params.Zoom = Zoom;
		params.PinChecked = PinChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.Unbind
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::Unbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.Unbind");
		
		UMapEditWindow_C_Unbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.Bind
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::Bind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.Bind");
		
		UMapEditWindow_C_Bind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.RegisterCancelKey
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::RegisterCancelKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.RegisterCancelKey");
		
		UMapEditWindow_C_RegisterCancelKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.DeregisterCancelKey
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::DeregisterCancelKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.DeregisterCancelKey");
		
		UMapEditWindow_C_DeregisterCancelKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.OnPressCancel
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::OnPressCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.OnPressCancel");
		
		UMapEditWindow_C_OnPressCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::BndEvt__MapEditWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		UMapEditWindow_C_BndEvt__MapEditWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.BindClosedMenu
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::BindClosedMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.BindClosedMenu");
		
		UMapEditWindow_C_BindClosedMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.UnbindClosedMenu
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::UnbindClosedMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.UnbindClosedMenu");
		
		UMapEditWindow_C_UnbindClosedMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Param                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindow_C::CustomEvent_1(class UObject* Sender, class UObject* Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.CustomEvent_1");
		
		UMapEditWindow_C_CustomEvent_1_Params params {};
		params.Sender = Sender;
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.CustomEvent_2
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.CustomEvent_2");
		
		UMapEditWindow_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.BindVisibleSettingChangeDelegate
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::BindVisibleSettingChangeDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.BindVisibleSettingChangeDelegate");
		
		UMapEditWindow_C_BindVisibleSettingChangeDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.UnbindVisibleSettingChangeDelegate
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::UnbindVisibleSettingChangeDelegate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.UnbindVisibleSettingChangeDelegate");
		
		UMapEditWindow_C_UnbindVisibleSettingChangeDelegate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.UIVisibleSettingChangeDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapEditWindow_C::UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.UIVisibleSettingChangeDelegate_Event_1");
		
		UMapEditWindow_C_UIVisibleSettingChangeDelegate_Event_1_Params params {};
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
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindow_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.OnAnimationFinished");
		
		UMapEditWindow_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindow_C::BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");
		
		UMapEditWindow_C_BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindow_C::BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature");
		
		UMapEditWindow_C_BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindow_C::BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature");
		
		UMapEditWindow_C_BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindow_C::BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature(int32_t Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature");
		
		UMapEditWindow_C_BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature_Params params {};
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapEditWindow_C::BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature");
		
		UMapEditWindow_C_BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.DialogDelegate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindow_C::DialogDelegate(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.DialogDelegate");
		
		UMapEditWindow_C_DialogDelegate_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_BtnReset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::BndEvt__MapEditWindow_BtnReset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_BtnReset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UMapEditWindow_C_BndEvt__MapEditWindow_BtnReset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.Construct");
		
		UMapEditWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.Destruct
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.Destruct");
		
		UMapEditWindow_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.ExecuteUbergraph_MapEditWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindow_C::ExecuteUbergraph_MapEditWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.ExecuteUbergraph_MapEditWindow");
		
		UMapEditWindow_C_ExecuteUbergraph_MapEditWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.OnPinVisible__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMapEditWindow_C::OnPinVisible__DelegateSignature(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.OnPinVisible__DelegateSignature");
		
		UMapEditWindow_C_OnPinVisible__DelegateSignature_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.OnReset__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::OnReset__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.OnReset__DelegateSignature");
		
		UMapEditWindow_C_OnReset__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.OnWindowSizeChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindow_C::OnWindowSizeChanged__DelegateSignature(int32_t Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.OnWindowSizeChanged__DelegateSignature");
		
		UMapEditWindow_C_OnWindowSizeChanged__DelegateSignature_Params params {};
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.OnIconSizeChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindow_C::OnIconSizeChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.OnIconSizeChanged__DelegateSignature");
		
		UMapEditWindow_C_OnIconSizeChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.OnOutAnim__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::OnOutAnim__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.OnOutAnim__DelegateSignature");
		
		UMapEditWindow_C_OnOutAnim__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.OnInAnim__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMapEditWindow_C::OnInAnim__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.OnInAnim__DelegateSignature");
		
		UMapEditWindow_C_OnInAnim__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.OnBGAlphaChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindow_C::OnBGAlphaChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.OnBGAlphaChanged__DelegateSignature");
		
		UMapEditWindow_C_OnBGAlphaChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MapEditWindow.MapEditWindow_C.OnRangeScaleChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapEditWindow_C::OnRangeScaleChanged__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapEditWindow.MapEditWindow_C.OnRangeScaleChanged__DelegateSignature");
		
		UMapEditWindow_C_OnRangeScaleChanged__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapEditWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapEditWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapEditWindow.MapEditWindow_C");
		return ptr;
	}

}


