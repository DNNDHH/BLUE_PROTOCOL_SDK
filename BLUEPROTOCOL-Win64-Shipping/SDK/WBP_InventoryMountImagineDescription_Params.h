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
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.Refresh
	 */
	struct UWBP_InventoryMountImagineDescription_C_Refresh_Params
	{	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.SetSwitcher
	 */
	struct UWBP_InventoryMountImagineDescription_C_SetSwitcher_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.SetModelCaptureImageVisibility
	 */
	struct UWBP_InventoryMountImagineDescription_C_SetModelCaptureImageVisibility_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.RefleshButtonAction
	 */
	struct UWBP_InventoryMountImagineDescription_C_RefleshButtonAction_Params
	{	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.IsEquip
	 */
	struct UWBP_InventoryMountImagineDescription_C_IsEquip_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EquipFlag;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.SetItem
	 */
	struct UWBP_InventoryMountImagineDescription_C_SetItem_Params
	{
	public:
		struct FInventoryData                                      InventoryItemData;                                       // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       bStorageMode;                                            // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBagStorageViewMode;                                     // 0x0099(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L43E[0x2];                                   // 0x009A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryMountImagineDescription_C_BndEvt__BtnEquip_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryMountImagineDescription_C_BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryMountImagineDescription_C_BndEvt__BtnLock_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryMountImagineDescription_C_BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryMountImagineDescription_C_BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryMountImagineDescription_C_BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryMountImagineDescription_C_BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.ExecuteUbergraph_WBP_InventoryMountImagineDescription
	 */
	struct UWBP_InventoryMountImagineDescription_C_ExecuteUbergraph_WBP_InventoryMountImagineDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryMountImagineDescription.WBP_InventoryMountImagineDescription_C.OnButtonClicked__DelegateSignature
	 */
	struct UWBP_InventoryMountImagineDescription_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		EDescripionButtonType                                      ButtonType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
