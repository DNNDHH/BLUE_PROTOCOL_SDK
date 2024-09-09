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
	 * Function BP_WeaponForCapture.BP_WeaponForCapture_C.UserConstructionScript
	 */
	struct ABP_WeaponForCapture_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_WeaponForCapture.BP_WeaponForCapture_C.SetWeaponMesh
	 */
	struct ABP_WeaponForCapture_C_SetWeaponMesh_Params
	{
	public:
		class ASBWeapon*                                           InWeapon;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            InRotation;                                              // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_WeaponForCapture.BP_WeaponForCapture_C.ExecuteUbergraph_BP_WeaponForCapture
	 */
	struct ABP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SZA4[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
