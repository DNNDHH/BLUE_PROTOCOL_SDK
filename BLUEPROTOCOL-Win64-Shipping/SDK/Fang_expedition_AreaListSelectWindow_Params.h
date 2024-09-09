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
	 * Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.SetStatus
	 */
	struct UFang_expedition_AreaListSelectWindow_C_SetStatus_Params
	{
	public:
		ESBFang_expeditionStatus                                   Status;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Time;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       New;                                                     // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.GetData
	 */
	struct UFang_expedition_AreaListSelectWindow_C_GetData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_18MX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0008(0x00A8)  (Parm, OutParm)
	};

	/**
	 * Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.CB_OnClick
	 */
	struct UFang_expedition_AreaListSelectWindow_C_CB_OnClick_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.AddData
	 */
	struct UFang_expedition_AreaListSelectWindow_C_AddData_Params
	{
	public:
		struct FSBFang_expeditionAreaData                          AreaData;                                                // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.Clear
	 */
	struct UFang_expedition_AreaListSelectWindow_C_Clear_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.BndEvt__Fang_expedition_AreaListSelectWindow_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 */
	struct UFang_expedition_AreaListSelectWindow_C_BndEvt__Fang_expedition_AreaListSelectWindow_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.ExecuteUbergraph_Fang_expedition_AreaListSelectWindow
	 */
	struct UFang_expedition_AreaListSelectWindow_C_ExecuteUbergraph_Fang_expedition_AreaListSelectWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.OnCloseButtonClick__DelegateSignature
	 */
	struct UFang_expedition_AreaListSelectWindow_C_OnCloseButtonClick__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.OnListItemClick__DelegateSignature
	 */
	struct UFang_expedition_AreaListSelectWindow_C_OnListItemClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
