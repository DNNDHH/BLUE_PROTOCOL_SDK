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
	 * Function GeneralConfigCS.GeneralConfigCS_C.OnEndDialogPSOnly
	 */
	struct UGeneralConfigCS_C_OnEndDialogPSOnly_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.ShowDialogPSOnly
	 */
	struct UGeneralConfigCS_C_ShowDialogPSOnly_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2LQ8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.On_Cmb_LogoPosition_GenerateWidget_1
	 */
	struct UGeneralConfigCS_C_On_Cmb_LogoPosition_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.On_Cmb_PadKeyView_GenerateWidget_1
	 */
	struct UGeneralConfigCS_C_On_Cmb_PadKeyView_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.On_Cmb_LockTargetType_GenerateWidget_1
	 */
	struct UGeneralConfigCS_C_On_Cmb_LockTargetType_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.On_Cmb_AutoTarget_GenerateWidget_1
	 */
	struct UGeneralConfigCS_C_On_Cmb_AutoTarget_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.On_Cmb_WeaponVisibility_GenerateWidget_1
	 */
	struct UGeneralConfigCS_C_On_Cmb_WeaponVisibility_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.On_Cmb_ShortcutRingMode_GenerateWidget_1
	 */
	struct UGeneralConfigCS_C_On_Cmb_ShortcutRingMode_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.GenerateLockTargetType
	 */
	struct UGeneralConfigCS_C_GenerateLockTargetType_Params
	{	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.GenerateAutoTarget
	 */
	struct UGeneralConfigCS_C_GenerateAutoTarget_Params
	{	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.GenerateWeaponVisible
	 */
	struct UGeneralConfigCS_C_GenerateWeaponVisible_Params
	{	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.GenerateShortcutRingMode
	 */
	struct UGeneralConfigCS_C_GenerateShortcutRingMode_Params
	{	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.GenerateLogoPos
	 */
	struct UGeneralConfigCS_C_GenerateLogoPos_Params
	{	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.GeneratePadKeyView
	 */
	struct UGeneralConfigCS_C_GeneratePadKeyView_Params
	{	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.GenerateComboBox
	 */
	struct UGeneralConfigCS_C_GenerateComboBox_Params
	{	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.IsLoadedGeneralSave
	 */
	struct UGeneralConfigCS_C_IsLoadedGeneralSave_Params
	{	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.SetOperationModeCheckboxSeklected
	 */
	struct UGeneralConfigCS_C_SetOperationModeCheckboxSeklected_Params
	{
	public:
		ESBOperateMode                                             InSelectedOperateMode;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.Construct
	 */
	struct UGeneralConfigCS_C_Construct_Params
	{	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__CheckBox_MouseAndKeyboardOperate_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__CheckBox_GamepadOperate_K2Node_ComponentBoundEvent_16_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.OnSaveCharaConfig
	 */
	struct UGeneralConfigCS_C_OnSaveCharaConfig_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.Init
	 */
	struct UGeneralConfigCS_C_Init_Params
	{	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.OnSaveCharaConfigDelegate
	 */
	struct UGeneralConfigCS_C_OnSaveCharaConfigDelegate_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__Chk_HideBalloon_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__Chk_InterruptSilent_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.Destruct
	 */
	struct UGeneralConfigCS_C_Destruct_Params
	{	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.UnbindDelegates
	 */
	struct UGeneralConfigCS_C_UnbindDelegates_Params
	{	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__PadUISpeedSlider_K2Node_ComponentBoundEvent_6_OnChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Ratio;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__Cmb_LogoPosition_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__Chk_DemoCaption_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__Cmb_ShortcutRingMode_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__CB_RingCloseExec_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__CB_RingAutoClose_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__Chk_HideHadAtScreenshot_K2Node_ComponentBoundEvent_15_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__Chk_ShowScreenshotNotifications_K2Node_ComponentBoundEvent_17_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__Cmb_WeaponVisibility_K2Node_ComponentBoundEvent_18_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_LockTargetType_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__GeneralConfig_Cmb_AutoTarget_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__GeneralConfig_Chk_UsedCheckActive_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__GeneralConfig_Chk_ShowConfirmQuitPhotoMode_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.SetTitleMenuMode
	 */
	struct UGeneralConfigCS_C_SetTitleMenuMode_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.BndEvt__GeneralConfigCS_Chk_PSOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UGeneralConfigCS_C_BndEvt__GeneralConfigCS_Chk_PSOnly_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GeneralConfigCS.GeneralConfigCS_C.ExecuteUbergraph_GeneralConfigCS
	 */
	struct UGeneralConfigCS_C_ExecuteUbergraph_GeneralConfigCS_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
