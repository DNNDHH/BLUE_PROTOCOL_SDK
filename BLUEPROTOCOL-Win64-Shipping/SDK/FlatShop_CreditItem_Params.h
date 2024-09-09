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
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.Get_Caution_ToolTipWidget_1
	 */
	struct UFlatShop_CreditItem_C_Get_Caution_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetCreditLack
	 */
	struct UFlatShop_CreditItem_C_SetCreditLack_Params
	{
	public:
		bool                                                       IsLack;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetVisibilityExpired
	 */
	struct UFlatShop_CreditItem_C_SetVisibilityExpired_Params
	{
	public:
		bool                                                       InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetAfterCreditNum
	 */
	struct UFlatShop_CreditItem_C_SetAfterCreditNum_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BQN3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetGashaTicketAmountColor
	 */
	struct UFlatShop_CreditItem_C_SetGashaTicketAmountColor_Params
	{
	public:
		bool                                                       IsLack;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.Reset Count Move
	 */
	struct UFlatShop_CreditItem_C_ResetCountMove_Params
	{	};

	/**
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.ChangeToTicketType
	 */
	struct UFlatShop_CreditItem_C_ChangeToTicketType_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetCreditNum
	 */
	struct UFlatShop_CreditItem_C_SetCreditNum_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.Set Credit Type
	 */
	struct UFlatShop_CreditItem_C_SetCreditType_Params
	{	};

	/**
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.OnLoaded_52660D15417B61953E2BF591D987F44E
	 */
	struct UFlatShop_CreditItem_C_OnLoaded_52660D15417B61953E2BF591D987F44E_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.PreConstruct
	 */
	struct UFlatShop_CreditItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetIconTexture
	 */
	struct UFlatShop_CreditItem_C_SetIconTexture_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_CreditItem.FlatShop_CreditItem_C.ExecuteUbergraph_FlatShop_CreditItem
	 */
	struct UFlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GFFT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
