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
	 * Function GeneralConfig.GeneralConfig_C.Get_HideOthersPlayerAtFishing_Visibility_1
	 */
	struct UGeneralConfig_C_Get_HideOthersPlayerAtFishing_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.On_Cmb_LogoPosition_GenerateWidget_1
	 */
	struct UGeneralConfig_C_On_Cmb_LogoPosition_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.On_Cmb_PadKeyView_GenerateWidget_1
	 */
	struct UGeneralConfig_C_On_Cmb_PadKeyView_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.On_Cmb_LockTargetType_GenerateWidget_1
	 */
	struct UGeneralConfig_C_On_Cmb_LockTargetType_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.On_Cmb_AutoTarget_GenerateWidget_1
	 */
	struct UGeneralConfig_C_On_Cmb_AutoTarget_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.On_Cmb_WeaponVisibility_GenerateWidget_1
	 */
	struct UGeneralConfig_C_On_Cmb_WeaponVisibility_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.On_Cmb_ShortcutRingMode_GenerateWidget_1
	 */
	struct UGeneralConfig_C_On_Cmb_ShortcutRingMode_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.GenerateLockTargetType
	 */
	struct UGeneralConfig_C_GenerateLockTargetType_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.GenerateAutoTarget
	 */
	struct UGeneralConfig_C_GenerateAutoTarget_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.GenerateWeaponVisible
	 */
	struct UGeneralConfig_C_GenerateWeaponVisible_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.GenerateShortcutRingMode
	 */
	struct UGeneralConfig_C_GenerateShortcutRingMode_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.GenerateLogoPos
	 */
	struct UGeneralConfig_C_GenerateLogoPos_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.GeneratePadKeyView
	 */
	struct UGeneralConfig_C_GeneratePadKeyView_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.GenerateComboBox
	 */
	struct UGeneralConfig_C_GenerateComboBox_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.SetOperationModeCheckboxSeklected
	 */
	struct UGeneralConfig_C_SetOperationModeCheckboxSeklected_Params
	{
	public:
		ESBOperateMode                                             InSelectedOperateMode;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.Completed_C5B7DF9949CED661D78734AB2E938631
	 */
	struct UGeneralConfig_C_Completed_C5B7DF9949CED661D78734AB2E938631_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UJUU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              FilePath;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.Construct
	 */
	struct UGeneralConfig_C_Construct_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.OnSaveCharaConfig
	 */
	struct UGeneralConfig_C_OnSaveCharaConfig_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.Init
	 */
	struct UGeneralConfig_C_Init_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.OnSaveCharaConfigDelegate
	 */
	struct UGeneralConfig_C_OnSaveCharaConfigDelegate_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.Destruct
	 */
	struct UGeneralConfig_C_Destruct_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.UnbindDelegates
	 */
	struct UGeneralConfig_C_UnbindDelegates_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Cmb_PadKeyView_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Button_98_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Button_98_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.UpdateScreenshotSaveDirectoryText
	 */
	struct UGeneralConfig_C_UpdateScreenshotSaveDirectoryText_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__Button_ResetScreenshotSaveDirectory_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__GeneralConfig_Chk_PadButtonCrossBehavior_K2Node_ComponentBoundEvent_22_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfig_C_BndEvt__GeneralConfig_Chk_NotHideOthersPlayerAtFishing_K2Node_ComponentBoundEvent_23_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfig.GeneralConfig_C.ExecuteUbergraph_GeneralConfig
	 */
	struct UGeneralConfig_C_ExecuteUbergraph_GeneralConfig_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
