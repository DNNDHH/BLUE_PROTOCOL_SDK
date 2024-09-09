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
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.GetUIType
	 * 		Flags  -> ()
	 */
	ESBUIType UBP_P021HUDComponent_C::GetUIType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.GetUIType");
		
		UBP_P021HUDComponent_C_GetUIType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnUpdateLayoutView
	 * 		Flags  -> ()
	 */
	void UBP_P021HUDComponent_C::OnUpdateLayoutView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnUpdateLayoutView");
		
		UBP_P021HUDComponent_C_OnUpdateLayoutView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnRemoveUI
	 * 		Flags  -> ()
	 */
	void UBP_P021HUDComponent_C::OnRemoveUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnRemoveUI");
		
		UBP_P021HUDComponent_C_OnRemoveUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnCreateUI
	 * 		Flags  -> ()
	 */
	void UBP_P021HUDComponent_C::OnCreateUI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnCreateUI");
		
		UBP_P021HUDComponent_C_OnCreateUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnUnbind
	 * 		Flags  -> ()
	 */
	void UBP_P021HUDComponent_C::OnUnbind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnUnbind");
		
		UBP_P021HUDComponent_C_OnUnbind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnBind
	 * 		Flags  -> ()
	 */
	void UBP_P021HUDComponent_C::OnBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnBind");
		
		UBP_P021HUDComponent_C_OnBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.UIVisibleSettingChangeDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_P021HUDComponent_C::UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.UIVisibleSettingChangeDelegate_Event_1");
		
		UBP_P021HUDComponent_C_UIVisibleSettingChangeDelegate_Event_1_Params params {};
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
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnChangeShowAlwaysHUD_event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsShow                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_P021HUDComponent_C::OnChangeShowAlwaysHUD_event(bool bIsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.OnChangeShowAlwaysHUD_event");
		
		UBP_P021HUDComponent_C_OnChangeShowAlwaysHUD_event_Params params {};
		params.bIsShow = bIsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.BindUIVisibleSettingChange
	 * 		Flags  -> ()
	 */
	void UBP_P021HUDComponent_C::BindUIVisibleSettingChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.BindUIVisibleSettingChange");
		
		UBP_P021HUDComponent_C_BindUIVisibleSettingChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.BindOnChangeShowAlwaysHUD
	 * 		Flags  -> ()
	 */
	void UBP_P021HUDComponent_C::BindOnChangeShowAlwaysHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.BindOnChangeShowAlwaysHUD");
		
		UBP_P021HUDComponent_C_BindOnChangeShowAlwaysHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.UnbindOnChangeShowAlwaysHUD
	 * 		Flags  -> ()
	 */
	void UBP_P021HUDComponent_C::UnbindOnChangeShowAlwaysHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.UnbindOnChangeShowAlwaysHUD");
		
		UBP_P021HUDComponent_C_UnbindOnChangeShowAlwaysHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.UnbindUIVisibleSettingChange
	 * 		Flags  -> ()
	 */
	void UBP_P021HUDComponent_C::UnbindUIVisibleSettingChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.UnbindUIVisibleSettingChange");
		
		UBP_P021HUDComponent_C_UnbindUIVisibleSettingChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_P021HUDComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.ReceiveTick");
		
		UBP_P021HUDComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_P021HUDComponent.BP_P021HUDComponent_C.ExecuteUbergraph_BP_P021HUDComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_P021HUDComponent_C::ExecuteUbergraph_BP_P021HUDComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_P021HUDComponent.BP_P021HUDComponent_C.ExecuteUbergraph_BP_P021HUDComponent");
		
		UBP_P021HUDComponent_C_ExecuteUbergraph_BP_P021HUDComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_P021HUDComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_P021HUDComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_P021HUDComponent.BP_P021HUDComponent_C");
		return ptr;
	}

}


