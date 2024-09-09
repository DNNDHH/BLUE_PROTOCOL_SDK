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
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.SetBlockClose
	 */
	struct UWeaponStackBBaseView_C_SetBlockClose_Params
	{
	public:
		bool                                                       BlockClose;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.StepResetSelectedData
	 */
	struct UWeaponStackBBaseView_C_StepResetSelectedData_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.RewindStep4
	 */
	struct UWeaponStackBBaseView_C_RewindStep4_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Result Update Steps
	 */
	struct UWeaponStackBBaseView_C_ResultUpdateSteps_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.UpdateReward
	 */
	struct UWeaponStackBBaseView_C_UpdateReward_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.InitializeStep
	 */
	struct UWeaponStackBBaseView_C_InitializeStep_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.InitializeButtonNumber
	 */
	struct UWeaponStackBBaseView_C_InitializeButtonNumber_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.ResetAll
	 */
	struct UWeaponStackBBaseView_C_ResetAll_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.UpdateStackButton
	 */
	struct UWeaponStackBBaseView_C_UpdateStackButton_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.GetStackBParams
	 */
	struct UWeaponStackBBaseView_C_GetStackBParams_Params
	{
	public:
		class FString                                              UID;                                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      Materials;                                               // 0x0010(0x0010)  (Parm, OutParm)
		TArray<struct FSBStackBUseTicket>                          Tickets;                                                 // 0x0020(0x0010)  (Parm, OutParm)
		TArray<struct FSBStackBSelect>                             Perks;                                                   // 0x0030(0x0010)  (Parm, OutParm)
		struct FSBStackBSelect                                     Vital;                                                   // 0x0040(0x0018)  (Parm, OutParm)
		struct FSBStackBSelect                                     SubAbility;                                              // 0x0058(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.FindMaterialByUniqueId
	 */
	struct UWeaponStackBBaseView_C_FindMaterialByUniqueId_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FOwnItemInfo                                        ArrayElement;                                            // 0x0010(0x0150)  (Parm, OutParm)
	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.UpdateLiquidMemory
	 */
	struct UWeaponStackBBaseView_C_UpdateLiquidMemory_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Construct
	 */
	struct UWeaponStackBBaseView_C_Construct_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.BndEvt__WeaponStackBoostBaseView_StepBtn1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature
	 */
	struct UWeaponStackBBaseView_C_BndEvt__WeaponStackBoostBaseView_StepBtn1_K2Node_ComponentBoundEvent_0_OnSelect__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Event On Selected Weapon
	 */
	struct UWeaponStackBBaseView_C_EventOnSelectedWeapon_Params
	{
	public:
		struct FOwnItemInfo                                        ItemInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.ReselectWeapon
	 */
	struct UWeaponStackBBaseView_C_ReselectWeapon_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.BndEvt__WeaponStackBoostBaseView_StepBtn2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature
	 */
	struct UWeaponStackBBaseView_C_BndEvt__WeaponStackBoostBaseView_StepBtn2_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Event On Selected Material
	 */
	struct UWeaponStackBBaseView_C_EventOnSelectedMaterial_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                Uids;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       UseTicket;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SNZQ[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBStackBUseTicket                                  StackBTicket;                                            // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.ReselectMaterial
	 */
	struct UWeaponStackBBaseView_C_ReselectMaterial_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.BndEvt__WeaponStackBoostBaseView_StepBtn4_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature
	 */
	struct UWeaponStackBBaseView_C_BndEvt__WeaponStackBoostBaseView_StepBtn4_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.BndEvt__WeaponStackBoostBaseView_StepBtn3_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature
	 */
	struct UWeaponStackBBaseView_C_BndEvt__WeaponStackBoostBaseView_StepBtn3_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.BndEvt__WeaponStackBoostBaseView_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature
	 */
	struct UWeaponStackBBaseView_C_BndEvt__WeaponStackBoostBaseView_CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnInhelitSelected
	 */
	struct UWeaponStackBBaseView_C_OnInhelitSelected_Params
	{
	public:
		class FString                                              SpecialPerkUID;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SubPerkUID;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<struct FSBStackBPerk>                               SelectedPerks;                                           // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.ReselectInherit
	 */
	struct UWeaponStackBBaseView_C_ReselectInherit_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnSelectedBtn4
	 */
	struct UWeaponStackBBaseView_C_OnSelectedBtn4_Params
	{
	public:
		int32_t                                                    UseTokenId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.ReselectBt4
	 */
	struct UWeaponStackBBaseView_C_ReselectBt4_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Init
	 */
	struct UWeaponStackBBaseView_C_Init_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Term
	 */
	struct UWeaponStackBBaseView_C_Term_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnCompleteWeaponStackB
	 */
	struct UWeaponStackBBaseView_C_OnCompleteWeaponStackB_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OPPG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOwnItemInfo                                        Weapon;                                                  // 0x0008(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bSuccess;                                                // 0x0158(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.End Dialog
	 */
	struct UWeaponStackBBaseView_C_EndDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.BndEvt__WeaponStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_8_OnAnimPlayed__DelegateSignature
	 */
	struct UWeaponStackBBaseView_C_BndEvt__WeaponStackBBaseView_StackBFailedAnimation_K2Node_ComponentBoundEvent_8_OnAnimPlayed__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.BndEvt__WeaponStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_9_OnAnimPlayed__DelegateSignature
	 */
	struct UWeaponStackBBaseView_C_BndEvt__WeaponStackBBaseView_StackBSuccessAnimation_K2Node_ComponentBoundEvent_9_OnAnimPlayed__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.BndEvt__WeaponStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWeaponStackBBaseView_C_BndEvt__WeaponStackBBaseView_Btn_ShowHint_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Close
	 */
	struct UWeaponStackBBaseView_C_Close_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Bind Watchdog_UI_Esc
	 */
	struct UWeaponStackBBaseView_C_BindWatchdog_UI_Esc_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnCloseWeaponSelect
	 */
	struct UWeaponStackBBaseView_C_OnCloseWeaponSelect_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnCloseMaterial
	 */
	struct UWeaponStackBBaseView_C_OnCloseMaterial_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnCloseTicket
	 */
	struct UWeaponStackBBaseView_C_OnCloseTicket_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnCloseInhelit
	 */
	struct UWeaponStackBBaseView_C_OnCloseInhelit_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnCloseEndDialog
	 */
	struct UWeaponStackBBaseView_C_OnCloseEndDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Step2Open
	 */
	struct UWeaponStackBBaseView_C_Step2Open_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Step3Open
	 */
	struct UWeaponStackBBaseView_C_Step3Open_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Step4Open
	 */
	struct UWeaponStackBBaseView_C_Step4Open_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.BndEvt__WeaponStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UWeaponStackBBaseView_C_BndEvt__WeaponStackBBaseView_Btn_Execute_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Event On Begin Select Weapon
	 */
	struct UWeaponStackBBaseView_C_EventOnBeginSelectWeapon_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Event On End Select Weapon
	 */
	struct UWeaponStackBBaseView_C_EventOnEndSelectWeapon_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Event On Begin Select Material
	 */
	struct UWeaponStackBBaseView_C_EventOnBeginSelectMaterial_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Event On End Select Material
	 */
	struct UWeaponStackBBaseView_C_EventOnEndSelectMaterial_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Event On Begin Select Weapon Inherit
	 */
	struct UWeaponStackBBaseView_C_EventOnBeginSelectWeaponInherit_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Event On End Select Weapon Inherit
	 */
	struct UWeaponStackBBaseView_C_EventOnEndSelectWeaponInherit_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Event On Begin Select Ticket
	 */
	struct UWeaponStackBBaseView_C_EventOnBeginSelectTicket_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Event On End Select Ticket
	 */
	struct UWeaponStackBBaseView_C_EventOnEndSelectTicket_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Event On Begin Execute
	 */
	struct UWeaponStackBBaseView_C_EventOnBeginExecute_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.Event On End Execute
	 */
	struct UWeaponStackBBaseView_C_EventOnEndExecute_Params
	{	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.ExecuteUbergraph_WeaponStackBBaseView
	 */
	struct UWeaponStackBBaseView_C_ExecuteUbergraph_WeaponStackBBaseView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZNBF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WeaponStackBBaseView.WeaponStackBBaseView_C.OnClose__DelegateSignature
	 */
	struct UWeaponStackBBaseView_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
