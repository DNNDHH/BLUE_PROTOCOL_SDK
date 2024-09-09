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
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ResetUiSupportKye
	 */
	struct UMyCharaMenu_MountImagineList_C_ResetUiSupportKye_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SetBtnRemoveEnabled
	 */
	struct UMyCharaMenu_MountImagineList_C_SetBtnRemoveEnabled_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SetBtnChangeEnabled
	 */
	struct UMyCharaMenu_MountImagineList_C_SetBtnChangeEnabled_Params
	{
	public:
		bool                                                       bInIsEnabled;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ClearSlotList
	 */
	struct UMyCharaMenu_MountImagineList_C_ClearSlotList_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.PlayFilterSelectorAnimInOrOut
	 */
	struct UMyCharaMenu_MountImagineList_C_PlayFilterSelectorAnimInOrOut_Params
	{
	public:
		bool                                                       InPlayAnimIn;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ChangeActiveWindow
	 */
	struct UMyCharaMenu_MountImagineList_C_ChangeActiveWindow_Params
	{
	public:
		bool                                                       InIsFilterSelectorWindowActive;                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InDoAnimation;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.HideAllSlotListItem
	 */
	struct UMyCharaMenu_MountImagineList_C_HideAllSlotListItem_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SortList
	 */
	struct UMyCharaMenu_MountImagineList_C_SortList_Params
	{
	public:
		class USBOwnItemListContainer*                             InOwnItemListContainer;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBItemSortType                                            InSortType;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CHVN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFilterGroup>                                InSortFilters;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    OutCandidateItemCnt;                                     // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PEL0[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.InitSortBox
	 */
	struct UMyCharaMenu_MountImagineList_C_InitSortBox_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ChangeEquip
	 */
	struct UMyCharaMenu_MountImagineList_C_ChangeEquip_Params
	{
	public:
		bool                                                       IsEquip;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.IsChangeEquip
	 */
	struct UMyCharaMenu_MountImagineList_C_IsChangeEquip_Params
	{
	public:
		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues    Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8WYS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.IsCloseAnimePlaying
	 */
	struct UMyCharaMenu_MountImagineList_C_IsCloseAnimePlaying_Params
	{
	public:
		bool                                                       IsPlaying;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ChangeMountImagine
	 */
	struct UMyCharaMenu_MountImagineList_C_ChangeMountImagine_Params
	{
	public:
		bool                                                       IsEquip;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIgnoreUnsusedEquipConfirm;                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Update_ChangeBtn
	 */
	struct UMyCharaMenu_MountImagineList_C_Update_ChangeBtn_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Update_RemoveBtn
	 */
	struct UMyCharaMenu_MountImagineList_C_Update_RemoveBtn_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.CreateInventoryData
	 */
	struct UMyCharaMenu_MountImagineList_C_CreateInventoryData_Params
	{
	public:
		struct FOwnItemInfo                                        InItemInfo;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FInventoryData                                      OutInventryData;                                         // 0x0150(0x0098)  (Parm, OutParm, HasGetValueTypeHash)
		bool                                                       OutIsAdd;                                                // 0x01E8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YL80[0x7];                                   // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SetItemIconBtn
	 */
	struct UMyCharaMenu_MountImagineList_C_SetItemIconBtn_Params
	{
	public:
		struct FInventoryData                                      InInventoryData;                                         // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		int32_t                                                    InSlotItemId;                                            // 0x0098(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsIconSet;                                            // 0x009C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V9EW[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.IsAddMountImagine
	 */
	struct UMyCharaMenu_MountImagineList_C_IsAddMountImagine_Params
	{
	public:
		struct FInventoryData                                      InInventoryData;                                         // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       IsAdd;                                                   // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.CreateItemList
	 */
	struct UMyCharaMenu_MountImagineList_C_CreateItemList_Params
	{
	public:
		class USBOwnItemListContainer*                             InInventory;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBItemSortType                                            InSortType;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NN09[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFilterGroup>                                InSortFilters;                                           // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.SelectAll
	 */
	struct UMyCharaMenu_MountImagineList_C_SelectAll_Params
	{
	public:
		bool                                                       InIsSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InDoToAllCreatedItems;                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.CreateSlotList
	 */
	struct UMyCharaMenu_MountImagineList_C_CreateSlotList_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.HideWindow
	 */
	struct UMyCharaMenu_MountImagineList_C_HideWindow_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ShowWindow
	 */
	struct UMyCharaMenu_MountImagineList_C_ShowWindow_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ShowImagineUnchangeableMessageDialog
	 */
	struct UMyCharaMenu_MountImagineList_C_ShowImagineUnchangeableMessageDialog_Params
	{
	public:
		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues    InUnchangeableRetValue;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ShowUsingUnusedEquipConfirmDialog
	 */
	struct UMyCharaMenu_MountImagineList_C_ShowUsingUnusedEquipConfirmDialog_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Construct
	 */
	struct UMyCharaMenu_MountImagineList_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__BtnChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_BndEvt__BtnChange_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UMyCharaMenu_MountImagineList_C_WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_BndEvt__BtnScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnSelect_ItemIcon
	 */
	struct UMyCharaMenu_MountImagineList_C_OnSelect_ItemIcon_Params
	{
	public:
		class UItemIconBtn_C*                                      SelectIcon;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__BtnRemove_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_BndEvt__BtnRemove_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnPress_Cancel
	 */
	struct UMyCharaMenu_MountImagineList_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_BndEvt__SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.EndUsingUnusedEquipConfirmDialog
	 */
	struct UMyCharaMenu_MountImagineList_C_EndUsingUnusedEquipConfirmDialog_Params
	{
	public:
		EYesNoDialogResult                                         InYesNoResult;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_BndEvt__MyCharaMenu_MountImagineList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_FilterSelectorBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_BndEvt__MyCharaMenu_MountImagineList_FilterSelectorBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_5_OnFilterApply__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_5_OnFilterApply__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_6_OnClose__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_BndEvt__MyCharaMenu_MountImagineList_FilterSelector_K2Node_ComponentBoundEvent_6_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.BndEvt__MyCharaMenu_MountImagineList_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_BndEvt__MyCharaMenu_MountImagineList_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.Destruct
	 */
	struct UMyCharaMenu_MountImagineList_C_Destruct_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.ExecuteUbergraph_MyCharaMenu_MountImagineList
	 */
	struct UMyCharaMenu_MountImagineList_C_ExecuteUbergraph_MyCharaMenu_MountImagineList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnMountImagineSelectReleased__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_OnMountImagineSelectReleased__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnHideFinished__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_OnHideFinished__DelegateSignature_Params
	{
	public:
		bool                                                       IsChangeRequest;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.OnHideWindow__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_OnHideWindow__DelegateSignature_Params
	{	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.MountImagineChangeRequest__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_MountImagineChangeRequest__DelegateSignature_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_MountImagineList.MyCharaMenu_MountImagineList_C.MountImagineChangeClicked__DelegateSignature
	 */
	struct UMyCharaMenu_MountImagineList_C_MountImagineChangeClicked__DelegateSignature_Params
	{
	public:
		class FString                                              InUEquipniqueId;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
