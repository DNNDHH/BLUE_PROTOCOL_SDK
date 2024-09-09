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
	 * Function ApplyButtonList.ApplyButtonList_C.Set Sync Ribbon Pos
	 */
	struct UApplyButtonList_C_SetSyncRibbonPos_Params
	{
	public:
		bool                                                       IsSingleBtn;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.CheckPartyState
	 */
	struct UApplyButtonList_C_CheckPartyState_Params
	{
	public:
		ESBEntryConditionPartyState                                State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KGCF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Need;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Ret;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.CheckClassType
	 */
	struct UApplyButtonList_C_CheckClassType_Params
	{
	public:
		TArray<ESBClassType>                                       InClass;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Ret;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RHLF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.CheckClearQuest
	 */
	struct UApplyButtonList_C_CheckClearQuest_Params
	{
	public:
		TArray<class FName>                                        InQuest;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Ret;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6ZKN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.SetClickInputAction
	 */
	struct UApplyButtonList_C_SetClickInputAction_Params
	{	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.UISupportKeyReset
	 */
	struct UApplyButtonList_C_UISupportKeyReset_Params
	{	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.SetErrorText2
	 */
	struct UApplyButtonList_C_SetErrorText2_Params
	{
	public:
		struct FSBMapInfo                                          SelectedMapInfo;                                         // 0x0000(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       isParty;                                                 // 0x01F8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanApply;                                                // 0x01F9(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LSGS[0x6];                                   // 0x01FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.SetErrorText
	 */
	struct UApplyButtonList_C_SetErrorText_Params
	{
	public:
		struct FSBMapInfo                                          SelectedMapInfo;                                         // 0x0000(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       CanApply;                                                // 0x01F8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.SetupIsEnabled
	 */
	struct UApplyButtonList_C_SetupIsEnabled_Params
	{
	public:
		struct FSBMapInfo                                          MapInfo;                                                 // 0x0000(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.SetupVisibility
	 */
	struct UApplyButtonList_C_SetupVisibility_Params
	{
	public:
		bool                                                       IsCommandMenu;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_THN7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBMapInfo                                          MapInfo;                                                 // 0x0008(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.SetupText
	 */
	struct UApplyButtonList_C_SetupText_Params
	{
	public:
		struct FSBMapInfo                                          MapInfo;                                                 // 0x0000(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.Setup
	 */
	struct UApplyButtonList_C_Setup_Params
	{
	public:
		bool                                                       IsCommandMenu;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O21S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBMapInfo                                          MapInfo;                                                 // 0x0008(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.BndEvt__ApplyButtonList_CmnBtn01SoloOrParty_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UApplyButtonList_C_BndEvt__ApplyButtonList_CmnBtn01SoloOrParty_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.BndEvt__ApplyButtonList_CmnBtn01Matching_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UApplyButtonList_C_BndEvt__ApplyButtonList_CmnBtn01Matching_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.BndEvt__ApplyButtonList_CmnBtn16PartyList_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UApplyButtonList_C_BndEvt__ApplyButtonList_CmnBtn16PartyList_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.Construct
	 */
	struct UApplyButtonList_C_Construct_Params
	{	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.Destruct
	 */
	struct UApplyButtonList_C_Destruct_Params
	{	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.Event_ReSetups
	 */
	struct UApplyButtonList_C_Event_ReSetups_Params
	{	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.GetHelpMIssionId
	 */
	struct UApplyButtonList_C_GetHelpMIssionId_Params
	{	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.OnIsHelpMatchingMode_Event
	 */
	struct UApplyButtonList_C_OnIsHelpMatchingMode_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5CP8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              GameContentId;                                           // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.ExecuteUbergraph_ApplyButtonList
	 */
	struct UApplyButtonList_C_ExecuteUbergraph_ApplyButtonList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1G7X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.OnClickedHelpMatching__DelegateSignature
	 */
	struct UApplyButtonList_C_OnClickedHelpMatching__DelegateSignature_Params
	{
	public:
		class FString                                              MapId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ModeId;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.OnClickedPartyList__DelegateSignature
	 */
	struct UApplyButtonList_C_OnClickedPartyList__DelegateSignature_Params
	{	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.OnClickedMatching__DelegateSignature
	 */
	struct UApplyButtonList_C_OnClickedMatching__DelegateSignature_Params
	{	};

	/**
	 * Function ApplyButtonList.ApplyButtonList_C.OnClickedSoloOrParty__DelegateSignature
	 */
	struct UApplyButtonList_C_OnClickedSoloOrParty__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
