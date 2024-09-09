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
	 * Function UsedCheckList.UsedCheckList_C.UsedCheckList_AutoGenFunc
	 */
	struct UUsedCheckList_C_UsedCheckList_AutoGenFunc_Params
	{
	public:
		ESBUseCheckDialogType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       enable;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UsedCheckList.UsedCheckList_C.Generate
	 */
	struct UUsedCheckList_C_Generate_Params
	{	};

	/**
	 * Function UsedCheckList.UsedCheckList_C.PreConstruct
	 */
	struct UUsedCheckList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UsedCheckList.UsedCheckList_C.Construct
	 */
	struct UUsedCheckList_C_Construct_Params
	{	};

	/**
	 * Function UsedCheckList.UsedCheckList_C.ExecuteUbergraph_UsedCheckList
	 */
	struct UUsedCheckList_C_ExecuteUbergraph_UsedCheckList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
