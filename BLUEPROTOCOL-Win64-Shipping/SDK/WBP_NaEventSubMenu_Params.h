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
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.GetBgImageTexture
	 */
	struct UWBP_NaEventSubMenu_C_GetBgImageTexture_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_66WY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_71JF[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.GetLineSizeX
	 */
	struct UWBP_NaEventSubMenu_C_GetLineSizeX_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.UpdateNewIcon
	 */
	struct UWBP_NaEventSubMenu_C_UpdateNewIcon_Params
	{	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.ChangeMenu
	 */
	struct UWBP_NaEventSubMenu_C_ChangeMenu_Params
	{
	public:
		int32_t                                                    Offset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SGZD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.OnInputChildIndexDown
	 */
	struct UWBP_NaEventSubMenu_C_OnInputChildIndexDown_Params
	{	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.OnInputChildIndexUp
	 */
	struct UWBP_NaEventSubMenu_C_OnInputChildIndexUp_Params
	{	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.BndEvt__WBP_NaEventSubMenu_WBP_NaEventSubMenuButton_Quest_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
	 */
	struct UWBP_NaEventSubMenu_C_BndEvt__WBP_NaEventSubMenu_WBP_NaEventSubMenuButton_Quest_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.BndEvt__WBP_NaEventSubMenu_WBP_NaEventSubMenuButton_Reward_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
	 */
	struct UWBP_NaEventSubMenu_C_BndEvt__WBP_NaEventSubMenu_WBP_NaEventSubMenuButton_Reward_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.BndEvt__WBP_NaEventSubMenu_WBP_NaEventSubMenuButton_Team_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
	 */
	struct UWBP_NaEventSubMenu_C_BndEvt__WBP_NaEventSubMenu_WBP_NaEventSubMenuButton_Team_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.OnInputCancelKey
	 */
	struct UWBP_NaEventSubMenu_C_OnInputCancelKey_Params
	{	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.BndEvt__WBP_NaEventMenu_CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
	 */
	struct UWBP_NaEventSubMenu_C_BndEvt__WBP_NaEventMenu_CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.Construct
	 */
	struct UWBP_NaEventSubMenu_C_Construct_Params
	{	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.ShowChildMenu
	 */
	struct UWBP_NaEventSubMenu_C_ShowChildMenu_Params
	{
	public:
		int32_t                                                    ChildMenuType;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.SetData
	 */
	struct UWBP_NaEventSubMenu_C_SetData_Params
	{
	public:
		class USBNaEventData*                                      Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.Destruct
	 */
	struct UWBP_NaEventSubMenu_C_Destruct_Params
	{	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.OnAnyUpdate
	 */
	struct UWBP_NaEventSubMenu_C_OnAnyUpdate_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventSubMenu.WBP_NaEventSubMenu_C.ExecuteUbergraph_WBP_NaEventSubMenu
	 */
	struct UWBP_NaEventSubMenu_C_ExecuteUbergraph_WBP_NaEventSubMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
