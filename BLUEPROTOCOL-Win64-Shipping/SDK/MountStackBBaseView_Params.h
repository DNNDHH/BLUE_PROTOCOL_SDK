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
	 * Function MountStackBBaseView.MountStackBBaseView_C.RewindResultAfterBeginStep
	 */
	struct UMountStackBBaseView_C_RewindResultAfterBeginStep_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.RewindResultAfterStep1
	 */
	struct UMountStackBBaseView_C_RewindResultAfterStep1_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.ShowResult
	 */
	struct UMountStackBBaseView_C_ShowResult_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.HideResult
	 */
	struct UMountStackBBaseView_C_HideResult_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.UpdateStep
	 */
	struct UMountStackBBaseView_C_UpdateStep_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.UpdateLiquidMemory
	 */
	struct UMountStackBBaseView_C_UpdateLiquidMemory_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.GetMaterialUIDs
	 */
	struct UMountStackBBaseView_C_GetMaterialUIDs_Params
	{
	public:
		TArray<class FString>                                      Uids;                                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.GetTickets
	 */
	struct UMountStackBBaseView_C_GetTickets_Params
	{
	public:
		TArray<struct FSBStackBUseTicket>                          Tickets;                                                 // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.InitializeButtons
	 */
	struct UMountStackBBaseView_C_InitializeButtons_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Step1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature
	 */
	struct UMountStackBBaseView_C_BndEvt__MountStackBBaseView_Step1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.OnSelect Mount
	 */
	struct UMountStackBBaseView_C_OnSelectMount_Params
	{
	public:
		struct FOwnItemInfo                                        ItemInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Step2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
	 */
	struct UMountStackBBaseView_C_BndEvt__MountStackBBaseView_Step2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.OnSelectMaterial
	 */
	struct UMountStackBBaseView_C_OnSelectMaterial_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                Uids;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       UseTicket;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IOP3[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBStackBUseTicket                                  StackBTicket;                                            // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature
	 */
	struct UMountStackBBaseView_C_BndEvt__MountStackBBaseView_CmnBack01_1_K2Node_ComponentBoundEvent_6_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.ReselectStep2
	 */
	struct UMountStackBBaseView_C_ReselectStep2_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.OnCloseMountImagineSelectDialog
	 */
	struct UMountStackBBaseView_C_OnCloseMountImagineSelectDialog_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.OnCloseSelectMaterialDialog
	 */
	struct UMountStackBBaseView_C_OnCloseSelectMaterialDialog_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.ReselectStap1
	 */
	struct UMountStackBBaseView_C_ReselectStap1_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMountStackBBaseView_C_BndEvt__MountStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.OpenStep2
	 */
	struct UMountStackBBaseView_C_OpenStep2_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UMountStackBBaseView_C_BndEvt__MountStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.Event On Begin Select Mount Imagine
	 */
	struct UMountStackBBaseView_C_EventOnBeginSelectMountImagine_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.Event On End Select Mount Imagine
	 */
	struct UMountStackBBaseView_C_EventOnEndSelectMountImagine_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.Event On Begin Select Material
	 */
	struct UMountStackBBaseView_C_EventOnBeginSelectMaterial_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.Event On End Select Material
	 */
	struct UMountStackBBaseView_C_EventOnEndSelectMaterial_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.Event On Begin Execute
	 */
	struct UMountStackBBaseView_C_EventOnBeginExecute_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.Event On End Execute
	 */
	struct UMountStackBBaseView_C_EventOnEndExecute_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.Construct
	 */
	struct UMountStackBBaseView_C_Construct_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.Init
	 */
	struct UMountStackBBaseView_C_Init_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.Term
	 */
	struct UMountStackBBaseView_C_Term_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.OnPushedCancelKey
	 */
	struct UMountStackBBaseView_C_OnPushedCancelKey_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.Close
	 */
	struct UMountStackBBaseView_C_Close_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.BindMountStackB
	 */
	struct UMountStackBBaseView_C_BindMountStackB_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.OnComplete StackB
	 */
	struct UMountStackBBaseView_C_OnCompleteStackB_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XXBU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOwnItemInfo                                        Imagine;                                                 // 0x0008(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bSuccess;                                                // 0x0158(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature
	 */
	struct UMountStackBBaseView_C_BndEvt__MountStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_0_OnAnimPlayed__DelegateSignature_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.BndEvt__MountStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature
	 */
	struct UMountStackBBaseView_C_BndEvt__MountStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_1_OnAnimPlayed__DelegateSignature_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.OnCloseDialog
	 */
	struct UMountStackBBaseView_C_OnCloseDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.UnbindMountStackB
	 */
	struct UMountStackBBaseView_C_UnbindMountStackB_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.OnResultDialogClose
	 */
	struct UMountStackBBaseView_C_OnResultDialogClose_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.Force Close
	 */
	struct UMountStackBBaseView_C_ForceClose_Params
	{	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.ExecuteUbergraph_MountStackBBaseView
	 */
	struct UMountStackBBaseView_C_ExecuteUbergraph_MountStackBBaseView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1V02[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MountStackBBaseView.MountStackBBaseView_C.OnClose__DelegateSignature
	 */
	struct UMountStackBBaseView_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
