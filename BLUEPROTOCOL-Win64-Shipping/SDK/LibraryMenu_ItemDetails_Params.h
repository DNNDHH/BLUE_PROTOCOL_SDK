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
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckTerm
	 */
	struct ULibraryMenu_ItemDetails_C_CheckTerm_Params
	{
	public:
		class FString                                              TermId;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.On Sort Combo Box Generate Widget 0
	 */
	struct ULibraryMenu_ItemDetails_C_OnSortComboBoxGenerateWidget0_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Event_Wishlist
	 */
	struct ULibraryMenu_ItemDetails_C_Event_Wishlist_Params
	{	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.UpdateMakeListNewIcon
	 */
	struct ULibraryMenu_ItemDetails_C_UpdateMakeListNewIcon_Params
	{	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.UpdateReadMakeList
	 */
	struct ULibraryMenu_ItemDetails_C_UpdateReadMakeList_Params
	{	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckImagineFilter
	 */
	struct ULibraryMenu_ItemDetails_C_CheckImagineFilter_Params
	{
	public:
		struct FSBMasterImagine                                    Data;                                                    // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Result;                                                  // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckWeaponFilter
	 */
	struct ULibraryMenu_ItemDetails_C_CheckWeaponFilter_Params
	{
	public:
		struct FSBWeaponMasterData                                 Data;                                                    // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Result;                                                  // 0x00C8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.CheckSortFilterType
	 */
	struct ULibraryMenu_ItemDetails_C_CheckSortFilterType_Params
	{
	public:
		EPictureBookMakeListSortType                               SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetSortFilter
	 */
	struct ULibraryMenu_ItemDetails_C_SetSortFilter_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filter;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetActiveTab
	 */
	struct ULibraryMenu_ItemDetails_C_SetActiveTab_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V1EY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetMakeData
	 */
	struct ULibraryMenu_ItemDetails_C_SetMakeData_Params
	{	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetItemData
	 */
	struct ULibraryMenu_ItemDetails_C_SetItemData_Params
	{
	public:
		struct FItemMasterData                                     InItemMasterData;                                        // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetDetailsVisibility
	 */
	struct ULibraryMenu_ItemDetails_C_SetDetailsVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KXX6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Initialize
	 */
	struct ULibraryMenu_ItemDetails_C_Initialize_Params
	{	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnLoaded_809AD089417D6D92E51C08859E31E5BD
	 */
	struct ULibraryMenu_ItemDetails_C_OnLoaded_809AD089417D6D92E51C08859E31E5BD_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.SetItemImage
	 */
	struct ULibraryMenu_ItemDetails_C_SetItemImage_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.Construct
	 */
	struct ULibraryMenu_ItemDetails_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.PreConstruct
	 */
	struct ULibraryMenu_ItemDetails_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 */
	struct ULibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_ComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.BndEvt__LibraryMenu_ItemDetails_FilterSelectorBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_ItemDetails_C_BndEvt__LibraryMenu_ItemDetails_FilterSelectorBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.DelayUpdateMakeListNewIcon
	 */
	struct ULibraryMenu_ItemDetails_C_DelayUpdateMakeListNewIcon_Params
	{	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.ExecuteUbergraph_LibraryMenu_ItemDetails
	 */
	struct ULibraryMenu_ItemDetails_C_ExecuteUbergraph_LibraryMenu_ItemDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WC7N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnMakeListAllRead__DelegateSignature
	 */
	struct ULibraryMenu_ItemDetails_C_OnMakeListAllRead__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnChangeFilter__DelegateSignature
	 */
	struct ULibraryMenu_ItemDetails_C_OnChangeFilter__DelegateSignature_Params
	{
	public:
		EPictureBookMakeListSortType                               SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_ItemDetails.LibraryMenu_ItemDetails_C.OnFilterSelectorBtn__DelegateSignature
	 */
	struct ULibraryMenu_ItemDetails_C_OnFilterSelectorBtn__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
