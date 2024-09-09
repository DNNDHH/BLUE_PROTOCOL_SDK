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
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Refresh
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_Refresh_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.GetAbilityDescToolTipWidget
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_GetAbilityDescToolTipWidget_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetSwitcher
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_SetSwitcher_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Set Level And Exp
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_SetLevelAndExp_Params
	{
	public:
		struct FSBMasterImagine                                    MasterData;                                              // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    Exp;                                                     // 0x00B8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetImagineParam
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_SetImagineParam_Params
	{
	public:
		struct FImagineParameter                                   ImagineParam;                                            // 0x0000(0x006C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_0EIE[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_OnLoaded_A6DAA6C845C948C7E7A97C9A7D207C26_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.RequestLoad
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_RequestLoad_Params
	{
	public:
		int32_t                                                    ImagineId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.UpdateButton
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_UpdateButton_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_BndEvt__BtnLock_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_BndEvt__BtnTrash_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_BndEvt__BtnLock2_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_BndEvt__BtnTrash2_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_BndEvt__BtnTakeOut_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_BndEvt__BtnSale_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SelectKiraSwitcher
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_SelectKiraSwitcher_Params
	{
	public:
		struct FSBMasterImagine                                    MasterImagine;                                           // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.SetItemData
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_SetItemData_Params
	{
	public:
		struct FInventoryData                                      InventoryItemData;                                       // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       bStorageMode;                                            // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBagStorageViewMode;                                     // 0x0099(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__Button_illustImagine_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_BndEvt__Button_illustImagine_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__Button_illustImagine_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_BndEvt__Button_illustImagine_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__Button_illustImagine_S_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_BndEvt__Button_illustImagine_S_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.BndEvt__WBP_InventoryPassiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_BndEvt__WBP_InventoryPassiveImagineDescription_SBButton_AbilityInfo_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.Destruct
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_Destruct_Params
	{	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.ExecuteUbergraph_WBP_InventoryPassiveImagineDescription
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_ExecuteUbergraph_WBP_InventoryPassiveImagineDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryPassiveImagineDescription.WBP_InventoryPassiveImagineDescription_C.OnButtonClicked__DelegateSignature
	 */
	struct UWBP_InventoryPassiveImagineDescription_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		EDescripionButtonType                                      ButtonType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
