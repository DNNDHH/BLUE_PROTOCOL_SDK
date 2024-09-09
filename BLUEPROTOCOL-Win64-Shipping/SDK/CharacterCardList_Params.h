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
	 * Function CharacterCardList.CharacterCardList_C.UpdateCharacterCardList
	 */
	struct UCharacterCardList_C_UpdateCharacterCardList_Params
	{
	public:
		TArray<struct FSBPlayerCharacterCardData>                  InListData;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InNoNewMemberJoinInAnimation;                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8A4F[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.UnbindOnGetCharacterCardInfosDelegate
	 */
	struct UCharacterCardList_C_UnbindOnGetCharacterCardInfosDelegate_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.InitForDebug
	 */
	struct UCharacterCardList_C_InitForDebug_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.StartCharacterCardNewPartyMemberInAnimation
	 */
	struct UCharacterCardList_C_StartCharacterCardNewPartyMemberInAnimation_Params
	{
	public:
		class UCharacterCardBase_C*                                InCharacterCard;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.GetIsAdventurerCardOpened
	 */
	struct UCharacterCardList_C_GetIsAdventurerCardOpened_Params
	{
	public:
		bool                                                       bOutIsOpened;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.FindPartyMemberStateByCharacterId
	 */
	struct UCharacterCardList_C_FindPartyMemberStateByCharacterId_Params
	{
	public:
		class FString                                              InCharacterId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class USBPartyMemberState*>                         InPartyMemberStateList;                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class USBPartyMemberState*                                 OutPartyMemberState;                                     // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.RequestCharacterCardListUpdate
	 */
	struct UCharacterCardList_C_RequestCharacterCardListUpdate_Params
	{
	public:
		TArray<class FString>                                      InCharacterIds;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.SetupCharacterCardData
	 */
	struct UCharacterCardList_C_SetupCharacterCardData_Params
	{
	public:
		int32_t                                                    InId;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZHAB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBPlayerCharacterCardData                          InCharacterCardData;                                     // 0x0008(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bInIsMe;                                                 // 0x00B8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W420[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USBPartyMemberState*                                 InPartyMemberState;                                      // 0x00C0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInDoNewMemberJoinInAnimation;                           // 0x00C8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J565[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.Init
	 */
	struct UCharacterCardList_C_Init_Params
	{
	public:
		TArray<class FString>                                      InPartyMemberCharacterIds;                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.StartMissionIntroInAnimationEvent
	 */
	struct UCharacterCardList_C_StartMissionIntroInAnimationEvent_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.WidgetAnimationEvt_CardInAnim_K2Node_WidgetAnimationEvent_1
	 */
	struct UCharacterCardList_C_WidgetAnimationEvt_CardInAnim_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.PreConstruct
	 */
	struct UCharacterCardList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.Construct
	 */
	struct UCharacterCardList_C_Construct_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.Destruct
	 */
	struct UCharacterCardList_C_Destruct_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.OnCharacterCardClickedEvent
	 */
	struct UCharacterCardList_C_OnCharacterCardClickedEvent_Params
	{
	public:
		class FString                                              InCharacterId;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bInIsMe;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.HandlePartyMemberUpdate
	 */
	struct UCharacterCardList_C_HandlePartyMemberUpdate_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.OnGetCharacterCardInfoEvent
	 */
	struct UCharacterCardList_C_OnGetCharacterCardInfoEvent_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EZ7T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FSBPlayerCharacterCardData>                  PlayerCharacterCardDatas;                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.UnbindIsGetPlayerProfileDetailMenuDataEvent
	 */
	struct UCharacterCardList_C_UnbindIsGetPlayerProfileDetailMenuDataEvent_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.OnIsGetPlayerProfileDetailMenuData
	 */
	struct UCharacterCardList_C_OnIsGetPlayerProfileDetailMenuData_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DUJ7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.DestPlayerProfile
	 */
	struct UCharacterCardList_C_DestPlayerProfile_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.OnClosePlayerProfile
	 */
	struct UCharacterCardList_C_OnClosePlayerProfile_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.ForceAdventurerCardClose
	 */
	struct UCharacterCardList_C_ForceAdventurerCardClose_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.OnGameStarted
	 */
	struct UCharacterCardList_C_OnGameStarted_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.GoToCreateAdventurerCardSequence
	 */
	struct UCharacterCardList_C_GoToCreateAdventurerCardSequence_Params
	{	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.ExecuteUbergraph_CharacterCardList
	 */
	struct UCharacterCardList_C_ExecuteUbergraph_CharacterCardList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TTU2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CharacterCardList.CharacterCardList_C.OnGetCharacterCardInfos__DelegateSignature
	 */
	struct UCharacterCardList_C_OnGetCharacterCardInfos__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
