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
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.ResetStepSendData
	 */
	struct UImagineStackBBaseView_C_ResetStepSendData_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.InitializeHeader
	 */
	struct UImagineStackBBaseView_C_InitializeHeader_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.UpdateRewardView
	 */
	struct UImagineStackBBaseView_C_UpdateRewardView_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.UpdateLiquidMemoryView
	 */
	struct UImagineStackBBaseView_C_UpdateLiquidMemoryView_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.GenerateTicketData
	 */
	struct UImagineStackBBaseView_C_GenerateTicketData_Params
	{
	public:
		TArray<struct FSBStackBUseTicket>                          Tickets;                                                 // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.GetMaterialUIDs
	 */
	struct UImagineStackBBaseView_C_GetMaterialUIDs_Params
	{
	public:
		TArray<class FString>                                      Uids;                                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.UpdateExecuteView
	 */
	struct UImagineStackBBaseView_C_UpdateExecuteView_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.InitializeStep
	 */
	struct UImagineStackBBaseView_C_InitializeStep_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.InitializeButtons
	 */
	struct UImagineStackBBaseView_C_InitializeButtons_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.ReselectImagine
	 */
	struct UImagineStackBBaseView_C_ReselectImagine_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StepBtn2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
	 */
	struct UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_StepBtn2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.onSelectedMaterials
	 */
	struct UImagineStackBBaseView_C_onSelectedMaterials_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                Uids;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       UseTicket;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6FGG[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBStackBUseTicket                                  StackBTicket;                                            // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.ReselectMaterial
	 */
	struct UImagineStackBBaseView_C_ReselectMaterial_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StepBtn3_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature
	 */
	struct UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_StepBtn3_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnSelectedPerk
	 */
	struct UImagineStackBBaseView_C_OnSelectedPerk_Params
	{
	public:
		struct FOwnItemInfo                                        SelectedPerk;                                            // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnReInit
	 */
	struct UImagineStackBBaseView_C_OnReInit_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StepBtn4_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature
	 */
	struct UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_StepBtn4_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnTicketSelected
	 */
	struct UImagineStackBBaseView_C_OnTicketSelected_Params
	{
	public:
		int32_t                                                    Ticket;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.ReselectTicket
	 */
	struct UImagineStackBBaseView_C_ReselectTicket_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OpenStep2
	 */
	struct UImagineStackBBaseView_C_OpenStep2_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OpenStep3
	 */
	struct UImagineStackBBaseView_C_OpenStep3_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OpenStep4
	 */
	struct UImagineStackBBaseView_C_OpenStep4_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnSelectTargetImagine
	 */
	struct UImagineStackBBaseView_C_OnSelectTargetImagine_Params
	{
	public:
		struct FOwnItemInfo                                        ItemInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
	 */
	struct UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StepBtn1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature
	 */
	struct UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_StepBtn1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseImagineSelectDialog
	 */
	struct UImagineStackBBaseView_C_OnCloseImagineSelectDialog_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Select Imagine
	 */
	struct UImagineStackBBaseView_C_EventOnBeginSelectImagine_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Select Imagine
	 */
	struct UImagineStackBBaseView_C_EventOnEndSelectImagine_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Select Material
	 */
	struct UImagineStackBBaseView_C_EventOnBeginSelectMaterial_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Select Material
	 */
	struct UImagineStackBBaseView_C_EventOnEndSelectMaterial_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseSelectMaterialDialog
	 */
	struct UImagineStackBBaseView_C_OnCloseSelectMaterialDialog_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Select Imagine Inherit
	 */
	struct UImagineStackBBaseView_C_EventOnBeginSelectImagineInherit_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Select Imagine Inherit
	 */
	struct UImagineStackBBaseView_C_EventOnEndSelectImagineInherit_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseSelectImagineInheritDialog
	 */
	struct UImagineStackBBaseView_C_OnCloseSelectImagineInheritDialog_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Select Ticket
	 */
	struct UImagineStackBBaseView_C_EventOnBeginSelectTicket_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Select Ticket
	 */
	struct UImagineStackBBaseView_C_EventOnEndSelectTicket_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseSelectTicketDialog
	 */
	struct UImagineStackBBaseView_C_OnCloseSelectTicketDialog_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On Begin Execute
	 */
	struct UImagineStackBBaseView_C_EventOnBeginExecute_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Event On End Execute
	 */
	struct UImagineStackBBaseView_C_EventOnEndExecute_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Construct
	 */
	struct UImagineStackBBaseView_C_Construct_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Init
	 */
	struct UImagineStackBBaseView_C_Init_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Term
	 */
	struct UImagineStackBBaseView_C_Term_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Bind Imagine Stacked
	 */
	struct UImagineStackBBaseView_C_BindImagineStacked_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Unbind StackB Completed
	 */
	struct UImagineStackBBaseView_C_UnbindStackBCompleted_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnComplete Imagine Stack B
	 */
	struct UImagineStackBBaseView_C_OnCompleteImagineStackB_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HDWJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOwnItemInfo                                        Imagine;                                                 // 0x0008(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bSuccess;                                                // 0x0158(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature
	 */
	struct UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature
	 */
	struct UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnDialog Closed
	 */
	struct UImagineStackBBaseView_C_OnDialogClosed_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature
	 */
	struct UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.RequestClose
	 */
	struct UImagineStackBBaseView_C_RequestClose_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.Destruct
	 */
	struct UImagineStackBBaseView_C_Destruct_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnCloseEndDialog
	 */
	struct UImagineStackBBaseView_C_OnCloseEndDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.BndEvt__ImagineStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UImagineStackBBaseView_C_BndEvt__ImagineStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.ExecuteUbergraph_ImagineStackBBaseView
	 */
	struct UImagineStackBBaseView_C_ExecuteUbergraph_ImagineStackBBaseView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineStackBBaseView.ImagineStackBBaseView_C.OnClose__DelegateSignature
	 */
	struct UImagineStackBBaseView_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
