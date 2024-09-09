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
	 * Function ChatSettingWindow.ChatSettingWindow_C.SetVisible
	 */
	struct UChatSettingWindow_C_SetVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.HideWindow
	 */
	struct UChatSettingWindow_C_HideWindow_Params
	{	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.ShowWindow
	 */
	struct UChatSettingWindow_C_ShowWindow_Params
	{
	public:
		TArray<bool>                                               LogVisibleStatusList;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.Close
	 */
	struct UChatSettingWindow_C_Close_Params
	{	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.Construct
	 */
	struct UChatSettingWindow_C_Construct_Params
	{	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.Destruct
	 */
	struct UChatSettingWindow_C_Destruct_Params
	{	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Size
	 */
	struct UChatSettingWindow_C_OnChange_Size_Params
	{
	public:
		int32_t                                                    InSelectBtnId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Time
	 */
	struct UChatSettingWindow_C_OnChange_Time_Params
	{
	public:
		int32_t                                                    InSelectBtnId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.OnChange_StartKey
	 */
	struct UChatSettingWindow_C_OnChange_StartKey_Params
	{
	public:
		int32_t                                                    InSelectBtnId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Main
	 */
	struct UChatSettingWindow_C_OnChange_Main_Params
	{
	public:
		int32_t                                                    InSelectBtnId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Sub1
	 */
	struct UChatSettingWindow_C_OnChange_Sub1_Params
	{
	public:
		int32_t                                                    InSelectBtnId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.OnChange_Sub2
	 */
	struct UChatSettingWindow_C_OnChange_Sub2_Params
	{
	public:
		int32_t                                                    InSelectBtnId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UChatSettingWindow_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.BndEvt__UnreadNotifySettingWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UChatSettingWindow_C_BndEvt__UnreadNotifySettingWindow_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.ExecuteUbergraph_ChatSettingWindow
	 */
	struct UChatSettingWindow_C_ExecuteUbergraph_ChatSettingWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7G0J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.OnLogDispTime__DelegateSignature
	 */
	struct UChatSettingWindow_C_OnLogDispTime__DelegateSignature_Params
	{	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.OnRefreshChatLogs__DelegateSignature
	 */
	struct UChatSettingWindow_C_OnRefreshChatLogs__DelegateSignature_Params
	{	};

	/**
	 * Function ChatSettingWindow.ChatSettingWindow_C.OnClose__DelegateSignature
	 */
	struct UChatSettingWindow_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
