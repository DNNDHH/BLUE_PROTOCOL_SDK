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
	 * Function BaseInventory.BaseInventory_C.GetCategoryModeName
	 */
	struct UBaseInventory_C_GetCategoryModeName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.GetFilterType
	 */
	struct UBaseInventory_C_GetFilterType_Params
	{
	public:
		EItemFilterType                                            FilterType;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_097F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseInventory.BaseInventory_C.GetSortMode
	 */
	struct UBaseInventory_C_GetSortMode_Params
	{
	public:
		int32_t                                                    ModeNum;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.GetSortRule
	 */
	struct UBaseInventory_C_GetSortRule_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OX9X[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseInventory.BaseInventory_C.SetSelectBlankTextOff
	 */
	struct UBaseInventory_C_SetSelectBlankTextOff_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.SetSelectBlankText
	 */
	struct UBaseInventory_C_SetSelectBlankText_Params
	{
	public:
		EInventoryType                                             Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7ULO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseInventory.BaseInventory_C.SetSelectedItemBtn
	 */
	struct UBaseInventory_C_SetSelectedItemBtn_Params
	{
	public:
		class FString                                              ItemId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.GetSelectItemData
	 */
	struct UBaseInventory_C_GetSelectItemData_Params
	{
	public:
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0000(0x0060)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.On_ComboBoxString_Filter_GenerateWidget_1
	 */
	struct UBaseInventory_C_On_ComboBoxString_Filter_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.IconAnimInPlay
	 */
	struct UBaseInventory_C_IconAnimInPlay_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.UpdateLockInventory
	 */
	struct UBaseInventory_C_UpdateLockInventory_Params
	{
	public:
		TArray<struct FSBLockItemData>                             LockItems;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.NeedItemVisible
	 */
	struct UBaseInventory_C_NeedItemVisible_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.CheckSlotIconTextureLoadProgress
	 */
	struct UBaseInventory_C_CheckSlotIconTextureLoadProgress_Params
	{
	public:
		bool                                                       OutIsLoadFinished;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2QID[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseInventory.BaseInventory_C.FindInventoryDataFromUniqueId
	 */
	struct UBaseInventory_C_FindInventoryDataFromUniqueId_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FInventoryData                                      OutInventoryData;                                        // 0x0010(0x0098)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.SetRegisterMode
	 */
	struct UBaseInventory_C_SetRegisterMode_Params
	{
	public:
		bool                                                       bIsRegisterMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.FindInventoryDataFromIndex
	 */
	struct UBaseInventory_C_FindInventoryDataFromIndex_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VIYD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInventoryData                                      ArrayElement;                                            // 0x0008(0x0098)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.SelectedAll
	 */
	struct UBaseInventory_C_SelectedAll_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WTTC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseInventory.BaseInventory_C.AdjustItemIcons
	 */
	struct UBaseInventory_C_AdjustItemIcons_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.Construct
	 */
	struct UBaseInventory_C_Construct_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.Tick
	 */
	struct UBaseInventory_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.OnReflesh
	 */
	struct UBaseInventory_C_OnReflesh_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.OnSelect
	 */
	struct UBaseInventory_C_OnSelect_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.ChangeCategory
	 */
	struct UBaseInventory_C_ChangeCategory_Params
	{
	public:
		EInventoryType                                             Inventory;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.OnRefleshFromRegister
	 */
	struct UBaseInventory_C_OnRefleshFromRegister_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.OnRefleshWithNoAnim
	 */
	struct UBaseInventory_C_OnRefleshWithNoAnim_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.Destruct
	 */
	struct UBaseInventory_C_Destruct_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.UnbindDelegate
	 */
	struct UBaseInventory_C_UnbindDelegate_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBaseInventory_C_BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UBaseInventory_C_BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.RecastTimeIconUpdate
	 */
	struct UBaseInventory_C_RecastTimeIconUpdate_Params
	{
	public:
		bool                                                       bIsRecastTime;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.Event_PressItemEnable
	 */
	struct UBaseInventory_C_Event_PressItemEnable_Params
	{
	public:
		class UItemIconBtn_C*                                      Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.CustomEvent_1
	 */
	struct UBaseInventory_C_CustomEvent_1_Params
	{
	public:
		struct FInventoryData                                      OnItemClick;                                             // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature
	 */
	struct UBaseInventory_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.UpdateFilterButton
	 */
	struct UBaseInventory_C_UpdateFilterButton_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.UpdateFilterComboBox
	 */
	struct UBaseInventory_C_UpdateFilterComboBox_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.UpdateSortComboBox
	 */
	struct UBaseInventory_C_UpdateSortComboBox_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature
	 */
	struct UBaseInventory_C_BndEvt__BaseInventory_ScrollBox_0_K2Node_ComponentBoundEvent_3_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.InventoryScrollStart
	 */
	struct UBaseInventory_C_InventoryScrollStart_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.ScrollVisibleUpdate
	 */
	struct UBaseInventory_C_ScrollVisibleUpdate_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.CustomEvent_2
	 */
	struct UBaseInventory_C_CustomEvent_2_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature
	 */
	struct UBaseInventory_C_BndEvt__BaseInventory_CommonPagerWidget_K2Node_ComponentBoundEvent_1_OnPageChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    PageCurrent;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.ExecuteUbergraph_BaseInventory
	 */
	struct UBaseInventory_C_ExecuteUbergraph_BaseInventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.OnRefreshRegisterRequest__DelegateSignature
	 */
	struct UBaseInventory_C_OnRefreshRegisterRequest__DelegateSignature_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.OnComboChanged__DelegateSignature
	 */
	struct UBaseInventory_C_OnComboChanged__DelegateSignature_Params
	{	};

	/**
	 * Function BaseInventory.BaseInventory_C.OnPressItemButton__DelegateSignature
	 */
	struct UBaseInventory_C_OnPressItemButton__DelegateSignature_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInventoryData                                      InventoryData;                                           // 0x0008(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.OnClickedItemRightButton__DelegateSignature
	 */
	struct UBaseInventory_C_OnClickedItemRightButton__DelegateSignature_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInventoryData                                      InventoryData;                                           // 0x0008(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.OnClickedItemButton__DelegateSignature
	 */
	struct UBaseInventory_C_OnClickedItemButton__DelegateSignature_Params
	{
	public:
		struct FInventoryData                                      InventoryData;                                           // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BaseInventory.BaseInventory_C.OnClickedButton__DelegateSignature
	 */
	struct UBaseInventory_C_OnClickedButton__DelegateSignature_Params
	{
	public:
		EDescripionButtonType                                      Button;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
