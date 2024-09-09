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
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.IsDiffOptions
	 */
	struct UConfig_GraphicsCS_C_IsDiffOptions_Params
	{
	public:
		bool                                                       bDiff;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.On_Cmb_ViewLimit_GenerateWidget_1
	 */
	struct UConfig_GraphicsCS_C_On_Cmb_ViewLimit_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.On_Preset_GenerateWidget_1
	 */
	struct UConfig_GraphicsCS_C_On_Preset_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.InitializePlayerSave
	 */
	struct UConfig_GraphicsCS_C_InitializePlayerSave_Params
	{	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.FindPresetData
	 */
	struct UConfig_GraphicsCS_C_FindPresetData_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.On_Preset_GenerateWidget_2
	 */
	struct UConfig_GraphicsCS_C_On_Preset_GenerateWidget_2_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.PreConstruct
	 */
	struct UConfig_GraphicsCS_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.Construct
	 */
	struct UConfig_GraphicsCS_C_Construct_Params
	{	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.ApplySetting
	 */
	struct UConfig_GraphicsCS_C_ApplySetting_Params
	{	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.SelectPreset
	 */
	struct UConfig_GraphicsCS_C_SelectPreset_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.GeneratePresetData
	 */
	struct UConfig_GraphicsCS_C_GeneratePresetData_Params
	{	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.OnChangeGraphicsSlider
	 */
	struct UConfig_GraphicsCS_C_OnChangeGraphicsSlider_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EGraphicsSliderSetting                                     Type;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.LoadGraphicsSaveData
	 */
	struct UConfig_GraphicsCS_C_LoadGraphicsSaveData_Params
	{	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.ApplyBaseData
	 */
	struct UConfig_GraphicsCS_C_ApplyBaseData_Params
	{	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.GenerateFPSLimit
	 */
	struct UConfig_GraphicsCS_C_GenerateFPSLimit_Params
	{	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.Save
	 */
	struct UConfig_GraphicsCS_C_Save_Params
	{	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_GraphicsCS_C_BndEvt__CB_NamePlateParty_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_GraphicsCS_C_BndEvt__CB_NamePlateOther_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_GraphicsCS_C_BndEvt__CB_AlwaysShowHUD_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.GenerateViewLimit
	 */
	struct UConfig_GraphicsCS_C_GenerateViewLimit_Params
	{	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UConfig_GraphicsCS_C_BndEvt__Cmb_ViewLimit_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_GraphicsCS_C_BndEvt__CB_NamePlateTeamTag_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_162_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UConfig_GraphicsCS_C_BndEvt__Config_Graphics_SBCheckBoxCmnCheckBox01_C_866_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.Destruct
	 */
	struct UConfig_GraphicsCS_C_Destruct_Params
	{	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.Open
	 */
	struct UConfig_GraphicsCS_C_Open_Params
	{	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.Close
	 */
	struct UConfig_GraphicsCS_C_Close_Params
	{	};

	/**
	 * Function Config_GraphicsCS.Config_GraphicsCS_C.ExecuteUbergraph_Config_GraphicsCS
	 */
	struct UConfig_GraphicsCS_C_ExecuteUbergraph_Config_GraphicsCS_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
