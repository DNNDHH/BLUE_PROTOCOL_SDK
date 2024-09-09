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
	 * Function NameSettingDialog.NameSettingDialog_C.GetToolTipWidget_1
	 */
	struct UNameSettingDialog_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.SetMainMessageText
	 */
	struct UNameSettingDialog_C_SetMainMessageText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.SetOptionDecideText
	 */
	struct UNameSettingDialog_C_SetOptionDecideText_Params
	{
	public:
		class FString                                              OptionDecideText;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.SetGameOutMode
	 */
	struct UNameSettingDialog_C_SetGameOutMode_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.SetGameInMode
	 */
	struct UNameSettingDialog_C_SetGameInMode_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.SetNameInputEnable
	 */
	struct UNameSettingDialog_C_SetNameInputEnable_Params
	{
	public:
		bool                                                       InIsEnable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.Setting
	 */
	struct UNameSettingDialog_C_Setting_Params
	{
	public:
		int32_t                                                    InMainMessageTextID;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSubMessageTextID;                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InTextMaxCnt;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1S7V[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              StartInputName;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.IsNameEnable
	 */
	struct UNameSettingDialog_C_IsNameEnable_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       enable;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OD1K[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.Close
	 */
	struct UNameSettingDialog_C_Close_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.Open
	 */
	struct UNameSettingDialog_C_Open_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.Construct
	 */
	struct UNameSettingDialog_C_Construct_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UNameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UNameSettingDialog_C_BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.Destruct
	 */
	struct UNameSettingDialog_C_Destruct_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.MessageDecideProc
	 */
	struct UNameSettingDialog_C_MessageDecideProc_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.UpdateNameText
	 */
	struct UNameSettingDialog_C_UpdateNameText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.OnPress_Cancel
	 */
	struct UNameSettingDialog_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.OnAnimationFinished
	 */
	struct UNameSettingDialog_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_303_OnButtonHoverEvent__DelegateSignature
	 */
	struct UNameSettingDialog_C_BndEvt__BtnDecide_K2Node_ComponentBoundEvent_303_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_322_OnButtonHoverEvent__DelegateSignature
	 */
	struct UNameSettingDialog_C_BndEvt__BtnDecide_K2Node_ComponentBoundEvent_322_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UNameSettingDialog_C_BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.DecisonDialogResult
	 */
	struct UNameSettingDialog_C_DecisonDialogResult_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameSettingDialog_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 */
	struct UNameSettingDialog_C_BndEvt__NameSettingDialog_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.BndEvt__NameSettingDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UNameSettingDialog_C_BndEvt__NameSettingDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.VisibleTicketGrp
	 */
	struct UNameSettingDialog_C_VisibleTicketGrp_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_30WP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NameChangeTicketCount;                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.ExecuteUbergraph_NameSettingDialog
	 */
	struct UNameSettingDialog_C_ExecuteUbergraph_NameSettingDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_935H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.OnClickedButtonFullScreen__DelegateSignature
	 */
	struct UNameSettingDialog_C_OnClickedButtonFullScreen__DelegateSignature_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.OnClose__DelegateSignature
	 */
	struct UNameSettingDialog_C_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function NameSettingDialog.NameSettingDialog_C.OnEnter__DelegateSignature
	 */
	struct UNameSettingDialog_C_OnEnter__DelegateSignature_Params
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
