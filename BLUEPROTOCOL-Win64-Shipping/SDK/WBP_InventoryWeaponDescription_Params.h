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
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.Refresh
	 */
	struct UWBP_InventoryWeaponDescription_C_Refresh_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetOperationRotateBtnVisibility
	 */
	struct UWBP_InventoryWeaponDescription_C_SetOperationRotateBtnVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetWeaponStickerInUseButtonIsEnabled
	 */
	struct UWBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsEnabled_Params
	{
	public:
		bool                                                       InIsEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetWeaponStickerInUseButtonIsInUse
	 */
	struct UWBP_InventoryWeaponDescription_C_SetWeaponStickerInUseButtonIsInUse_Params
	{
	public:
		bool                                                       InIsInUse;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbilityDescToolTipWidget
	 */
	struct UWBP_InventoryWeaponDescription_C_GetAbilityDescToolTipWidget_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_199B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCommonToolTip_AbilityPerk_C*                        AbilityDescToolTip;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility4DescToolTipWidget
	 */
	struct UWBP_InventoryWeaponDescription_C_GetAbility4DescToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility3DescToolTipWidget
	 */
	struct UWBP_InventoryWeaponDescription_C_GetAbility3DescToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility2DescToolTipWidget
	 */
	struct UWBP_InventoryWeaponDescription_C_GetAbility2DescToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.GetAbility1DescToolTipWidget
	 */
	struct UWBP_InventoryWeaponDescription_C_GetAbility1DescToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetSwitcher
	 */
	struct UWBP_InventoryWeaponDescription_C_SetSwitcher_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.IsNowJob
	 */
	struct UWBP_InventoryWeaponDescription_C_IsNowJob_Params
	{
	public:
		bool                                                       IsEquipable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.InitBtn
	 */
	struct UWBP_InventoryWeaponDescription_C_InitBtn_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.RefleshButton
	 */
	struct UWBP_InventoryWeaponDescription_C_RefleshButton_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.SetItem
	 */
	struct UWBP_InventoryWeaponDescription_C_SetItem_Params
	{
	public:
		struct FInventoryData                                      InventoryItemData;                                       // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       bStorageMode;                                            // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBagStorageViewMode;                                     // 0x0099(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F07I[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryWeaponDescription_C_BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryWeaponDescription_C_BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnDemolition_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryWeaponDescription_C_BndEvt__BtnDemolition_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryWeaponDescription_C_BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryWeaponDescription_C_BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryWeaponDescription_C_BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryWeaponDescription_C_BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__BtnTrash2_1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryWeaponDescription_C_BndEvt__BtnTrash2_1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.Construct
	 */
	struct UWBP_InventoryWeaponDescription_C_Construct_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.BndEvt__WBP_InventoryWeaponDescription_SBButton_AbilityDetail_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InventoryWeaponDescription_C_BndEvt__WBP_InventoryWeaponDescription_SBButton_AbilityDetail_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnBtnWeaponStickerRemoveButtonClicked
	 */
	struct UWBP_InventoryWeaponDescription_C_OnBtnWeaponStickerRemoveButtonClicked_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.Destruct
	 */
	struct UWBP_InventoryWeaponDescription_C_Destruct_Params
	{	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.ExecuteUbergraph_WBP_InventoryWeaponDescription
	 */
	struct UWBP_InventoryWeaponDescription_C_ExecuteUbergraph_WBP_InventoryWeaponDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnWeaponStickerInUseButtonPressed__DelegateSignature
	 */
	struct UWBP_InventoryWeaponDescription_C_OnWeaponStickerInUseButtonPressed__DelegateSignature_Params
	{
	public:
		bool                                                       InIsInUse;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnWeaponStickerButtonPressed__DelegateSignature
	 */
	struct UWBP_InventoryWeaponDescription_C_OnWeaponStickerButtonPressed__DelegateSignature_Params
	{
	public:
		class FString                                              InWeaponUniqueId;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBWeaponItemData                                   InWeaponItemData;                                        // 0x0010(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_InventoryWeaponDescription.WBP_InventoryWeaponDescription_C.OnButtonClicked__DelegateSignature
	 */
	struct UWBP_InventoryWeaponDescription_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		EDescripionButtonType                                      ButtonType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
