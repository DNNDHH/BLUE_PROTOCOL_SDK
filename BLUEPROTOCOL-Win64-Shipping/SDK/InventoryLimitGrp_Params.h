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
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.Set Item Type
	 */
	struct UInventoryLimitGrp_C_SetItemType_Params
	{
	public:
		EItemType                                                  ItemType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.SetHeadingMessage
	 */
	struct UInventoryLimitGrp_C_SetHeadingMessage_Params
	{	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.SetDateTimeText
	 */
	struct UInventoryLimitGrp_C_SetDateTimeText_Params
	{
	public:
		struct FDateTime                                           InDateTime;                                              // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		ESBDateTimeTextRemainTimeFlag                              ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.SetIsForShopProduct
	 */
	struct UInventoryLimitGrp_C_SetIsForShopProduct_Params
	{
	public:
		bool                                                       InIsForShopProduct;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.SetDurationTimeFromMinutes
	 */
	struct UInventoryLimitGrp_C_SetDurationTimeFromMinutes_Params
	{
	public:
		int32_t                                                    InDurationMinutes;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YX7Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.PreConstruct
	 */
	struct UInventoryLimitGrp_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.SetData
	 */
	struct UInventoryLimitGrp_C_SetData_Params
	{
	public:
		struct FItemMasterData                                     ItemMasterData;                                          // 0x0000(0x00D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForCostume
	 */
	struct UInventoryLimitGrp_C_SetDataForCostume_Params
	{
	public:
		struct FDateTime                                           InExpiryDateTime;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForWeapon
	 */
	struct UInventoryLimitGrp_C_SetDataForWeapon_Params
	{
	public:
		struct FDateTime                                           InExpiryDateTime;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForCostumeByDurationMinutes
	 */
	struct UInventoryLimitGrp_C_SetDataForCostumeByDurationMinutes_Params
	{
	public:
		int32_t                                                    InDurationMinutes;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForWeaponByDurationMinutes
	 */
	struct UInventoryLimitGrp_C_SetDataForWeaponByDurationMinutes_Params
	{
	public:
		int32_t                                                    InDurationMinutes;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForImagine
	 */
	struct UInventoryLimitGrp_C_SetDataForImagine_Params
	{
	public:
		struct FDateTime                                           InExpiryDateTime;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForMountImagine
	 */
	struct UInventoryLimitGrp_C_SetDataForMountImagine_Params
	{
	public:
		struct FDateTime                                           InExpiryDateTime;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryLimitGrp.InventoryLimitGrp_C.ExecuteUbergraph_InventoryLimitGrp
	 */
	struct UInventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
