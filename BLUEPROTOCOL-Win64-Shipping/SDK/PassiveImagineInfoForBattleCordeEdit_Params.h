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
	 * Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.GetScoreInfoSwitcher
	 */
	struct UPassiveImagineInfoForBattleCordeEdit_C_GetScoreInfoSwitcher_Params
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          OutSwitcher;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.SetStorageMode
	 */
	struct UPassiveImagineInfoForBattleCordeEdit_C_SetStorageMode_Params
	{
	public:
		bool                                                       InIsStorageMode;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.Setup
	 */
	struct UPassiveImagineInfoForBattleCordeEdit_C_Setup_Params
	{
	public:
		TArray<class FString>                                      InPassiveImagineUniqueIds;                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       InSetupByCurrEquip;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClassType;                                             // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.GetPassiveImagineIconBtn
	 */
	struct UPassiveImagineInfoForBattleCordeEdit_C_GetPassiveImagineIconBtn_Params
	{
	public:
		ESBPlayerPassiveImagineSlotType                            InPassiveImagineSlotType;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutIsValid;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KEA3[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C*    OutImagineIconBtn;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.CreatePassiveImagineIconBtnList
	 */
	struct UPassiveImagineInfoForBattleCordeEdit_C_CreatePassiveImagineIconBtnList_Params
	{	};

	/**
	 * Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.PreConstruct
	 */
	struct UPassiveImagineInfoForBattleCordeEdit_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.ExecuteUbergraph_PassiveImagineInfoForBattleCordeEdit
	 */
	struct UPassiveImagineInfoForBattleCordeEdit_C_ExecuteUbergraph_PassiveImagineInfoForBattleCordeEdit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
