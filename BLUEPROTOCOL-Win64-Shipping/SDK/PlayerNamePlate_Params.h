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
	 * Function PlayerNamePlate.PlayerNamePlate_C.ResetBuffIcon
	 */
	struct UPlayerNamePlate_C_ResetBuffIcon_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetupBuffIcon
	 */
	struct UPlayerNamePlate_C_SetupBuffIcon_Params
	{
	public:
		class ASBCharacter*                                        InCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.UpdateFriendIcon
	 */
	struct UPlayerNamePlate_C_UpdateFriendIcon_Params
	{
	public:
		TArray<struct FPlayerProfileSummaryData>                   InPlayerProfileSummaryData;                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.IsInteractionUIVisibility
	 */
	struct UPlayerNamePlate_C_IsInteractionUIVisibility_Params
	{
	public:
		bool                                                       IsVisibilty;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MHDW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.CursorInOutAnim
	 */
	struct UPlayerNamePlate_C_CursorInOutAnim_Params
	{
	public:
		bool                                                       bin;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YO8J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.Get Resurrection Remain Time Rate
	 */
	struct UPlayerNamePlate_C_GetResurrectionRemainTimeRate_Params
	{
	public:
		float                                                      Rate;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P136[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetLifeGaugeCurTintColor
	 */
	struct UPlayerNamePlate_C_SetLifeGaugeCurTintColor_Params
	{
	public:
		struct FLinearColor                                        TintColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.Update Prev Life Gauge BP
	 */
	struct UPlayerNamePlate_C_UpdatePrevLifeGaugeBP_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.InitOptionConnect
	 */
	struct UPlayerNamePlate_C_InitOptionConnect_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.TermOptionConnect
	 */
	struct UPlayerNamePlate_C_TermOptionConnect_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.OnChangeNamePlateOption
	 */
	struct UPlayerNamePlate_C_OnChangeNamePlateOption_Params
	{
	public:
		bool                                                       bIsShow;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.InitOptionValue
	 */
	struct UPlayerNamePlate_C_InitOptionValue_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.UpdateOptionNamePlate
	 */
	struct UPlayerNamePlate_C_UpdateOptionNamePlate_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.InitOptions
	 */
	struct UPlayerNamePlate_C_InitOptions_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.Bind TeamTag
	 */
	struct UPlayerNamePlate_C_BindTeamTag_Params
	{
	public:
		bool                                                       bIsShow;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetAchievementSelected
	 */
	struct UPlayerNamePlate_C_SetAchievementSelected_Params
	{
	public:
		int32_t                                                    InAchievementSelected;                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.InAwake
	 */
	struct UPlayerNamePlate_C_InAwake_Params
	{
	public:
		class FName                                                InQuestId;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.JoinIninterrupt
	 */
	struct UPlayerNamePlate_C_JoinIninterrupt_Params
	{
	public:
		class USBPlayerInterruptQuestComponent*                    InComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInFirst;                                                // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.Leaveout
	 */
	struct UPlayerNamePlate_C_Leaveout_Params
	{
	public:
		class FName                                                InQuestId;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.Repinterrupt
	 */
	struct UPlayerNamePlate_C_Repinterrupt_Params
	{
	public:
		struct FSBInterruptQuestPlayInfo                           InPlayInfo;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.RepTeam
	 */
	struct UPlayerNamePlate_C_RepTeam_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SucInterruptQuest
	 */
	struct UPlayerNamePlate_C_SucInterruptQuest_Params
	{
	public:
		class FName                                                InQuestId;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InSuccess;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.Update Prog
	 */
	struct UPlayerNamePlate_C_UpdateProg_Params
	{
	public:
		class USBPlayerInterruptQuestComponent*                    InComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.BeginBind Party
	 */
	struct UPlayerNamePlate_C_BeginBindParty_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.PartyUnbindDelegates
	 */
	struct UPlayerNamePlate_C_PartyUnbindDelegates_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.UnbindAwakeInterruptQuestDelegete
	 */
	struct UPlayerNamePlate_C_UnbindAwakeInterruptQuestDelegete_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.OnUpdateNameColor
	 */
	struct UPlayerNamePlate_C_OnUpdateNameColor_Params
	{
	public:
		bool                                                       bParty;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.Construct
	 */
	struct UPlayerNamePlate_C_Construct_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetName
	 */
	struct UPlayerNamePlate_C_SetName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetHpRate
	 */
	struct UPlayerNamePlate_C_SetHpRate_Params
	{
	public:
		float                                                      HPRate;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.OnSetHealChainUIVisibility
	 */
	struct UPlayerNamePlate_C_OnSetHealChainUIVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.OnChangeLifeGaugeColor
	 */
	struct UPlayerNamePlate_C_OnChangeLifeGaugeColor_Params
	{
	public:
		bool                                                       IsHealChainColor;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetTeamNumber
	 */
	struct UPlayerNamePlate_C_SetTeamNumber_Params
	{
	public:
		int32_t                                                    TeamNumber;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetCharacter_Internal
	 */
	struct UPlayerNamePlate_C_SetCharacter_Internal_Params
	{
	public:
		class ASBCharacter*                                        InCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetHostility
	 */
	struct UPlayerNamePlate_C_SetHostility_Params
	{
	public:
		ESBHostility                                               Hostility;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetInitialHpRate
	 */
	struct UPlayerNamePlate_C_SetInitialHpRate_Params
	{
	public:
		float                                                      HPRate;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UPlayerNamePlate_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetNameVisibility
	 */
	struct UPlayerNamePlate_C_SetNameVisibility_Params
	{
	public:
		bool                                                       bInVisibility;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetHpGaugeVisibility
	 */
	struct UPlayerNamePlate_C_SetHpGaugeVisibility_Params
	{
	public:
		bool                                                       bInVisibility;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetHpGaugeWidthRate
	 */
	struct UPlayerNamePlate_C_SetHpGaugeWidthRate_Params
	{
	public:
		float                                                      InWidthRate;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.Destruct
	 */
	struct UPlayerNamePlate_C_Destruct_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetDepth
	 */
	struct UPlayerNamePlate_C_SetDepth_Params
	{
	public:
		float                                                      InDepth;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetChargeMax
	 */
	struct UPlayerNamePlate_C_SetChargeMax_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.AutoChangeInvisible
	 */
	struct UPlayerNamePlate_C_AutoChangeInvisible_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.AutoChangeVisible
	 */
	struct UPlayerNamePlate_C_AutoChangeVisible_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.OnFinishedFadeAnime
	 */
	struct UPlayerNamePlate_C_OnFinishedFadeAnime_Params
	{
	public:
		bool                                                       IsFadeIn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.UnbindPlayerCommunicateDelegate
	 */
	struct UPlayerNamePlate_C_UnbindPlayerCommunicateDelegate_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.UnbindOnClientRecieveBattleStatusDelegete
	 */
	struct UPlayerNamePlate_C_UnbindOnClientRecieveBattleStatusDelegete_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.UnbindVisibleSettingChangeDelegate
	 */
	struct UPlayerNamePlate_C_UnbindVisibleSettingChangeDelegate_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetInteractionTargetVisibility
	 */
	struct UPlayerNamePlate_C_SetInteractionTargetVisibility_Params
	{
	public:
		bool                                                       bInVisibility;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.SetScreenPositionOffset
	 */
	struct UPlayerNamePlate_C_SetScreenPositionOffset_Params
	{
	public:
		struct FLinearColor                                        InScreenPositionOffset;                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.OnDisplayStart
	 */
	struct UPlayerNamePlate_C_OnDisplayStart_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.PlayerStateSettingAfter
	 */
	struct UPlayerNamePlate_C_PlayerStateSettingAfter_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent
	 */
	struct UPlayerNamePlate_C_CustomEvent_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.PlayerStateRelationshipSetting
	 */
	struct UPlayerNamePlate_C_PlayerStateRelationshipSetting_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent_2
	 */
	struct UPlayerNamePlate_C_CustomEvent_2_Params
	{
	public:
		ESBTensionTagType                                          TensionTag;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.CustomEvent_3
	 */
	struct UPlayerNamePlate_C_CustomEvent_3_Params
	{
	public:
		TArray<struct FPlayerProfileSummaryData>                   PlayerProfileSummaryData;                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.OnUpdatenSimplycityPartyOn
	 */
	struct UPlayerNamePlate_C_OnUpdatenSimplycityPartyOn_Params
	{	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.UpdateTension
	 */
	struct UPlayerNamePlate_C_UpdateTension_Params
	{
	public:
		ESBTensionTagType                                          InTensionTagId;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.ExecuteUbergraph_PlayerNamePlate
	 */
	struct UPlayerNamePlate_C_ExecuteUbergraph_PlayerNamePlate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.OnChangeScale__DelegateSignature
	 */
	struct UPlayerNamePlate_C_OnChangeScale__DelegateSignature_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerNamePlate.PlayerNamePlate_C.OnChangeDrawSize__DelegateSignature
	 */
	struct UPlayerNamePlate_C_OnChangeDrawSize__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           DrawSize;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
