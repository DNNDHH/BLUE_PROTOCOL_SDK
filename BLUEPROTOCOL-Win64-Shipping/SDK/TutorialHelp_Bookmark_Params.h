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
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.SetErrorData
	 */
	struct UTutorialHelp_Bookmark_C_SetErrorData_Params
	{
	public:
		class FName                                                HelpId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.ISCurrentPageEnd
	 */
	struct UTutorialHelp_Bookmark_C_ISCurrentPageEnd_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.UpdatePageButton
	 */
	struct UTutorialHelp_Bookmark_C_UpdatePageButton_Params
	{	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.FindTurotialHelpData
	 */
	struct UTutorialHelp_Bookmark_C_FindTurotialHelpData_Params
	{
	public:
		class FName                                                InId;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFind;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T3BH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBTutorialHelpData                                 Ret;                                                     // 0x0010(0x0058)  (Parm, OutParm)
	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnLoaded_053AD1B74FF9010B3058FCA29708A05E
	 */
	struct UTutorialHelp_Bookmark_C_OnLoaded_053AD1B74FF9010B3058FCA29708A05E_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.SetHelpData2
	 */
	struct UTutorialHelp_Bookmark_C_SetHelpData2_Params
	{
	public:
		int32_t                                                    InPage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HEMQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBTutorialHelpData                                 InData;                                                  // 0x0008(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.Init
	 */
	struct UTutorialHelp_Bookmark_C_Init_Params
	{
	public:
		class FName                                                InId;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InSubMode;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.UpdateUI
	 */
	struct UTutorialHelp_Bookmark_C_UpdateUI_Params
	{	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTutorialHelp_Bookmark_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTutorialHelp_Bookmark_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnNextPage
	 */
	struct UTutorialHelp_Bookmark_C_OnNextPage_Params
	{	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.Construct
	 */
	struct UTutorialHelp_Bookmark_C_Construct_Params
	{	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.Destruct
	 */
	struct UTutorialHelp_Bookmark_C_Destruct_Params
	{	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnClose_Event
	 */
	struct UTutorialHelp_Bookmark_C_OnClose_Event_Params
	{	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnPress_Cancel
	 */
	struct UTutorialHelp_Bookmark_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnForceClose_Event
	 */
	struct UTutorialHelp_Bookmark_C_OnForceClose_Event_Params
	{	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.BndEvt__TutorialHelp_Bookmark_CmnClose01_393_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UTutorialHelp_Bookmark_C_BndEvt__TutorialHelp_Bookmark_CmnClose01_393_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.ExecuteUbergraph_TutorialHelp_Bookmark
	 */
	struct UTutorialHelp_Bookmark_C_ExecuteUbergraph_TutorialHelp_Bookmark_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TutorialHelp_Bookmark.TutorialHelp_Bookmark_C.OnClose__DelegateSignature
	 */
	struct UTutorialHelp_Bookmark_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
