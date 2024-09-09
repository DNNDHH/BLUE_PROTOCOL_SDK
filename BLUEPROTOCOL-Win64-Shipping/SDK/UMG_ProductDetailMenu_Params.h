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
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.Show
	 */
	struct UUMG_ProductDetailMenu_C_Show_Params
	{	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.Hide
	 */
	struct UUMG_ProductDetailMenu_C_Hide_Params
	{	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UUMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature
	 */
	struct UUMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature
	 */
	struct UUMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bTrying;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature
	 */
	struct UUMG_ProductDetailMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UUMG_ProductDetailMenu_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_10_OnClickZoomOut__DelegateSignature
	 */
	struct UUMG_ProductDetailMenu_C_BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_10_OnClickZoomOut__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature
	 */
	struct UUMG_ProductDetailMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature
	 */
	struct UUMG_ProductDetailMenu_C_BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetData
	 */
	struct UUMG_ProductDetailMenu_C_SetData_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetProductData
	 */
	struct UUMG_ProductDetailMenu_C_SetProductData_Params
	{	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByMasterReward
	 */
	struct UUMG_ProductDetailMenu_C_SetDataByMasterReward_Params
	{
	public:
		struct FSBMasterReward                                     MasterReward;                                            // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByMailDatas
	 */
	struct UUMG_ProductDetailMenu_C_SetDataByMailDatas_Params
	{
	public:
		TArray<struct FSBMailData>                                 MailDatas;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByDungeonSupply
	 */
	struct UUMG_ProductDetailMenu_C_SetDataByDungeonSupply_Params
	{
	public:
		struct FSBDungeonSupply                                    DungeonSupply;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByUniqueId
	 */
	struct UUMG_ProductDetailMenu_C_SetDataByUniqueId_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    OverrideAmount;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByRewardData
	 */
	struct UUMG_ProductDetailMenu_C_SetDataByRewardData_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MSV7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bBonus;                                                  // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.Construct
	 */
	struct UUMG_ProductDetailMenu_C_Construct_Params
	{	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.Destruct
	 */
	struct UUMG_ProductDetailMenu_C_Destruct_Params
	{	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByDropTreasureData
	 */
	struct UUMG_ProductDetailMenu_C_SetDataByDropTreasureData_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4X4B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bBonus;                                                  // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WY9I[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RewardLotId;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.ExecuteUbergraph_UMG_ProductDetailMenu
	 */
	struct UUMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.OnClose__DelegateSignature
	 */
	struct UUMG_ProductDetailMenu_C_OnClose__DelegateSignature_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
