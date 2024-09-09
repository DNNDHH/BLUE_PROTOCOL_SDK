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
	 * Function CmnOperationRotate.CmnOperationRotate_C.SwitchIconByOperateMode
	 */
	struct UCmnOperationRotate_C_SwitchIconByOperateMode_Params
	{
	public:
		ESBOperateMode                                             InOperateMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnOperationRotate.CmnOperationRotate_C.Construct
	 */
	struct UCmnOperationRotate_C_Construct_Params
	{	};

	/**
	 * Function CmnOperationRotate.CmnOperationRotate_C.OnUpdateOperateMode
	 */
	struct UCmnOperationRotate_C_OnUpdateOperateMode_Params
	{	};

	/**
	 * Function CmnOperationRotate.CmnOperationRotate_C.Destruct
	 */
	struct UCmnOperationRotate_C_Destruct_Params
	{	};

	/**
	 * Function CmnOperationRotate.CmnOperationRotate_C.ExecuteUbergraph_CmnOperationRotate
	 */
	struct UCmnOperationRotate_C_ExecuteUbergraph_CmnOperationRotate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
