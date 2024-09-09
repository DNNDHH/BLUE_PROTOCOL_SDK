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
	 * Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Construct
	 */
	struct UMyCharaMenu_Drink_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Update LiquidMemoryData
	 */
	struct UMyCharaMenu_Drink_C_UpdateLiquidMemoryData_Params
	{	};

	/**
	 * Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Add Active Param
	 */
	struct UMyCharaMenu_Drink_C_AddActiveParam_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      Value;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBLiquidMemoryEfficacyValueType                           EffucaryValueType;                                       // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.Add NonActive Param
	 */
	struct UMyCharaMenu_Drink_C_AddNonActiveParam_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      Value;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_Drink.MyCharaMenu_Drink_C.ExecuteUbergraph_MyCharaMenu_Drink
	 */
	struct UMyCharaMenu_Drink_C_ExecuteUbergraph_MyCharaMenu_Drink_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
