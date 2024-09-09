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
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SwitchHoldType
	 */
	struct UEventShopProductBox_Item_C_SwitchHoldType_Params
	{
	public:
		bool                                                       IsToken;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.CheckExchangeLimitNum
	 */
	struct UEventShopProductBox_Item_C_CheckExchangeLimitNum_Params
	{
	public:
		int32_t                                                    LimitNum;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetActiveIcon
	 */
	struct UEventShopProductBox_Item_C_SetActiveIcon_Params
	{
	public:
		bool                                                       IsItem;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.IsReadedNewMark
	 */
	struct UEventShopProductBox_Item_C_IsReadedNewMark_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetIconNewMark
	 */
	struct UEventShopProductBox_Item_C_SetIconNewMark_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetTAbiiltyClass
	 */
	struct UEventShopProductBox_Item_C_GetTAbiiltyClass_Params
	{
	public:
		ESBClassType                                               ClassType;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.Set Token Info
	 */
	struct UEventShopProductBox_Item_C_SetTokenInfo_Params
	{
	public:
		int32_t                                                    CurrencyType;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TokenID;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DiscountRate;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetWorkSpace
	 */
	struct UEventShopProductBox_Item_C_SetWorkSpace_Params
	{
	public:
		class USBTemporallyStorage*                                item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBTemporallyStorage*                                Equip;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBTemporallyStorage*                                Storage;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBTemporallyStorage*                                Ornament;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetStorageRemainNum
	 */
	struct UEventShopProductBox_Item_C_GetStorageRemainNum_Params
	{
	public:
		int32_t                                                    Remain;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetAmountNum
	 */
	struct UEventShopProductBox_Item_C_GetAmountNum_Params
	{
	public:
		bool                                                       Have;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RNXT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Remain;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetPurchaseNum
	 */
	struct UEventShopProductBox_Item_C_SetPurchaseNum_Params
	{
	public:
		int32_t                                                    Purchase;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetBtnSelected Remake
	 */
	struct UEventShopProductBox_Item_C_SetBtnSelectedRemake_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HEQZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetBtnSelected
	 */
	struct UEventShopProductBox_Item_C_SetBtnSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56
	 */
	struct UEventShopProductBox_Item_C_OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A
	 */
	struct UEventShopProductBox_Item_C_OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetResetType
	 */
	struct UEventShopProductBox_Item_C_SetResetType_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetStockNum
	 */
	struct UEventShopProductBox_Item_C_SetStockNum_Params
	{
	public:
		int32_t                                                    Stock;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Limit;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.CheckItemType
	 */
	struct UEventShopProductBox_Item_C_CheckItemType_Params
	{
	public:
		int32_t                                                    ItemType;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetItemId
	 */
	struct UEventShopProductBox_Item_C_GetItemId_Params
	{
	public:
		int32_t                                                    ItemSetId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetProductIcon
	 */
	struct UEventShopProductBox_Item_C_SetProductIcon_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetExchangePeriod
	 */
	struct UEventShopProductBox_Item_C_SetExchangePeriod_Params
	{
	public:
		struct FDateTime                                           End;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBBtn1Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEventShopProductBox_Item_C_BndEvt__SBBtn1Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
	 */
	struct UEventShopProductBox_Item_C_BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UEventShopProductBox_Item_C_BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.NumberPlus
	 */
	struct UEventShopProductBox_Item_C_NumberPlus_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.StartRepeatPlus
	 */
	struct UEventShopProductBox_Item_C_StartRepeatPlus_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.ClearHandle
	 */
	struct UEventShopProductBox_Item_C_ClearHandle_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UEventShopProductBox_Item_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UEventShopProductBox_Item_C_BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.NumberMinus
	 */
	struct UEventShopProductBox_Item_C_NumberMinus_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.StartRepeatMinus
	 */
	struct UEventShopProductBox_Item_C_StartRepeatMinus_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetProductData
	 */
	struct UEventShopProductBox_Item_C_SetProductData_Params
	{
	public:
		struct FSBEventShopProduct                                 ProductData;                                             // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		float                                                      DiscountRate;                                            // 0x0070(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDiscount;                                              // 0x0074(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OHXA[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USBTemporallyStorage*                                item;                                                    // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBTemporallyStorage*                                Equip;                                                   // 0x0080(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBTemporallyStorage*                                Storage;                                                 // 0x0088(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBTemporallyStorage*                                Ornament;                                                // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.UpdateButton
	 */
	struct UEventShopProductBox_Item_C_UpdateButton_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetSelectNum
	 */
	struct UEventShopProductBox_Item_C_SetSelectNum_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.Construct
	 */
	struct UEventShopProductBox_Item_C_Construct_Params
	{	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.LoadTexture
	 */
	struct UEventShopProductBox_Item_C_LoadTexture_Params
	{
	public:
		int32_t                                                    CurrencyType;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TokenID;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetTrying
	 */
	struct UEventShopProductBox_Item_C_SetTrying_Params
	{
	public:
		bool                                                       bTrying;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.ExecuteUbergraph_EventShopProductBox_Item
	 */
	struct UEventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JQJE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnSubRemake__DelegateSignature
	 */
	struct UEventShopProductBox_Item_C_OnSubRemake__DelegateSignature_Params
	{
	public:
		class UEventShopProductBox_Item_C*                         item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnAddRemake__DelegateSignature
	 */
	struct UEventShopProductBox_Item_C_OnAddRemake__DelegateSignature_Params
	{
	public:
		class UEventShopProductBox_Item_C*                         item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnSub__DelegateSignature
	 */
	struct UEventShopProductBox_Item_C_OnSub__DelegateSignature_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnAdd__DelegateSignature
	 */
	struct UEventShopProductBox_Item_C_OnAdd__DelegateSignature_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnBtnSelected__DelegateSignature
	 */
	struct UEventShopProductBox_Item_C_OnBtnSelected__DelegateSignature_Params
	{
	public:
		class UEventShopProductBox_Item_C*                         item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bOnNumberInput;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
