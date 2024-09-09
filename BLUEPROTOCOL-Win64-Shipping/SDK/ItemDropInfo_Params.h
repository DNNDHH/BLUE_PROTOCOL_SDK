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
	 * Function ItemDropInfo.ItemDropInfo_C.GetToolTipWidget_1
	 */
	struct UItemDropInfo_C_GetToolTipWidget_1_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemDropInfo.ItemDropInfo_C.GetTexts
	 */
	struct UItemDropInfo_C_GetTexts_Params
	{
	public:
		struct FItemMasterData                                     ItemMasterData;                                          // 0x0000(0x00D0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FText                                                Detail1;                                                 // 0x00D0(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ItemDropInfo.ItemDropInfo_C.Construct
	 */
	struct UItemDropInfo_C_Construct_Params
	{	};

	/**
	 * Function ItemDropInfo.ItemDropInfo_C.Set ItemId
	 */
	struct UItemDropInfo_C_SetItemId_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemDropInfo.ItemDropInfo_C.Destruct
	 */
	struct UItemDropInfo_C_Destruct_Params
	{	};

	/**
	 * Function ItemDropInfo.ItemDropInfo_C.SetTokenId
	 */
	struct UItemDropInfo_C_SetTokenId_Params
	{
	public:
		int32_t                                                    TokenID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ItemDropInfo.ItemDropInfo_C.ExecuteUbergraph_ItemDropInfo
	 */
	struct UItemDropInfo_C_ExecuteUbergraph_ItemDropInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
