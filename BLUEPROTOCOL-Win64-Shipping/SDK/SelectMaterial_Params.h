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
	 * Function SelectMaterial.SelectMaterial_C.UpdateSelectAlert
	 */
	struct USelectMaterial_C_UpdateSelectAlert_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.Get_HB_SelectAlert_ToolTipWidget_1
	 */
	struct USelectMaterial_C_Get_HB_SelectAlert_ToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.UpdateText
	 */
	struct USelectMaterial_C_UpdateText_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.IsMoneyAmount
	 */
	struct USelectMaterial_C_IsMoneyAmount_Params
	{
	public:
		bool                                                       isAmount;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M39Z[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.RequestWalletShow
	 */
	struct USelectMaterial_C_RequestWalletShow_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.SetFilterType
	 */
	struct USelectMaterial_C_SetFilterType_Params
	{
	public:
		EFilter_Type                                               FilterType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.CalculateLiquidMemoryMoneyDiscount
	 */
	struct USelectMaterial_C_CalculateLiquidMemoryMoneyDiscount_Params
	{
	public:
		int32_t                                                    BaseMoney;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CalclatedMoney;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.CalculateRewardBoostMoney
	 */
	struct USelectMaterial_C_CalculateRewardBoostMoney_Params
	{
	public:
		int32_t                                                    SupportItemId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BasicNeedLuno;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CalculatedMoney;                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.CalclateRewardBoostSupportItemNum
	 */
	struct USelectMaterial_C_CalclateRewardBoostSupportItemNum_Params
	{
	public:
		int32_t                                                    BaseAmount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SupportItemId;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CalculatedAmount;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.IsNeedMoreMaterial
	 */
	struct USelectMaterial_C_IsNeedMoreMaterial_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SV9S[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.GenerateUIDs
	 */
	struct USelectMaterial_C_GenerateUIDs_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.Update
	 */
	struct USelectMaterial_C_Update_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.UpdateSelectButton
	 */
	struct USelectMaterial_C_UpdateSelectButton_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.IsMaterialFull
	 */
	struct USelectMaterial_C_IsMaterialFull_Params
	{
	public:
		bool                                                       IsOk;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.TicketTextUpdate
	 */
	struct USelectMaterial_C_TicketTextUpdate_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.UpdateTicketData
	 */
	struct USelectMaterial_C_UpdateTicketData_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.CacheTicketData
	 */
	struct USelectMaterial_C_CacheTicketData_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.InitializeTickets
	 */
	struct USelectMaterial_C_InitializeTickets_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.TextInitialize
	 */
	struct USelectMaterial_C_TextInitialize_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.RemoveMaterial
	 */
	struct USelectMaterial_C_RemoveMaterial_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.HasMaterialStorage
	 */
	struct USelectMaterial_C_HasMaterialStorage_Params
	{
	public:
		struct FOwnItemInfo                                        ItemInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bOutExist;                                               // 0x0150(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.UpdateMaterialView
	 */
	struct USelectMaterial_C_UpdateMaterialView_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.Initialize
	 */
	struct USelectMaterial_C_Initialize_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct USelectMaterial_C_BndEvt__SelectMaterial_CB_MaterialTicketUse_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.OnEndDialog
	 */
	struct USelectMaterial_C_OnEndDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature
	 */
	struct USelectMaterial_C_BndEvt__SelectMaterial_StorageFilter_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature_Params
	{
	public:
		TArray<struct FFilterGroup>                                Filters;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.OnSectedLockedItems
	 */
	struct USelectMaterial_C_OnSectedLockedItems_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature
	 */
	struct USelectMaterial_C_BndEvt__SelectMaterial_MaterialGrid_K2Node_ComponentBoundEvent_2_SelectedItem__DelegateSignature_Params
	{
	public:
		struct FOwnItemInfo                                        SelectItem;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature
	 */
	struct USelectMaterial_C_BndEvt__SelectMaterial_StorageGrid_K2Node_ComponentBoundEvent_1_SelectedItem__DelegateSignature_Params
	{
	public:
		struct FOwnItemInfo                                        SelectItem;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature
	 */
	struct USelectMaterial_C_BndEvt__SelectMaterial_BagGrid_K2Node_ComponentBoundEvent_0_SelectedItem__DelegateSignature_Params
	{
	public:
		struct FOwnItemInfo                                        SelectItem;                                              // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.OnEndBattleContains
	 */
	struct USelectMaterial_C_OnEndBattleContains_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.Construct
	 */
	struct USelectMaterial_C_Construct_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.RequestClose
	 */
	struct USelectMaterial_C_RequestClose_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.Destruct
	 */
	struct USelectMaterial_C_Destruct_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature
	 */
	struct USelectMaterial_C_BndEvt__SelectMaterial_CmnClose03_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.OnCloseDialog
	 */
	struct USelectMaterial_C_OnCloseDialog_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature
	 */
	struct USelectMaterial_C_BndEvt__SelectMaterial_StoragePager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    PageCurrent;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct USelectMaterial_C_BndEvt__SelectMaterial_Btn_Selected_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.Event On Begin Selected Material
	 */
	struct USelectMaterial_C_EventOnBeginSelectedMaterial_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.Event On End Selected Material
	 */
	struct USelectMaterial_C_EventOnEndSelectedMaterial_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.Event On Abort Selected Material
	 */
	struct USelectMaterial_C_EventOnAbortSelectedMaterial_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature
	 */
	struct USelectMaterial_C_BndEvt__SelectMaterial_StorageSort_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1
	 */
	struct USelectMaterial_C_WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.ExecuteUbergraph_SelectMaterial
	 */
	struct USelectMaterial_C_ExecuteUbergraph_SelectMaterial_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZJE2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.OnSelected__DelegateSignature
	 */
	struct USelectMaterial_C_OnSelected__DelegateSignature_Params
	{
	public:
		TArray<struct FOwnItemInfo>                                Uids;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       UseTicket;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R345[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBStackBUseTicket                                  StackBTicket;                                            // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function SelectMaterial.SelectMaterial_C.OnClose__DelegateSignature
	 */
	struct USelectMaterial_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
