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
	 * Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.Construct
	 */
	struct UShopMenuDetailsAchievement_C_Construct_Params
	{	};

	/**
	 * Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.ShowDetails
	 */
	struct UShopMenuDetailsAchievement_C_ShowDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.CloseDetails
	 */
	struct UShopMenuDetailsAchievement_C_CloseDetails_Params
	{	};

	/**
	 * Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UShopMenuDetailsAchievement_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.SetData
	 */
	struct UShopMenuDetailsAchievement_C_SetData_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3PQ2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemIndex;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.ExecuteUbergraph_ShopMenuDetailsAchievement
	 */
	struct UShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.OnEndCloseDetailAnimation__DelegateSignature
	 */
	struct UShopMenuDetailsAchievement_C_OnEndCloseDetailAnimation__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InWidget;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
