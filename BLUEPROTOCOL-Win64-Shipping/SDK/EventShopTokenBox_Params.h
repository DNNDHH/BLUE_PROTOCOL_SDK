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
	 * Function EventShopTokenBox.EventShopTokenBox_C.CheckCostOver
	 */
	struct UEventShopTokenBox_C_CheckCostOver_Params
	{
	public:
		int32_t                                                    ListId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTokenBox.EventShopTokenBox_C.GetAmount
	 */
	struct UEventShopTokenBox_C_GetAmount_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTokenBox.EventShopTokenBox_C.SetTokenAmount
	 */
	struct UEventShopTokenBox_C_SetTokenAmount_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTokenBox.EventShopTokenBox_C.ResetAmount
	 */
	struct UEventShopTokenBox_C_ResetAmount_Params
	{	};

	/**
	 * Function EventShopTokenBox.EventShopTokenBox_C.SetTokenList
	 */
	struct UEventShopTokenBox_C_SetTokenList_Params
	{
	public:
		TArray<int32_t>                                            TokenList;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EventShopTokenBox.EventShopTokenBox_C.Set Token Num
	 */
	struct UEventShopTokenBox_C_SetTokenNum_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopTokenBox.EventShopTokenBox_C.Init
	 */
	struct UEventShopTokenBox_C_Init_Params
	{	};

	/**
	 * Function EventShopTokenBox.EventShopTokenBox_C.Construct
	 */
	struct UEventShopTokenBox_C_Construct_Params
	{	};

	/**
	 * Function EventShopTokenBox.EventShopTokenBox_C.ExecuteUbergraph_EventShopTokenBox
	 */
	struct UEventShopTokenBox_C_ExecuteUbergraph_EventShopTokenBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
