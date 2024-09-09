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
	 * Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.CB_FangSelectChange
	 */
	struct UFang_expedition_FangSelect_C_CB_FangSelectChange_Params
	{
	public:
		TArray<class FString>                                      UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.InitFangList_UniqueId
	 */
	struct UFang_expedition_FangSelect_C_InitFangList_UniqueId_Params
	{
	public:
		int32_t                                                    FangCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3878[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      UniqueId;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.InitFangList
	 */
	struct UFang_expedition_FangSelect_C_InitFangList_Params
	{
	public:
		int32_t                                                    FangCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.Construct
	 */
	struct UFang_expedition_FangSelect_C_Construct_Params
	{	};

	/**
	 * Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.BindFunction
	 */
	struct UFang_expedition_FangSelect_C_BindFunction_Params
	{	};

	/**
	 * Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.UnbindFunction
	 */
	struct UFang_expedition_FangSelect_C_UnbindFunction_Params
	{	};

	/**
	 * Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.Destruct
	 */
	struct UFang_expedition_FangSelect_C_Destruct_Params
	{	};

	/**
	 * Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.ExecuteUbergraph_Fang_expedition_FangSelect
	 */
	struct UFang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S8S1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.OnFangSelectChange__DelegateSignature
	 */
	struct UFang_expedition_FangSelect_C_OnFangSelectChange__DelegateSignature_Params
	{
	public:
		TArray<class FString>                                      UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
