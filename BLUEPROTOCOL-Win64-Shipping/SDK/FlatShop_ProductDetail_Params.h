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
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetupBonusIcon
	 */
	struct UFlatShop_ProductDetail_C_SetupBonusIcon_Params
	{
	public:
		int32_t                                                    BounsId;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Get ThumbnailTexture
	 */
	struct UFlatShop_ProductDetail_C_GetThumbnailTexture_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OAYO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_RG31[0x2C];                                  // 0x0004(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D
	 */
	struct UFlatShop_ProductDetail_C_OnLoaded_40E58A5D468CF66B4BD22F87CCA1810D_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnFail_48D4A76A494FBE239EF1AD90CEDE58B4
	 */
	struct UFlatShop_ProductDetail_C_OnFail_48D4A76A494FBE239EF1AD90CEDE58B4_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4
	 */
	struct UFlatShop_ProductDetail_C_OnSuccess_48D4A76A494FBE239EF1AD90CEDE58B4_Params
	{
	public:
		class UTexture2DDynamic*                                   Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetProductData_RoPS
	 */
	struct UFlatShop_ProductDetail_C_SetProductData_RoPS_Params
	{
	public:
		struct FSBRoseOrbShopItemMasterData                        ProductData;                                             // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.SetFlags_ROS
	 */
	struct UFlatShop_ProductDetail_C_SetFlags_ROS_Params
	{
	public:
		int32_t                                                    Ribbon;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.LoadImageName_Event
	 */
	struct UFlatShop_ProductDetail_C_LoadImageName_Event_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.LoadImageSoftRef_Event
	 */
	struct UFlatShop_ProductDetail_C_LoadImageSoftRef_Event_Params
	{	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.DownLoadImage_Event
	 */
	struct UFlatShop_ProductDetail_C_DownLoadImage_Event_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
	 */
	struct UFlatShop_ProductDetail_C_BndEvt__FlatShop_ProductDetail_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature_Params
	{
	public:
		class UCommonIcon_C*                                       Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Destruct
	 */
	struct UFlatShop_ProductDetail_C_Destruct_Params
	{	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnClose_Event
	 */
	struct UFlatShop_ProductDetail_C_OnClose_Event_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.Construct
	 */
	struct UFlatShop_ProductDetail_C_Construct_Params
	{	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.ExecuteUbergraph_FlatShop_ProductDetail
	 */
	struct UFlatShop_ProductDetail_C_ExecuteUbergraph_FlatShop_ProductDetail_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LI0Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FlatShop_ProductDetail.FlatShop_ProductDetail_C.OnClose__DelegateSignature
	 */
	struct UFlatShop_ProductDetail_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
