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
	 * Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.SetStackBToolTipStatus
	 */
	struct UCraftResultWeaponSingle_C_SetStackBToolTipStatus_Params
	{
	public:
		bool                                                       bIsIconOff;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.PlayAnimIn
	 */
	struct UCraftResultWeaponSingle_C_PlayAnimIn_Params
	{	};

	/**
	 * Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.UpdatePerkDisp
	 */
	struct UCraftResultWeaponSingle_C_UpdatePerkDisp_Params
	{
	public:
		class USBOwnItemListContainer*                             Storage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCritical;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KE1D[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.UpdateStorageDisp
	 */
	struct UCraftResultWeaponSingle_C_UpdateStorageDisp_Params
	{
	public:
		bool                                                       IsStorage;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.SetUID
	 */
	struct UCraftResultWeaponSingle_C_SetUID_Params
	{
	public:
		class FString                                              UID;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    StorageNo;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCritical;                                              // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.ExecuteUbergraph_CraftResultWeaponSingle
	 */
	struct UCraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
