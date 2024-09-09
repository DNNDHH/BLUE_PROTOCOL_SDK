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
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.Refresh
	 */
	struct UWBP_InventoryItemDescription_C_Refresh_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.UpdateIcon
	 */
	struct UWBP_InventoryItemDescription_C_UpdateIcon_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.SetIsIntervalTimeVisible
	 */
	struct UWBP_InventoryItemDescription_C_SetIsIntervalTimeVisible_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.IsCanUse_ItemBox
	 */
	struct UWBP_InventoryItemDescription_C_IsCanUse_ItemBox_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0W5Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.SetSwitcher
	 */
	struct UWBP_InventoryItemDescription_C_SetSwitcher_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.CheckUseItemFlag
	 */
	struct UWBP_InventoryItemDescription_C_CheckUseItemFlag_Params
	{
	public:
		bool                                                       NoUse;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5AC2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.Set Register Mode
	 */
	struct UWBP_InventoryItemDescription_C_SetRegisterMode_Params
	{
	public:
		bool                                                       bIsRegiserMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.SetItem
	 */
	struct UWBP_InventoryItemDescription_C_SetItem_Params
	{
	public:
		struct FInventoryData                                      InventoryItemData;                                       // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       bStorageMode;                                            // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NI99[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.BndEvt__BtnUse_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryItemDescription_C_BndEvt__BtnUse_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryItemDescription_C_BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryItemDescription_C_BndEvt__BtnLock_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.RefleshButton
	 */
	struct UWBP_InventoryItemDescription_C_RefleshButton_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.Tick
	 */
	struct UWBP_InventoryItemDescription_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryItemDescription_C_BndEvt__BtnLock2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryItemDescription_C_BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.BndEvt__BtnSale1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryItemDescription_C_BndEvt__BtnSale1_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.UpdetaRecastTime
	 */
	struct UWBP_InventoryItemDescription_C_UpdetaRecastTime_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.BndEvt__BtnUse2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryItemDescription_C_BndEvt__BtnUse2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.BndEvt__WBP_InventoryItemDescription_BtnTakeOut_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryItemDescription_C_BndEvt__WBP_InventoryItemDescription_BtnTakeOut_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.BndEvt__WBP_InventoryItemDescription_BtnUse2_1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryItemDescription_C_BndEvt__WBP_InventoryItemDescription_BtnUse2_1_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.ExecuteUbergraph_WBP_InventoryItemDescription
	 */
	struct UWBP_InventoryItemDescription_C_ExecuteUbergraph_WBP_InventoryItemDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryItemDescription.WBP_InventoryItemDescription_C.OnButtonClicked__DelegateSignature
	 */
	struct UWBP_InventoryItemDescription_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		EDescripionButtonType                                      ButtonType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
