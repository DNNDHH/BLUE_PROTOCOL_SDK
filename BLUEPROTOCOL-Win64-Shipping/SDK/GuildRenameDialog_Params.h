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
	 * Function GuildRenameDialog.GuildRenameDialog_C.CheckTypedNewGuildTag
	 */
	struct UGuildRenameDialog_C_CheckTypedNewGuildTag_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.CheckTypedNewGuildName
	 */
	struct UGuildRenameDialog_C_CheckTypedNewGuildName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.GetGuildComp
	 */
	struct UGuildRenameDialog_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__Btn_OutCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuildRenameDialog_C_BndEvt__Btn_OutCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UGuildRenameDialog_C_BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UGuildRenameDialog_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.UpdateExecButton
	 */
	struct UGuildRenameDialog_C_UpdateExecButton_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.Initialize
	 */
	struct UGuildRenameDialog_C_Initialize_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.OnComplete_DuplicationChecked
	 */
	struct UGuildRenameDialog_C_OnComplete_DuplicationChecked_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsDuplicate;                                            // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.Destruct
	 */
	struct UGuildRenameDialog_C_Destruct_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.OnChangedName
	 */
	struct UGuildRenameDialog_C_OnChangedName_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.Construct
	 */
	struct UGuildRenameDialog_C_Construct_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.RemoveNetworking
	 */
	struct UGuildRenameDialog_C_RemoveNetworking_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.CreateNetWorking
	 */
	struct UGuildRenameDialog_C_CreateNetWorking_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UGuildRenameDialog_C_BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 */
	struct UGuildRenameDialog_C_BndEvt__GuildRenameDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.Close
	 */
	struct UGuildRenameDialog_C_Close_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UGuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UGuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature
	 */
	struct UGuildRenameDialog_C_BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UGuildRenameDialog_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.UnBindEvent
	 */
	struct UGuildRenameDialog_C_UnBindEvent_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.ExecuteUbergraph_GuildRenameDialog
	 */
	struct UGuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_89U6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.OnChanged__DelegateSignature
	 */
	struct UGuildRenameDialog_C_OnChanged__DelegateSignature_Params
	{	};

	/**
	 * Function GuildRenameDialog.GuildRenameDialog_C.OnCancel__DelegateSignature
	 */
	struct UGuildRenameDialog_C_OnCancel__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
