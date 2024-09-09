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
	 * Function WeaponList.WeaponList_C.Set Stack BIconby Own Item Info
	 */
	struct UWeaponList_C_SetStackBIconbyOwnItemInfo_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemInfo;                                           // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponList.WeaponList_C.WeaponList_AutoGenFunc
	 */
	struct UWeaponList_C_WeaponList_AutoGenFunc_Params
	{	};

	/**
	 * Function WeaponList.WeaponList_C.ReloadWeaponAsset
	 */
	struct UWeaponList_C_ReloadWeaponAsset_Params
	{
	public:
		int32_t                                                    WeaponItemId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponList.WeaponList_C.SetData
	 */
	struct UWeaponList_C_SetData_Params
	{
	public:
		struct FOwnItemInfo                                        InOwnItemIfno;                                           // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       InToolTipsEnable;                                        // 0x0150(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponList.WeaponList_C.Construct
	 */
	struct UWeaponList_C_Construct_Params
	{	};

	/**
	 * Function WeaponList.WeaponList_C.OnMouseEnter
	 */
	struct UWeaponList_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponList.WeaponList_C.OnMouseLeave
	 */
	struct UWeaponList_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponList.WeaponList_C.ExecuteUbergraph_WeaponList
	 */
	struct UWeaponList_C_ExecuteUbergraph_WeaponList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
