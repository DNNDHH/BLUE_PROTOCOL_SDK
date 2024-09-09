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
	 * 		Name   -> Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.SetShotChargeGrpVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Reticle_ChargeLevel_C::SetShotChargeGrpVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.SetShotChargeGrpVisible");
		
		UUI_Reticle_ChargeLevel_C_SetShotChargeGrpVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.SetRootVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Reticle_ChargeLevel_C::SetRootVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.SetRootVisible");
		
		UUI_Reticle_ChargeLevel_C_SetRootVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.BindUIVisibleSetting
	 * 		Flags  -> ()
	 */
	void UUI_Reticle_ChargeLevel_C::BindUIVisibleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.BindUIVisibleSetting");
		
		UUI_Reticle_ChargeLevel_C_BindUIVisibleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.UnbindUIVisibleSetting
	 * 		Flags  -> ()
	 */
	void UUI_Reticle_ChargeLevel_C::UnbindUIVisibleSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.UnbindUIVisibleSetting");
		
		UUI_Reticle_ChargeLevel_C_UnbindUIVisibleSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.UIVisibleSettingChangeDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBUIType                                          InUIType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInVisibility                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInInstantly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Reticle_ChargeLevel_C::UIVisibleSettingChangeDelegate_Event_1(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.UIVisibleSettingChangeDelegate_Event_1");
		
		UUI_Reticle_ChargeLevel_C_UIVisibleSettingChangeDelegate_Event_1_Params params {};
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
	 * 		Name   -> Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Reticle_ChargeLevel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.Construct");
		
		UUI_Reticle_ChargeLevel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_Reticle_ChargeLevel_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.Destruct");
		
		UUI_Reticle_ChargeLevel_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.ExecuteUbergraph_UI_Reticle_ChargeLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Reticle_ChargeLevel_C::ExecuteUbergraph_UI_Reticle_ChargeLevel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C.ExecuteUbergraph_UI_Reticle_ChargeLevel");
		
		UUI_Reticle_ChargeLevel_C_ExecuteUbergraph_UI_Reticle_ChargeLevel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Reticle_ChargeLevel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Reticle_ChargeLevel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Reticle_ChargeLevel.UI_Reticle_ChargeLevel_C");
		return ptr;
	}

}


