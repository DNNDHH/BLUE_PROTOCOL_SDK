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
	 * Function WBP_StorageShop.WBP_StorageShop_C.Updeta Ornament Visual
	 */
	struct UWBP_StorageShop_C_UpdetaOrnamentVisual_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.GetCategoryModeName
	 */
	struct UWBP_StorageShop_C_GetCategoryModeName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.GetStorageNum
	 */
	struct UWBP_StorageShop_C_GetStorageNum_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Max;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.SelectItemSwapData
	 */
	struct UWBP_StorageShop_C_SelectItemSwapData_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.Storage List Update
	 */
	struct UWBP_StorageShop_C_StorageListUpdate_Params
	{
	public:
		bool                                                       ScrollReset;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.Get Sort Mode
	 */
	struct UWBP_StorageShop_C_GetSortMode_Params
	{
	public:
		int32_t                                                    ModeNum;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.GetSortRule
	 */
	struct UWBP_StorageShop_C_GetSortRule_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OF01[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.Update Key Guide Text
	 */
	struct UWBP_StorageShop_C_UpdateKeyGuideText_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.Create Use Data
	 */
	struct UWBP_StorageShop_C_CreateUseData_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LPHY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBStorageItemData>                          DataList;                                                // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.FindInventoryDataFromUniqueId
	 */
	struct UWBP_StorageShop_C_FindInventoryDataFromUniqueId_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FInventoryData                                      OutInventoryData;                                        // 0x0010(0x0098)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.GetIconPtr
	 */
	struct UWBP_StorageShop_C_GetIconPtr_Params
	{
	public:
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UItemIconBtn_C*                                      AsItemIconBtn;                                           // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInventory;                                              // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NotHave;                                                 // 0x0069(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PWAX[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.IsDownMultipleSelection
	 */
	struct UWBP_StorageShop_C_IsDownMultipleSelection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CP4I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.Set Icon Select Items
	 */
	struct UWBP_StorageShop_C_SetIconSelectItems_Params
	{
	public:
		class UItemIconBtn_C*                                      InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAdd;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.SearchInventoryItemData
	 */
	struct UWBP_StorageShop_C_SearchInventoryItemData_Params
	{
	public:
		EStorageGridType                                           Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L105[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItemIconBtn_C*                                      Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInventoryData                                      OutputPin;                                               // 0x0010(0x0098)  (Parm, OutParm, HasGetValueTypeHash)
		bool                                                       enable;                                                  // 0x00A8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9WIO[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.On_ComboBoxString_Filter_GenerateWidget_1
	 */
	struct UWBP_StorageShop_C_On_ComboBoxString_Filter_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.On_ComboBoxString_Sort_GenerateWidget_1
	 */
	struct UWBP_StorageShop_C_On_ComboBoxString_Sort_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.GetItemListContainer
	 */
	struct UWBP_StorageShop_C_GetItemListContainer_Params
	{
	public:
		EStorageGridType                                           InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JST1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USBOwnItemListContainer*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.Get Inventory Brunch
	 */
	struct UWBP_StorageShop_C_GetInventoryBrunch_Params
	{
	public:
		class USBOwnItemListContainer*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.RandomPlayAnimation2
	 */
	struct UWBP_StorageShop_C_RandomPlayAnimation2_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.RandomPlayAnimation
	 */
	struct UWBP_StorageShop_C_RandomPlayAnimation_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.Updete Item Slot List
	 */
	struct UWBP_StorageShop_C_UpdeteItemSlotList_Params
	{
	public:
		ESelectItemCategoryMode                                    SelectItemCategoryMode;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.Get Filter Type
	 */
	struct UWBP_StorageShop_C_GetFilterType_Params
	{
	public:
		EItemFilterType                                            FilterType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SW1L[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.ItemClickEnter
	 */
	struct UWBP_StorageShop_C_ItemClickEnter_Params
	{
	public:
		struct FInventoryData                                      InventoryData;                                           // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.Timeout
	 */
	struct UWBP_StorageShop_C_Timeout_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.AssetLoadComplete
	 */
	struct UWBP_StorageShop_C_AssetLoadComplete_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CloseDescription
	 */
	struct UWBP_StorageShop_C_CloseDescription_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.UpdateItemNums
	 */
	struct UWBP_StorageShop_C_UpdateItemNums_Params
	{
	public:
		bool                                                       KeepPage;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.UpdateFilterButton
	 */
	struct UWBP_StorageShop_C_UpdateFilterButton_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.IconAllSelectfalse
	 */
	struct UWBP_StorageShop_C_IconAllSelectfalse_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.SetSlotSelect
	 */
	struct UWBP_StorageShop_C_SetSlotSelect_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_99OF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGridPanel*                                          InputPin;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OmPressItem_Internal
	 */
	struct UWBP_StorageShop_C_OmPressItem_Internal_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EStorageGridType                                           InType;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnMultipleSelection
	 */
	struct UWBP_StorageShop_C_OnMultipleSelection_Params
	{
	public:
		class UItemIconBtn_C*                                      InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EStorageGridType                                           LastClickGridType;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.UpdetaStorageMultipleSalesaAnothe
	 */
	struct UWBP_StorageShop_C_UpdetaStorageMultipleSalesaAnothe_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.ItemLock
	 */
	struct UWBP_StorageShop_C_ItemLock_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.ItemDrop
	 */
	struct UWBP_StorageShop_C_ItemDrop_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.MoveItem
	 */
	struct UWBP_StorageShop_C_MoveItem_Params
	{
	public:
		bool                                                       ToStorage;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.SaleItem
	 */
	struct UWBP_StorageShop_C_SaleItem_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.ArrowAnimationStart
	 */
	struct UWBP_StorageShop_C_ArrowAnimationStart_Params
	{
	public:
		bool                                                       ToStorage;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.MultipleSales
	 */
	struct UWBP_StorageShop_C_MultipleSales_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.ExecutionSale
	 */
	struct UWBP_StorageShop_C_ExecutionSale_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnSaveItemLockCompleteDelegate
	 */
	struct UWBP_StorageShop_C_OnSaveItemLockCompleteDelegate_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MRWH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBLockItemData>                             LockItemData;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    InRetCode;                                               // 0x0018(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_3
	 */
	struct UWBP_StorageShop_C_CustomEvent_3_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C3ZV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOwnItemInfo>                                InDirtyItems;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_2
	 */
	struct UWBP_StorageShop_C_CustomEvent_2_Params
	{
	public:
		ENumberInputDialogResult                                   InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ANDH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InNumber;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.SellItemSingleSetting
	 */
	struct UWBP_StorageShop_C_SellItemSingleSetting_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnSliderChangeTextUpdeta
	 */
	struct UWBP_StorageShop_C_OnSliderChangeTextUpdeta_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MP13[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UNumberInputDialog_C*                                CallerDialg;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_5
	 */
	struct UWBP_StorageShop_C_CustomEvent_5_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_4
	 */
	struct UWBP_StorageShop_C_CustomEvent_4_Params
	{
	public:
		ENumberInputDialogResult                                   InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9RK3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InNumber;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_9
	 */
	struct UWBP_StorageShop_C_CustomEvent_9_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.SellItemMultiSetting
	 */
	struct UWBP_StorageShop_C_SellItemMultiSetting_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_8
	 */
	struct UWBP_StorageShop_C_CustomEvent_8_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnSaveItemStorage
	 */
	struct UWBP_StorageShop_C_OnSaveItemStorage_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ABMD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOwnItemInfo>                                InDirtyItems;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_1
	 */
	struct UWBP_StorageShop_C_CustomEvent_1_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnHideDeligate
	 */
	struct UWBP_StorageShop_C_OnHideDeligate_Params
	{
	public:
		ENumberInputDialogResult                                   InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ID51[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InNumber;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.SaveSortRule
	 */
	struct UWBP_StorageShop_C_SaveSortRule_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.MoveItems
	 */
	struct UWBP_StorageShop_C_MoveItems_Params
	{
	public:
		bool                                                       ToStorage;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_6
	 */
	struct UWBP_StorageShop_C_CustomEvent_6_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4QTK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOwnItemInfo>                                InDirtyItems;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.MoveAfter
	 */
	struct UWBP_StorageShop_C_MoveAfter_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.SwitchMultipleSelection
	 */
	struct UWBP_StorageShop_C_SwitchMultipleSelection_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_10
	 */
	struct UWBP_StorageShop_C_CustomEvent_10_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q45F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOwnItemInfo>                                InDirtyItems;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.TrashItem
	 */
	struct UWBP_StorageShop_C_TrashItem_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_11
	 */
	struct UWBP_StorageShop_C_CustomEvent_11_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.SendSaveItemsDrop
	 */
	struct UWBP_StorageShop_C_SendSaveItemsDrop_Params
	{
	public:
		TArray<struct FSBStorageItemData>                          InputPin;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.DropCheck
	 */
	struct UWBP_StorageShop_C_DropCheck_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.RequestWeaponModelLoadFromWeaponStickerInUseButtonInput
	 */
	struct UWBP_StorageShop_C_RequestWeaponModelLoadFromWeaponStickerInUseButtonInput_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.ItemUse
	 */
	struct UWBP_StorageShop_C_ItemUse_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.UseExp
	 */
	struct UWBP_StorageShop_C_UseExp_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.ItemUseAfter
	 */
	struct UWBP_StorageShop_C_ItemUseAfter_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_7
	 */
	struct UWBP_StorageShop_C_CustomEvent_7_Params
	{
	public:
		ENumberInputDialogResult                                   NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3GEG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_ItemBox_C*                                      ItemBox;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_13
	 */
	struct UWBP_StorageShop_C_CustomEvent_13_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WUJT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBStorageItemBoxResultData                         InItemBoxResultData;                                     // 0x0008(0x0118)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.UseItemBox
	 */
	struct UWBP_StorageShop_C_UseItemBox_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_14
	 */
	struct UWBP_StorageShop_C_CustomEvent_14_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5FLY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOwnItemInfo>                                InDirtyItems;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_15
	 */
	struct UWBP_StorageShop_C_CustomEvent_15_Params
	{
	public:
		ENumberInputDialogResult                                   InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WEWD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInventoryItemData                                  NewParam;                                                // 0x0008(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.UseWeaponSticker
	 */
	struct UWBP_StorageShop_C_UseWeaponSticker_Params
	{
	public:
		struct FAppearanceWeaponSticker                            InWeaponStickerInfo;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class FString                                              InWeaponStickerUniqueId;                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnUseWeaponStickerDecideEvent
	 */
	struct UWBP_StorageShop_C_OnUseWeaponStickerDecideEvent_Params
	{
	public:
		class FString                                              InSelectedWeaponUniqueItemId;                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnWeaponStickerWeaponSelectWindowHideEndEvent
	 */
	struct UWBP_StorageShop_C_OnWeaponStickerWeaponSelectWindowHideEndEvent_Params
	{
	public:
		bool                                                       InIsHideWindowCalledByDecide;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnWeaponStickerRemoveDecideEvent
	 */
	struct UWBP_StorageShop_C_OnWeaponStickerRemoveDecideEvent_Params
	{
	public:
		bool                                                       InIsStickerDiscardSelected;                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnWeaponStickerRemoveWindowHideEnd
	 */
	struct UWBP_StorageShop_C_OnWeaponStickerRemoveWindowHideEnd_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnUseWeaponStickerDelegateEvent
	 */
	struct UWBP_StorageShop_C_OnUseWeaponStickerDelegateEvent_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SGUT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InStickerUsedWeaponUniqueId;                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsExpiredStickerWeapons;                               // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NBHE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FSBWeaponItemData>                           InExpiredStickerWeaponItemDatas;                         // 0x0030(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnRemoveWeaponStickerDelegateEvent
	 */
	struct UWBP_StorageShop_C_OnRemoveWeaponStickerDelegateEvent_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0NLG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InStickerRemovedWeaponUniqueId;                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsExpiredStickerWeapons;                               // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_64M7[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FSBWeaponItemData>                           InExpiredStickerWeaponItemDatas;                         // 0x0030(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.EndSystemMessage
	 */
	struct UWBP_StorageShop_C_EndSystemMessage_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.ShowExpiredWeaponStickerSystemMessage
	 */
	struct UWBP_StorageShop_C_ShowExpiredWeaponStickerSystemMessage_Params
	{
	public:
		TArray<class FString>                                      InExpiredStickerWeaponUniqueIds;                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FString                                              InEquippedWeaponUniqueId;                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InActivateWeaponModelRotate;                             // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog
	 */
	struct UWBP_StorageShop_C_ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog_Params
	{
	public:
		class FString                                              InStickerAttachedWeaponUniqueId;                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.UiInputBlock
	 */
	struct UWBP_StorageShop_C_UiInputBlock_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.Update_LiquidMemoryActive
	 */
	struct UWBP_StorageShop_C_Update_LiquidMemoryActive_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__WBP_StorageShop_DescriptionWindow_K2Node_ComponentBoundEvent_1_OnWeaponStickerButtonPressed__DelegateSignature_Params
	{
	public:
		class FString                                              InWeaponUniqueId;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBWeaponItemData                                   InWeaponItemData;                                        // 0x0010(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.DestWeaponStickerEvents
	 */
	struct UWBP_StorageShop_C_DestWeaponStickerEvents_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.DetailView
	 */
	struct UWBP_StorageShop_C_DetailView_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnCloseDetailMenu
	 */
	struct UWBP_StorageShop_C_OnCloseDetailMenu_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnOwnItemAmountChanged
	 */
	struct UWBP_StorageShop_C_OnOwnItemAmountChanged_Params
	{
	public:
		struct FSBChangeItemAmountParam                            InParam;                                                 // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CheckWarning
	 */
	struct UWBP_StorageShop_C_CheckWarning_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    StorageNumber;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  Tipe;                                                    // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_16
	 */
	struct UWBP_StorageShop_C_CustomEvent_16_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_17
	 */
	struct UWBP_StorageShop_C_CustomEvent_17_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_18
	 */
	struct UWBP_StorageShop_C_CustomEvent_18_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_19
	 */
	struct UWBP_StorageShop_C_CustomEvent_19_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.UseLeve
	 */
	struct UWBP_StorageShop_C_UseLeve_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_20
	 */
	struct UWBP_StorageShop_C_CustomEvent_20_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZTXN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FOwnItemInfo>                                InDirtyItems;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.WBP_ExpIncreaseEnd
	 */
	struct UWBP_StorageShop_C_WBP_ExpIncreaseEnd_Params
	{
	public:
		ENumberInputDialogResult                                   InResult;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YWS4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InNumber;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.SetLevelAfter
	 */
	struct UWBP_StorageShop_C_SetLevelAfter_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7ZEV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWBP_ExpIncrease_C*                                  CallerDialg;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnPress_Cancel
	 */
	struct UWBP_StorageShop_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature_Params
	{
	public:
		EDescripionButtonType                                      ButtonType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__InventoryStorageList_K2Node_ComponentBoundEvent_6_OnItemClick__DelegateSignature_Params
	{
	public:
		struct FInventoryData                                      OnItemClick;                                             // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__TabBtn1_K2Node_ComponentBoundEvent_3_BtnClick__DelegateSignature_Params
	{
	public:
		class UShopCmnBtn1_C*                                      ClickBtn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TabId;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature_Params
	{
	public:
		class UShopCmnBtn1_C*                                      ClickBtn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TabId;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
	 */
	struct UWBP_StorageShop_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__StorageMultipleSalesWindow_K2Node_ComponentBoundEvent_8_MultipleSales__DelegateSignature_Params
	{
	public:
		int32_t                                                    InTotalPrice;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8X9S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FInventoryItemData>                          InSelectItemList;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__StorageList_K2Node_ComponentBoundEvent_9_OnItemClickRight__DelegateSignature_Params
	{
	public:
		struct FInventoryData                                      NewParam;                                                // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_11_MultipleMoveStorage__DelegateSignature_Params
	{
	public:
		TArray<struct FInventoryItemData>                          InSelectItemList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_12_MultipleMoveBag__DelegateSignature_Params
	{
	public:
		TArray<struct FInventoryItemData>                          InSelectItemList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_13_MultipleTrash__DelegateSignature_Params
	{
	public:
		TArray<struct FInventoryItemData>                          InSelectItemList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnPressItem_Inventory
	 */
	struct UWBP_StorageShop_C_OnPressItem_Inventory_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnPressItem_Storage
	 */
	struct UWBP_StorageShop_C_OnPressItem_Storage_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnPressRight_Inventory
	 */
	struct UWBP_StorageShop_C_OnPressRight_Inventory_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnPressRight_Storage
	 */
	struct UWBP_StorageShop_C_OnPressRight_Storage_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_1_Close__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_1_Close__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__DescriptionWindow_K2Node_ComponentBoundEvent_0_OnWeaponStickerInUseButtonPressed__DelegateSignature_Params
	{
	public:
		bool                                                       InIsInUse;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__StorageMultipleSelectWindow_K2Node_ComponentBoundEvent_16_OnClick__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  InventoryData;                                           // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.TryEnd
	 */
	struct UWBP_StorageShop_C_TryEnd_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CloseStorageMultipleSelectWindow
	 */
	struct UWBP_StorageShop_C_CloseStorageMultipleSelectWindow_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.IconScrollVisible
	 */
	struct UWBP_StorageShop_C_IconScrollVisible_Params
	{
	public:
		class UGridPanel*                                          Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Offset;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.SlotSelectRevival
	 */
	struct UWBP_StorageShop_C_SlotSelectRevival_Params
	{
	public:
		class UGridPanel*                                          Grid;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__WBP_StorageShop_TabBtn3_Ornament_K2Node_ComponentBoundEvent_18_BtnClick__DelegateSignature_Params
	{
	public:
		class UShopCmnBtn1_C*                                      ClickBtn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TabId;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.Construct
	 */
	struct UWBP_StorageShop_C_Construct_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.Destruct
	 */
	struct UWBP_StorageShop_C_Destruct_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.ResetGrid
	 */
	struct UWBP_StorageShop_C_ResetGrid_Params
	{
	public:
		EStorageGridType                                           InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ScrollReset;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CreateComboBox
	 */
	struct UWBP_StorageShop_C_CreateComboBox_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.onAnimTimer
	 */
	struct UWBP_StorageShop_C_onAnimTimer_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 */
	struct UWBP_StorageShop_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.CustomEvent_12
	 */
	struct UWBP_StorageShop_C_CustomEvent_12_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.TryCreateStorageGridIcon
	 */
	struct UWBP_StorageShop_C_TryCreateStorageGridIcon_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.UpdateSortBox
	 */
	struct UWBP_StorageShop_C_UpdateSortBox_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.UpdatefilterBox
	 */
	struct UWBP_StorageShop_C_UpdatefilterBox_Params
	{	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.UpdetaPage
	 */
	struct UWBP_StorageShop_C_UpdetaPage_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       KeepPage;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
	 */
	struct UWBP_StorageShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    PageCurrent;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.PreConstruct
	 */
	struct UWBP_StorageShop_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.ExecuteUbergraph_WBP_StorageShop
	 */
	struct UWBP_StorageShop_C_ExecuteUbergraph_WBP_StorageShop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WUCP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_StorageShop.WBP_StorageShop_C.OnClose__DelegateSignature
	 */
	struct UWBP_StorageShop_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
