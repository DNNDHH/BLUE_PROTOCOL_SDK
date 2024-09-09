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
	 * Function WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C.SetIsIntervalTimeVisible
	 */
	struct UWBP_InventoryItemBagStorageDescription_C_SetIsIntervalTimeVisible_Params
	{
	public:
		bool                                                       InIsVisible;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C.CheckUseItemFlag
	 */
	struct UWBP_InventoryItemBagStorageDescription_C_CheckUseItemFlag_Params
	{
	public:
		bool                                                       NoUse;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9TDF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C.SetItem
	 */
	struct UWBP_InventoryItemBagStorageDescription_C_SetItem_Params
	{
	public:
		struct FInventoryData                                      InventoryItemData;                                       // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryItemBagStorageDescription.WBP_InventoryItemBagStorageDescription_C.OnButtonClicked__DelegateSignature
	 */
	struct UWBP_InventoryItemBagStorageDescription_C_OnButtonClicked__DelegateSignature_Params
	{
	public:
		EDescripionButtonType                                      ButtonType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
