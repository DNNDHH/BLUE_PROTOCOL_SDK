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
	 * Function WBP_ContentAction.WBP_ContentAction_C.CheckInit
	 */
	struct UWBP_ContentAction_C_CheckInit_Params
	{	};

	/**
	 * Function WBP_ContentAction.WBP_ContentAction_C.OnVisibleChange
	 */
	struct UWBP_ContentAction_C_OnVisibleChange_Params
	{	};

	/**
	 * Function WBP_ContentAction.WBP_ContentAction_C.CheckVisibleChange
	 */
	struct UWBP_ContentAction_C_CheckVisibleChange_Params
	{
	public:
		ESBUIType                                                  UiType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visibility;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DoChange;                                                // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction.WBP_ContentAction_C.SetWidgets
	 */
	struct UWBP_ContentAction_C_SetWidgets_Params
	{	};

	/**
	 * Function WBP_ContentAction.WBP_ContentAction_C.CheckActiveMap
	 */
	struct UWBP_ContentAction_C_CheckActiveMap_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction.WBP_ContentAction_C.LoadSavePosition
	 */
	struct UWBP_ContentAction_C_LoadSavePosition_Params
	{	};

	/**
	 * Function WBP_ContentAction.WBP_ContentAction_C.SetEditMode
	 */
	struct UWBP_ContentAction_C_SetEditMode_Params
	{
	public:
		bool                                                       InEdit;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction.WBP_ContentAction_C.OnUIVisibleChange
	 */
	struct UWBP_ContentAction_C_OnUIVisibleChange_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction.WBP_ContentAction_C.Construct
	 */
	struct UWBP_ContentAction_C_Construct_Params
	{	};

	/**
	 * Function WBP_ContentAction.WBP_ContentAction_C.OnLayoutUpodate
	 */
	struct UWBP_ContentAction_C_OnLayoutUpodate_Params
	{	};

	/**
	 * Function WBP_ContentAction.WBP_ContentAction_C.PreConstruct
	 */
	struct UWBP_ContentAction_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_ContentAction.WBP_ContentAction_C.Destruct
	 */
	struct UWBP_ContentAction_C_Destruct_Params
	{	};

	/**
	 * Function WBP_ContentAction.WBP_ContentAction_C.ExecuteUbergraph_WBP_ContentAction
	 */
	struct UWBP_ContentAction_C_ExecuteUbergraph_WBP_ContentAction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B0PD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
