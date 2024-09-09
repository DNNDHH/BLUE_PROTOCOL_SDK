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
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitBtnReport
	 */
	struct UGuildMemberSettingDialog_C_InitBtnReport_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.DeleteSwapBlocker
	 */
	struct UGuildMemberSettingDialog_C_DeleteSwapBlocker_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.CreateSwapBlocker
	 */
	struct UGuildMemberSettingDialog_C_CreateSwapBlocker_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitBtnAssumeLeader
	 */
	struct UGuildMemberSettingDialog_C_InitBtnAssumeLeader_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitBtnChangeLeader
	 */
	struct UGuildMemberSettingDialog_C_InitBtnChangeLeader_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitBtnKick
	 */
	struct UGuildMemberSettingDialog_C_InitBtnKick_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitRoleComboBox
	 */
	struct UGuildMemberSettingDialog_C_InitRoleComboBox_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Is Self Selected
	 */
	struct UGuildMemberSettingDialog_C_IsSelfSelected_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Init Btn with Draw
	 */
	struct UGuildMemberSettingDialog_C_InitBtnwithDraw_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.On_ComboBoxRole_GenerateWidget_1
	 */
	struct UGuildMemberSettingDialog_C_On_ComboBoxRole_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Update Menu State
	 */
	struct UGuildMemberSettingDialog_C_UpdateMenuState_Params
	{
	public:
		bool                                                       bKick;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeader;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAssumeLeader;                                           // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWithDraw;                                               // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.IsGuildGrandMaster
	 */
	struct UGuildMemberSettingDialog_C_IsGuildGrandMaster_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.IsGuildMaster
	 */
	struct UGuildMemberSettingDialog_C_IsGuildMaster_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.InitSelfMemberData
	 */
	struct UGuildMemberSettingDialog_C_InitSelfMemberData_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.IsCBChecking
	 */
	struct UGuildMemberSettingDialog_C_IsCBChecking_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.UpdateChangeBtn
	 */
	struct UGuildMemberSettingDialog_C_UpdateChangeBtn_Params
	{
	public:
		class UGuildMemberManageCBIcon_C*                          CheckBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsChecked;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnComboBoxRoleGenerate
	 */
	struct UGuildMemberSettingDialog_C_OnComboBoxRoleGenerate_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Initialize
	 */
	struct UGuildMemberSettingDialog_C_Initialize_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.GetGuildComp
	 */
	struct UGuildMemberSettingDialog_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.GenerateGuildRole
	 */
	struct UGuildMemberSettingDialog_C_GenerateGuildRole_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnKicked
	 */
	struct UGuildMemberSettingDialog_C_OnKicked_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnChangeLeader
	 */
	struct UGuildMemberSettingDialog_C_OnChangeLeader_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnChangeRole
	 */
	struct UGuildMemberSettingDialog_C_OnChangeRole_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnCompleteSetting_Event
	 */
	struct UGuildMemberSettingDialog_C_OnCompleteSetting_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__BtnRoleChange_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_BndEvt__BtnRoleChange_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__CmnBtn16_2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_BndEvt__CmnBtn16_2_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__BtnChangeLeader_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_BndEvt__BtnChangeLeader_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__BtnKick_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_BndEvt__BtnKick_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnWithDrow
	 */
	struct UGuildMemberSettingDialog_C_OnWithDrow_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_CmnClose02_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_CB_RemoveGuild_K2Node_ComponentBoundEvent_6_OnUpdateState__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_CB_RemoveGuild_K2Node_ComponentBoundEvent_6_OnUpdateState__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_CB_PromoteGuild_K2Node_ComponentBoundEvent_11_OnUpdateState__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_CB_PromoteGuild_K2Node_ComponentBoundEvent_11_OnUpdateState__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_CB_LeaveGuild_K2Node_ComponentBoundEvent_12_OnUpdateState__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_CB_LeaveGuild_K2Node_ComponentBoundEvent_12_OnUpdateState__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_ComboBoxRole_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Close
	 */
	struct UGuildMemberSettingDialog_C_Close_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Construct
	 */
	struct UGuildMemberSettingDialog_C_Construct_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.PreConstruct
	 */
	struct UGuildMemberSettingDialog_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.Open
	 */
	struct UGuildMemberSettingDialog_C_Open_Params
	{
	public:
		struct FGuildMemberData                                    MemberData;                                              // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenChangeRole
	 */
	struct UGuildMemberSettingDialog_C_OpenChangeRole_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenKick
	 */
	struct UGuildMemberSettingDialog_C_OpenKick_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenChangeLeader
	 */
	struct UGuildMemberSettingDialog_C_OpenChangeLeader_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenWithDraw
	 */
	struct UGuildMemberSettingDialog_C_OpenWithDraw_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_CB_AssumeLeader_K2Node_ComponentBoundEvent_3_OnUpdateState__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_CB_AssumeLeader_K2Node_ComponentBoundEvent_3_OnUpdateState__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenAssumeLeader
	 */
	struct UGuildMemberSettingDialog_C_OpenAssumeLeader_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnAssumeLeader
	 */
	struct UGuildMemberSettingDialog_C_OnAssumeLeader_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UGuildMemberSettingDialog_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__GuildMemberSettingDialog_BtnReport_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_BndEvt__GuildMemberSettingDialog_BtnReport_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OpenReportUI_Event
	 */
	struct UGuildMemberSettingDialog_C_OpenReportUI_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QCJG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.BndEvt__Btn_OutBorder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_BndEvt__Btn_OutBorder_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnClose_FromPlayerReport
	 */
	struct UGuildMemberSettingDialog_C_OnClose_FromPlayerReport_Params
	{	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.ExecuteUbergraph_GuildMemberSettingDialog
	 */
	struct UGuildMemberSettingDialog_C_ExecuteUbergraph_GuildMemberSettingDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildMemberSettingDialog.GuildMemberSettingDialog_C.OnClosed__DelegateSignature
	 */
	struct UGuildMemberSettingDialog_C_OnClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
