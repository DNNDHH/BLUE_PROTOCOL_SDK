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
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetAchievementName
	 */
	struct UBP_PlayerName_Layoutable_C_SetAchievementName_Params
	{	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetPlayerName
	 */
	struct UBP_PlayerName_Layoutable_C_SetPlayerName_Params
	{	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetLayoutEditMode
	 */
	struct UBP_PlayerName_Layoutable_C_SetLayoutEditMode_Params
	{
	public:
		bool                                                       LayoutEditMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.Construct
	 */
	struct UBP_PlayerName_Layoutable_C_Construct_Params
	{	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnAttachedClientPlayerStateDelegate_Event_1
	 */
	struct UBP_PlayerName_Layoutable_C_OnAttachedClientPlayerStateDelegate_Event_1_Params
	{
	public:
		class ASBPlayerController*                                 PlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.InitPlayerStateDelegate
	 */
	struct UBP_PlayerName_Layoutable_C_InitPlayerStateDelegate_Params
	{
	public:
		class ASBPlayerState*                                      InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnCharacterNameChangeDelegate_Event_1
	 */
	struct UBP_PlayerName_Layoutable_C_OnCharacterNameChangeDelegate_Event_1_Params
	{
	public:
		class FString                                              InName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnChangePlayerCharacter
	 */
	struct UBP_PlayerName_Layoutable_C_OnChangePlayerCharacter_Params
	{
	public:
		class APawn*                                               InPawn;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnReciveBattleStatus
	 */
	struct UBP_PlayerName_Layoutable_C_OnReciveBattleStatus_Params
	{	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnAchievementSelectedChangeDelegate_イベント_1
	 */
	struct UBP_PlayerName_Layoutable_C_OnAchievementSelectedChangeDelegate__1_Params
	{	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.Destruct
	 */
	struct UBP_PlayerName_Layoutable_C_Destruct_Params
	{	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.UnbindAttachedClientPlayerStateDelegate
	 */
	struct UBP_PlayerName_Layoutable_C_UnbindAttachedClientPlayerStateDelegate_Params
	{	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.UnbindPlayerStateDelegate
	 */
	struct UBP_PlayerName_Layoutable_C_UnbindPlayerStateDelegate_Params
	{	};

	/**
	 * Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.ExecuteUbergraph_BP_PlayerName_Layoutable
	 */
	struct UBP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3GKN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
