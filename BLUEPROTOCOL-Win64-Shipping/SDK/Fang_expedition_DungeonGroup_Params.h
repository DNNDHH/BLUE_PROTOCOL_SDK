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
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.PlaySlotAnimation
	 */
	struct UFang_expedition_DungeonGroup_C_PlaySlotAnimation_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetBtn_Selected
	 */
	struct UFang_expedition_DungeonGroup_C_SetBtn_Selected_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetSlotType
	 */
	struct UFang_expedition_DungeonGroup_C_SetSlotType_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SlotType;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Finish
	 */
	struct UFang_expedition_DungeonGroup_C_Finish_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Initialize
	 */
	struct UFang_expedition_DungeonGroup_C_Initialize_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetGauge
	 */
	struct UFang_expedition_DungeonGroup_C_SetGauge_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NowPoint;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxPoint;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NVA3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.SetPlayData
	 */
	struct UFang_expedition_DungeonGroup_C_SetPlayData_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_481K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0008(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_TicketButtonClick
	 */
	struct UFang_expedition_DungeonGroup_C_CB_TicketButtonClick_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.Destruct
	 */
	struct UFang_expedition_DungeonGroup_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_PressExpeditionButton
	 */
	struct UFang_expedition_DungeonGroup_C_CB_PressExpeditionButton_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CQ54[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0008(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_PressStandbyButton
	 */
	struct UFang_expedition_DungeonGroup_C_CB_PressStandbyButton_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.CB_SlotAnimationFinish
	 */
	struct UFang_expedition_DungeonGroup_C_CB_SlotAnimationFinish_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.ExecuteUbergraph_Fang_expedition_DungeonGroup
	 */
	struct UFang_expedition_DungeonGroup_C_ExecuteUbergraph_Fang_expedition_DungeonGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U7LQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnAnimationFinish__DelegateSignature
	 */
	struct UFang_expedition_DungeonGroup_C_OnAnimationFinish__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnPressStandby__DelegateSignature
	 */
	struct UFang_expedition_DungeonGroup_C_OnPressStandby__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnPressExpedition__DelegateSignature
	 */
	struct UFang_expedition_DungeonGroup_C_OnPressExpedition__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HLUX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0008(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_DungeonGroup.Fang_expedition_DungeonGroup_C.OnTicketButtonClick__DelegateSignature
	 */
	struct UFang_expedition_DungeonGroup_C_OnTicketButtonClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
