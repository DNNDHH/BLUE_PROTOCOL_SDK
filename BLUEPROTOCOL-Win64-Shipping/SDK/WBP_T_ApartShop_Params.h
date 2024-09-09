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
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.Set Craft BGMode
	 */
	struct UWBP_T_ApartShop_C_SetCraftBGMode_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetRequestItemData
	 */
	struct UWBP_T_ApartShop_C_GetRequestItemData_Params
	{
	public:
		TArray<struct FSBStorageItemData>                          List;                                                    // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.Update Select
	 */
	struct UWBP_T_ApartShop_C_UpdateSelect_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetCategoryModeName
	 */
	struct UWBP_T_ApartShop_C_GetCategoryModeName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetStorageNum
	 */
	struct UWBP_T_ApartShop_C_GetStorageNum_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Max;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.Get Sort Mode
	 */
	struct UWBP_T_ApartShop_C_GetSortMode_Params
	{
	public:
		int32_t                                                    ModeNum;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetSortRule
	 */
	struct UWBP_T_ApartShop_C_GetSortRule_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P520[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.Set Icon Select Items
	 */
	struct UWBP_T_ApartShop_C_SetIconSelectItems_Params
	{
	public:
		class UItemIconBtn_C*                                      InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EStorageMultipleSalesWindowType                            Result1;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.On_ComboBoxString_Filter_GenerateWidget_1
	 */
	struct UWBP_T_ApartShop_C_On_ComboBoxString_Filter_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.On_ComboBoxString_Sort_GenerateWidget_1
	 */
	struct UWBP_T_ApartShop_C_On_ComboBoxString_Sort_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.GetItemListContainer
	 */
	struct UWBP_T_ApartShop_C_GetItemListContainer_Params
	{
	public:
		EStorageGridType                                           InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HBEI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USBOwnItemListContainer*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.Get Inventory Brunch
	 */
	struct UWBP_T_ApartShop_C_GetInventoryBrunch_Params
	{
	public:
		class USBOwnItemListContainer*                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.RandomPlayAnimation2
	 */
	struct UWBP_T_ApartShop_C_RandomPlayAnimation2_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.RandomPlayAnimation
	 */
	struct UWBP_T_ApartShop_C_RandomPlayAnimation_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.Updete Item Slot List
	 */
	struct UWBP_T_ApartShop_C_UpdeteItemSlotList_Params
	{
	public:
		ESelectItemCategoryMode                                    SelectItemCategoryMode;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.Get Filter Type
	 */
	struct UWBP_T_ApartShop_C_GetFilterType_Params
	{
	public:
		EItemFilterType                                            FilterType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7TPA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdateItemNums
	 */
	struct UWBP_T_ApartShop_C_UpdateItemNums_Params
	{
	public:
		bool                                                       KeepPage;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdateFilterButton
	 */
	struct UWBP_T_ApartShop_C_UpdateFilterButton_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconAllSelectfalse
	 */
	struct UWBP_T_ApartShop_C_IconAllSelectfalse_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.SetSlotSelect
	 */
	struct UWBP_T_ApartShop_C_SetSlotSelect_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9ULR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGridPanel*                                          InputPin;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnMultipleSelection
	 */
	struct UWBP_T_ApartShop_C_OnMultipleSelection_Params
	{
	public:
		class UItemIconBtn_C*                                      InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EStorageGridType                                           LastClickGridType;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.SaveSortRule
	 */
	struct UWBP_T_ApartShop_C_SaveSortRule_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.UiInputBlock
	 */
	struct UWBP_T_ApartShop_C_UiInputBlock_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconAllGrayMode
	 */
	struct UWBP_T_ApartShop_C_IconAllGrayMode_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconGrayMode
	 */
	struct UWBP_T_ApartShop_C_IconGrayMode_Params
	{
	public:
		class UPanelWidget*                                        Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       On;                                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPress_Cancel
	 */
	struct UWBP_T_ApartShop_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_T_ApartShop_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UWBP_T_ApartShop_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature
	 */
	struct UWBP_T_ApartShop_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_7_OnApplyFilter__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature
	 */
	struct UWBP_T_ApartShop_C_BndEvt__TabBtn2_K2Node_ComponentBoundEvent_10_BtnClick__DelegateSignature_Params
	{
	public:
		class UShopCmnBtn1_C*                                      ClickBtn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TabId;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
	 */
	struct UWBP_T_ApartShop_C_BndEvt__CmnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2
	 */
	struct UWBP_T_ApartShop_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressItem_Inventory
	 */
	struct UWBP_T_ApartShop_C_OnPressItem_Inventory_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressItem_Storage
	 */
	struct UWBP_T_ApartShop_C_OnPressItem_Storage_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressRight_Inventory
	 */
	struct UWBP_T_ApartShop_C_OnPressRight_Inventory_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnPressRight_Storage
	 */
	struct UWBP_T_ApartShop_C_OnPressRight_Storage_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.TryEnd
	 */
	struct UWBP_T_ApartShop_C_TryEnd_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
	 */
	struct UWBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Storage_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature
	 */
	struct UWBP_T_ApartShop_C_BndEvt__WBP_StorageShop_ScrollBox_Inventory_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.IconScrollVisible
	 */
	struct UWBP_T_ApartShop_C_IconScrollVisible_Params
	{
	public:
		class UGridPanel*                                          Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Offset;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.SlotSelectRevival
	 */
	struct UWBP_T_ApartShop_C_SlotSelectRevival_Params
	{
	public:
		class UGridPanel*                                          Grid;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnApartAnimationPlayed
	 */
	struct UWBP_T_ApartShop_C_OnApartAnimationPlayed_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_T_ApartShop_WBP_T_ApartItemList_K2Node_ComponentBoundEvent_0_OnApart__DelegateSignature
	 */
	struct UWBP_T_ApartShop_C_BndEvt__WBP_T_ApartShop_WBP_T_ApartItemList_K2Node_ComponentBoundEvent_0_OnApart__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.CustomEvent_1
	 */
	struct UWBP_T_ApartShop_C_CustomEvent_1_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LI9Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBStorageItemBoxResultData                         InItemBoxResultData;                                     // 0x0008(0x0118)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.AnimationApiEnd
	 */
	struct UWBP_T_ApartShop_C_AnimationApiEnd_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_T_ApartShop_WBP_CheckBoxText_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature
	 */
	struct UWBP_T_ApartShop_C_BndEvt__WBP_T_ApartShop_WBP_CheckBoxText_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.ApartBlockEnd
	 */
	struct UWBP_T_ApartShop_C_ApartBlockEnd_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.Construct
	 */
	struct UWBP_T_ApartShop_C_Construct_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.Destruct
	 */
	struct UWBP_T_ApartShop_C_Destruct_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.ResetGrid
	 */
	struct UWBP_T_ApartShop_C_ResetGrid_Params
	{
	public:
		EStorageGridType                                           InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ScrollReset;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.CreateComboBox
	 */
	struct UWBP_T_ApartShop_C_CreateComboBox_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.onAnimTimer
	 */
	struct UWBP_T_ApartShop_C_onAnimTimer_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1
	 */
	struct UWBP_T_ApartShop_C_WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.TryCreateStorageGridIcon
	 */
	struct UWBP_T_ApartShop_C_TryCreateStorageGridIcon_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdateSortBox
	 */
	struct UWBP_T_ApartShop_C_UpdateSortBox_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdatefilterBox
	 */
	struct UWBP_T_ApartShop_C_UpdatefilterBox_Params
	{	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.UpdetaPage
	 */
	struct UWBP_T_ApartShop_C_UpdetaPage_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       KeepPage;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
	 */
	struct UWBP_T_ApartShop_C_BndEvt__WBP_StorageShop_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    PageCurrent;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.ExecuteUbergraph_WBP_T_ApartShop
	 */
	struct UWBP_T_ApartShop_C_ExecuteUbergraph_WBP_T_ApartShop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IZVO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_T_ApartShop.WBP_T_ApartShop_C.OnClose__DelegateSignature
	 */
	struct UWBP_T_ApartShop_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
