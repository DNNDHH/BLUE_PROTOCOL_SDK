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
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.Refresh
	 */
	struct UWBP_InventoryActiveImagineDescription_C_Refresh_Params
	{	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.GetAbilityDescToolTipWidget
	 */
	struct UWBP_InventoryActiveImagineDescription_C_GetAbilityDescToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetSwitcher
	 */
	struct UWBP_InventoryActiveImagineDescription_C_SetSwitcher_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.Set Perk Data
	 */
	struct UWBP_InventoryActiveImagineDescription_C_SetPerkData_Params
	{	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetLeveldata
	 */
	struct UWBP_InventoryActiveImagineDescription_C_SetLeveldata_Params
	{
	public:
		struct FSBMasterImagine                                    MasterData;                                              // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetImagineParam
	 */
	struct UWBP_InventoryActiveImagineDescription_C_SetImagineParam_Params
	{
	public:
		class FString                                              InUniqueId;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.SetItemData
	 */
	struct UWBP_InventoryActiveImagineDescription_C_SetItemData_Params
	{
	public:
		struct FInventoryData                                      InventoryItemData;                                       // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       bStorageMode;                                            // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBagStorageViewMode;                                     // 0x0099(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.UpdateButton
	 */
	struct UWBP_InventoryActiveImagineDescription_C_UpdateButton_Params
	{	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryActiveImagineDescription_C_BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryActiveImagineDescription_C_BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryActiveImagineDescription_C_BndEvt__BtnLock2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryActiveImagineDescription_C_BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryActiveImagineDescription_C_BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__BtnSale_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryActiveImagineDescription_C_BndEvt__BtnSale_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.BndEvt__WBP_InventoryActiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InventoryActiveImagineDescription_C_BndEvt__WBP_InventoryActiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.Destruct
	 */
	struct UWBP_InventoryActiveImagineDescription_C_Destruct_Params
	{	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.ExecuteUbergraph_WBP_InventoryActiveImagineDescription
	 */
	struct UWBP_InventoryActiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryActiveImagineDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryActiveImagineDescription.WBP_InventoryActiveImagineDescription_C.OnButtonClicked__DelegateSignature
	 */
	struct UWBP_InventoryActiveImagineDescription_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		EDescripionButtonType                                      Event;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
