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
	 * Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetIconOver
	 */
	struct UEventShopCheckList_Item_C_SetIconOver_Params
	{	};

	/**
	 * Function EventShopCheckList_Item.EventShopCheckList_Item_C.Initialize
	 */
	struct UEventShopCheckList_Item_C_Initialize_Params
	{	};

	/**
	 * Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetStorage
	 */
	struct UEventShopCheckList_Item_C_SetStorage_Params
	{	};

	/**
	 * Function EventShopCheckList_Item.EventShopCheckList_Item_C.GetCheckListType
	 */
	struct UEventShopCheckList_Item_C_GetCheckListType_Params
	{
	public:
		ESBRewardItemType                                          RewardItemType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EventShopCheckList_ItemType                                CheckListType;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetItemInfo
	 */
	struct UEventShopCheckList_Item_C_SetItemInfo_Params
	{
	public:
		ESBRewardItemType                                          RewardItemType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_04K8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ItemName;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    NumExchange;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumHave;                                                 // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumLimit;                                                // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
