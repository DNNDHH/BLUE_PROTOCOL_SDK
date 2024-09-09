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
	 * Function WeaponAssetView.WeaponAssetView_C.SetupMasterData
	 */
	struct UWeaponAssetView_C_SetupMasterData_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponAssetView.WeaponAssetView_C.SetBaseInfo
	 */
	struct UWeaponAssetView_C_SetBaseInfo_Params
	{
	public:
		struct FOwnItemInfo                                        BaseInfo;                                                // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponAssetView.WeaponAssetView_C.UpdateDiffValue
	 */
	struct UWeaponAssetView_C_UpdateDiffValue_Params
	{	};

	/**
	 * Function WeaponAssetView.WeaponAssetView_C.SetBG
	 */
	struct UWeaponAssetView_C_SetBG_Params
	{	};

	/**
	 * Function WeaponAssetView.WeaponAssetView_C.SetUpName
	 */
	struct UWeaponAssetView_C_SetUpName_Params
	{	};

	/**
	 * Function WeaponAssetView.WeaponAssetView_C.SetDiffVisibility
	 */
	struct UWeaponAssetView_C_SetDiffVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WeaponAssetView.WeaponAssetView_C.SetupParameterWeapon
	 */
	struct UWeaponAssetView_C_SetupParameterWeapon_Params
	{
	public:
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0000(0x0150)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function WeaponAssetView.WeaponAssetView_C.SetInfo
	 */
	struct UWeaponAssetView_C_SetInfo_Params
	{
	public:
		struct FOwnItemInfo                                        Info;                                                    // 0x0000(0x0150)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function WeaponAssetView.WeaponAssetView_C.Request_Image
	 */
	struct UWeaponAssetView_C_Request_Image_Params
	{	};

	/**
	 * Function WeaponAssetView.WeaponAssetView_C.ExecuteUbergraph_WeaponAssetView
	 */
	struct UWeaponAssetView_C_ExecuteUbergraph_WeaponAssetView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
