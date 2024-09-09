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
	 * Function CraftResultItem.CraftResultItem_C.PlayAnimIn
	 */
	struct UCraftResultItem_C_PlayAnimIn_Params
	{	};

	/**
	 * Function CraftResultItem.CraftResultItem_C.Update SlackView
	 */
	struct UCraftResultItem_C_UpdateSlackView_Params
	{
	public:
		int32_t                                                    StorageNo;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftResultItem.CraftResultItem_C.Update Storage Slack Num
	 */
	struct UCraftResultItem_C_UpdateStorageSlackNum_Params
	{	};

	/**
	 * Function CraftResultItem.CraftResultItem_C.UpdateBonusCraftNum
	 */
	struct UCraftResultItem_C_UpdateBonusCraftNum_Params
	{
	public:
		int32_t                                                    CraftCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MUYR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CraftResultItem.CraftResultItem_C.UpdateCriticalColor
	 */
	struct UCraftResultItem_C_UpdateCriticalColor_Params
	{	};

	/**
	 * Function CraftResultItem.CraftResultItem_C.Construct
	 */
	struct UCraftResultItem_C_Construct_Params
	{	};

	/**
	 * Function CraftResultItem.CraftResultItem_C.SetRecepi
	 */
	struct UCraftResultItem_C_SetRecepi_Params
	{
	public:
		struct FCharacterCraftRecepi                               Recepi;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function CraftResultItem.CraftResultItem_C.SetCraftedItemData
	 */
	struct UCraftResultItem_C_SetCraftedItemData_Params
	{
	public:
		bool                                                       IsCritical;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CE3O[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    totalCount;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StorageType;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaleNum;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaleProfits;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftResultItem.CraftResultItem_C.SetCriticalCraftData
	 */
	struct UCraftResultItem_C_SetCriticalCraftData_Params
	{
	public:
		TArray<class FString>                                      Uids;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    CriticalNum;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalNum;                                                // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CraftCount;                                              // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StorageNum;                                              // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaleNum;                                                 // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SaleProfits;                                             // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CraftResultItem.CraftResultItem_C.SetFailVisible
	 */
	struct UCraftResultItem_C_SetFailVisible_Params
	{
	public:
		bool                                                       Flag;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftResultItem.CraftResultItem_C.ExecuteUbergraph_CraftResultItem
	 */
	struct UCraftResultItem_C_ExecuteUbergraph_CraftResultItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
