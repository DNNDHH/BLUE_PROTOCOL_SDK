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
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.MaxScrollOffset
	 */
	struct UWBP_StorageRowListOwner_C_MaxScrollOffset_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FEKJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SelectsItems
	 */
	struct UWBP_StorageRowListOwner_C_SelectsItems_Params
	{
	public:
		class UWBP_StorageRowListItem_C*                           InputPin;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAdd;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SwitchMultipleSelection
	 */
	struct UWBP_StorageRowListOwner_C_SwitchMultipleSelection_Params
	{
	public:
		bool                                                       bAdd;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CreateLists
	 */
	struct UWBP_StorageRowListOwner_C_CreateLists_Params
	{	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.RemoveSelectListItems
	 */
	struct UWBP_StorageRowListOwner_C_RemoveSelectListItems_Params
	{	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.SetScrollBoxSizeX
	 */
	struct UWBP_StorageRowListOwner_C_SetScrollBoxSizeX_Params
	{
	public:
		float                                                      SizeX;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EJAQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.StorageItemGet
	 */
	struct UWBP_StorageRowListOwner_C_StorageItemGet_Params
	{
	public:
		ESBItemSortType                                            SortType;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemFilterType                                            InFilter;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GKTD[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFilterGroup>                                FilterArray;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.AddStorageListItem
	 */
	struct UWBP_StorageRowListOwner_C_AddStorageListItem_Params
	{
	public:
		float                                                      CreateDelay;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ResettingStorageListItem
	 */
	struct UWBP_StorageRowListOwner_C_ResettingStorageListItem_Params
	{	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.UpdetaItemList
	 */
	struct UWBP_StorageRowListOwner_C_UpdetaItemList_Params
	{
	public:
		ESBItemSortType                                            SortType2;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemFilterType                                            FilterType;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LCV0[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFilterGroup>                                FilterArray;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ScrollReset;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CustomEvent_1
	 */
	struct UWBP_StorageRowListOwner_C_CustomEvent_1_Params
	{
	public:
		struct FInventoryData                                      ItemData;                                                // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_StorageRowListItem_C*                           UpdetaListItem;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.LockIconUpdate
	 */
	struct UWBP_StorageRowListOwner_C_LockIconUpdate_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bLock;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.IconAllSelectfalse
	 */
	struct UWBP_StorageRowListOwner_C_IconAllSelectfalse_Params
	{	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.CustomEvent_2
	 */
	struct UWBP_StorageRowListOwner_C_CustomEvent_2_Params
	{
	public:
		struct FInventoryData                                      ItemData;                                                // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UWBP_StorageRowListItem_C*                           UpdetaListItem;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.MultiStart
	 */
	struct UWBP_StorageRowListOwner_C_MultiStart_Params
	{	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.Reset
	 */
	struct UWBP_StorageRowListOwner_C_Reset_Params
	{	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.AddOptionFilter
	 */
	struct UWBP_StorageRowListOwner_C_AddOptionFilter_Params
	{	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.PreConstruct
	 */
	struct UWBP_StorageRowListOwner_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
	 */
	struct UWBP_StorageRowListOwner_C_BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ScrollVisibleUpdate
	 */
	struct UWBP_StorageRowListOwner_C_ScrollVisibleUpdate_Params
	{
	public:
		float                                                      Offset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.ExecuteUbergraph_WBP_StorageRowListOwner
	 */
	struct UWBP_StorageRowListOwner_C_ExecuteUbergraph_WBP_StorageRowListOwner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.OnItemClickRight__DelegateSignature
	 */
	struct UWBP_StorageRowListOwner_C_OnItemClickRight__DelegateSignature_Params
	{
	public:
		struct FInventoryData                                      NewParam;                                                // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_StorageRowListOwner.WBP_StorageRowListOwner_C.OnItemClick__DelegateSignature
	 */
	struct UWBP_StorageRowListOwner_C_OnItemClick__DelegateSignature_Params
	{
	public:
		struct FInventoryData                                      OnItemClick;                                             // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
