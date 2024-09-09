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
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateCraftNum
	 */
	struct UCraftRecepiDescProduct_C_UpdateCraftNum_Params
	{
	public:
		int32_t                                                    CraftCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateLiquidMemory
	 */
	struct UCraftRecepiDescProduct_C_UpdateLiquidMemory_Params
	{	};

	/**
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateBoost
	 */
	struct UCraftRecepiDescProduct_C_UpdateBoost_Params
	{	};

	/**
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.OnLoaded_29DFB891443B661BA66AFE8D4818F831
	 */
	struct UCraftRecepiDescProduct_C_OnLoaded_29DFB891443B661BA66AFE8D4818F831_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.SetRecepiData
	 */
	struct UCraftRecepiDescProduct_C_SetRecepiData_Params
	{
	public:
		struct FCharacterCraftRecepi                               RecepiData;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.LoadImage
	 */
	struct UCraftRecepiDescProduct_C_LoadImage_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.Destruct
	 */
	struct UCraftRecepiDescProduct_C_Destruct_Params
	{	};

	/**
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.OnUpdateBoost
	 */
	struct UCraftRecepiDescProduct_C_OnUpdateBoost_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.BndEvt__CraftRecepiDescProduct_CommonItemStatusDescWithImageView_K2Node_ComponentBoundEvent_0_RequestShowRateDialog__DelegateSignature
	 */
	struct UCraftRecepiDescProduct_C_BndEvt__CraftRecepiDescProduct_CommonItemStatusDescWithImageView_K2Node_ComponentBoundEvent_0_RequestShowRateDialog__DelegateSignature_Params
	{	};

	/**
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.Construct
	 */
	struct UCraftRecepiDescProduct_C_Construct_Params
	{	};

	/**
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.PreConstruct
	 */
	struct UCraftRecepiDescProduct_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.ExecuteUbergraph_CraftRecepiDescProduct
	 */
	struct UCraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.Request_ShowRate__DelegateSignature
	 */
	struct UCraftRecepiDescProduct_C_Request_ShowRate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
