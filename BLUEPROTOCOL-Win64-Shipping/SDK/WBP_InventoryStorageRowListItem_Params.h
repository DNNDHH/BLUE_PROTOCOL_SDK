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
	 * Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.OnPreviewMouseButtonDown
	 */
	struct UWBP_InventoryStorageRowListItem_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.SetIconSelected
	 */
	struct UWBP_InventoryStorageRowListItem_C_SetIconSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1YV9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.SetLockIconVisibility
	 */
	struct UWBP_InventoryStorageRowListItem_C_SetLockIconVisibility_Params
	{
	public:
		bool                                                       IsVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.InitializeItemData
	 */
	struct UWBP_InventoryStorageRowListItem_C_InitializeItemData_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StorageAmount;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInventoryData                                      InventoryData;                                           // 0x0008(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_InventoryStorageRowListItem_C_BndEvt__SBButton_ItemName_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.UpdetaLockIcon
	 */
	struct UWBP_InventoryStorageRowListItem_C_UpdetaLockIcon_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.Construct
	 */
	struct UWBP_InventoryStorageRowListItem_C_Construct_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.ExecuteUbergraph_WBP_InventoryStorageRowListItem
	 */
	struct UWBP_InventoryStorageRowListItem_C_ExecuteUbergraph_WBP_InventoryStorageRowListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.OnItemClickRight__DelegateSignature
	 */
	struct UWBP_InventoryStorageRowListItem_C_OnItemClickRight__DelegateSignature_Params
	{
	public:
		struct FInventoryData                                      ItemData;                                                // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_InventoryStorageRowListItem_C*                  UpdetaListItem;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListItem.WBP_InventoryStorageRowListItem_C.OnItemClick__DelegateSignature
	 */
	struct UWBP_InventoryStorageRowListItem_C_OnItemClick__DelegateSignature_Params
	{
	public:
		struct FInventoryData                                      ItemData;                                                // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_InventoryStorageRowListItem_C*                  UpdetaListItem;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
