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
	 * Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.SetColorTxt
	 */
	struct UEquipStatusImaginePowers_C_SetColorTxt_Params
	{
	public:
		class USBRuntimeTextBlock*                                 txt;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PrevParam;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    afterParam;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.Set ItemInfo
	 */
	struct UEquipStatusImaginePowers_C_SetItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.Set PrevInfo
	 */
	struct UEquipStatusImaginePowers_C_SetPrevInfo_Params
	{
	public:
		struct FOwnItemInfo                                        Prev;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.ExecuteUbergraph_EquipStatusImaginePowers
	 */
	struct UEquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
