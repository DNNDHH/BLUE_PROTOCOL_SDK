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
	 * Function EventShopCashBox.EventShopCashBox_C.SetClickInputState
	 */
	struct UEventShopCashBox_C_SetClickInputState_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopCashBox.EventShopCashBox_C.UpdatePurchaseButton
	 */
	struct UEventShopCashBox_C_UpdatePurchaseButton_Params
	{
	public:
		TArray<int32_t>                                            PriceList;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EventShopCashBox.EventShopCashBox_C.SetShopType
	 */
	struct UEventShopCashBox_C_SetShopType_Params
	{
	public:
		EShopType                                                  ShopType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCashBox.EventShopCashBox_C.GetAmount
	 */
	struct UEventShopCashBox_C_GetAmount_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCashBox.EventShopCashBox_C.ResetAmount
	 */
	struct UEventShopCashBox_C_ResetAmount_Params
	{	};

	/**
	 * Function EventShopCashBox.EventShopCashBox_C.SetTokenAmount
	 */
	struct UEventShopCashBox_C_SetTokenAmount_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Price;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCashBox.EventShopCashBox_C.SetTokenList
	 */
	struct UEventShopCashBox_C_SetTokenList_Params
	{
	public:
		TArray<int32_t>                                            TokenList;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EventShopCashBox.EventShopCashBox_C.Init
	 */
	struct UEventShopCashBox_C_Init_Params
	{	};

	/**
	 * Function EventShopCashBox.EventShopCashBox_C.Construct
	 */
	struct UEventShopCashBox_C_Construct_Params
	{	};

	/**
	 * Function EventShopCashBox.EventShopCashBox_C.BndEvt__EventShopCashBox_Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UEventShopCashBox_C_BndEvt__EventShopCashBox_Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopCashBox.EventShopCashBox_C.ExecuteUbergraph_EventShopCashBox
	 */
	struct UEventShopCashBox_C_ExecuteUbergraph_EventShopCashBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCashBox.EventShopCashBox_C.OnPurchased__DelegateSignature
	 */
	struct UEventShopCashBox_C_OnPurchased__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
