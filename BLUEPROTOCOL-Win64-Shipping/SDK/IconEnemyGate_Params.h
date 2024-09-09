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
	 * Function IconEnemyGate.IconEnemyGate_C.OnSetInside
	 */
	struct UIconEnemyGate_C_OnSetInside_Params
	{
	public:
		bool                                                       IsInSide;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_30DR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IconEnemyGate.IconEnemyGate_C.PlayAnimCircle
	 */
	struct UIconEnemyGate_C_PlayAnimCircle_Params
	{	};

	/**
	 * Function IconEnemyGate.IconEnemyGate_C.Construct
	 */
	struct UIconEnemyGate_C_Construct_Params
	{	};

	/**
	 * Function IconEnemyGate.IconEnemyGate_C.ExecuteUbergraph_IconEnemyGate
	 */
	struct UIconEnemyGate_C_ExecuteUbergraph_IconEnemyGate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
