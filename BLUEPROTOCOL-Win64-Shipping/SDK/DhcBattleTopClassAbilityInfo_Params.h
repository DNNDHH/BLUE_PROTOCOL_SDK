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
	 * Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.Setup
	 */
	struct UDhcBattleTopClassAbilityInfo_C_Setup_Params
	{
	public:
		TArray<struct FSBDhcBattlePlayerEquipArtsInfo>             InEquipArtsInfo;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ESBClassType                                               InClassType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W8KW[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InClassLevel;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.PreConstruct
	 */
	struct UDhcBattleTopClassAbilityInfo_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.ExecuteUbergraph_DhcBattleTopClassAbilityInfo
	 */
	struct UDhcBattleTopClassAbilityInfo_C_ExecuteUbergraph_DhcBattleTopClassAbilityInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DhcBattleTopClassAbilityInfo.DhcBattleTopClassAbilityInfo_C.OnClassAbilityIconClicked__DelegateSignature
	 */
	struct UDhcBattleTopClassAbilityInfo_C_OnClassAbilityIconClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    InSkillSlotId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
