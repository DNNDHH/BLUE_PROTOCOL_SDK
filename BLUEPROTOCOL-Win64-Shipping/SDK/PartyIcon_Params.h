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
	 * Function PartyIcon.PartyIcon_C.RequestSetIconColorName
	 */
	struct UPartyIcon_C_RequestSetIconColorName_Params
	{
	public:
		class FString                                              ColorName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.CheckLeader
	 */
	struct UPartyIcon_C_CheckLeader_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.Failed Retry
	 */
	struct UPartyIcon_C_FailedRetry_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.CheckNPC
	 */
	struct UPartyIcon_C_CheckNPC_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.CheckGroup
	 */
	struct UPartyIcon_C_CheckGroup_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.CheckFollow
	 */
	struct UPartyIcon_C_CheckFollow_Params
	{
	public:
		TArray<struct FPlayerProfileSummaryData>                   InFriendList;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.CheckParty
	 */
	struct UPartyIcon_C_CheckParty_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.InterruptQuest
	 */
	struct UPartyIcon_C_InterruptQuest_Params
	{
	public:
		class FName                                                InQuestId;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.OnJoinInterrupt
	 */
	struct UPartyIcon_C_OnJoinInterrupt_Params
	{
	public:
		class USBPlayerInterruptQuestComponent*                    InComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInFirst;                                                // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.InterruptPlayerInfo
	 */
	struct UPartyIcon_C_InterruptPlayerInfo_Params
	{
	public:
		struct FSBInterruptQuestPlayInfo                           InPlayInfo;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.InterruptTeamMemberUpdate
	 */
	struct UPartyIcon_C_InterruptTeamMemberUpdate_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.InterruptSuccsess
	 */
	struct UPartyIcon_C_InterruptSuccsess_Params
	{
	public:
		class FName                                                InQuestId;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InSuccess;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.InterruptProgressUpdate
	 */
	struct UPartyIcon_C_InterruptProgressUpdate_Params
	{
	public:
		class USBPlayerInterruptQuestComponent*                    InComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.SetOwnerCharacter
	 */
	struct UPartyIcon_C_SetOwnerCharacter_Params
	{
	public:
		class ASBCharacter*                                        OwnerCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.OnFollowStateChanged
	 */
	struct UPartyIcon_C_OnFollowStateChanged_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.InterruptUpdate
	 */
	struct UPartyIcon_C_InterruptUpdate_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.Retry_Group_Init
	 */
	struct UPartyIcon_C_Retry_Group_Init_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.Retry_Init_Follow
	 */
	struct UPartyIcon_C_Retry_Init_Follow_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.OnSetOwnerPlayerCharacter
	 */
	struct UPartyIcon_C_OnSetOwnerPlayerCharacter_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.OnPartyMemberUpdate
	 */
	struct UPartyIcon_C_OnPartyMemberUpdate_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.Init
	 */
	struct UPartyIcon_C_Init_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.Construct
	 */
	struct UPartyIcon_C_Construct_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.RequestReInit
	 */
	struct UPartyIcon_C_RequestReInit_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.FreeOnce
	 */
	struct UPartyIcon_C_FreeOnce_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.OnAttachedClientPlayerStateDelegate_イベント_1
	 */
	struct UPartyIcon_C_OnAttachedClientPlayerStateDelegate__1_Params
	{
	public:
		class ASBPlayerController*                                 PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.Destruct
	 */
	struct UPartyIcon_C_Destruct_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.PartyPlayerStateChange
	 */
	struct UPartyIcon_C_PartyPlayerStateChange_Params
	{
	public:
		class USBPartyMemberState*                                 MemberState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.PartyUnbindDelegates
	 */
	struct UPartyIcon_C_PartyUnbindDelegates_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.FollowUnbindDelegate
	 */
	struct UPartyIcon_C_FollowUnbindDelegate_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.RequestShow
	 */
	struct UPartyIcon_C_RequestShow_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.RequestSetAnimationSpeed
	 */
	struct UPartyIcon_C_RequestSetAnimationSpeed_Params
	{
	public:
		float                                                      AnimationSpeed;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.RequestHide
	 */
	struct UPartyIcon_C_RequestHide_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.UnbindQuestDelegete
	 */
	struct UPartyIcon_C_UnbindQuestDelegete_Params
	{	};

	/**
	 * Function PartyIcon.PartyIcon_C.RequestSetOwnerCharacter
	 */
	struct UPartyIcon_C_RequestSetOwnerCharacter_Params
	{
	public:
		class ASBCharacter*                                        OwnerCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyIcon.PartyIcon_C.ExecuteUbergraph_PartyIcon
	 */
	struct UPartyIcon_C_ExecuteUbergraph_PartyIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
