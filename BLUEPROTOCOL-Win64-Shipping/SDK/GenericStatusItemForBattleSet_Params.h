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
	 * Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetPrevValue
	 */
	struct UGenericStatusItemForBattleSet_C_SetPrevValue_Params
	{
	public:
		int32_t                                                    PrevValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetValueText
	 */
	struct UGenericStatusItemForBattleSet_C_SetValueText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetValue
	 */
	struct UGenericStatusItemForBattleSet_C_SetValue_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.SetHeading
	 */
	struct UGenericStatusItemForBattleSet_C_SetHeading_Params
	{
	public:
		int32_t                                                    InHeadingTextId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D1OK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.PreConstruct
	 */
	struct UGenericStatusItemForBattleSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C.ExecuteUbergraph_GenericStatusItemForBattleSet
	 */
	struct UGenericStatusItemForBattleSet_C_ExecuteUbergraph_GenericStatusItemForBattleSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
