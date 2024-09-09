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
	 * Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.TryCreateWidget
	 */
	struct UWBP_DelayCreateItemIconBtn_C_TryCreateWidget_Params
	{
	public:
		class UItemIconBtn_C*                                      Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.Construct
	 */
	struct UWBP_DelayCreateItemIconBtn_C_Construct_Params
	{	};

	/**
	 * Function WBP_DelayCreateItemIconBtn.WBP_DelayCreateItemIconBtn_C.ExecuteUbergraph_WBP_DelayCreateItemIconBtn
	 */
	struct UWBP_DelayCreateItemIconBtn_C_ExecuteUbergraph_WBP_DelayCreateItemIconBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MW6C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
