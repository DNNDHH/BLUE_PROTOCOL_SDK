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
	 * Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.ShowEmptyText
	 */
	struct UFang_expedition_DungeonList_C_ShowEmptyText_Params
	{
	public:
		bool                                                       InParam;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.CB_ItemSelect
	 */
	struct UFang_expedition_DungeonList_C_CB_ItemSelect_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VW9K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.Clear
	 */
	struct UFang_expedition_DungeonList_C_Clear_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.SetData
	 */
	struct UFang_expedition_DungeonList_C_SetData_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.BndEvt__Fang_expedition_DungeonList_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UFang_expedition_DungeonList_C_BndEvt__Fang_expedition_DungeonList_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.ExecuteUbergraph_Fang_expedition_DungeonList
	 */
	struct UFang_expedition_DungeonList_C_ExecuteUbergraph_Fang_expedition_DungeonList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.OnCloseButtonPress__DelegateSignature
	 */
	struct UFang_expedition_DungeonList_C_OnCloseButtonPress__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.OnDungeonAreaSelect__DelegateSignature
	 */
	struct UFang_expedition_DungeonList_C_OnDungeonAreaSelect__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T03V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0008(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
