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
	 * Function StackBLuckyChance.StackBLuckyChance_C.UpdateColor
	 */
	struct UStackBLuckyChance_C_UpdateColor_Params
	{	};

	/**
	 * Function StackBLuckyChance.StackBLuckyChance_C.SetLuckyChanceNum
	 */
	struct UStackBLuckyChance_C_SetLuckyChanceNum_Params
	{
	public:
		int32_t                                                    ChanceNum;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IQ4U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function StackBLuckyChance.StackBLuckyChance_C.SetData
	 */
	struct UStackBLuckyChance_C_SetData_Params
	{
	public:
		struct FOwnItemInfo                                        InfoData;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function StackBLuckyChance.StackBLuckyChance_C.PreConstruct
	 */
	struct UStackBLuckyChance_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function StackBLuckyChance.StackBLuckyChance_C.ExecuteUbergraph_StackBLuckyChance
	 */
	struct UStackBLuckyChance_C_ExecuteUbergraph_StackBLuckyChance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JF7U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
