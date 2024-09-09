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
	 * Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.SetTokenBtnActive
	 */
	struct UFang_expedition_DungeonStatus_C_SetTokenBtnActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.UpdateBonusIcon
	 */
	struct UFang_expedition_DungeonStatus_C_UpdateBonusIcon_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.PlaySlotAnimation
	 */
	struct UFang_expedition_DungeonStatus_C_PlaySlotAnimation_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.SetGaugeData
	 */
	struct UFang_expedition_DungeonStatus_C_SetGaugeData_Params
	{
	public:
		int32_t                                                    Now;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Max;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.BndEvt__Fang_expedition_DungeonStatus_TokenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFang_expedition_DungeonStatus_C_BndEvt__Fang_expedition_DungeonStatus_TokenButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.WidgetAnimationEvt_AnmGaugeFull_K2Node_WidgetAnimationEvent_1
	 */
	struct UFang_expedition_DungeonStatus_C_WidgetAnimationEvt_AnmGaugeFull_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.Destruct
	 */
	struct UFang_expedition_DungeonStatus_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.RemoveTooltip
	 */
	struct UFang_expedition_DungeonStatus_C_RemoveTooltip_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.ExecuteUbergraph_Fang_expedition_DungeonStatus
	 */
	struct UFang_expedition_DungeonStatus_C_ExecuteUbergraph_Fang_expedition_DungeonStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.OnGaugeAnimationFinish__DelegateSignature
	 */
	struct UFang_expedition_DungeonStatus_C_OnGaugeAnimationFinish__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonStatus.Fang_expedition_DungeonStatus_C.OnTicketButtonClick__DelegateSignature
	 */
	struct UFang_expedition_DungeonStatus_C_OnTicketButtonClick__DelegateSignature_Params
	{
	public:
		class UObject*                                             ClickedObject;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
