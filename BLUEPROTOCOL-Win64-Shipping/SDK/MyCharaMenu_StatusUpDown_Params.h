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
	 * Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.SetValueBase
	 */
	struct UMyCharaMenu_StatusUpDown_C_SetValueBase_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InIsPercentage;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UM6N[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.SetValueAsPercentage
	 */
	struct UMyCharaMenu_StatusUpDown_C_SetValueAsPercentage_Params
	{
	public:
		float                                                      InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.Clear
	 */
	struct UMyCharaMenu_StatusUpDown_C_Clear_Params
	{	};

	/**
	 * Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.SetValue
	 */
	struct UMyCharaMenu_StatusUpDown_C_SetValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.PreConstruct
	 */
	struct UMyCharaMenu_StatusUpDown_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.Construct
	 */
	struct UMyCharaMenu_StatusUpDown_C_Construct_Params
	{	};

	/**
	 * Function MyCharaMenu_StatusUpDown.MyCharaMenu_StatusUpDown_C.ExecuteUbergraph_MyCharaMenu_StatusUpDown
	 */
	struct UMyCharaMenu_StatusUpDown_C_ExecuteUbergraph_MyCharaMenu_StatusUpDown_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
