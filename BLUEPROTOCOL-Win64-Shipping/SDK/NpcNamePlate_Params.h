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
	 * Function NpcNamePlate.NpcNamePlate_C.GetRouteGuideQuestId
	 */
	struct UNpcNamePlate_C_GetRouteGuideQuestId_Params
	{
	public:
		int32_t                                                    QuestIndex;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CXM4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.SetQuestIconScaleByDistance
	 */
	struct UNpcNamePlate_C_SetQuestIconScaleByDistance_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.GetPlayerDistance
	 */
	struct UNpcNamePlate_C_GetPlayerDistance_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7VOE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.CursorInOutAnim
	 */
	struct UNpcNamePlate_C_CursorInOutAnim_Params
	{
	public:
		bool                                                       bin;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2MV0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.CheckVisibility
	 */
	struct UNpcNamePlate_C_CheckVisibility_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.UpdateQuest
	 */
	struct UNpcNamePlate_C_UpdateQuest_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.SetText
	 */
	struct UNpcNamePlate_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnQuestListDelegete_Reset
	 */
	struct UNpcNamePlate_C_OnQuestListDelegete_Reset_Params
	{
	public:
		TArray<struct FUnlockedQuestInfo>                          QuestList;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnAcceptQuestDelegate_Reset
	 */
	struct UNpcNamePlate_C_OnAcceptQuestDelegate_Reset_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EAcceptedQuestErrorCode                                    ErrorCode;                                               // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L7R4[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAcceptedQuestInfo                                  AcceptedQuestInfo;                                       // 0x0008(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnCancelQuestDelegate_イベント_1
	 */
	struct UNpcNamePlate_C_OnCancelQuestDelegate__1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_39D6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnUpdateQuestProgressDelegate_イベント_1
	 */
	struct UNpcNamePlate_C_OnUpdateQuestProgressDelegate__1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5NQL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAcceptedQuestInfo                                  PrevAcceptedQuestInfo;                                   // 0x0008(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnCompleteQuestDelegate_イベント_3
	 */
	struct UNpcNamePlate_C_OnCompleteQuestDelegate__3_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    QuestIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestCompleteResult                                       CompleteResult;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8AQ0[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBMailRewardData                                   MailRewardData;                                          // 0x0010(0x0180)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnAcceptedQuestListDelegete_イベント_1
	 */
	struct UNpcNamePlate_C_OnAcceptedQuestListDelegete__1_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnBeginPlay
	 */
	struct UNpcNamePlate_C_OnBeginPlay_Params
	{
	public:
		class ASBMobCharacter*                                     NpcCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnEndPlay
	 */
	struct UNpcNamePlate_C_OnEndPlay_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnAdventurerRankDelegate_Event_1
	 */
	struct UNpcNamePlate_C_OnAdventurerRankDelegate_Event_1_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnSetKeyValue_Event
	 */
	struct UNpcNamePlate_C_OnSetKeyValue_Event_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnLevelUp_Event
	 */
	struct UNpcNamePlate_C_OnLevelUp_Event_Params
	{
	public:
		int32_t                                                    InPrevLevel;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InCurLevel;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBExtraExpParse                                    InExtraExpParse;                                         // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.ClassChangeNotify_Event
	 */
	struct UNpcNamePlate_C_ClassChangeNotify_Event_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInIsExpiredStickerWeapons;                              // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VPMG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FSBExpiredEquipmentData                             InDirtyExpiredEquipmentData;                             // 0x0018(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnLoadRouteGuideInfo
	 */
	struct UNpcNamePlate_C_OnLoadRouteGuideInfo_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnChangeRouteGuide
	 */
	struct UNpcNamePlate_C_OnChangeRouteGuide_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.Construct
	 */
	struct UNpcNamePlate_C_Construct_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.UIVisibleSettingChangeDelegate_Event_1
	 */
	struct UNpcNamePlate_C_UIVisibleSettingChangeDelegate_Event_1_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.SetNPCFacility
	 */
	struct UNpcNamePlate_C_SetNPCFacility_Params
	{
	public:
		ESBFacilityType                                            IconType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.SetNpcCharacter_Internal
	 */
	struct UNpcNamePlate_C_SetNpcCharacter_Internal_Params
	{
	public:
		class ASBMobCharacter*                                     InNpcCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnChangeBalloonVisible
	 */
	struct UNpcNamePlate_C_OnChangeBalloonVisible_Params
	{
	public:
		bool                                                       bVsiible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.SetDepth
	 */
	struct UNpcNamePlate_C_SetDepth_Params
	{
	public:
		float                                                      InDepth;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.SetChargeMax
	 */
	struct UNpcNamePlate_C_SetChargeMax_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.AutoChangeInvisible
	 */
	struct UNpcNamePlate_C_AutoChangeInvisible_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.AutoChangeVisible
	 */
	struct UNpcNamePlate_C_AutoChangeVisible_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.Destruct
	 */
	struct UNpcNamePlate_C_Destruct_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.UnbindChangeBalloonVisible
	 */
	struct UNpcNamePlate_C_UnbindChangeBalloonVisible_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.SetInteractionTargetVisibility
	 */
	struct UNpcNamePlate_C_SetInteractionTargetVisibility_Params
	{
	public:
		bool                                                       bInVisibility;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.SetScreenPositionOffset
	 */
	struct UNpcNamePlate_C_SetScreenPositionOffset_Params
	{
	public:
		struct FLinearColor                                        InScreenPositionOffset;                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.FadeOutFinishSelectCursor
	 */
	struct UNpcNamePlate_C_FadeOutFinishSelectCursor_Params
	{
	public:
		bool                                                       IsFadeIn;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.OnDisplayStart
	 */
	struct UNpcNamePlate_C_OnDisplayStart_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.QuestIconUpdateTimerEvent
	 */
	struct UNpcNamePlate_C_QuestIconUpdateTimerEvent_Params
	{	};

	/**
	 * Function NpcNamePlate.NpcNamePlate_C.ExecuteUbergraph_NpcNamePlate
	 */
	struct UNpcNamePlate_C_ExecuteUbergraph_NpcNamePlate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HTKT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
