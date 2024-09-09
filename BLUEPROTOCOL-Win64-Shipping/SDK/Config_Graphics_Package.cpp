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
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.Get_BattleScoreWeaponEffect_Visibility_1
	 * 		Flags  -> ()
	 */
	ESlateVisibility UConfig_Graphics_C::Get_BattleScoreWeaponEffect_Visibility_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.Get_BattleScoreWeaponEffect_Visibility_1");
		
		UConfig_Graphics_C_Get_BattleScoreWeaponEffect_Visibility_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.On_Cmb_BSWeaponEffectToOthers_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UConfig_Graphics_C::On_Cmb_BSWeaponEffectToOthers_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.On_Cmb_BSWeaponEffectToOthers_GenerateWidget_1");
		
		UConfig_Graphics_C_On_Cmb_BSWeaponEffectToOthers_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.On_Cmb_BSWeaponEffectOthers_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UConfig_Graphics_C::On_Cmb_BSWeaponEffectOthers_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.On_Cmb_BSWeaponEffectOthers_GenerateWidget_1");
		
		UConfig_Graphics_C_On_Cmb_BSWeaponEffectOthers_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.On_Cmb_BSWeaponEffectSelfs_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UConfig_Graphics_C::On_Cmb_BSWeaponEffectSelfs_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.On_Cmb_BSWeaponEffectSelfs_GenerateWidget_1");
		
		UConfig_Graphics_C_On_Cmb_BSWeaponEffectSelfs_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.GenerateBSWeaponEffects
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::GenerateBSWeaponEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.GenerateBSWeaponEffects");
		
		UConfig_Graphics_C_GenerateBSWeaponEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.GenerateCameraShakeLevel
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::GenerateCameraShakeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.GenerateCameraShakeLevel");
		
		UConfig_Graphics_C_GenerateCameraShakeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.Get Visibility CameraShakeLevel
	 * 		Flags  -> ()
	 */
	ESlateVisibility UConfig_Graphics_C::GetVisibilityCameraShakeLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.Get Visibility CameraShakeLevel");
		
		UConfig_Graphics_C_GetVisibilityCameraShakeLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.IsDiffOptions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bDiff                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::IsDiffOptions(bool* bDiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.IsDiffOptions");
		
		UConfig_Graphics_C_IsDiffOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDiff != nullptr)
			*bDiff = params.bDiff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.On_Cmb_CameraShakeLevel_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UConfig_Graphics_C::On_Cmb_CameraShakeLevel_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.On_Cmb_CameraShakeLevel_GenerateWidget_1");
		
		UConfig_Graphics_C_On_Cmb_CameraShakeLevel_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.On_Cmb_ViewLimit_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UConfig_Graphics_C::On_Cmb_ViewLimit_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.On_Cmb_ViewLimit_GenerateWidget_1");
		
		UConfig_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.On_Preset_GenerateWidget_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UConfig_Graphics_C::On_Preset_GenerateWidget_1(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.On_Preset_GenerateWidget_1");
		
		UConfig_Graphics_C_On_Preset_GenerateWidget_1_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.InitializePlayerSave
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::InitializePlayerSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.InitializePlayerSave");
		
		UConfig_Graphics_C_InitializePlayerSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.FindPresetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::FindPresetData(class FString* Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.FindPresetData");
		
		UConfig_Graphics_C_FindPresetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Key != nullptr)
			*Key = params.Key;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.On_Preset_GenerateWidget_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class UWidget* UConfig_Graphics_C::On_Preset_GenerateWidget_2(const class FString& item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.On_Preset_GenerateWidget_2");
		
		UConfig_Graphics_C_On_Preset_GenerateWidget_2_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.Construct
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.Construct");
		
		UConfig_Graphics_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.ApplySetting
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::ApplySetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.ApplySetting");
		
		UConfig_Graphics_C_ApplySetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.SelectPreset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::SelectPreset(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.SelectPreset");
		
		UConfig_Graphics_C_SelectPreset_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.GeneratePresetData
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::GeneratePresetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.GeneratePresetData");
		
		UConfig_Graphics_C_GeneratePresetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.OnChangeGraphicsSlider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EGraphicsSliderSetting                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::OnChangeGraphicsSlider(int32_t Value, float Ratio, EGraphicsSliderSetting Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.OnChangeGraphicsSlider");
		
		UConfig_Graphics_C_OnChangeGraphicsSlider_Params params {};
		params.Value = Value;
		params.Ratio = Ratio;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.LoadGraphicsSaveData
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::LoadGraphicsSaveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.LoadGraphicsSaveData");
		
		UConfig_Graphics_C_LoadGraphicsSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.ApplyBaseData
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::ApplyBaseData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.ApplyBaseData");
		
		UConfig_Graphics_C_ApplyBaseData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.GenerateFPSLimit
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::GenerateFPSLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.GenerateFPSLimit");
		
		UConfig_Graphics_C_GenerateFPSLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.Save
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::Save()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.Save");
		
		UConfig_Graphics_C_Save_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.GenerateViewLimit
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::GenerateViewLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.GenerateViewLimit");
		
		UConfig_Graphics_C_GenerateViewLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.Destruct
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.Destruct");
		
		UConfig_Graphics_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature(int32_t NewValue, float Ratio, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		params.Ratio = Ratio;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.SetTitleMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTitle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::SetTitleMode(bool bTitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.SetTitleMode");
		
		UConfig_Graphics_C_SetTitleMode_Params params {};
		params.bTitle = bTitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.Open
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.Open");
		
		UConfig_Graphics_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.Close
	 * 		Flags  -> ()
	 */
	void UConfig_Graphics_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.Close");
		
		UConfig_Graphics_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature(int32_t NewValue, float Ratio, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		params.Ratio = Ratio;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Ratio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature(int32_t NewValue, float Ratio, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature_Params params {};
		params.NewValue = NewValue;
		params.Ratio = Ratio;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_Cmb_CameraShakeLevel_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_Cmb_CameraShakeLevel_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_Cmb_CameraShakeLevel_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_Cmb_CameraShakeLevel_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_Cmb_BSWeaponEffectSelfs_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_Cmb_BSWeaponEffectSelfs_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_Cmb_BSWeaponEffectSelfs_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_Cmb_BSWeaponEffectSelfs_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_Cmb_BSWeaponEffectOthers_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_Cmb_BSWeaponEffectOthers_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_Cmb_BSWeaponEffectOthers_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_Cmb_BSWeaponEffectOthers_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_Cmb_BSWeaponEffectToOthers_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_Cmb_BSWeaponEffectToOthers_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_Cmb_BSWeaponEffectToOthers_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_Cmb_BSWeaponEffectToOthers_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CheckBoxThroughCameraNear_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfig_Graphics_C::BndEvt__Config_Graphics_CheckBoxThroughCameraNear_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CheckBoxThroughCameraNear_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UConfig_Graphics_C_BndEvt__Config_Graphics_CheckBoxThroughCameraNear_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Config_Graphics.Config_Graphics_C.ExecuteUbergraph_Config_Graphics
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfig_Graphics_C::ExecuteUbergraph_Config_Graphics(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Config_Graphics.Config_Graphics_C.ExecuteUbergraph_Config_Graphics");
		
		UConfig_Graphics_C_ExecuteUbergraph_Config_Graphics_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConfig_Graphics_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConfig_Graphics_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Config_Graphics.Config_Graphics_C");
		return ptr;
	}

}


