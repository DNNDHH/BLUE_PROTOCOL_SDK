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
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_NeedPlayers
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_AddCondition_NeedPlayers_Params
	{
	public:
		bool                                                       Passed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UUJ7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerNum;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButton_QuestClear
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_OnPressedButton_QuestClear_Params
	{
	public:
		int32_t                                                    EntryConditionId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Position;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButton_ClassType
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_OnPressedButton_ClassType_Params
	{
	public:
		int32_t                                                    EntryConditionId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Position;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_ClassType
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassType_Params
	{
	public:
		bool                                                       Passed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SK49[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_QuestClear
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_AddCondition_QuestClear_Params
	{
	public:
		bool                                                       Passed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4A3E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_SubClassBonus
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_AddCondition_SubClassBonus_Params
	{
	public:
		bool                                                       Passed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T18F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MaxSubClassLv;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxScbNum;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IURA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_ClassLevel
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_AddCondition_ClassLevel_Params
	{
	public:
		bool                                                       Passed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J6F2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ClassLevel;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.SetVisibleUnderline
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_SetVisibleUnderline_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_PartyState
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_AddCondition_PartyState_Params
	{
	public:
		bool                                                       Passed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBEntryConditionPartyState                                RequiredPartyState;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_AdventurerRank
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_AddCondition_AdventurerRank_Params
	{
	public:
		bool                                                       Passed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZJ52[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AdventurerRank;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButton_Equipment
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_OnPressedButton_Equipment_Params
	{
	public:
		int32_t                                                    EntryConditionId;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Position;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_Common
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_AddCondition_Common_Params
	{
	public:
		class UUMG_MatchingMenu_EntryConditionListItem_C*          item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_Equipment
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_AddCondition_Equipment_Params
	{
	public:
		bool                                                       Passed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CN51[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    EntryConditionId;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.AddCondition_BattleScore
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_AddCondition_BattleScore_Params
	{
	public:
		bool                                                       Passed;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FSOK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BattleScore;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.Clear
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_Clear_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.Construct
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_Construct_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButtonQuest__DelegateSignature
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_OnPressedButtonQuest__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButtonClass__DelegateSignature
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_OnPressedButtonClass__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_EntryConditionList.UMG_MatchingMenu_EntryConditionList_C.OnPressedButton__DelegateSignature
	 */
	struct UUMG_MatchingMenu_EntryConditionList_C_OnPressedButton__DelegateSignature_Params
	{
	public:
		EntryConditionType                                         EntryConditionType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2BA0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Position;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
