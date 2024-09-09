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
	 * Function WeaponDescription.WeaponDescription_C.UpdateMaxParam
	 */
	struct UWeaponDescription_C_UpdateMaxParam_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDescription.WeaponDescription_C.UpdateWeaponParam
	 */
	struct UWeaponDescription_C_UpdateWeaponParam_Params
	{
	public:
		int32_t                                                    NewParam;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDescription.WeaponDescription_C.CollectWeaponParams
	 */
	struct UWeaponDescription_C_CollectWeaponParams_Params
	{	};

	/**
	 * Function WeaponDescription.WeaponDescription_C.Construct
	 */
	struct UWeaponDescription_C_Construct_Params
	{	};

	/**
	 * Function WeaponDescription.WeaponDescription_C.Set WeaponData
	 */
	struct UWeaponDescription_C_SetWeaponData_Params
	{
	public:
		struct FSBWeaponMasterData                                 WeaponMasterData;                                        // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    MinLevel;                                                // 0x00C8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxLevel;                                                // 0x00CC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeaponDescription.WeaponDescription_C.ExecuteUbergraph_WeaponDescription
	 */
	struct UWeaponDescription_C_ExecuteUbergraph_WeaponDescription_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VWJX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
