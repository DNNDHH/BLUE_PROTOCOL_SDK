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
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.SetRibbon
	 */
	struct UFlatShop_Product_L_C_SetRibbon_Params
	{
	public:
		int32_t                                                    Flag;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.Get Thumbnail Texture
	 */
	struct UFlatShop_Product_L_C_GetThumbnailTexture_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RL73[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_1T38[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.SetProductThumbnail
	 */
	struct UFlatShop_Product_L_C_SetProductThumbnail_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_16CR[0x28];                                  // 0x0010(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.SetFlag_RoPS
	 */
	struct UFlatShop_Product_L_C_SetFlag_RoPS_Params
	{
	public:
		class FString                                              Flags;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.SetText_LimitDate
	 */
	struct UFlatShop_Product_L_C_SetText_LimitDate_Params
	{
	public:
		struct FDateTime                                           LimitDate;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.OnFail_0A62FBD840A02077625644ABD1C58C54
	 */
	struct UFlatShop_Product_L_C_OnFail_0A62FBD840A02077625644ABD1C58C54_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.OnSuccess_0A62FBD840A02077625644ABD1C58C54
	 */
	struct UFlatShop_Product_L_C_OnSuccess_0A62FBD840A02077625644ABD1C58C54_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.OnLoaded_C1943EA54AEEFAC24C82819C900D7109
	 */
	struct UFlatShop_Product_L_C_OnLoaded_C1943EA54AEEFAC24C82819C900D7109_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.SetProductData_RoPS_Event
	 */
	struct UFlatShop_Product_L_C_SetProductData_RoPS_Event_Params
	{
	public:
		struct FSBRoseOrbShopItemMasterData                        ProductData;                                             // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Index;                                                   // 0x0060(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.BndEvt__Btn_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFlatShop_Product_L_C_BndEvt__Btn_Item_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.DownLoadImage_Event
	 */
	struct UFlatShop_Product_L_C_DownLoadImage_Event_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.LoadTexture
	 */
	struct UFlatShop_Product_L_C_LoadTexture_Params
	{	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.ExecuteUbergraph_FlatShop_Product_L
	 */
	struct UFlatShop_Product_L_C_ExecuteUbergraph_FlatShop_Product_L_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4OEO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_Product_L.FlatShop_Product_L_C.OnClickedIndex__DelegateSignature
	 */
	struct UFlatShop_Product_L_C_OnClickedIndex__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
