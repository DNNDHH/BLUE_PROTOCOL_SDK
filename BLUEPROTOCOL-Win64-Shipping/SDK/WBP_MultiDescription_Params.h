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
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.GetSelectItemList
	 */
	struct UWBP_MultiDescription_C_GetSelectItemList_Params
	{
	public:
		TArray<struct FInventoryItemData>                          SelectItemData;                                          // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.Remove Select Item
	 */
	struct UWBP_MultiDescription_C_RemoveSelectItem_Params
	{
	public:
		struct FInventoryItemData                                  item;                                                    // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.IsSaleItem
	 */
	struct UWBP_MultiDescription_C_IsSaleItem_Params
	{
	public:
		struct FInventoryItemData                                  InventoryItemData;                                       // 0x0000(0x0060)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       IsSaleItem;                                              // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6CQ6[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateButton
	 */
	struct UWBP_MultiDescription_C_UpdateButton_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.Get Total Item Num
	 */
	struct UWBP_MultiDescription_C_GetTotalItemNum_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.SetInventoryStorageList
	 */
	struct UWBP_MultiDescription_C_SetInventoryStorageList_Params
	{
	public:
		class UWBP_StorageRowListOwner_C*                          InventoryStorageList;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.SetSalesItemList
	 */
	struct UWBP_MultiDescription_C_SetSalesItemList_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.AllRemoveSalesItems
	 */
	struct UWBP_MultiDescription_C_AllRemoveSalesItems_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.SetSelectItems
	 */
	struct UWBP_MultiDescription_C_SetSelectItems_Params
	{
	public:
		class UItemIconBtn_C*                                      InputPin;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EStorageMultipleSalesWindowType                            NewParam;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GQ7X[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.Construct
	 */
	struct UWBP_MultiDescription_C_Construct_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateSalesItems
	 */
	struct UWBP_MultiDescription_C_UpdateSalesItems_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.AddList
	 */
	struct UWBP_MultiDescription_C_AddList_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.AlignRequiredNum
	 */
	struct UWBP_MultiDescription_C_AlignRequiredNum_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.SettingList
	 */
	struct UWBP_MultiDescription_C_SettingList_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.BndEvt__BtnSale1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UWBP_MultiDescription_C_BndEvt__BtnSale1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.BndEvt__BtnMoveBag_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UWBP_MultiDescription_C_BndEvt__BtnMoveBag_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.BndEvt__BtnTrash_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UWBP_MultiDescription_C_BndEvt__BtnTrash_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.UpdatePrice
	 */
	struct UWBP_MultiDescription_C_UpdatePrice_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.CustomEvent_1
	 */
	struct UWBP_MultiDescription_C_CustomEvent_1_Params
	{
	public:
		struct FInventoryItemData                                  NewParam;                                                // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.UpdateSelectNum
	 */
	struct UWBP_MultiDescription_C_UpdateSelectNum_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.TriInAnimationPlay
	 */
	struct UWBP_MultiDescription_C_TriInAnimationPlay_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.ExecuteUbergraph_WBP_MultiDescription
	 */
	struct UWBP_MultiDescription_C_ExecuteUbergraph_WBP_MultiDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.Close__DelegateSignature
	 */
	struct UWBP_MultiDescription_C_Close__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.OnClick__DelegateSignature
	 */
	struct UWBP_MultiDescription_C_OnClick__DelegateSignature_Params
	{
	public:
		struct FInventoryItemData                                  InventoryData;                                           // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleTrash__DelegateSignature
	 */
	struct UWBP_MultiDescription_C_MultipleTrash__DelegateSignature_Params
	{
	public:
		TArray<struct FInventoryItemData>                          InSelectItemList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleMoveBag__DelegateSignature
	 */
	struct UWBP_MultiDescription_C_MultipleMoveBag__DelegateSignature_Params
	{
	public:
		TArray<struct FInventoryItemData>                          InSelectItemList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleMoveStorage__DelegateSignature
	 */
	struct UWBP_MultiDescription_C_MultipleMoveStorage__DelegateSignature_Params
	{
	public:
		TArray<struct FInventoryItemData>                          InSelectItemList;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_MultiDescription.WBP_MultiDescription_C.MultipleSales__DelegateSignature
	 */
	struct UWBP_MultiDescription_C_MultipleSales__DelegateSignature_Params
	{
	public:
		int32_t                                                    InTotalPrice;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ITVZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FInventoryItemData>                          InSelectItemList;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
