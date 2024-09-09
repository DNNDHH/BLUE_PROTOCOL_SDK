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
	 * Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.UpdateBoost
	 */
	struct UImagineCraftDescProduct_C_UpdateBoost_Params
	{	};

	/**
	 * Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.IsLiquidMemoryActive
	 */
	struct UImagineCraftDescProduct_C_IsLiquidMemoryActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.SetRecepiData
	 */
	struct UImagineCraftDescProduct_C_SetRecepiData_Params
	{
	public:
		struct FMasterImagineRecepi                                RecepiData;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.Construct
	 */
	struct UImagineCraftDescProduct_C_Construct_Params
	{	};

	/**
	 * Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.Destruct
	 */
	struct UImagineCraftDescProduct_C_Destruct_Params
	{	};

	/**
	 * Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.OnComplete_RewardBoostInfo
	 */
	struct UImagineCraftDescProduct_C_OnComplete_RewardBoostInfo_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Param;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.BndEvt__ImagineCraftDescProduct_RateDisplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UImagineCraftDescProduct_C_BndEvt__ImagineCraftDescProduct_RateDisplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ImagineCraftDescProduct.ImagineCraftDescProduct_C.ExecuteUbergraph_ImagineCraftDescProduct
	 */
	struct UImagineCraftDescProduct_C_ExecuteUbergraph_ImagineCraftDescProduct_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
