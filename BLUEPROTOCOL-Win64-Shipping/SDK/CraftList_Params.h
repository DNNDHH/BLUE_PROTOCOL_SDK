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
	 * Function CraftList.CraftList_C.SetIsExecutingCraft
	 */
	struct UCraftList_C_SetIsExecutingCraft_Params
	{
	public:
		bool                                                       bExecutingCraft;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftList.CraftList_C.IsCheckMoney
	 */
	struct UCraftList_C_IsCheckMoney_Params
	{
	public:
		bool                                                       bEnoughMoney;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OZMF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CraftList.CraftList_C.InitCheckBox
	 */
	struct UCraftList_C_InitCheckBox_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.UpdateRatio
	 */
	struct UCraftList_C_UpdateRatio_Params
	{
	public:
		int32_t                                                    RecepiId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.SetWeaponShow
	 */
	struct UCraftList_C_SetWeaponShow_Params
	{
	public:
		bool                                                       isWeaponShowed;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftList.CraftList_C.GetCraftNum
	 */
	struct UCraftList_C_GetCraftNum_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.GetLastCraftStorage
	 */
	struct UCraftList_C_GetLastCraftStorage_Params
	{
	public:
		int32_t                                                    StorageType;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.UpdateLastCraftStorage
	 */
	struct UCraftList_C_UpdateLastCraftStorage_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.ConvertSaveType
	 */
	struct UCraftList_C_ConvertSaveType_Params
	{
	public:
		ECraftRecepiSortType                                       UseType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBItemSortType                                            SaveType;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.ConvertSortType
	 */
	struct UCraftList_C_ConvertSortType_Params
	{
	public:
		ESBItemSortType                                            SaveType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECraftRecepiSortType                                       UseType;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.FilterLists
	 */
	struct UCraftList_C_FilterLists_Params
	{
	public:
		TArray<struct FFilterGroup>                                Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CraftList.CraftList_C.GenerateLists
	 */
	struct UCraftList_C_GenerateLists_Params
	{
	public:
		TArray<struct FCharacterCraftRecepi>                       InputPin;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CraftList.CraftList_C.GenerateSortedIndexes
	 */
	struct UCraftList_C_GenerateSortedIndexes_Params
	{
	public:
		TArray<struct FCharacterCraftRecepi>                       Resepis;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            Indexes;                                                 // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function CraftList.CraftList_C.SetupCategoryList
	 */
	struct UCraftList_C_SetupCategoryList_Params
	{
	public:
		bool                                                       bIsWeapon1;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftList.CraftList_C.On_CategoryDropDown_GenerateWidget_1
	 */
	struct UCraftList_C_On_CategoryDropDown_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.On_DifficultyDropDown_GenerateWidget_1
	 */
	struct UCraftList_C_On_DifficultyDropDown_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.ShowRedayCheckYesNoDialog
	 */
	struct UCraftList_C_ShowRedayCheckYesNoDialog_Params
	{
	public:
		class UBP_Dialog_C*                                        OutIsDialog;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.isRecepiMaterialLocked
	 */
	struct UCraftList_C_isRecepiMaterialLocked_Params
	{
	public:
		bool                                                       OutIsLocked;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftList.CraftList_C.FilterItems
	 */
	struct UCraftList_C_FilterItems_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.CreateSortType
	 */
	struct UCraftList_C_CreateSortType_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.SetupItemList
	 */
	struct UCraftList_C_SetupItemList_Params
	{
	public:
		bool                                                       isWeaponShowed;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftList.CraftList_C.OnSelectRecepi
	 */
	struct UCraftList_C_OnSelectRecepi_Params
	{
	public:
		struct FCharacterCraftRecepi                               SelectRecepi;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UCraftRecepiItem_C*                                  SelectedItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.OnSelectDifficulty
	 */
	struct UCraftList_C_OnSelectDifficulty_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.InitList
	 */
	struct UCraftList_C_InitList_Params
	{
	public:
		TArray<struct FCharacterCraftRecepi>                       InputPin;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    Now;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.RestSelected
	 */
	struct UCraftList_C_RestSelected_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.Destruct
	 */
	struct UCraftList_C_Destruct_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.OnCompletGetRewardBoost
	 */
	struct UCraftList_C_OnCompletGetRewardBoost_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__CraftList_SBButton_C_62_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__CraftList_SBButton_C_62_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.ShowRateDialog
	 */
	struct UCraftList_C_ShowRateDialog_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.ProbabilityOnClose
	 */
	struct UCraftList_C_ProbabilityOnClose_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.OnCloseDiffDialog
	 */
	struct UCraftList_C_OnCloseDiffDialog_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__CraftList_UseTokenSelector_K2Node_ComponentBoundEvent_12_OnTokenSelectUpdate__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__CraftList_UseTokenSelector_K2Node_ComponentBoundEvent_12_OnTokenSelectUpdate__DelegateSignature_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.OnDialogClosed
	 */
	struct UCraftList_C_OnDialogClosed_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftList.CraftList_C.BndEvt__CraftList_Btn_ReadyCraft_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
	 */
	struct UCraftList_C_BndEvt__CraftList_Btn_ReadyCraft_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.UpdateSelectRecepi
	 */
	struct UCraftList_C_UpdateSelectRecepi_Params
	{
	public:
		struct FCharacterCraftRecepi                               SelectRecepi;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UCraftRecepiItem_C*                                  SelectedItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.Construct
	 */
	struct UCraftList_C_Construct_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.OnConditionCreated
	 */
	struct UCraftList_C_OnConditionCreated_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.OnOverflowAccepted
	 */
	struct UCraftList_C_OnOverflowAccepted_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.OnCanceled
	 */
	struct UCraftList_C_OnCanceled_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.OnCloseClassCheck
	 */
	struct UCraftList_C_OnCloseClassCheck_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.OnTokenDemanded
	 */
	struct UCraftList_C_OnTokenDemanded_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.OnSelected
	 */
	struct UCraftList_C_OnSelected_Params
	{
	public:
		int32_t                                                    Selected;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.EndEasyRedayCheckYesNoDialog
	 */
	struct UCraftList_C_EndEasyRedayCheckYesNoDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.ExecuteUbergraph_CraftList
	 */
	struct UCraftList_C_ExecuteUbergraph_CraftList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.OnPressCraft__DelegateSignature
	 */
	struct UCraftList_C_OnPressCraft__DelegateSignature_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.SetColorChangeMoney__DelegateSignature
	 */
	struct UCraftList_C_SetColorChangeMoney__DelegateSignature_Params
	{
	public:
		bool                                                       WhiteColor;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftList.CraftList_C.SetCancelLock__DelegateSignature
	 */
	struct UCraftList_C_SetCancelLock__DelegateSignature_Params
	{
	public:
		bool                                                       LockInput;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftList.CraftList_C.ChangeTabs__DelegateSignature
	 */
	struct UCraftList_C_ChangeTabs__DelegateSignature_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.ShowNpcCraftBtn__DelegateSignature
	 */
	struct UCraftList_C_ShowNpcCraftBtn__DelegateSignature_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftList.CraftList_C.ChengePointValidate__DelegateSignature
	 */
	struct UCraftList_C_ChengePointValidate__DelegateSignature_Params
	{	};

	/**
	 * Function CraftList.CraftList_C.SelectRecepi__DelegateSignature
	 */
	struct UCraftList_C_SelectRecepi__DelegateSignature_Params
	{
	public:
		struct FCharacterCraftRecepi                               SelectRecepi;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		class UCraftRecepiItem_C*                                  SelectedItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftList.CraftList_C.OnClose__DelegateSignature
	 */
	struct UCraftList_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
