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
	 * Function WBP_T_ApartItem.WBP_T_ApartItem_C.Reset
	 */
	struct UWBP_T_ApartItem_C_Reset_Params
	{	};

	/**
	 * Function WBP_T_ApartItem.WBP_T_ApartItem_C.isOver
	 */
	struct UWBP_T_ApartItem_C_isOver_Params
	{
	public:
		bool                                                       Over;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_T_ApartItem.WBP_T_ApartItem_C.Update
	 */
	struct UWBP_T_ApartItem_C_Update_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartItem.WBP_T_ApartItem_C.Init
	 */
	struct UWBP_T_ApartItem_C_Init_Params
	{	};

	/**
	 * Function WBP_T_ApartItem.WBP_T_ApartItem_C.Settings
	 */
	struct UWBP_T_ApartItem_C_Settings_Params
	{
	public:
		int32_t                                                    ItemId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemType                                                  InItemType;                                              // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OE93[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       New;                                                     // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_T_ApartItem.WBP_T_ApartItem_C.ExecuteUbergraph_WBP_T_ApartItem
	 */
	struct UWBP_T_ApartItem_C_ExecuteUbergraph_WBP_T_ApartItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
