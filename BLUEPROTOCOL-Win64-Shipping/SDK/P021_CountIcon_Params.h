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
	 * Function P021_CountIcon.P021_CountIcon_C.AnimDone
	 */
	struct UP021_CountIcon_C_AnimDone_Params
	{	};

	/**
	 * Function P021_CountIcon.P021_CountIcon_C.PlayAnim
	 */
	struct UP021_CountIcon_C_PlayAnim_Params
	{	};

	/**
	 * Function P021_CountIcon.P021_CountIcon_C.SwitchColor
	 */
	struct UP021_CountIcon_C_SwitchColor_Params
	{
	public:
		EP021CountType                                             SWITCH;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function P021_CountIcon.P021_CountIcon_C.Init
	 */
	struct UP021_CountIcon_C_Init_Params
	{	};

	/**
	 * Function P021_CountIcon.P021_CountIcon_C.PreConstruct
	 */
	struct UP021_CountIcon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function P021_CountIcon.P021_CountIcon_C.Construct
	 */
	struct UP021_CountIcon_C_Construct_Params
	{	};

	/**
	 * Function P021_CountIcon.P021_CountIcon_C.ExecuteUbergraph_P021_CountIcon
	 */
	struct UP021_CountIcon_C_ExecuteUbergraph_P021_CountIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
