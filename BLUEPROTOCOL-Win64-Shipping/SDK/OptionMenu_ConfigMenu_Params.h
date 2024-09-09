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
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetCloseState
	 */
	struct UOptionMenu_ConfigMenu_C_SetCloseState_Params
	{
	public:
		bool                                                       Close;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.IsClosable
	 */
	struct UOptionMenu_ConfigMenu_C_IsClosable_Params
	{
	public:
		bool                                                       IsClose;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.IsChangeable
	 */
	struct UOptionMenu_ConfigMenu_C_IsChangeable_Params
	{
	public:
		bool                                                       IsChanged;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetSelectedItem
	 */
	struct UOptionMenu_ConfigMenu_C_SetSelectedItem_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Construct
	 */
	struct UOptionMenu_ConfigMenu_C_Construct_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Init
	 */
	struct UOptionMenu_ConfigMenu_C_Init_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnSaveCharaConfigDelegate_イベント
	 */
	struct UOptionMenu_ConfigMenu_C_OnSaveCharaConfigDelegate__Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnSaveCharaConfig
	 */
	struct UOptionMenu_ConfigMenu_C_OnSaveCharaConfig_Params
	{
	public:
		bool                                                       InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.ChangeCheck
	 */
	struct UOptionMenu_ConfigMenu_C_ChangeCheck_Params
	{
	public:
		int32_t                                                    NextId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SuccessChanged_イベント_1
	 */
	struct UOptionMenu_ConfigMenu_C_SuccessChanged__1_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.CheckChanged
	 */
	struct UOptionMenu_ConfigMenu_C_CheckChanged_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SuccessChanged_イベント_2
	 */
	struct UOptionMenu_ConfigMenu_C_SuccessChanged__2_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SelectSubMenu
	 */
	struct UOptionMenu_ConfigMenu_C_SelectSubMenu_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.FailChanged
	 */
	struct UOptionMenu_ConfigMenu_C_FailChanged_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.PurgeHudLayoutButton
	 */
	struct UOptionMenu_ConfigMenu_C_PurgeHudLayoutButton_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.BndEvt__ConfigSwicher_K2Node_ComponentBoundEvent_2_RequestParentFocus__DelegateSignature
	 */
	struct UOptionMenu_ConfigMenu_C_BndEvt__ConfigSwicher_K2Node_ComponentBoundEvent_2_RequestParentFocus__DelegateSignature_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnHasChenged_イベント_1
	 */
	struct UOptionMenu_ConfigMenu_C_OnHasChenged__1_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetTitleMode
	 */
	struct UOptionMenu_ConfigMenu_C_SetTitleMode_Params
	{
	public:
		bool                                                       bTitleMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Destruct
	 */
	struct UOptionMenu_ConfigMenu_C_Destruct_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.UnbindDelegates
	 */
	struct UOptionMenu_ConfigMenu_C_UnbindDelegates_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Set KeyConfigOpen
	 */
	struct UOptionMenu_ConfigMenu_C_SetKeyConfigOpen_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.ExecuteUbergraph_OptionMenu_ConfigMenu
	 */
	struct UOptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnHasChenged__DelegateSignature
	 */
	struct UOptionMenu_ConfigMenu_C_OnHasChenged__DelegateSignature_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.RequestParentFocus__DelegateSignature
	 */
	struct UOptionMenu_ConfigMenu_C_RequestParentFocus__DelegateSignature_Params
	{	};

	/**
	 * Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnChanged__DelegateSignature
	 */
	struct UOptionMenu_ConfigMenu_C_OnChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
