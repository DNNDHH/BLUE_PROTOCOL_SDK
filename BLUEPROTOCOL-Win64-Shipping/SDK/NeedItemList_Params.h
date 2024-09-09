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
	 * Function NeedItemList.NeedItemList_C.SetBgSize
	 */
	struct UNeedItemList_C_SetBgSize_Params
	{
	public:
		struct FVector2D                                           SizeXY;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NeedItemList.NeedItemList_C.AddDry
	 */
	struct UNeedItemList_C_AddDry_Params
	{
	public:
		int32_t                                                    DryItemCnt;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NeedItemList.NeedItemList_C.Add
	 */
	struct UNeedItemList_C_Add_Params
	{
	public:
		struct FCraftNeedItems                                     InCraftNeedItems;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       OutIsCraftable;                                          // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1EIM[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function NeedItemList.NeedItemList_C.Clear
	 */
	struct UNeedItemList_C_Clear_Params
	{	};

	/**
	 * Function NeedItemList.NeedItemList_C.PreConstruct
	 */
	struct UNeedItemList_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NeedItemList.NeedItemList_C.ExecuteUbergraph_NeedItemList
	 */
	struct UNeedItemList_C_ExecuteUbergraph_NeedItemList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
