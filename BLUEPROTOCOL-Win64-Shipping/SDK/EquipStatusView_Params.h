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
	 * Function EquipStatusView.EquipStatusView_C.SetPrevDataImagine
	 */
	struct UEquipStatusView_C_SetPrevDataImagine_Params
	{
	public:
		struct FOwnItemInfo                                        PrevInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EquipStatusView.EquipStatusView_C.SetPrevData
	 */
	struct UEquipStatusView_C_SetPrevData_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EquipStatusView.EquipStatusView_C.SetWeapon
	 */
	struct UEquipStatusView_C_SetWeapon_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function EquipStatusView.EquipStatusView_C.SetImagine
	 */
	struct UEquipStatusView_C_SetImagine_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EquipStatusView.EquipStatusView_C.SetValue
	 */
	struct UEquipStatusView_C_SetValue_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function EquipStatusView.EquipStatusView_C.Construct
	 */
	struct UEquipStatusView_C_Construct_Params
	{	};

	/**
	 * Function EquipStatusView.EquipStatusView_C.ExecuteUbergraph_EquipStatusView
	 */
	struct UEquipStatusView_C_ExecuteUbergraph_EquipStatusView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
