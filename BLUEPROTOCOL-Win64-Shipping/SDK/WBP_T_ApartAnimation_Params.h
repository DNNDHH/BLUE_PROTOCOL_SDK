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
	 * Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.AnimaterinComplete
	 */
	struct UWBP_T_ApartAnimation_C_AnimaterinComplete_Params
	{	};

	/**
	 * Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.OnAnimationFinished
	 */
	struct UWBP_T_ApartAnimation_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.Play
	 */
	struct UWBP_T_ApartAnimation_C_Play_Params
	{	};

	/**
	 * Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.ExecuteUbergraph_WBP_T_ApartAnimation
	 */
	struct UWBP_T_ApartAnimation_C_ExecuteUbergraph_WBP_T_ApartAnimation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_T_ApartAnimation.WBP_T_ApartAnimation_C.OnAnimPlayed__DelegateSignature
	 */
	struct UWBP_T_ApartAnimation_C_OnAnimPlayed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
