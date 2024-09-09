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
	 * Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.SaveReadHelpId
	 */
	struct UTutorialHelpDialogBox_C_SaveReadHelpId_Params
	{	};

	/**
	 * Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.OnDialogBoxClose_Event
	 */
	struct UTutorialHelpDialogBox_C_OnDialogBoxClose_Event_Params
	{	};

	/**
	 * Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.AnimetionFinished
	 */
	struct UTutorialHelpDialogBox_C_AnimetionFinished_Params
	{	};

	/**
	 * Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.Construct
	 */
	struct UTutorialHelpDialogBox_C_Construct_Params
	{	};

	/**
	 * Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.Destruct
	 */
	struct UTutorialHelpDialogBox_C_Destruct_Params
	{	};

	/**
	 * Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.OnPress_Cancel
	 */
	struct UTutorialHelpDialogBox_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTutorialHelpDialogBox_C_BndEvt__BtnCancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.OnPress_Ok
	 */
	struct UTutorialHelpDialogBox_C_OnPress_Ok_Params
	{	};

	/**
	 * Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.OnContinueOpen
	 */
	struct UTutorialHelpDialogBox_C_OnContinueOpen_Params
	{
	public:
		class FName                                                TutorialHelpId;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsContinue;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.EventClose
	 */
	struct UTutorialHelpDialogBox_C_EventClose_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.ExecuteUbergraph_TutorialHelpDialogBox
	 */
	struct UTutorialHelpDialogBox_C_ExecuteUbergraph_TutorialHelpDialogBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TutorialHelpDialogBox.TutorialHelpDialogBox_C.OnClose__DelegateSignature
	 */
	struct UTutorialHelpDialogBox_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
