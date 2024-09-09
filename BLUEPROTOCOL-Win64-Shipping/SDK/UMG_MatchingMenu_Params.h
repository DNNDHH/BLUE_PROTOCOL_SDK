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
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnClickSupplyIcon
	 */
	struct UUMG_MatchingMenu_C_OnClickSupplyIcon_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.GetCurrentWidget
	 */
	struct UUMG_MatchingMenu_C_GetCurrentWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.SetWindowState
	 */
	struct UUMG_MatchingMenu_C_SetWindowState_Params
	{	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.Construct
	 */
	struct UUMG_MatchingMenu_C_Construct_Params
	{	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UUMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature
	 */
	struct UUMG_MatchingMenu_C_BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature_Params
	{
	public:
		TArray<struct FSBMapInfo>                                  DungeonMapInfoArray;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bUnlimit;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.Destruct
	 */
	struct UUMG_MatchingMenu_C_Destruct_Params
	{	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.ResetWindowState
	 */
	struct UUMG_MatchingMenu_C_ResetWindowState_Params
	{	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchedGame_Event
	 */
	struct UUMG_MatchingMenu_C_OnMatchedGame_Event_Params
	{
	public:
		class USBMatchingGameState*                                MatchedGame;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchedGameCloseWindow_Event
	 */
	struct UUMG_MatchingMenu_C_OnMatchedGameCloseWindow_Event_Params
	{	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnUICancel_Event
	 */
	struct UUMG_MatchingMenu_C_OnUICancel_Event_Params
	{	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature
	 */
	struct UUMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature
	 */
	struct UUMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UUMG_MatchingMenu_C_WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnCloseDetailMenu
	 */
	struct UUMG_MatchingMenu_C_OnCloseDetailMenu_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_C_BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.ForceExitMenu
	 */
	struct UUMG_MatchingMenu_C_ForceExitMenu_Params
	{	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.ExecuteUbergraph_UMG_MatchingMenu
	 */
	struct UUMG_MatchingMenu_C_ExecuteUbergraph_UMG_MatchingMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnMatchingStart_Success__DelegateSignature
	 */
	struct UUMG_MatchingMenu_C_OnMatchingStart_Success__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu.UMG_MatchingMenu_C.OnClose__DelegateSignature
	 */
	struct UUMG_MatchingMenu_C_OnClose__DelegateSignature_Params
	{
	public:
		class UUMG_MatchingMenu_C*                                 Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
