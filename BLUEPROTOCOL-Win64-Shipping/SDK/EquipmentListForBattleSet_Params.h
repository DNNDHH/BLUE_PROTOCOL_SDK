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
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetIsChangingEquip
	 */
	struct UEquipmentListForBattleSet_C_SetIsChangingEquip_Params
	{
	public:
		bool                                                       bInIsChangingEquip;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetFilterPosition
	 */
	struct UEquipmentListForBattleSet_C_SetFilterPosition_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.IsFilterSelectorAnimInfOutPlaying
	 */
	struct UEquipmentListForBattleSet_C_IsFilterSelectorAnimInfOutPlaying_Params
	{
	public:
		bool                                                       OutIsPlaying;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayFilterSelectorAnimInOrOut
	 */
	struct UEquipmentListForBattleSet_C_PlayFilterSelectorAnimInOrOut_Params
	{
	public:
		bool                                                       InPlayAnimIn;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.CheckIfSelectedEquipmentIsEquipped
	 */
	struct UEquipmentListForBattleSet_C_CheckIfSelectedEquipmentIsEquipped_Params
	{
	public:
		class FString                                              InEquipmentUniqueId;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          InEquipType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsEquipped;                                           // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetEquipmentIconSelectedByUniqueId
	 */
	struct UEquipmentListForBattleSet_C_SetEquipmentIconSelectedByUniqueId_Params
	{
	public:
		class FString                                              InEquipmentUinqueId;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SwitchEquipmentIconListBody
	 */
	struct UEquipmentListForBattleSet_C_SwitchEquipmentIconListBody_Params
	{
	public:
		bool                                                       InIsEquipmentIconListBodyEmpty;                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZMB4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetFilterBtnSelected
	 */
	struct UEquipmentListForBattleSet_C_SetFilterBtnSelected_Params
	{
	public:
		bool                                                       InIsFilterBtnStorageSelected;                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KUAI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ExtractInnerImagineEquipPositionFlagByEquipType
	 */
	struct UEquipmentListForBattleSet_C_ExtractInnerImagineEquipPositionFlagByEquipType_Params
	{
	public:
		ESBCharaEquipType                                          InEquipType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InEquipPosition1;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InEquipPosition2;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InEquipPosition3;                                        // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InEquipPosition4;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InEquipPosition5;                                        // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       OutEquipPositionMatch;                                   // 0x0006(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.GetEquipType
	 */
	struct UEquipmentListForBattleSet_C_GetEquipType_Params
	{
	public:
		ESBCharaEquipType                                          OutEquipType;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetEquipType
	 */
	struct UEquipmentListForBattleSet_C_SetEquipType_Params
	{
	public:
		ESBCharaEquipType                                          InEquipType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetInfoType
	 */
	struct UEquipmentListForBattleSet_C_SetInfoType_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.IsFilterSelectorOpened
	 */
	struct UEquipmentListForBattleSet_C_IsFilterSelectorOpened_Params
	{
	public:
		bool                                                       OutIsOpened;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ChangeActiveWindow
	 */
	struct UEquipmentListForBattleSet_C_ChangeActiveWindow_Params
	{
	public:
		bool                                                       InIsFilterSelectorWindowActive;                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InDoAnimation;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayListInAnimReverse
	 */
	struct UEquipmentListForBattleSet_C_PlayListInAnimReverse_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.PlayListInAnimForward
	 */
	struct UEquipmentListForBattleSet_C_PlayListInAnimForward_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetStorageMode
	 */
	struct UEquipmentListForBattleSet_C_SetStorageMode_Params
	{
	public:
		bool                                                       InIsForStorage;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TBAX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetListVisibility
	 */
	struct UEquipmentListForBattleSet_C_SetListVisibility_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ChangeFilterType
	 */
	struct UEquipmentListForBattleSet_C_ChangeFilterType_Params
	{
	public:
		EFilter_Type                                               InFilterType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SetIsEquipChangeBtnEnabled
	 */
	struct UEquipmentListForBattleSet_C_SetIsEquipChangeBtnEnabled_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ResetSelectedIconAll
	 */
	struct UEquipmentListForBattleSet_C_ResetSelectedIconAll_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.HideListItemAll
	 */
	struct UEquipmentListForBattleSet_C_HideListItemAll_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.SortList
	 */
	struct UEquipmentListForBattleSet_C_SortList_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.InitListSetting
	 */
	struct UEquipmentListForBattleSet_C_InitListSetting_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIgnoreSortAndFilterInit;                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.CreateList
	 */
	struct UEquipmentListForBattleSet_C_CreateList_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1P3B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.UpdateOwnItemListContainer
	 */
	struct UEquipmentListForBattleSet_C_UpdateOwnItemListContainer_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Init
	 */
	struct UEquipmentListForBattleSet_C_Init_Params
	{
	public:
		E_BattleSetInfoType                                        InBattleSetInfoType;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBCharaEquipType                                          InEquipType;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsStorageMode;                                         // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnItemIconBtnSelected
	 */
	struct UEquipmentListForBattleSet_C_OnItemIconBtnSelected_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Destruct
	 */
	struct UEquipmentListForBattleSet_C_Destruct_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnFilter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_BtnFilter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterButton_Bag_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterButton_Bag_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_FilterButton_Storage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_FilterButton_Storage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_BndEvt__EquipmentListForBattleSet_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.Construct
	 */
	struct UEquipmentListForBattleSet_C_Construct_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.ExecuteUbergraph_EquipmentListForBattleSet
	 */
	struct UEquipmentListForBattleSet_C_ExecuteUbergraph_EquipmentListForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnIsChangingEquip__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_OnIsChangingEquip__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnCancelBtnPressed__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_OnCancelBtnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnFilterBtnBagOrStoragePressed__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_OnFilterBtnBagOrStoragePressed__DelegateSignature_Params
	{
	public:
		bool                                                       InIsFilterBtnStoragePressed;                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnSortTypeSelected__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_OnSortTypeSelected__DelegateSignature_Params
	{
	public:
		ESBItemSortType                                            InSelectedSortType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnFilterApply__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_OnFilterApply__DelegateSignature_Params
	{	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnEquipChangeBtnPressed__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_OnEquipChangeBtnPressed__DelegateSignature_Params
	{
	public:
		E_BattleSetInfoType                                        InInfoType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_15KJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InEquipmentUniqueId;                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipmentListForBattleSet.EquipmentListForBattleSet_C.OnListItemSelected__DelegateSignature
	 */
	struct UEquipmentListForBattleSet_C_OnListItemSelected__DelegateSignature_Params
	{
	public:
		class UItemIconBtn_C*                                      InSelectedListItem;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
