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
	 * Function OtherPCList.OtherPCList_C.ClearPCMenu
	 */
	struct UOtherPCList_C_ClearPCMenu_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.OpenCursorModeToOtherPCMenu
	 */
	struct UOtherPCList_C_OpenCursorModeToOtherPCMenu_Params
	{
	public:
		class ASBPlayerCharacter*                                  InOtherPC;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bListUpdate;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCList.OtherPCList_C.UpdateMouseCursorIcon
	 */
	struct UOtherPCList_C_UpdateMouseCursorIcon_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.UpdateTabKey
	 */
	struct UOtherPCList_C_UpdateTabKey_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.AllClose
	 */
	struct UOtherPCList_C_AllClose_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.Anime_Tab_Menu
	 */
	struct UOtherPCList_C_Anime_Tab_Menu_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.Anime_AllOpen
	 */
	struct UOtherPCList_C_Anime_AllOpen_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.Anime_Tab_List
	 */
	struct UOtherPCList_C_Anime_Tab_List_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.Anime_Tab
	 */
	struct UOtherPCList_C_Anime_Tab_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.IsRootVisibility
	 */
	struct UOtherPCList_C_IsRootVisibility_Params
	{
	public:
		bool                                                       OutVisible;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCList.OtherPCList_C.SetRootVisibility
	 */
	struct UOtherPCList_C_SetRootVisibility_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OtherPCList.OtherPCList_C.CloseMenu
	 */
	struct UOtherPCList_C_CloseMenu_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.Open
	 */
	struct UOtherPCList_C_Open_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.OnCloseOtherPCMenu
	 */
	struct UOtherPCList_C_OnCloseOtherPCMenu_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOtherPCList_C_BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.InputPadButton
	 */
	struct UOtherPCList_C_InputPadButton_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.Construct
	 */
	struct UOtherPCList_C_Construct_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.OnAnimationFinished
	 */
	struct UOtherPCList_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCList.OtherPCList_C.BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCList_C_BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOtherPCList_C_BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature
	 */
	struct UOtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature_Params
	{
	public:
		class ASBPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                CharacterId;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_6_OnClickUpdateButton__DelegateSignature
	 */
	struct UOtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_6_OnClickUpdateButton__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_8_OnListUpdated__DelegateSignature
	 */
	struct UOtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_8_OnListUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.Close
	 */
	struct UOtherPCList_C_Close_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.OnDirectChatEvent
	 */
	struct UOtherPCList_C_OnDirectChatEvent_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.OnPress_Cancel
	 */
	struct UOtherPCList_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.Destruct
	 */
	struct UOtherPCList_C_Destruct_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.ExecuteUbergraph_OtherPCList
	 */
	struct UOtherPCList_C_ExecuteUbergraph_OtherPCList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OtherPCList.OtherPCList_C.OnAllClose__DelegateSignature
	 */
	struct UOtherPCList_C_OnAllClose__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.EventButtonClicked__DelegateSignature
	 */
	struct UOtherPCList_C_EventButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OtherPCList.OtherPCList_C.OnClose__DelegateSignature
	 */
	struct UOtherPCList_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
