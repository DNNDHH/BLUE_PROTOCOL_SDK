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
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.IsActiveSelect
	 */
	struct UFang_expedition_IconList_C_IsActiveSelect_Params
	{
	public:
		bool                                                       Select;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Active;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6YBY[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.SetIconSelectLog
	 */
	struct UFang_expedition_IconList_C_SetIconSelectLog_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WG1B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.InitFangList_UniqueId
	 */
	struct UFang_expedition_IconList_C_InitFangList_UniqueId_Params
	{
	public:
		int32_t                                                    MaxFangCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z796[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      UniqueId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_SortChange
	 */
	struct UFang_expedition_IconList_C_CB_SortChange_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_FilterChange
	 */
	struct UFang_expedition_IconList_C_CB_FilterChange_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filter;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.CallFangSelectChange
	 */
	struct UFang_expedition_IconList_C_CallFangSelectChange_Params
	{	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.UpdateIconVisibleStatus
	 */
	struct UFang_expedition_IconList_C_UpdateIconVisibleStatus_Params
	{	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.ClearIconData
	 */
	struct UFang_expedition_IconList_C_ClearIconData_Params
	{	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_OnIconSelect
	 */
	struct UFang_expedition_IconList_C_CB_OnIconSelect_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectIconBtn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.InitFangList
	 */
	struct UFang_expedition_IconList_C_InitFangList_Params
	{
	public:
		int32_t                                                    MaxFangCount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reset;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AWEV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.Construct
	 */
	struct UFang_expedition_IconList_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.BindEvent
	 */
	struct UFang_expedition_IconList_C_BindEvent_Params
	{	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.UnBindEvent
	 */
	struct UFang_expedition_IconList_C_UnBindEvent_Params
	{	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.Destruct
	 */
	struct UFang_expedition_IconList_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.BndEvt__Fang_expedition_IconList_ResetButton1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UFang_expedition_IconList_C_BndEvt__Fang_expedition_IconList_ResetButton1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.ExecuteUbergraph_Fang_expedition_IconList
	 */
	struct UFang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_IconList.Fang_expedition_IconList_C.OnFangSelectChange__DelegateSignature
	 */
	struct UFang_expedition_IconList_C_OnFangSelectChange__DelegateSignature_Params
	{
	public:
		TArray<class FString>                                      UniqueIds;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
