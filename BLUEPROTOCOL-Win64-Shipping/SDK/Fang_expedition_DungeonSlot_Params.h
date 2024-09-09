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
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetBtn_Selected
	 */
	struct UFang_expedition_DungeonSlot_C_SetBtn_Selected_Params
	{
	public:
		bool                                                       BtnSelected;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetPlayData
	 */
	struct UFang_expedition_DungeonSlot_C_SetPlayData_Params
	{
	public:
		struct FSBFang_expeditionPlayData                          PlayData_;                                               // 0x0000(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    SlotIndex;                                               // 0x0120(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetSlotType
	 */
	struct UFang_expedition_DungeonSlot_C_SetSlotType_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Finish
	 */
	struct UFang_expedition_DungeonSlot_C_Finish_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Initialize
	 */
	struct UFang_expedition_DungeonSlot_C_Initialize_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.SetAreaData
	 */
	struct UFang_expedition_DungeonSlot_C_SetAreaData_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData_;                                               // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    SlotIndex;                                               // 0x00A8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Construct
	 */
	struct UFang_expedition_DungeonSlot_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.CB_ExpeditionSlotSelect
	 */
	struct UFang_expedition_DungeonSlot_C_CB_ExpeditionSlotSelect_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.Destruct
	 */
	struct UFang_expedition_DungeonSlot_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFang_expedition_DungeonSlot_C_BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UFang_expedition_DungeonSlot_C_BndEvt__Fang_expedition_DungeonSlot_DungeonListOpenButtonEx_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.ExecuteUbergraph_Fang_expedition_DungeonSlot
	 */
	struct UFang_expedition_DungeonSlot_C_ExecuteUbergraph_Fang_expedition_DungeonSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FSLE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.OnSelect_Standby__DelegateSignature
	 */
	struct UFang_expedition_DungeonSlot_C_OnSelect_Standby__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonSlot.Fang_expedition_DungeonSlot_C.OnSelect_Expedition__DelegateSignature
	 */
	struct UFang_expedition_DungeonSlot_C_OnSelect_Expedition__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2B32[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0008(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
