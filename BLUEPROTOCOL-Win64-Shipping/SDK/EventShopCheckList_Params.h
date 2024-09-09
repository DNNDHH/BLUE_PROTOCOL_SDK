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
	 * Function EventShopCheckList.EventShopCheckList_C.IsHaveCutomPartsById
	 */
	struct UEventShopCheckList_C_IsHaveCutomPartsById_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Ret;                                                     // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.GetItemNameByOther
	 */
	struct UEventShopCheckList_C_GetItemNameByOther_Params
	{
	public:
		ESBRewardItemType                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K4OT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ID;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.GetTokenMax
	 */
	struct UEventShopCheckList_C_GetTokenMax_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Limit;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.CheckOther2_AlreadyHave
	 */
	struct UEventShopCheckList_C_CheckOther2_AlreadyHave_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBRewardItemType                                          RewardItemType;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isOver;                                                  // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KDOD[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.SetDisabledExchangeButton
	 */
	struct UEventShopCheckList_C_SetDisabledExchangeButton_Params
	{
	public:
		bool                                                       Disabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.GetLiquidMemoryNum
	 */
	struct UEventShopCheckList_C_GetLiquidMemoryNum_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Num;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.GetItemOtherType
	 */
	struct UEventShopCheckList_C_GetItemOtherType_Params
	{
	public:
		ESBRewardItemType                                          RewardItemType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOk;                                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EventShopCheckList_ItemType                                CheckListOtherType;                                      // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.GetLimitItemOther
	 */
	struct UEventShopCheckList_C_GetLimitItemOther_Params
	{
	public:
		ESBRewardItemType                                          RewardItemType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2YUP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Num;                                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.GetStock_ItemOther
	 */
	struct UEventShopCheckList_C_GetStock_ItemOther_Params
	{
	public:
		ESBRewardItemType                                          RewardItemType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q2V0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Num;                                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.GetCheckListItemType
	 */
	struct UEventShopCheckList_C_GetCheckListItemType_Params
	{
	public:
		ESBRewardItemType                                          RewardItemType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EventShopCheckList_DestType                                DestType;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOk;                                                    // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.CheckDestination
	 */
	struct UEventShopCheckList_C_CheckDestination_Params
	{
	public:
		ESBRewardItemType                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EventShopCheckList_ItemType                                NewParam1;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.Create Item List Ornament
	 */
	struct UEventShopCheckList_C_CreateItemListOrnament_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Other
	 */
	struct UEventShopCheckList_C_CreateItemList_Other_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.Create Item List Bag_E
	 */
	struct UEventShopCheckList_C_CreateItemListBag_E_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.Create Item List Bag_I
	 */
	struct UEventShopCheckList_C_CreateItemListBag_I_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Storage_I_Craft
	 */
	struct UEventShopCheckList_C_CreateItemList_Storage_I_Craft_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Storage_E
	 */
	struct UEventShopCheckList_C_CreateItemList_Storage_E_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Storage_I
	 */
	struct UEventShopCheckList_C_CreateItemList_Storage_I_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.CreateIconList
	 */
	struct UEventShopCheckList_C_CreateIconList_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.Initialize
	 */
	struct UEventShopCheckList_C_Initialize_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.CreateItemList_Event
	 */
	struct UEventShopCheckList_C_CreateItemList_Event_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.Construct
	 */
	struct UEventShopCheckList_C_Construct_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.BndEvt__EventShopCheckList_Btn_Exchange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UEventShopCheckList_C_BndEvt__EventShopCheckList_Btn_Exchange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.BndEvt__EventShopCheckList_Btn_Cancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UEventShopCheckList_C_BndEvt__EventShopCheckList_Btn_Cancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.Destruct
	 */
	struct UEventShopCheckList_C_Destruct_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.OnEsc
	 */
	struct UEventShopCheckList_C_OnEsc_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.BndEvt__EventShopCheckList_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
	 */
	struct UEventShopCheckList_C_BndEvt__EventShopCheckList_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UEventShopCheckList_C_WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.BndEvt__EventShopCheckList_BgFullScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEventShopCheckList_C_BndEvt__EventShopCheckList_BgFullScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.ExecuteUbergraph_EventShopCheckList
	 */
	struct UEventShopCheckList_C_ExecuteUbergraph_EventShopCheckList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.OnClickedCancel__DelegateSignature
	 */
	struct UEventShopCheckList_C_OnClickedCancel__DelegateSignature_Params
	{	};

	/**
	 * Function EventShopCheckList.EventShopCheckList_C.OnClickedExchange__DelegateSignature
	 */
	struct UEventShopCheckList_C_OnClickedExchange__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
