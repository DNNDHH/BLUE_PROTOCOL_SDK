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
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.InitFacialOption
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_InitFacialOption_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.On_FacialComboBox_GenerateWidget_1
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_On_FacialComboBox_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__UMG_PhotoModeControllMenu_FacialComboBox_K2Node_ComponentBoundEvent_31_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_LipDefault_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_LipDefault_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_LipOpen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_LipOpen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_LipSemiOpen_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_LipSemiOpen_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_LipClose_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_LipClose_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBCheckBox_EnableFacial_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialPrev_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__UMG_PhotoModeEmotionView_SBButton_FacialNext_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.ChangeFacialOption
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_ChangeFacialOption_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBSelectableButton_LookAtActive_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBSelectableButton_LookAtActive_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBSelectableButton_FixHead_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBSelectableButton_FixHead_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBSelectableButton_LookAtEyeActive_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBSelectableButton_LookAtEyeActive_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBSelectableButton_FixEye_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBSelectableButton_FixEye_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_Close_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_FaceTab_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_FaceTab_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_BodyTab_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_BodyTab_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateLeft2_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateLeft2_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateLeft2_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateLeft2_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateLeft_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateLeft_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateLeft_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateLeft_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateRight_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateRight_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateRight_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateRight_K2Node_ComponentBoundEvent_19_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateRight2_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateRight2_K2Node_ComponentBoundEvent_20_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateRight2_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_RotateRight2_K2Node_ComponentBoundEvent_21_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveLeft_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveLeft_K2Node_ComponentBoundEvent_22_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveLeft_K2Node_ComponentBoundEvent_23_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveLeft_K2Node_ComponentBoundEvent_23_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveForward_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveForward_K2Node_ComponentBoundEvent_24_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveForward_K2Node_ComponentBoundEvent_25_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveForward_K2Node_ComponentBoundEvent_25_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveBack_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveBack_K2Node_ComponentBoundEvent_26_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveBack_K2Node_ComponentBoundEvent_27_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveBack_K2Node_ComponentBoundEvent_27_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveRight_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveRight_K2Node_ComponentBoundEvent_28_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveRight_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_BndEvt__WBP_PhotoModePlayerDetailControlView_SBButton_MoveRight_K2Node_ComponentBoundEvent_29_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.SetData
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_SetData_Params
	{
	public:
		class USBPhotoModePlayerControlData*                       Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.Construct
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_Construct_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.OnUpdate
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_OnUpdate_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.DummyEvent
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_DummyEvent_Params
	{	};

	/**
	 * Function WBP_PhotoModePlayerDetailControlView.WBP_PhotoModePlayerDetailControlView_C.ExecuteUbergraph_WBP_PhotoModePlayerDetailControlView
	 */
	struct UWBP_PhotoModePlayerDetailControlView_C_ExecuteUbergraph_WBP_PhotoModePlayerDetailControlView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
