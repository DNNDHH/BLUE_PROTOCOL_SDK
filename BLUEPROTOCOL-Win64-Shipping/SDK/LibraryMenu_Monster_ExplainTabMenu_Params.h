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
	 * Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.Get Attribute Text
	 */
	struct ULibraryMenu_Monster_ExplainTabMenu_C_GetAttributeText_Params
	{
	public:
		int32_t                                                    inInt;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PPKB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.ChangeEnemyDataFromId
	 */
	struct ULibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyDataFromId_Params
	{
	public:
		class FName                                                EnemyId;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.Set Info Tooltip
	 */
	struct ULibraryMenu_Monster_ExplainTabMenu_C_SetInfoTooltip_Params
	{
	public:
		class UImage*                                              TargetIcon;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWBP_CommonToolTipDetail_Variable_C*                 TipWidget;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    totalCount;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NowCount;                                                // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.UpdateDetailOpenSetting
	 */
	struct ULibraryMenu_Monster_ExplainTabMenu_C_UpdateDetailOpenSetting_Params
	{
	public:
		class FName                                                CheckType;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.ChangeEnemyData
	 */
	struct ULibraryMenu_Monster_ExplainTabMenu_C_ChangeEnemyData_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Type;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Monster_ExplainTabMenu.LibraryMenu_Monster_ExplainTabMenu_C.SetEnemyData
	 */
	struct ULibraryMenu_Monster_ExplainTabMenu_C_SetEnemyData_Params
	{
	public:
		struct FSBLibraryEnemyData                                 EnemyData;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
