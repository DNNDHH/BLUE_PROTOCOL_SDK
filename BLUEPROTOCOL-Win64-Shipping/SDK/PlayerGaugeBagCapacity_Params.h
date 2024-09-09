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
	 * Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.Update_Internal
	 */
	struct UPlayerGaugeBagCapacity_C_Update_Internal_Params
	{	};

	/**
	 * Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.Construct
	 */
	struct UPlayerGaugeBagCapacity_C_Construct_Params
	{	};

	/**
	 * Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.CustomEvent_3
	 */
	struct UPlayerGaugeBagCapacity_C_CustomEvent_3_Params
	{	};

	/**
	 * Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.CustomEvent_1
	 */
	struct UPlayerGaugeBagCapacity_C_CustomEvent_1_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WSP3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBLiquidMemoryInfo>                         InUpdatedLiquidMemoryInfos;                              // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.ExecuteUbergraph_PlayerGaugeBagCapacity
	 */
	struct UPlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
