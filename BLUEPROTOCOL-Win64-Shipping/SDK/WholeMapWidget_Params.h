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
	 * Function WholeMapWidget.WholeMapWidget_C.SetDebugTraverseList
	 */
	struct UWholeMapWidget_C_SetDebugTraverseList_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnOpen
	 */
	struct UWholeMapWidget_C_OnOpen_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.PlayAnimOut
	 */
	struct UWholeMapWidget_C_PlayAnimOut_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.PlayAnimIn
	 */
	struct UWholeMapWidget_C_PlayAnimIn_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnSetOptionEditMode
	 */
	struct UWholeMapWidget_C_OnSetOptionEditMode_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnDeleteWholeMapEditWindow
	 */
	struct UWholeMapWidget_C_OnDeleteWholeMapEditWindow_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnCreateWholeMapEditWindow
	 */
	struct UWholeMapWidget_C_OnCreateWholeMapEditWindow_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnUnbind
	 */
	struct UWholeMapWidget_C_OnUnbind_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnBind
	 */
	struct UWholeMapWidget_C_OnBind_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnLoaded_2CCDB2684036170C3D919597C7222B2A
	 */
	struct UWholeMapWidget_C_OnLoaded_2CCDB2684036170C3D919597C7222B2A_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.BindVisibleSettingChangeDelegate
	 */
	struct UWholeMapWidget_C_BindVisibleSettingChangeDelegate_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UWholeMapWidget_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.UnbindVisibleSettingChangeDelegate
	 */
	struct UWholeMapWidget_C_UnbindVisibleSettingChangeDelegate_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.BindTraverseDelegate
	 */
	struct UWholeMapWidget_C_BindTraverseDelegate_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.UnbindTraverseDelegate
	 */
	struct UWholeMapWidget_C_UnbindTraverseDelegate_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.UpdateTraverse
	 */
	struct UWholeMapWidget_C_UpdateTraverse_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OpenEditWindow
	 */
	struct UWholeMapWidget_C_OpenEditWindow_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnZoom
	 */
	struct UWholeMapWidget_C_OnZoom_Params
	{
	public:
		float                                                      Zoom;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnBGAlphaChanged
	 */
	struct UWholeMapWidget_C_OnBGAlphaChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnIconSizeChanged
	 */
	struct UWholeMapWidget_C_OnIconSizeChanged_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnWindowSizeChanged
	 */
	struct UWholeMapWidget_C_OnWindowSizeChanged_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.CloseEditWindow
	 */
	struct UWholeMapWidget_C_CloseEditWindow_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnReset
	 */
	struct UWholeMapWidget_C_OnReset_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnInAnim
	 */
	struct UWholeMapWidget_C_OnInAnim_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnOutAnim
	 */
	struct UWholeMapWidget_C_OnOutAnim_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnPinChecked
	 */
	struct UWholeMapWidget_C_OnPinChecked_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.BindEdit
	 */
	struct UWholeMapWidget_C_BindEdit_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.UnbindEdit
	 */
	struct UWholeMapWidget_C_UnbindEdit_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnAnimationFinished
	 */
	struct UWholeMapWidget_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.LoadBG
	 */
	struct UWholeMapWidget_C_LoadBG_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.ExecuteUbergraph_WholeMapWidget
	 */
	struct UWholeMapWidget_C_ExecuteUbergraph_WholeMapWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnCloseEditWindow__DelegateSignature
	 */
	struct UWholeMapWidget_C_OnCloseEditWindow__DelegateSignature_Params
	{	};

	/**
	 * Function WholeMapWidget.WholeMapWidget_C.OnOpenEditWindow__DelegateSignature
	 */
	struct UWholeMapWidget_C_OnOpenEditWindow__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
