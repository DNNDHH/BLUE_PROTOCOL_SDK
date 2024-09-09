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
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.GetTicketTokenNameTextId
	 */
	struct UAestheShop_TicketSelectMenu_C_GetTicketTokenNameTextId_Params
	{
	public:
		TArray<struct FMasterToken>                                InTokenMasterDataArray;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InTicketTokenId;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T6PN[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBTextTableHash                                    OutTextID;                                               // 0x0018(0x0004)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ENX9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetCourseDetailVisibility
	 */
	struct UAestheShop_TicketSelectMenu_C_SetCourseDetailVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetupCourseDetail
	 */
	struct UAestheShop_TicketSelectMenu_C_SetupCourseDetail_Params
	{
	public:
		int32_t                                                    InCourseId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.GetHoldTicketTokenAmount
	 */
	struct UAestheShop_TicketSelectMenu_C_GetHoldTicketTokenAmount_Params
	{
	public:
		TArray<struct FSBCharacterToken>                           InHoldTicketTokens;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InTicketTokenId;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SETT[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutAmount;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.CheckIfCourseIsUsable
	 */
	struct UAestheShop_TicketSelectMenu_C_CheckIfCourseIsUsable_Params
	{
	public:
		int32_t                                                    InCourseId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InHoldTicketNum;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsUsable;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutIsSeasonPass;                                         // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.CreateCourseItemList
	 */
	struct UAestheShop_TicketSelectMenu_C_CreateCourseItemList_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.SetListItemSelected
	 */
	struct UAestheShop_TicketSelectMenu_C_SetListItemSelected_Params
	{
	public:
		int32_t                                                    InTicketTokenId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsSelected;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_833S[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Close
	 */
	struct UAestheShop_TicketSelectMenu_C_Close_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.PreConstruct
	 */
	struct UAestheShop_TicketSelectMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Construct
	 */
	struct UAestheShop_TicketSelectMenu_C_Construct_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.Destruct
	 */
	struct UAestheShop_TicketSelectMenu_C_Destruct_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UAestheShop_TicketSelectMenu_C_BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OpenLastConfirmDialog
	 */
	struct UAestheShop_TicketSelectMenu_C_OpenLastConfirmDialog_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnEndLastConfirmDialog
	 */
	struct UAestheShop_TicketSelectMenu_C_OnEndLastConfirmDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnPress_Cancel
	 */
	struct UAestheShop_TicketSelectMenu_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UAestheShop_TicketSelectMenu_C_BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UAestheShop_TicketSelectMenu_C_BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCourseDecided
	 */
	struct UAestheShop_TicketSelectMenu_C_OnCourseDecided_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCourseListItemSelectedイベント
	 */
	struct UAestheShop_TicketSelectMenu_C_OnCourseListItemSelected_Params
	{
	public:
		int32_t                                                    InCourseId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTicketTokenId;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InHoldTicketTokenAmount;                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature
	 */
	struct UAestheShop_TicketSelectMenu_C_BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UAestheShop_TicketSelectMenu_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnCheckStatus
	 */
	struct UAestheShop_TicketSelectMenu_C_OnCheckStatus_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.AdventureBoardError_Event
	 */
	struct UAestheShop_TicketSelectMenu_C_AdventureBoardError_Event_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OpenSeasonPassExpiredDialog
	 */
	struct UAestheShop_TicketSelectMenu_C_OpenSeasonPassExpiredDialog_Params
	{	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnSeasonPassExpiredDialogClosed
	 */
	struct UAestheShop_TicketSelectMenu_C_OnSeasonPassExpiredDialogClosed_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.ExecuteUbergraph_AestheShop_TicketSelectMenu
	 */
	struct UAestheShop_TicketSelectMenu_C_ExecuteUbergraph_AestheShop_TicketSelectMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C.OnClose__DelegateSignature
	 */
	struct UAestheShop_TicketSelectMenu_C_OnClose__DelegateSignature_Params
	{
	public:
		bool                                                       InIsCourseDecided;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DU84[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InCourseId;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTicketTokenId;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InUseTicketNum;                                          // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
