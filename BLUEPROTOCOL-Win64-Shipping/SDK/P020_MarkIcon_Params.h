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
	 * Function P020_MarkIcon.P020_MarkIcon_C.Show Icon BP
	 */
	struct UP020_MarkIcon_C_ShowIconBP_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RV60[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function P020_MarkIcon.P020_MarkIcon_C.PreConstruct
	 */
	struct UP020_MarkIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P020_MarkIcon.P020_MarkIcon_C.Construct
	 */
	struct UP020_MarkIcon_C_Construct_Params
	{	};

	/**
	 * Function P020_MarkIcon.P020_MarkIcon_C.OnIconVisibilityStart
	 */
	struct UP020_MarkIcon_C_OnIconVisibilityStart_Params
	{	};

	/**
	 * Function P020_MarkIcon.P020_MarkIcon_C.OnIconVisibilityEnd
	 */
	struct UP020_MarkIcon_C_OnIconVisibilityEnd_Params
	{	};

	/**
	 * Function P020_MarkIcon.P020_MarkIcon_C.ExecuteUbergraph_P020_MarkIcon
	 */
	struct UP020_MarkIcon_C_ExecuteUbergraph_P020_MarkIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q33V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
