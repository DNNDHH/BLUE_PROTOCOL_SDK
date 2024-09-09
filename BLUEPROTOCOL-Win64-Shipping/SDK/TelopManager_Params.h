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
	 * Function TelopManager.TelopManager_C.OnReversePallet
	 */
	struct UTelopManager_C_OnReversePallet_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.TermReversePallet
	 */
	struct UTelopManager_C_TermReversePallet_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.InitReversePallet
	 */
	struct UTelopManager_C_InitReversePallet_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnGetTelop
	 */
	struct UTelopManager_C_OnGetTelop_Params
	{
	public:
		ESBTelopType                                               TelopType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MPKP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USBTelopBase*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.OnProficiencyUp
	 */
	struct UTelopManager_C_OnProficiencyUp_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.TermProficiency
	 */
	struct UTelopManager_C_TermProficiency_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.InitProficiency
	 */
	struct UTelopManager_C_InitProficiency_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.TermSuspend
	 */
	struct UTelopManager_C_TermSuspend_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.InitSuspend
	 */
	struct UTelopManager_C_InitSuspend_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.TermDefenceBattleJingle
	 */
	struct UTelopManager_C_TermDefenceBattleJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.InitDefenceBattleJingle
	 */
	struct UTelopManager_C_InitDefenceBattleJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.TermTimeAttack
	 */
	struct UTelopManager_C_TermTimeAttack_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.InitTimeAttack
	 */
	struct UTelopManager_C_InitTimeAttack_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnLearningSkill
	 */
	struct UTelopManager_C_OnLearningSkill_Params
	{
	public:
		TArray<struct FCharaSkillMasteryInfo>                      NewSkill;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TelopManager.TelopManager_C.TermLearningSkill
	 */
	struct UTelopManager_C_TermLearningSkill_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.InitLearningSkill
	 */
	struct UTelopManager_C_InitLearningSkill_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnTerminate
	 */
	struct UTelopManager_C_OnTerminate_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnInitialize
	 */
	struct UTelopManager_C_OnInitialize_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.TermInterruptQuest
	 */
	struct UTelopManager_C_TermInterruptQuest_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.InitInterruptQuest
	 */
	struct UTelopManager_C_InitInterruptQuest_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.TermRaidJingle
	 */
	struct UTelopManager_C_TermRaidJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.InitRaidJingle
	 */
	struct UTelopManager_C_InitRaidJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnClassLVUPJingle
	 */
	struct UTelopManager_C_OnClassLVUPJingle_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.TermClassLvUpJingle
	 */
	struct UTelopManager_C_TermClassLvUpJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.InitClassLvUpJingle
	 */
	struct UTelopManager_C_InitClassLvUpJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnAdventureBoardJingleComplete
	 */
	struct UTelopManager_C_OnAdventureBoardJingleComplete_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnAdventureBoardJingleClear
	 */
	struct UTelopManager_C_OnAdventureBoardJingleClear_Params
	{
	public:
		ESBAdventureBoardClearStatus                               Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M150[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TelopManager.TelopManager_C.TermAdventureBoardJingle
	 */
	struct UTelopManager_C_TermAdventureBoardJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.InitAdventureBoardJingle
	 */
	struct UTelopManager_C_InitAdventureBoardJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnQuestJingleCancel
	 */
	struct UTelopManager_C_OnQuestJingleCancel_Params
	{
	public:
		class UObject*                                             Param;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.OnQuestJingleComplete
	 */
	struct UTelopManager_C_OnQuestJingleComplete_Params
	{
	public:
		class UObject*                                             Param;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.OnQuestJingleUpdate2
	 */
	struct UTelopManager_C_OnQuestJingleUpdate2_Params
	{
	public:
		TArray<int32_t>                                            InputPin;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TelopManager.TelopManager_C.OnQuestJingleUpdate
	 */
	struct UTelopManager_C_OnQuestJingleUpdate_Params
	{
	public:
		class UObject*                                             Param;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.OnQuestJingleAccepted
	 */
	struct UTelopManager_C_OnQuestJingleAccepted_Params
	{
	public:
		class UObject*                                             Param;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.TermQuestJingle
	 */
	struct UTelopManager_C_TermQuestJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.InitQuestJingle
	 */
	struct UTelopManager_C_InitQuestJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.CustomEvent_5
	 */
	struct UTelopManager_C_CustomEvent_5_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindProficiencyUp
	 */
	struct UTelopManager_C_BindProficiencyUp_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindProficiencyUp
	 */
	struct UTelopManager_C_UnbindProficiencyUp_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.CustomEvent_2
	 */
	struct UTelopManager_C_CustomEvent_2_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindSuspend
	 */
	struct UTelopManager_C_BindSuspend_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindSuspend
	 */
	struct UTelopManager_C_UnbindSuspend_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnSuspend
	 */
	struct UTelopManager_C_OnSuspend_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindOpenCommandMenu
	 */
	struct UTelopManager_C_BindOpenCommandMenu_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindOpenCommandMenu
	 */
	struct UTelopManager_C_UnbindOpenCommandMenu_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnOpenCommandMenu
	 */
	struct UTelopManager_C_OnOpenCommandMenu_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindCloseCommandMenu
	 */
	struct UTelopManager_C_BindCloseCommandMenu_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindCloseCommandMenu
	 */
	struct UTelopManager_C_UnbindCloseCommandMenu_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnCloseCommandMenu
	 */
	struct UTelopManager_C_OnCloseCommandMenu_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindDefenceBattleStart
	 */
	struct UTelopManager_C_BindDefenceBattleStart_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindDefenceBattleStart
	 */
	struct UTelopManager_C_UnbindDefenceBattleStart_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.CustomEvent_3
	 */
	struct UTelopManager_C_CustomEvent_3_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindTimeAttackBackToStartJingle
	 */
	struct UTelopManager_C_BindTimeAttackBackToStartJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnBindTimeAttackBackToStartJingle
	 */
	struct UTelopManager_C_UnBindTimeAttackBackToStartJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnTimeAttackBackToStartJingle
	 */
	struct UTelopManager_C_OnTimeAttackBackToStartJingle_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindLearningSkill
	 */
	struct UTelopManager_C_BindLearningSkill_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindLearningSkill
	 */
	struct UTelopManager_C_UnbindLearningSkill_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnLearningSkillEvent
	 */
	struct UTelopManager_C_OnLearningSkillEvent_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindInterruptQuestJoin
	 */
	struct UTelopManager_C_BindInterruptQuestJoin_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BindInterruptQuestSuccess
	 */
	struct UTelopManager_C_BindInterruptQuestSuccess_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BindInterruptQuestFailed
	 */
	struct UTelopManager_C_BindInterruptQuestFailed_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindInterruptQuestJoin
	 */
	struct UTelopManager_C_UnbindInterruptQuestJoin_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindInterruptQuestSuccess
	 */
	struct UTelopManager_C_UnbindInterruptQuestSuccess_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindInterruptQuestFailed
	 */
	struct UTelopManager_C_UnbindInterruptQuestFailed_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnInterruptQuestJoin
	 */
	struct UTelopManager_C_OnInterruptQuestJoin_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.OnInterruptQuestSuccess
	 */
	struct UTelopManager_C_OnInterruptQuestSuccess_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.OnInterruptQuestFailed
	 */
	struct UTelopManager_C_OnInterruptQuestFailed_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindRaidStart
	 */
	struct UTelopManager_C_BindRaidStart_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindRaidStart
	 */
	struct UTelopManager_C_UnbindRaidStart_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.CustomEvent_1
	 */
	struct UTelopManager_C_CustomEvent_1_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindClassLvUpJingle
	 */
	struct UTelopManager_C_BindClassLvUpJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindClassLvUpJingle
	 */
	struct UTelopManager_C_UnbindClassLvUpJingle_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnClassLevelUpEvent
	 */
	struct UTelopManager_C_OnClassLevelUpEvent_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindAdventureBoardJingleClear
	 */
	struct UTelopManager_C_BindAdventureBoardJingleClear_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BindAdventureBoardJingleComplete
	 */
	struct UTelopManager_C_BindAdventureBoardJingleComplete_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindAdventureBoardJingleClear
	 */
	struct UTelopManager_C_UnbindAdventureBoardJingleClear_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindAdventureBoardJingleComplete
	 */
	struct UTelopManager_C_UnbindAdventureBoardJingleComplete_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnAdventureBoardClear
	 */
	struct UTelopManager_C_OnAdventureBoardClear_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.OnAdventureBoardComplete
	 */
	struct UTelopManager_C_OnAdventureBoardComplete_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindQuestJingleAccept
	 */
	struct UTelopManager_C_BindQuestJingleAccept_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BindQuestJingleUpdate
	 */
	struct UTelopManager_C_BindQuestJingleUpdate_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BindQuestJingleClear
	 */
	struct UTelopManager_C_BindQuestJingleClear_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BindQuestJingleCancel
	 */
	struct UTelopManager_C_BindQuestJingleCancel_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindReversePallet
	 */
	struct UTelopManager_C_UnbindReversePallet_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BindReversePallet
	 */
	struct UTelopManager_C_BindReversePallet_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnReceiveAcceptedQuestEvent
	 */
	struct UTelopManager_C_OnReceiveAcceptedQuestEvent_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.OnReceiveUpdateQuestProgressEvent
	 */
	struct UTelopManager_C_OnReceiveUpdateQuestProgressEvent_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.OnReceiveCompleteQuestEvent
	 */
	struct UTelopManager_C_OnReceiveCompleteQuestEvent_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.OnReceiveCancelQuest
	 */
	struct UTelopManager_C_OnReceiveCancelQuest_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopManager.TelopManager_C.BindQuestJingleUpdate2
	 */
	struct UTelopManager_C_BindQuestJingleUpdate2_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindQuestJingleUpdate2
	 */
	struct UTelopManager_C_UnbindQuestJingleUpdate2_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.OnUpdatedQuestsJoin
	 */
	struct UTelopManager_C_OnUpdatedQuestsJoin_Params
	{
	public:
		TArray<int32_t>                                            QuestIndexes;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindQuestJingleAccept
	 */
	struct UTelopManager_C_UnbindQuestJingleAccept_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindQuestJingleClear
	 */
	struct UTelopManager_C_UnbindQuestJingleClear_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindQuestJingleUpdate
	 */
	struct UTelopManager_C_UnbindQuestJingleUpdate_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.UnbindQuestJingleCancel
	 */
	struct UTelopManager_C_UnbindQuestJingleCancel_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Type1_K2Node_ComponentBoundEvent_3_OnFinishDelegate__DelegateSignature
	 */
	struct UTelopManager_C_BndEvt__TelopManager_Telop_Type1_K2Node_ComponentBoundEvent_3_OnFinishDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Type2_K2Node_ComponentBoundEvent_4_OnFinishDelegate__DelegateSignature
	 */
	struct UTelopManager_C_BndEvt__TelopManager_Telop_Type2_K2Node_ComponentBoundEvent_4_OnFinishDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Type3_K2Node_ComponentBoundEvent_6_OnFinishDelegate__DelegateSignature
	 */
	struct UTelopManager_C_BndEvt__TelopManager_Telop_Type3_K2Node_ComponentBoundEvent_6_OnFinishDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_GameOver_K2Node_ComponentBoundEvent_12_OnFinishDelegate__DelegateSignature
	 */
	struct UTelopManager_C_BndEvt__TelopManager_Telop_GameOver_K2Node_ComponentBoundEvent_12_OnFinishDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_ClearDungeon_K2Node_ComponentBoundEvent_13_OnFinishDelegate__DelegateSignature
	 */
	struct UTelopManager_C_BndEvt__TelopManager_Telop_ClearDungeon_K2Node_ComponentBoundEvent_13_OnFinishDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_ArenaChallenge_K2Node_ComponentBoundEvent_14_OnFinishDelegate__DelegateSignature
	 */
	struct UTelopManager_C_BndEvt__TelopManager_Telop_ArenaChallenge_K2Node_ComponentBoundEvent_14_OnFinishDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Mission_K2Node_ComponentBoundEvent_15_OnFinishDelegate__DelegateSignature
	 */
	struct UTelopManager_C_BndEvt__TelopManager_Telop_Mission_K2Node_ComponentBoundEvent_15_OnFinishDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_ReadyGo_K2Node_ComponentBoundEvent_16_OnFinishDelegate__DelegateSignature
	 */
	struct UTelopManager_C_BndEvt__TelopManager_Telop_ReadyGo_K2Node_ComponentBoundEvent_16_OnFinishDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Normal_K2Node_ComponentBoundEvent_17_OnFinishDelegate__DelegateSignature
	 */
	struct UTelopManager_C_BndEvt__TelopManager_Telop_Normal_K2Node_ComponentBoundEvent_17_OnFinishDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.BndEvt__TelopManager_Telop_Proficiency_K2Node_ComponentBoundEvent_0_OnFinishDelegate__DelegateSignature
	 */
	struct UTelopManager_C_BndEvt__TelopManager_Telop_Proficiency_K2Node_ComponentBoundEvent_0_OnFinishDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function TelopManager.TelopManager_C.ExecuteUbergraph_TelopManager
	 */
	struct UTelopManager_C_ExecuteUbergraph_TelopManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
