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
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.OnLoaded_E37A97DE401D23101CB622A989A36F64
	 */
	struct UFlatShop_CommonIcon_C_OnLoaded_E37A97DE401D23101CB622A989A36F64_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetIcon
	 */
	struct UFlatShop_CommonIcon_C_SetIcon_Params
	{
	public:
		struct FSBProductData                                      ProductData;                                             // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    TextureId;                                               // 0x00D8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBRmShopMenuType                                          RmShopType;                                              // 0x00DC(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SwitchRewardType
	 */
	struct UFlatShop_CommonIcon_C_SwitchRewardType_Params
	{
	public:
		ESBRewardItemType                                          ItemType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LUBX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.LoadTexture_Nodata
	 */
	struct UFlatShop_CommonIcon_C_LoadTexture_Nodata_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetItems
	 */
	struct UFlatShop_CommonIcon_C_SetItems_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetCostume
	 */
	struct UFlatShop_CommonIcon_C_SetCostume_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetReward
	 */
	struct UFlatShop_CommonIcon_C_SetReward_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetEmotion
	 */
	struct UFlatShop_CommonIcon_C_SetEmotion_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetStamps
	 */
	struct UFlatShop_CommonIcon_C_SetStamps_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetToken
	 */
	struct UFlatShop_CommonIcon_C_SetToken_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetStampSet
	 */
	struct UFlatShop_CommonIcon_C_SetStampSet_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetTAbility
	 */
	struct UFlatShop_CommonIcon_C_SetTAbility_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetRealGoods
	 */
	struct UFlatShop_CommonIcon_C_SetRealGoods_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetAdvParts
	 */
	struct UFlatShop_CommonIcon_C_SetAdvParts_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetOrnament
	 */
	struct UFlatShop_CommonIcon_C_SetOrnament_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SwitchRewardTypeByProductData
	 */
	struct UFlatShop_CommonIcon_C_SwitchRewardTypeByProductData_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.SetDataBySeasonPass
	 */
	struct UFlatShop_CommonIcon_C_SetDataBySeasonPass_Params
	{
	public:
		class FName                                                RewardId;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                TextureId;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.LoadTexture
	 */
	struct UFlatShop_CommonIcon_C_LoadTexture_Params
	{	};

	/**
	 * Function FlatShop_CommonIcon.FlatShop_CommonIcon_C.ExecuteUbergraph_FlatShop_CommonIcon
	 */
	struct UFlatShop_CommonIcon_C_ExecuteUbergraph_FlatShop_CommonIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E1ST[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
