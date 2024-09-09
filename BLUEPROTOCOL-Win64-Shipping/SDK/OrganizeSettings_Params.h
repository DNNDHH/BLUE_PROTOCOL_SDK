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
	 * Function OrganizeSettings.OrganizeSettings_C.CheckGuildName
	 */
	struct UOrganizeSettings_C_CheckGuildName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.CheckGuildTag
	 */
	struct UOrganizeSettings_C_CheckGuildTag_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.CheckGuildComment
	 */
	struct UOrganizeSettings_C_CheckGuildComment_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.ClearData
	 */
	struct UOrganizeSettings_C_ClearData_Params
	{	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.GetGuildComp
	 */
	struct UOrganizeSettings_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.ConstructGuildData
	 */
	struct UOrganizeSettings_C_ConstructGuildData_Params
	{
	public:
		struct FGuildData                                          GuildData;                                               // 0x0000(0x00B8)  (Parm, OutParm)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.GenerateTimes
	 */
	struct UOrganizeSettings_C_GenerateTimes_Params
	{	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.GenerateAttribute
	 */
	struct UOrganizeSettings_C_GenerateAttribute_Params
	{	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.PreConstruct
	 */
	struct UOrganizeSettings_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.Construct
	 */
	struct UOrganizeSettings_C_Construct_Params
	{	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UOrganizeSettings_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UOrganizeSettings_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UOrganizeSettings_C_BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.InitializeGuildDuplicateCheck
	 */
	struct UOrganizeSettings_C_InitializeGuildDuplicateCheck_Params
	{	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.OnCompleteGuildNameCheck
	 */
	struct UOrganizeSettings_C_OnCompleteGuildNameCheck_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsDuplicate;                                            // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UOrganizeSettings_C_BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.OnCheckedGuildOrganize
	 */
	struct UOrganizeSettings_C_OnCheckedGuildOrganize_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.UpdateOrganizingBtn
	 */
	struct UOrganizeSettings_C_UpdateOrganizingBtn_Params
	{	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UOrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UOrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UOrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.OnCompletedGuildOrganized
	 */
	struct UOrganizeSettings_C_OnCompletedGuildOrganized_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.ExecuteUbergraph_OrganizeSettings
	 */
	struct UOrganizeSettings_C_ExecuteUbergraph_OrganizeSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I0ST[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.Organizeing__DelegateSignature
	 */
	struct UOrganizeSettings_C_Organizeing__DelegateSignature_Params
	{	};

	/**
	 * Function OrganizeSettings.OrganizeSettings_C.OnOrganizeCansel__DelegateSignature
	 */
	struct UOrganizeSettings_C_OnOrganizeCansel__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
