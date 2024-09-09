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
	 * Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.SetupTokenIcon
	 */
	struct UWBP_NaEventTokenIcon_C_SetupTokenIcon_Params
	{	};

	/**
	 * Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.Construct
	 */
	struct UWBP_NaEventTokenIcon_C_Construct_Params
	{	};

	/**
	 * Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.Tick
	 */
	struct UWBP_NaEventTokenIcon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.SetData
	 */
	struct UWBP_NaEventTokenIcon_C_SetData_Params
	{
	public:
		TArray<int32_t>                                            TokenIdList;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_NaEventTokenIcon.WBP_NaEventTokenIcon_C.ExecuteUbergraph_WBP_NaEventTokenIcon
	 */
	struct UWBP_NaEventTokenIcon_C_ExecuteUbergraph_WBP_NaEventTokenIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
