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
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.ResetSkillInfoSubPalette
	 */
	struct UBattleSetTopInfoBase_C_ResetSkillInfoSubPalette_Params
	{
	public:
		bool                                                       bInIsSubPaletteReleased;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.UnbindChildEvents
	 */
	struct UBattleSetTopInfoBase_C_UnbindChildEvents_Params
	{	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.GetIsWeaponLost
	 */
	struct UBattleSetTopInfoBase_C_GetIsWeaponLost_Params
	{
	public:
		bool                                                       OutIsWeaponLost;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupBattleCordeInfo
	 */
	struct UBattleSetTopInfoBase_C_SetupBattleCordeInfo_Params
	{
	public:
		int32_t                                                    InCordeId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InSetupByCurrentEquip;                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InIsStorageMode;                                         // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupInnerImagineInfo
	 */
	struct UBattleSetTopInfoBase_C_SetupInnerImagineInfo_Params
	{	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupClassAbilityInfo
	 */
	struct UBattleSetTopInfoBase_C_SetupClassAbilityInfo_Params
	{	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupTacticalSkillInfo
	 */
	struct UBattleSetTopInfoBase_C_SetupTacticalSkillInfo_Params
	{	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupBattleImagineInfo
	 */
	struct UBattleSetTopInfoBase_C_SetupBattleImagineInfo_Params
	{	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupAllSkillInfo
	 */
	struct UBattleSetTopInfoBase_C_SetupAllSkillInfo_Params
	{	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupWeaponInfo
	 */
	struct UBattleSetTopInfoBase_C_SetupWeaponInfo_Params
	{	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.SetupInfo
	 */
	struct UBattleSetTopInfoBase_C_SetupInfo_Params
	{
	public:
		bool                                                       bIsStorageMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LD0D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.Construct
	 */
	struct UBattleSetTopInfoBase_C_Construct_Params
	{	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnWeaponIconPressed
	 */
	struct UBattleSetTopInfoBase_C_OnWeaponIconPressed_Params
	{	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTacticalSkillIconPressed
	 */
	struct UBattleSetTopInfoBase_C_OnTacticalSkillIconPressed_Params
	{
	public:
		ESkillActionPosition                                       InTacticalSkillSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B2VV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnBattleImagineIconPressed
	 */
	struct UBattleSetTopInfoBase_C_OnBattleImagineIconPressed_Params
	{
	public:
		ESkillActionPosition                                       InBattleImagineSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W2TN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InBattleImagineUniqueId;                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnClassAbilityIconPressed
	 */
	struct UBattleSetTopInfoBase_C_OnClassAbilityIconPressed_Params
	{
	public:
		int32_t                                                    InSkillSlotId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnInnerImagineIconPressed
	 */
	struct UBattleSetTopInfoBase_C_OnInnerImagineIconPressed_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InInnerImagineSlotType;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0L7G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InImagineId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.Destruct
	 */
	struct UBattleSetTopInfoBase_C_Destruct_Params
	{	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.ExecuteUbergraph_BattleSetTopInfoBase
	 */
	struct UBattleSetTopInfoBase_C_ExecuteUbergraph_BattleSetTopInfoBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoInnerImagineIconPressed__DelegateSignature
	 */
	struct UBattleSetTopInfoBase_C_OnTopInfoInnerImagineIconPressed__DelegateSignature_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InInnerImagineSlotType;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T3A3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InImagineId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoClassAbilityIconPressed__DelegateSignature
	 */
	struct UBattleSetTopInfoBase_C_OnTopInfoClassAbilityIconPressed__DelegateSignature_Params
	{
	public:
		int32_t                                                    InSkillSlotId;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoBattleImagineIconPressed__DelegateSignature
	 */
	struct UBattleSetTopInfoBase_C_OnTopInfoBattleImagineIconPressed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InBattleImagineSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N1OM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InBattleImagineUniqueId;                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoTacticalSkillIconPressed__DelegateSignature
	 */
	struct UBattleSetTopInfoBase_C_OnTopInfoTacticalSkillIconPressed__DelegateSignature_Params
	{
	public:
		ESkillActionPosition                                       InTacticalSkillSAP;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G1RS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InSkillId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSkillLevel;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleSetTopInfoBase.BattleSetTopInfoBase_C.OnTopInfoWeaponIconPressed__DelegateSignature
	 */
	struct UBattleSetTopInfoBase_C_OnTopInfoWeaponIconPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
