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
	 * Function InventoryTag.InventoryTag_C.SetVisibleInfoIcon
	 */
	struct UInventoryTag_C_SetVisibleInfoIcon_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.Set Lottery Groups Id
	 */
	struct UInventoryTag_C_SetLotteryGroupsId_Params
	{
	public:
		int32_t                                                    InLotteryGroupsId;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FQW1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InventoryTag.InventoryTag_C.Update Own Item Info by Storage Number
	 */
	struct UInventoryTag_C_UpdateOwnItemInfobyStorageNumber_Params
	{
	public:
		int32_t                                                    InStorageNumber;                                         // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LZIF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InUniqueId;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EItemType                                                  InItemType;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_73J0[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetRecipiId
	 */
	struct UInventoryTag_C_SetRecipiId_Params
	{
	public:
		int32_t                                                    InRecipiId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.InitOwnItemInfos
	 */
	struct UInventoryTag_C_InitOwnItemInfos_Params
	{
	public:
		struct FOwnItemInfo                                        NewOwnItemInfo;                                          // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.UpdateWeaponStackBMaxToolTip
	 */
	struct UInventoryTag_C_UpdateWeaponStackBMaxToolTip_Params
	{	};

	/**
	 * Function InventoryTag.InventoryTag_C.UpdateImagineStackBMaxToolTip
	 */
	struct UInventoryTag_C_UpdateImagineStackBMaxToolTip_Params
	{	};

	/**
	 * Function InventoryTag.InventoryTag_C.GetToolTipWidget_1
	 */
	struct UInventoryTag_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.CreateToolTipWidgetifNeeded
	 */
	struct UInventoryTag_C_CreateToolTipWidgetifNeeded_Params
	{
	public:
		class UUserWidget*                                         OutTooltip;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetStackBMaxToolTipCreateInfos
	 */
	struct UInventoryTag_C_SetStackBMaxToolTipCreateInfos_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EToolTipType                                               ToolTipType;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.Set Stack BMax Visible
	 */
	struct UInventoryTag_C_SetStackBMaxVisible_Params
	{
	public:
		bool                                                       bStackBEnable;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetOwnItemInfo
	 */
	struct UInventoryTag_C_SetOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetStackBMaxValue
	 */
	struct UInventoryTag_C_SetStackBMaxValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_95RT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetStackBMax
	 */
	struct UInventoryTag_C_SetStackBMax_Params
	{
	public:
		class FString                                              StackBId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetInventoryItemData
	 */
	struct UInventoryTag_C_SetInventoryItemData_Params
	{
	public:
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetMasterOrnament
	 */
	struct UInventoryTag_C_SetMasterOrnament_Params
	{
	public:
		struct FSBMasterOrnament                                   Master;                                                  // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Used;                                                    // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsBppIrredeemable;                                       // 0x0061(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetMasterMountImagine
	 */
	struct UInventoryTag_C_SetMasterMountImagine_Params
	{
	public:
		struct FSBMasterMountImagine                               MasterMountImagine;                                      // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Used;                                                    // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsBppIrredeemable;                                       // 0x0071(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1J0S[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetMasterImagine
	 */
	struct UInventoryTag_C_SetMasterImagine_Params
	{
	public:
		struct FSBMasterImagine                                    MasterImagine;                                           // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Used;                                                    // 0x00B8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsBppIrredeemable;                                       // 0x00B9(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetMasterCostume
	 */
	struct UInventoryTag_C_SetMasterCostume_Params
	{
	public:
		struct FSBMasterCostume                                    MasterCostume;                                           // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Used;                                                    // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsBppIrredeemable;                                       // 0x0089(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WBSY[0x6];                                   // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetWeaponMaster
	 */
	struct UInventoryTag_C_SetWeaponMaster_Params
	{
	public:
		struct FSBWeaponMasterData                                 WeaponMaster;                                            // 0x0000(0x00C8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Used;                                                    // 0x00C8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsBppIrredeemable;                                       // 0x00C9(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_39HK[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetItemMasterData
	 */
	struct UInventoryTag_C_SetItemMasterData_Params
	{
	public:
		struct FItemMasterData                                     ItemMasterData;                                          // 0x0000(0x00D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       IsBppIrredeemable;                                       // 0x00D0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FF2W[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetBppChange
	 */
	struct UInventoryTag_C_SetBppChange_Params
	{
	public:
		ESBRewardItemType                                          RewardType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BABD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Used;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsBppIrredeemable;                                       // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CUI2[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function InventoryTag.InventoryTag_C.SetPossibility
	 */
	struct UInventoryTag_C_SetPossibility_Params
	{
	public:
		bool                                                       bPossible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UOO4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InParam;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.PreConstruct
	 */
	struct UInventoryTag_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function InventoryTag.InventoryTag_C.ExecuteUbergraph_InventoryTag
	 */
	struct UInventoryTag_C_ExecuteUbergraph_InventoryTag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
