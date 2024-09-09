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
	 * Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.SetItemEffectText
	 */
	struct UShopMenuDetailsFusionItem_C_SetItemEffectText_Params
	{
	public:
		int32_t                                                    InItemID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.SetItemIconImage
	 */
	struct UShopMenuDetailsFusionItem_C_SetItemIconImage_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnAnimationFinished
	 */
	struct UShopMenuDetailsFusionItem_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.CloseDetails
	 */
	struct UShopMenuDetailsFusionItem_C_CloseDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.ShowDetails
	 */
	struct UShopMenuDetailsFusionItem_C_ShowDetails_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AmountMin;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.Construct
	 */
	struct UShopMenuDetailsFusionItem_C_Construct_Params
	{	};

	/**
	 * Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.ExecuteUbergraph_ShopMenuDetailsFusionItem
	 */
	struct UShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnEndCloseDetailAnimation__DelegateSignature
	 */
	struct UShopMenuDetailsFusionItem_C_OnEndCloseDetailAnimation__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnClose__DelegateSignature
	 */
	struct UShopMenuDetailsFusionItem_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
