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
	 * Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Hide
	 */
	struct UNotificatin_BrightAnim_C_Hide_Params
	{	};

	/**
	 * Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Show
	 */
	struct UNotificatin_BrightAnim_C_Show_Params
	{	};

	/**
	 * Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.Construct
	 */
	struct UNotificatin_BrightAnim_C_Construct_Params
	{	};

	/**
	 * Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.OnAnimationFinished
	 */
	struct UNotificatin_BrightAnim_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Notificatin_BrightAnim.Notificatin_BrightAnim_C.ExecuteUbergraph_Notificatin_BrightAnim
	 */
	struct UNotificatin_BrightAnim_C_ExecuteUbergraph_Notificatin_BrightAnim_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9P1K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
