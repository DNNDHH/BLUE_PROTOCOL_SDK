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
	 * Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetBlank
	 */
	struct UFang_expedition_PlayListItem_C_SetBlank_Params
	{
	public:
		bool                                                       TextVisibility;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AXG8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TimeNum;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetEmpty
	 */
	struct UFang_expedition_PlayListItem_C_SetEmpty_Params
	{	};

	/**
	 * Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.SetData
	 */
	struct UFang_expedition_PlayListItem_C_SetData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E61B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionPlayData                          PlayData;                                                // 0x0008(0x0120)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.Construct
	 */
	struct UFang_expedition_PlayListItem_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.CB_PlayButtonClick
	 */
	struct UFang_expedition_PlayListItem_C_CB_PlayButtonClick_Params
	{	};

	/**
	 * Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.CB_FinishButtonClick
	 */
	struct UFang_expedition_PlayListItem_C_CB_FinishButtonClick_Params
	{	};

	/**
	 * Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.Destruct
	 */
	struct UFang_expedition_PlayListItem_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.ExecuteUbergraph_Fang_expedition_PlayListItem
	 */
	struct UFang_expedition_PlayListItem_C_ExecuteUbergraph_Fang_expedition_PlayListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.OnClick_Finish__DelegateSignature
	 */
	struct UFang_expedition_PlayListItem_C_OnClick_Finish__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C.OnClick_Playing__DelegateSignature
	 */
	struct UFang_expedition_PlayListItem_C_OnClick_Playing__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
