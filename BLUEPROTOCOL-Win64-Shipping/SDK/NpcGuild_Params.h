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
	 * Function NpcGuild.NpcGuild_C.InGuildMemberInialize
	 */
	struct UNpcGuild_C_InGuildMemberInialize_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.GetGuildComp
	 */
	struct UNpcGuild_C_GetGuildComp_Params
	{
	public:
		class USBPlayerGuildComponent*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_0_OnGuildSetting__DelegateSignature
	 */
	struct UNpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_0_OnGuildSetting__DelegateSignature_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_1_OnGuildMember__DelegateSignature
	 */
	struct UNpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_1_OnGuildMember__DelegateSignature_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_2_OnGuildApplications__DelegateSignature
	 */
	struct UNpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_2_OnGuildApplications__DelegateSignature_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature
	 */
	struct UNpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature_Params
	{
	public:
		struct FGuildEntryData                                     GuildEntry;                                              // 0x0000(0x00E0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NpcGuild.NpcGuild_C.OnCompleteFindGuildShortID
	 */
	struct UNpcGuild_C_OnCompleteFindGuildShortID_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuild.NpcGuild_C.bindInitialize
	 */
	struct UNpcGuild_C_bindInitialize_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.Destruct
	 */
	struct UNpcGuild_C_Destruct_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
	 */
	struct UNpcGuild_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.Listen Action Close
	 */
	struct UNpcGuild_C_ListenActionClose_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.OnClosePressed
	 */
	struct UNpcGuild_C_OnClosePressed_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.OnCompletedChangeName
	 */
	struct UNpcGuild_C_OnCompletedChangeName_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuild.NpcGuild_C.Initialize
	 */
	struct UNpcGuild_C_Initialize_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.OnOrganized
	 */
	struct UNpcGuild_C_OnOrganized_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuild.NpcGuild_C.OnGuildWithDraw
	 */
	struct UNpcGuild_C_OnGuildWithDraw_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuild.NpcGuild_C.OnCloseRequest
	 */
	struct UNpcGuild_C_OnCloseRequest_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.OnDissolution
	 */
	struct UNpcGuild_C_OnDissolution_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuild.NpcGuild_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UNpcGuild_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.Construct
	 */
	struct UNpcGuild_C_Construct_Params
	{	};

	/**
	 * Function NpcGuild.NpcGuild_C.Event_OnCompleteNotifyKickedFromGuild
	 */
	struct UNpcGuild_C_Event_OnCompleteNotifyKickedFromGuild_Params
	{
	public:
		class FString                                              KickedGuildName;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuild.NpcGuild_C.Event_SetNowTurorialHelpId
	 */
	struct UNpcGuild_C_Event_SetNowTurorialHelpId_Params
	{
	public:
		class FName                                                TutorialHelpId;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuild.NpcGuild_C.OnCompleteGetGuildData_Event
	 */
	struct UNpcGuild_C_OnCompleteGetGuildData_Event_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcGuild.NpcGuild_C.ExecuteUbergraph_NpcGuild
	 */
	struct UNpcGuild_C_ExecuteUbergraph_NpcGuild_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8E7J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NpcGuild.NpcGuild_C.OnClose__DelegateSignature
	 */
	struct UNpcGuild_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
