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
	 * Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.GetScoreInfoSwitcher
	 */
	struct UDhcBattleTopEnhanceImagineInfo_C_GetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          OutSwitcher;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.GetPassiveImagineIconUnit
	 */
	struct UDhcBattleTopEnhanceImagineInfo_C_GetPassiveImagineIconUnit_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InPassiveImagineSlotType;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CLWJ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPassiveImagineInfoUnitForBattleSet_C*               OutImagineIconUnit;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.Setup
	 */
	struct UDhcBattleTopEnhanceImagineInfo_C_Setup_Params
	{
	public:
		TArray<struct FSBDhcBattlePlayerEquipImagineInfo>          InEquipEnhanceImagineInfo;                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBClassType                                               InClassType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2M1S[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InClassLevel;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.CreatePassiveImagineIconUnitList
	 */
	struct UDhcBattleTopEnhanceImagineInfo_C_CreatePassiveImagineIconUnitList_Params
	{	};

	/**
	 * Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.PreConstruct
	 */
	struct UDhcBattleTopEnhanceImagineInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.ExecuteUbergraph_DhcBattleTopEnhanceImagineInfo
	 */
	struct UDhcBattleTopEnhanceImagineInfo_C_ExecuteUbergraph_DhcBattleTopEnhanceImagineInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
