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
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.UpdateIconSelected
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_UpdateIconSelected_Params
	{
	public:
		struct FCharaEquipInfo                                     EquipInfo;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetSelectedCostumeCategoryTitleText
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategoryTitleText_Params
	{
	public:
		E_MyCharaMenu_CostumeCategory                              InCostumeCategory;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_MyCharaMenu_AccessoryCategory                            InAccessoryCategory;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetAccessoryCostumeTypeFromAccessoryCategory
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_GetAccessoryCostumeTypeFromAccessoryCategory_Params
	{
	public:
		E_MyCharaMenu_AccessoryCategory                            InAccessoryCategory;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBCharaEquipType                                          OutCostumeType;                                          // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetCostumeTypeFromProtectorCategory
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_GetCostumeTypeFromProtectorCategory_Params
	{
	public:
		EProtectorCategory                                         InProtectorCategory;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBCharaEquipType                                          OutCostumeType;                                          // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetSelectedCostumeCategory
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_GetSelectedCostumeCategory_Params
	{
	public:
		E_MyCharaMenu_CostumeCategory                              OutCostumeCategory;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetSelectedCostumeCategory
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_SetSelectedCostumeCategory_Params
	{
	public:
		E_MyCharaMenu_CostumeCategory                              InCostumeCategory;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ChangeActiveWindow
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_ChangeActiveWindow_Params
	{
	public:
		bool                                                       InIsFilterSelectorWindowActive;                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InDoAnimation;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z4PX[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.InitSortBox
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_InitSortBox_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Get Filter
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_GetFilter_Params
	{
	public:
		ESBCharaEquipType                                          InCostumeType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7A31[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFilterGroup>                                OutSortFilter;                                           // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.GetCurrentSortType
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_GetCurrentSortType_Params
	{
	public:
		ESBItemSortType                                            OutSortType;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.SetInventory
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_SetInventory_Params
	{
	public:
		class USBOwnItemListContainer*                             InOwnItemListContainer;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.IsCostumeTypeAccessory
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_IsCostumeTypeAccessory_Params
	{
	public:
		ESBCharaEquipType                                          InEquipType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsAccessory;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.HideAllSlotListItem
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_HideAllSlotListItem_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.CreateInventoryItemData
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_CreateInventoryItemData_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FInventoryItemData                                  OutInventoryItemData;                                    // 0x0150(0x0060)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Setup List
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_SetupList_Params
	{
	public:
		ESBItemSortType                                            InSortType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          InEquipType;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharacterGender                                         InGenderType;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               InClassType;                                             // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ODT5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFilterGroup>                                InSortFilters;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		E_MyCharaMenu_CostumeCategory                              InCostumeCategory;                                       // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_MyCharaMenu_AccessoryCategory                            InAccessoryCategory;                                     // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U0N8[0x2];                                   // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.CreateEmptySlotList
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_CreateEmptySlotList_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Close
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_Close_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ShowUnchangeableMessageDialog
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_ShowUnchangeableMessageDialog_Params
	{
	public:
		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues    InUnchangeableRetValue;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsAccessory;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ShowUsingUnusedEquipConfirmDialog
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_ShowUsingUnusedEquipConfirmDialog_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Construct
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.Destruct
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_Destruct_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnSelect_CandidateItemIcon
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_OnSelect_CandidateItemIcon_Params
	{
	public:
		class UItemIconBtn_C*                                      InSelectedIcon;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__BtnFilter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_BndEvt__BtnFilter_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_4_OnFilterApply__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorCostume_K2Node_ComponentBoundEvent_5_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_6_OnFilterApply__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_7_OnClose__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_BndEvt__FilterSelectorAccessory_K2Node_ComponentBoundEvent_7_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_8_OnSelectSortType__DelegateSignature_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.PreConstruct
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_BndEvt__CostumeCategoryTab_K2Node_ComponentBoundEvent_9_OnCostumeCategoryIconBtnClicked__DelegateSignature_Params
	{
	public:
		E_MyCharaMenu_CostumeCategory                              InCostumeCategory;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnPress_Cancel
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_BndEvt__AccessoryCategoryTab_K2Node_ComponentBoundEvent_2_OnAccessoryCategoryIconBtnClicked__DelegateSignature_Params
	{
	public:
		E_MyCharaMenu_AccessoryCategory                            InAccessoryCategory;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.EndUsingUnusedEquipConfirmDialog
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_EndUsingUnusedEquipConfirmDialog_Params
	{
	public:
		EYesNoDialogResult                                         InYesNoResult;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_ExecuteUbergraph_MyCharaMenu_CostumeChangeMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnEndUsingUnusedEquipConfirmDialog__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnOpenEquipRingHandSelectDialog__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_OnOpenEquipRingHandSelectDialog__DelegateSignature_Params
	{
	public:
		class FString                                              InRingUniqueId;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_CostumeChangeMenu.MyCharaMenu_CostumeChangeMenu_C.OnSelected__DelegateSignature
	 */
	struct UMyCharaMenu_CostumeChangeMenu_C_OnSelected__DelegateSignature_Params
	{
	public:
		class FString                                              InItemUniqueId;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
