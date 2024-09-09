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
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.SetStackMVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_P011HUDComponent_C::SetStackMVisibility(bool IsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.SetStackMVisibility");
		
		UBP_P011HUDComponent_C_SetStackMVisibility_Params params {};
		params.IsShow = IsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUpdateStackM
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::OnUpdateStackM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUpdateStackM");
		
		UBP_P011HUDComponent_C_OnUpdateStackM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.GetUIType
	 * 		Flags  -> ()
	 */
	ESBUIType UBP_P011HUDComponent_C::GetUIType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.GetUIType");
		
		UBP_P011HUDComponent_C_GetUIType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUpdateLayoutView
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::OnUpdateLayoutView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUpdateLayoutView");
		
		UBP_P011HUDComponent_C_OnUpdateLayoutView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUpdateMpGaugeUI
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::OnUpdateMpGaugeUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUpdateMpGaugeUI");
		
		UBP_P011HUDComponent_C_OnUpdateMpGaugeUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnRemoveUI
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::OnRemoveUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnRemoveUI");
		
		UBP_P011HUDComponent_C_OnRemoveUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnCreateUI
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::OnCreateUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnCreateUI");
		
		UBP_P011HUDComponent_C_OnCreateUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUpdate
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::OnUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUpdate");
		
		UBP_P011HUDComponent_C_OnUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUnbind
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::OnUnbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnUnbind");
		
		UBP_P011HUDComponent_C_OnUnbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnBind
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::OnBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnBind");
		
		UBP_P011HUDComponent_C_OnBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.BindOnChangeShowAlwaysHUD
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::BindOnChangeShowAlwaysHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.BindOnChangeShowAlwaysHUD");
		
		UBP_P011HUDComponent_C_BindOnChangeShowAlwaysHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.UnbindOnChangeShowAlwaysHUD
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::UnbindOnChangeShowAlwaysHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.UnbindOnChangeShowAlwaysHUD");
		
		UBP_P011HUDComponent_C_UnbindOnChangeShowAlwaysHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnChangeShowAlwaysHUD_event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsShow                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_P011HUDComponent_C::OnChangeShowAlwaysHUD_event(bool bIsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnChangeShowAlwaysHUD_event");
		
		UBP_P011HUDComponent_C_OnChangeShowAlwaysHUD_event_Params params {};
		params.bIsShow = bIsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.UIVisibleSettingChangeDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_P011HUDComponent_C::UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.UIVisibleSettingChangeDelegate_Event_1");
		
		UBP_P011HUDComponent_C_UIVisibleSettingChangeDelegate_Event_1_Params params {};
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
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.BindUIVisibleSettingChange
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::BindUIVisibleSettingChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.BindUIVisibleSettingChange");
		
		UBP_P011HUDComponent_C_BindUIVisibleSettingChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.UnbindUIVisibleSettingChange
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::UnbindUIVisibleSettingChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.UnbindUIVisibleSettingChange");
		
		UBP_P011HUDComponent_C_UnbindUIVisibleSettingChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.BindOnStartIntervalInspirationEvent
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::BindOnStartIntervalInspirationEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.BindOnStartIntervalInspirationEvent");
		
		UBP_P011HUDComponent_C_BindOnStartIntervalInspirationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.UnbindOnStartIntervalInspirationEvent
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::UnbindOnStartIntervalInspirationEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.UnbindOnStartIntervalInspirationEvent");
		
		UBP_P011HUDComponent_C_UnbindOnStartIntervalInspirationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnStartIntervalInspirationEvent
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::OnStartIntervalInspirationEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnStartIntervalInspirationEvent");
		
		UBP_P011HUDComponent_C_OnStartIntervalInspirationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.BindOnEndIntervalInspirationEvent
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::BindOnEndIntervalInspirationEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.BindOnEndIntervalInspirationEvent");
		
		UBP_P011HUDComponent_C_BindOnEndIntervalInspirationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.UnbindOnEndIntervalInspirationEvent
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::UnbindOnEndIntervalInspirationEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.UnbindOnEndIntervalInspirationEvent");
		
		UBP_P011HUDComponent_C_UnbindOnEndIntervalInspirationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnEndIntervalInspirationEvent
	 * 		Flags  -> ()
	 */
	void UBP_P011HUDComponent_C::OnEndIntervalInspirationEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.OnEndIntervalInspirationEvent");
		
		UBP_P011HUDComponent_C_OnEndIntervalInspirationEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_P011HUDComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.ReceiveTick");
		
		UBP_P011HUDComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P011HUDComponent.BP_P011HUDComponent_C.ExecuteUbergraph_BP_P011HUDComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_P011HUDComponent_C::ExecuteUbergraph_BP_P011HUDComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P011HUDComponent.BP_P011HUDComponent_C.ExecuteUbergraph_BP_P011HUDComponent");
		
		UBP_P011HUDComponent_C_ExecuteUbergraph_BP_P011HUDComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_P011HUDComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_P011HUDComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_P011HUDComponent.BP_P011HUDComponent_C");
		return ptr;
	}

}


