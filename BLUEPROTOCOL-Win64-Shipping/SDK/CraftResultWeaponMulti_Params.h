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
	 * Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.PlayAnimIn
	 */
	struct UCraftResultWeaponMulti_C_PlayAnimIn_Params
	{	};

	/**
	 * Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.UpdateCriticalCount
	 */
	struct UCraftResultWeaponMulti_C_UpdateCriticalCount_Params
	{
	public:
		TArray<bool>                                               CriticalCount;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.Set Result
	 */
	struct UCraftResultWeaponMulti_C_SetResult_Params
	{
	public:
		struct FCraftMasterData                                    Recepi;                                                  // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TArray<class FString>                                      Uids;                                                    // 0x0088(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    StorageNo;                                               // 0x0098(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_808T[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<bool>                                               Criticals;                                               // 0x00A0(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.ExecuteUbergraph_CraftResultWeaponMulti
	 */
	struct UCraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
