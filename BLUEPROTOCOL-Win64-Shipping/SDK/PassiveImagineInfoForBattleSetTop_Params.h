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
	 * Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetScoreInfoSwitcher
	 */
	struct UPassiveImagineInfoForBattleSetTop_C_GetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetPassiveImagineInfoUnit
	 */
	struct UPassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InPassiveImagineSlotType;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KHW6[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPassiveImagineInfoUnitForBattleSet_C*               OutImagineInfoUnit;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.SetupPassiveImagineIconBtnList
	 */
	struct UPassiveImagineInfoForBattleSetTop_C_SetupPassiveImagineIconBtnList_Params
	{	};

	/**
	 * Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetPassiveImagineIconBtn
	 */
	struct UPassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InPassiveImagineSlotType;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0GXB[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C*    OutImagineIconBtn;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.CreatePassiveImagineIconBtnList
	 */
	struct UPassiveImagineInfoForBattleSetTop_C_CreatePassiveImagineIconBtnList_Params
	{	};

	/**
	 * Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.PreConstruct
	 */
	struct UPassiveImagineInfoForBattleSetTop_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.Construct
	 */
	struct UPassiveImagineInfoForBattleSetTop_C_Construct_Params
	{	};

	/**
	 * Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.OnIconBtnClicked
	 */
	struct UPassiveImagineInfoForBattleSetTop_C_OnIconBtnClicked_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InPassiveImagineSlotType;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JQ5R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InPassiveImagineItemId;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.Destruct
	 */
	struct UPassiveImagineInfoForBattleSetTop_C_Destruct_Params
	{	};

	/**
	 * Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.ExecuteUbergraph_PassiveImagineInfoForBattleSetTop
	 */
	struct UPassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.OnIconBtnPressed__DelegateSignature
	 */
	struct UPassiveImagineInfoForBattleSetTop_C_OnIconBtnPressed__DelegateSignature_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InInnerImagineSlotType;                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EE5E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InImagineId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
