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
	 * Function BuffIcon.BuffIcon_C.StopAnim
	 */
	struct UBuffIcon_C_StopAnim_Params
	{	};

	/**
	 * Function BuffIcon.BuffIcon_C.PlayAnim
	 */
	struct UBuffIcon_C_PlayAnim_Params
	{	};

	/**
	 * Function BuffIcon.BuffIcon_C.OnSetup
	 */
	struct UBuffIcon_C_OnSetup_Params
	{
	public:
		ESBStatusAilmentIconType                                   InType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OF9E[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BuffIcon.BuffIcon_C.PreConstruct
	 */
	struct UBuffIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BuffIcon.BuffIcon_C.ExecuteUbergraph_BuffIcon
	 */
	struct UBuffIcon_C_ExecuteUbergraph_BuffIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
