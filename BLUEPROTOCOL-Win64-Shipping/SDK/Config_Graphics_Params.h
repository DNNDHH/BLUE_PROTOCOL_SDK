#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Config_Graphics.Config_Graphics_C.Get_BattleScoreWeaponEffect_Visibility_1
	 */
	struct UConfig_Graphics_C_Get_BattleScoreWeaponEffect_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.On_Cmb_BSWeaponEffectToOthers_GenerateWidget_1
	 */
	struct UConfig_Graphics_C_On_Cmb_BSWeaponEffectToOthers_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.On_Cmb_BSWeaponEffectOthers_GenerateWidget_1
	 */
	struct UConfig_Graphics_C_On_Cmb_BSWeaponEffectOthers_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.On_Cmb_BSWeaponEffectSelfs_GenerateWidget_1
	 */
	struct UConfig_Graphics_C_On_Cmb_BSWeaponEffectSelfs_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.GenerateBSWeaponEffects
	 */
	struct UConfig_Graphics_C_GenerateBSWeaponEffects_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.GenerateCameraShakeLevel
	 */
	struct UConfig_Graphics_C_GenerateCameraShakeLevel_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.Get Visibility CameraShakeLevel
	 */
	struct UConfig_Graphics_C_GetVisibilityCameraShakeLevel_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.IsDiffOptions
	 */
	struct UConfig_Graphics_C_IsDiffOptions_Params
	{
	public:
		bool                                                       bDiff;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.On_Cmb_CameraShakeLevel_GenerateWidget_1
	 */
	struct UConfig_Graphics_C_On_Cmb_CameraShakeLevel_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.On_Cmb_ViewLimit_GenerateWidget_1
	 */
	struct UConfig_Graphics_C_On_Cmb_ViewLimit_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.On_Preset_GenerateWidget_1
	 */
	struct UConfig_Graphics_C_On_Preset_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.InitializePlayerSave
	 */
	struct UConfig_Graphics_C_InitializePlayerSave_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.FindPresetData
	 */
	struct UConfig_Graphics_C_FindPresetData_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.On_Preset_GenerateWidget_2
	 */
	struct UConfig_Graphics_C_On_Preset_GenerateWidget_2_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.Construct
	 */
	struct UConfig_Graphics_C_Construct_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.ApplySetting
	 */
	struct UConfig_Graphics_C_ApplySetting_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.SelectPreset
	 */
	struct UConfig_Graphics_C_SelectPreset_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.GeneratePresetData
	 */
	struct UConfig_Graphics_C_GeneratePresetData_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.OnChangeGraphicsSlider
	 */
	struct UConfig_Graphics_C_OnChangeGraphicsSlider_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGraphicsSliderSetting                                     Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.LoadGraphicsSaveData
	 */
	struct UConfig_Graphics_C_LoadGraphicsSaveData_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.ApplyBaseData
	 */
	struct UConfig_Graphics_C_ApplyBaseData_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__CheckBoxShowFPS_K2Node_ComponentBoundEvent_27_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.GenerateFPSLimit
	 */
	struct UConfig_Graphics_C_GenerateFPSLimit_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Cmb_FPSLimit_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.Save
	 */
	struct UConfig_Graphics_C_Save_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__CB_LowGPUMode_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.GenerateViewLimit
	 */
	struct UConfig_Graphics_C_GenerateViewLimit_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__CheckBoxVSync_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.Destruct
	 */
	struct UConfig_Graphics_C_Destruct_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_GSlider_OtherPCVFXView_K2Node_ComponentBoundEvent_11_OnGraphicsChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.SetTitleMode
	 */
	struct UConfig_Graphics_C_SetTitleMode_Params
	{
	public:
		bool                                                       bTitle;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.Open
	 */
	struct UConfig_Graphics_C_Open_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.Close
	 */
	struct UConfig_Graphics_C_Close_Params
	{	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_GSlider_PartyVFXView_K2Node_ComponentBoundEvent_14_OnGraphicsChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPlayerImajin_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_GSlider_PlayerVFXView_K2Node_ComponentBoundEvent_12_OnGraphicsChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_CB_AlphaOtherPCImajin_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_CB_AlphaPartyImajin_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_Cmb_CameraShakeLevel_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_Cmb_CameraShakeLevel_K2Node_ComponentBoundEvent_16_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_Cmb_BSWeaponEffectSelfs_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_Cmb_BSWeaponEffectSelfs_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_Cmb_BSWeaponEffectOthers_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_Cmb_BSWeaponEffectOthers_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_Cmb_BSWeaponEffectToOthers_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_Cmb_BSWeaponEffectToOthers_K2Node_ComponentBoundEvent_19_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.BndEvt__Config_Graphics_CheckBoxThroughCameraNear_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_Graphics_C_BndEvt__Config_Graphics_CheckBoxThroughCameraNear_K2Node_ComponentBoundEvent_20_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_Graphics.Config_Graphics_C.ExecuteUbergraph_Config_Graphics
	 */
	struct UConfig_Graphics_C_ExecuteUbergraph_Config_Graphics_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
