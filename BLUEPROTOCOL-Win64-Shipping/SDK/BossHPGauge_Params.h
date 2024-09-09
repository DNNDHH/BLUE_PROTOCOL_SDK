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
	 * Function BossHPGauge.BossHPGauge_C.OnSetBossCharacter
	 */
	struct UBossHPGauge_C_OnSetBossCharacter_Params
	{
	public:
		class ASBEnemyCharacter*                                   InBoss;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BossHPGauge.BossHPGauge_C.SetColorName
	 */
	struct UBossHPGauge_C_SetColorName_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BossHPGauge.BossHPGauge_C.SetColorLV
	 */
	struct UBossHPGauge_C_SetColorLV_Params
	{
	public:
		struct FSlateColor                                         InColorAndOpacity;                                       // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BossHPGauge.BossHPGauge_C.SetColorText
	 */
	struct UBossHPGauge_C_SetColorText_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BossHPGauge.BossHPGauge_C.SetName
	 */
	struct UBossHPGauge_C_SetName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BossHPGauge.BossHPGauge_C.SetLv
	 */
	struct UBossHPGauge_C_SetLv_Params
	{
	public:
		int32_t                                                    Lv;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_91CG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BossHPGauge.BossHPGauge_C.SetDepth
	 */
	struct UBossHPGauge_C_SetDepth_Params
	{
	public:
		float                                                      InDepth;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BossHPGauge.BossHPGauge_C.SetScreenPositionOffset
	 */
	struct UBossHPGauge_C_SetScreenPositionOffset_Params
	{
	public:
		struct FLinearColor                                        InScreenPositionOffset;                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BossHPGauge.BossHPGauge_C.PreConstruct
	 */
	struct UBossHPGauge_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BossHPGauge.BossHPGauge_C.Construct
	 */
	struct UBossHPGauge_C_Construct_Params
	{	};

	/**
	 * Function BossHPGauge.BossHPGauge_C.ExecuteUbergraph_BossHPGauge
	 */
	struct UBossHPGauge_C_ExecuteUbergraph_BossHPGauge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
