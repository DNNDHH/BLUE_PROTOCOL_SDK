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
	 * Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.SetScrollVisible
	 */
	struct UWBP_InventoryStorageRowListItemWrap_C_SetScrollVisible_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Destruct
	 */
	struct UWBP_InventoryStorageRowListItemWrap_C_Destruct_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.InitializeItemData
	 */
	struct UWBP_InventoryStorageRowListItemWrap_C_InitializeItemData_Params
	{
	public:
		int32_t                                                    InItemIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StorageAmount;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInventoryData                                      InventoryData;                                           // 0x0008(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CreateAndInitialize
	 */
	struct UWBP_InventoryStorageRowListItemWrap_C_CreateAndInitialize_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CustomEvent_1
	 */
	struct UWBP_InventoryStorageRowListItemWrap_C_CustomEvent_1_Params
	{
	public:
		struct FInventoryData                                      ItemData;                                                // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_InventoryStorageRowListItem_C*                  UpdetaListItem;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.CustomEvent_2
	 */
	struct UWBP_InventoryStorageRowListItemWrap_C_CustomEvent_2_Params
	{
	public:
		struct FInventoryData                                      ItemData;                                                // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_InventoryStorageRowListItem_C*                  UpdetaListItem;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Initialize
	 */
	struct UWBP_InventoryStorageRowListItemWrap_C_Initialize_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Set Icon Selected
	 */
	struct UWBP_InventoryStorageRowListItemWrap_C_SetIconSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.Construct
	 */
	struct UWBP_InventoryStorageRowListItemWrap_C_Construct_Params
	{	};

	/**
	 * Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap
	 */
	struct UWBP_InventoryStorageRowListItemWrap_C_ExecuteUbergraph_WBP_InventoryStorageRowListItemWrap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1EMB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.OnItemClickRight__DelegateSignature
	 */
	struct UWBP_InventoryStorageRowListItemWrap_C_OnItemClickRight__DelegateSignature_Params
	{
	public:
		struct FInventoryData                                      ItemData;                                                // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_InventoryStorageRowListItem_C*                  UpdetaListItem;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_InventoryStorageRowListItemWrap.WBP_InventoryStorageRowListItemWrap_C.OnItemClick__DelegateSignature
	 */
	struct UWBP_InventoryStorageRowListItemWrap_C_OnItemClick__DelegateSignature_Params
	{
	public:
		struct FInventoryData                                      ItemData;                                                // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_InventoryStorageRowListItem_C*                  UpdetaListItem;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
