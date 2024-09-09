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
	 * Function Effect_OtherStock.Effect_OtherStock_C.PreConstruct
	 */
	struct UEffect_OtherStock_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Effect_OtherStock.Effect_OtherStock_C.NotActiveData
	 */
	struct UEffect_OtherStock_C_NotActiveData_Params
	{
	public:
		class FText                                                Buff;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                item;                                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Amount;                                                  // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Value;                                                   // 0x0048(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Effect_OtherStock.Effect_OtherStock_C.ExecuteUbergraph_Effect_OtherStock
	 */
	struct UEffect_OtherStock_C_ExecuteUbergraph_Effect_OtherStock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
