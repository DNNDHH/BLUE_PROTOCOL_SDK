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
	 * Function MapEditWindow.MapEditWindow_C.GetDialogMessage
	 */
	struct UMapEditWindow_C_GetDialogMessage_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.DeleteDialogYesNo
	 */
	struct UMapEditWindow_C_DeleteDialogYesNo_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.CreateDialogYesNo
	 */
	struct UMapEditWindow_C_CreateDialogYesNo_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
		class UBP_Dialog_C*                                        ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.SetGameMode
	 */
	struct UMapEditWindow_C_SetGameMode_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.SetGameModeAndUI
	 */
	struct UMapEditWindow_C_SetGameModeAndUI_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.SetMapSizeTitle
	 */
	struct UMapEditWindow_C_SetMapSizeTitle_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.Close
	 */
	struct UMapEditWindow_C_Close_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.Open
	 */
	struct UMapEditWindow_C_Open_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.Initialize
	 */
	struct UMapEditWindow_C_Initialize_Params
	{
	public:
		int32_t                                                    WindowSizeIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BGAlphaValue;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      IconSizeScale;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Zoom;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PinChecked;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.Unbind
	 */
	struct UMapEditWindow_C_Unbind_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.Bind
	 */
	struct UMapEditWindow_C_Bind_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.RegisterCancelKey
	 */
	struct UMapEditWindow_C_RegisterCancelKey_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.DeregisterCancelKey
	 */
	struct UMapEditWindow_C_DeregisterCancelKey_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.OnPressCancel
	 */
	struct UMapEditWindow_C_OnPressCancel_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UMapEditWindow_C_BndEvt__MapEditWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.BindClosedMenu
	 */
	struct UMapEditWindow_C_BindClosedMenu_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.UnbindClosedMenu
	 */
	struct UMapEditWindow_C_UnbindClosedMenu_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.CustomEvent_1
	 */
	struct UMapEditWindow_C_CustomEvent_1_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.CustomEvent_2
	 */
	struct UMapEditWindow_C_CustomEvent_2_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.BindVisibleSettingChangeDelegate
	 */
	struct UMapEditWindow_C_BindVisibleSettingChangeDelegate_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.UnbindVisibleSettingChangeDelegate
	 */
	struct UMapEditWindow_C_UnbindVisibleSettingChangeDelegate_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UMapEditWindow_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.OnAnimationFinished
	 */
	struct UMapEditWindow_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 */
	struct UMapEditWindow_C_BndEvt__MapEditWindow_SliderBG_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature
	 */
	struct UMapEditWindow_C_BndEvt__MapEditWindow_MapEditSlider_K2Node_ComponentBoundEvent_13_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature
	 */
	struct UMapEditWindow_C_BndEvt__MapEditWindow_SliderZ_K2Node_ComponentBoundEvent_15_OnValueChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature
	 */
	struct UMapEditWindow_C_BndEvt__MapEditWindow_MapEditWindowSize_K2Node_ComponentBoundEvent_19_OnWindowSizeChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature
	 */
	struct UMapEditWindow_C_BndEvt__MapEditWindow_WindowPin_K2Node_ComponentBoundEvent_3_OnPinVisible__DelegateSignature_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.DialogDelegate
	 */
	struct UMapEditWindow_C_DialogDelegate_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.BndEvt__MapEditWindow_BtnReset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMapEditWindow_C_BndEvt__MapEditWindow_BtnReset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.Construct
	 */
	struct UMapEditWindow_C_Construct_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.Destruct
	 */
	struct UMapEditWindow_C_Destruct_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.ExecuteUbergraph_MapEditWindow
	 */
	struct UMapEditWindow_C_ExecuteUbergraph_MapEditWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.OnPinVisible__DelegateSignature
	 */
	struct UMapEditWindow_C_OnPinVisible__DelegateSignature_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.OnReset__DelegateSignature
	 */
	struct UMapEditWindow_C_OnReset__DelegateSignature_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.OnWindowSizeChanged__DelegateSignature
	 */
	struct UMapEditWindow_C_OnWindowSizeChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.OnIconSizeChanged__DelegateSignature
	 */
	struct UMapEditWindow_C_OnIconSizeChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.OnOutAnim__DelegateSignature
	 */
	struct UMapEditWindow_C_OnOutAnim__DelegateSignature_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.OnInAnim__DelegateSignature
	 */
	struct UMapEditWindow_C_OnInAnim__DelegateSignature_Params
	{	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.OnBGAlphaChanged__DelegateSignature
	 */
	struct UMapEditWindow_C_OnBGAlphaChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapEditWindow.MapEditWindow_C.OnRangeScaleChanged__DelegateSignature
	 */
	struct UMapEditWindow_C_OnRangeScaleChanged__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
