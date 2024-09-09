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
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.EndGameOver
	 */
	struct UBP_PlayerUIComponent_C_EndGameOver_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.EndGameClear
	 */
	struct UBP_PlayerUIComponent_C_EndGameClear_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ResetSlientBaloon
	 */
	struct UBP_PlayerUIComponent_C_ResetSlientBaloon_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnRequestAutoLikeSend
	 */
	struct UBP_PlayerUIComponent_C_OnRequestAutoLikeSend_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.SetSlientBaloon
	 */
	struct UBP_PlayerUIComponent_C_SetSlientBaloon_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ResetMenuMode
	 */
	struct UBP_PlayerUIComponent_C_ResetMenuMode_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.SetMenuMode
	 */
	struct UBP_PlayerUIComponent_C_SetMenuMode_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.DeleteResult
	 */
	struct UBP_PlayerUIComponent_C_DeleteResult_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnSkipDungeonClear
	 */
	struct UBP_PlayerUIComponent_C_OnSkipDungeonClear_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnComplateDungeonFailed
	 */
	struct UBP_PlayerUIComponent_C_OnComplateDungeonFailed_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnComplateDungeonClear
	 */
	struct UBP_PlayerUIComponent_C_OnComplateDungeonClear_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnRequestDungeonFailed
	 */
	struct UBP_PlayerUIComponent_C_OnRequestDungeonFailed_Params
	{
	public:
		ESBGameOver                                                InGameOverType;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PQ91[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnRequestDungeonClear
	 */
	struct UBP_PlayerUIComponent_C_OnRequestDungeonClear_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ResetResult
	 */
	struct UBP_PlayerUIComponent_C_ResetResult_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.SetupFailed
	 */
	struct UBP_PlayerUIComponent_C_SetupFailed_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.SetupResult
	 */
	struct UBP_PlayerUIComponent_C_SetupResult_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V9H9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UpdateResult
	 */
	struct UBP_PlayerUIComponent_C_UpdateResult_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindResult
	 */
	struct UBP_PlayerUIComponent_C_UnbindResult_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindResult
	 */
	struct UBP_PlayerUIComponent_C_BindResult_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.GetDungeonComponent
	 */
	struct UBP_PlayerUIComponent_C_GetDungeonComponent_Params
	{
	public:
		class USBPlayerDungeonComponent*                           DungeonComponent;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.Terminate
	 */
	struct UBP_PlayerUIComponent_C_Terminate_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.Initialize
	 */
	struct UBP_PlayerUIComponent_C_Initialize_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_2BEC9CDC4CE8DF1CFAD672AE4B151726
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_2BEC9CDC4CE8DF1CFAD672AE4B151726_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_726AEB824AC88A5C1621D2A6B4CD6F67
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_726AEB824AC88A5C1621D2A6B4CD6F67_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_DBC22C7F4DC42FCC28D569B7193A74EF
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_DBC22C7F4DC42FCC28D569B7193A74EF_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_E0603C6B44161052AF941591848D438A
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_E0603C6B44161052AF941591848D438A_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_698586454896DB641C19D693D96ED60D
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_698586454896DB641C19D693D96ED60D_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_069377654D13A7187F0A43AE1026CAF8
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_069377654D13A7187F0A43AE1026CAF8_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_7D1867C2409FD80E3A58C39FDD75F797
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_7D1867C2409FD80E3A58C39FDD75F797_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_A4F536AA42247A2D509B259D1F1A6D2A
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_A4F536AA42247A2D509B259D1F1A6D2A_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_1BC6453D43889E654F51A3A00EE84C6F
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_1BC6453D43889E654F51A3A00EE84C6F_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_23C7A54141864CEF5FF5F089CA9C231E
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_23C7A54141864CEF5FF5F089CA9C231E_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_2959E7A6448E4A19F01A719E578C8E3D
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_2959E7A6448E4A19F01A719E578C8E3D_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_6C711DCE45199B782A855D82C81016A7
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_6C711DCE45199B782A855D82C81016A7_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_693A7C1845F6EAE19463A184C6C44674
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_693A7C1845F6EAE19463A184C6C44674_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLoaded_0AB9338748E6F335CE49BA903CAD7296
	 */
	struct UBP_PlayerUIComponent_C_OnLoaded_0AB9338748E6F335CE49BA903CAD7296_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnDungeonClearDelegate
	 */
	struct UBP_PlayerUIComponent_C_OnDungeonClearDelegate_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindEventDungeonClear
	 */
	struct UBP_PlayerUIComponent_C_BindEventDungeonClear_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindEventDungeonClear
	 */
	struct UBP_PlayerUIComponent_C_UnbindEventDungeonClear_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindEventResultEnd
	 */
	struct UBP_PlayerUIComponent_C_BindEventResultEnd_Params
	{
	public:
		class UResultMenuBase_C*                                   Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindEventResultEnd
	 */
	struct UBP_PlayerUIComponent_C_UnbindEventResultEnd_Params
	{
	public:
		class UResultMenuBase_C*                                   Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnResultEnd
	 */
	struct UBP_PlayerUIComponent_C_OnResultEnd_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindAutoLikeSend
	 */
	struct UBP_PlayerUIComponent_C_BindAutoLikeSend_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnAutoLikeSendDelegate
	 */
	struct UBP_PlayerUIComponent_C_OnAutoLikeSendDelegate_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindAutoLikeSend
	 */
	struct UBP_PlayerUIComponent_C_UnbindAutoLikeSend_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindEventDungeonFailed
	 */
	struct UBP_PlayerUIComponent_C_BindEventDungeonFailed_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindEventDungeonFailed
	 */
	struct UBP_PlayerUIComponent_C_UnbindEventDungeonFailed_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnDungeonFailedDelegate
	 */
	struct UBP_PlayerUIComponent_C_OnDungeonFailedDelegate_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBGameOver                                                InGameOverType;                                          // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.CustomEvent_1
	 */
	struct UBP_PlayerUIComponent_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindOnTimeOver
	 */
	struct UBP_PlayerUIComponent_C_BindOnTimeOver_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindOnTimeOver
	 */
	struct UBP_PlayerUIComponent_C_UnbindOnTimeOver_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindOnGameOver
	 */
	struct UBP_PlayerUIComponent_C_BindOnGameOver_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindOnGameOver
	 */
	struct UBP_PlayerUIComponent_C_UnbindOnGameOver_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BindOnRequestEndResultMenu
	 */
	struct UBP_PlayerUIComponent_C_BindOnRequestEndResultMenu_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.UnbindOnRequestEndResultMenu
	 */
	struct UBP_PlayerUIComponent_C_UnbindOnRequestEndResultMenu_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.CustomEvent
	 */
	struct UBP_PlayerUIComponent_C_CustomEvent_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.CreateResult
	 */
	struct UBP_PlayerUIComponent_C_CreateResult_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.CreateFailed
	 */
	struct UBP_PlayerUIComponent_C_CreateFailed_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.AutoDeliveryQuestDelegate
	 */
	struct UBP_PlayerUIComponent_C_AutoDeliveryQuestDelegate_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.AchievementedAutoDeliveryQuestDelegete
	 */
	struct UBP_PlayerUIComponent_C_AchievementedAutoDeliveryQuestDelegete_Params
	{
	public:
		ESBSeasonPassQuestCycleType                                CycleType;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D915[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              QuestID;                                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.DebugPlayGashaDemo
	 */
	struct UBP_PlayerUIComponent_C_DebugPlayGashaDemo_Params
	{
	public:
		struct FSBGashaResultData                                  InResultData;                                            // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bInSkip;                                                 // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.DebugPlayGashaSpecialCut
	 */
	struct UBP_PlayerUIComponent_C_DebugPlayGashaSpecialCut_Params
	{
	public:
		ESBRarity                                                  InDemoRarity;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBRarity                                                  InActualRarity;                                          // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.NotifyCastSkill
	 */
	struct UBP_PlayerUIComponent_C_NotifyCastSkill_Params
	{
	public:
		ESkillActionPosition                                       InSkillPosition;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.InitInterruptQuestDelegate
	 */
	struct UBP_PlayerUIComponent_C_InitInterruptQuestDelegate_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.CustomEvent_2
	 */
	struct UBP_PlayerUIComponent_C_CustomEvent_2_Params
	{
	public:
		class FName                                                InQuestId;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnLeaveInterruptQuestDelegete_Event_1
	 */
	struct UBP_PlayerUIComponent_C_OnLeaveInterruptQuestDelegete_Event_1_Params
	{
	public:
		class FName                                                InQuestId;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ReceiveBeginPlay
	 */
	struct UBP_PlayerUIComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowSerialKillMessage
	 */
	struct UBP_PlayerUIComponent_C_BP_ShowSerialKillMessage_Params
	{
	public:
		int32_t                                                    InKillCount;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowKillMessage
	 */
	struct UBP_PlayerUIComponent_C_BP_ShowKillMessage_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowKillMark
	 */
	struct UBP_PlayerUIComponent_C_BP_ShowKillMark_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowCombo
	 */
	struct UBP_PlayerUIComponent_C_BP_ShowCombo_Params
	{
	public:
		int32_t                                                    InComboNum;                                              // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowRespawn
	 */
	struct UBP_PlayerUIComponent_C_BP_ShowRespawn_Params
	{
	public:
		float                                                      RespawnTime;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_DisableRespawn
	 */
	struct UBP_PlayerUIComponent_C_BP_DisableRespawn_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowRespawnBattleArea
	 */
	struct UBP_PlayerUIComponent_C_BP_ShowRespawnBattleArea_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_ShowJankenWindow
	 */
	struct UBP_PlayerUIComponent_C_BP_ShowJankenWindow_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnClose_Event_1
	 */
	struct UBP_PlayerUIComponent_C_OnClose_Event_1_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_EscapeConfirmation
	 */
	struct UBP_PlayerUIComponent_C_BP_EscapeConfirmation_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnSelect
	 */
	struct UBP_PlayerUIComponent_C_OnSelect_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ReceiveEndPlay
	 */
	struct UBP_PlayerUIComponent_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ReceiveTick
	 */
	struct UBP_PlayerUIComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.BP_UpdateRespawnGauge
	 */
	struct UBP_PlayerUIComponent_C_BP_UpdateRespawnGauge_Params
	{	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.ExecuteUbergraph_BP_PlayerUIComponent
	 */
	struct UBP_PlayerUIComponent_C_ExecuteUbergraph_BP_PlayerUIComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3HJ9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerUIComponent.BP_PlayerUIComponent_C.OnCastSkill__DelegateSignature
	 */
	struct UBP_PlayerUIComponent_C_OnCastSkill__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InSkillPosition;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
