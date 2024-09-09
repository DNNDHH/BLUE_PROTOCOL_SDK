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
	 * Function TelopChallenge.TelopChallenge_C.SetBG
	 */
	struct UTelopChallenge_C_SetBG_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopChallenge.TelopChallenge_C.GetSubText
	 */
	struct UTelopChallenge_C_GetSubText_Params
	{
	public:
		class UTextBlock*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopChallenge.TelopChallenge_C.GetText
	 */
	struct UTelopChallenge_C_GetText_Params
	{
	public:
		class USBRuntimeTextBlock*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopChallenge.TelopChallenge_C.OnTimerEvent
	 */
	struct UTelopChallenge_C_OnTimerEvent_Params
	{	};

	/**
	 * Function TelopChallenge.TelopChallenge_C.PlaySE
	 */
	struct UTelopChallenge_C_PlaySE_Params
	{
	public:
		class UAkAudioEvent*                                       SE;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopChallenge.TelopChallenge_C.IsPlayAnim
	 */
	struct UTelopChallenge_C_IsPlayAnim_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TelopChallenge.TelopChallenge_C.StopAnim
	 */
	struct UTelopChallenge_C_StopAnim_Params
	{	};

	/**
	 * Function TelopChallenge.TelopChallenge_C.PlayAnim
	 */
	struct UTelopChallenge_C_PlayAnim_Params
	{	};

	/**
	 * Function TelopChallenge.TelopChallenge_C.OnAnimationFinished
	 */
	struct UTelopChallenge_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopChallenge.TelopChallenge_C.ExecuteUbergraph_TelopChallenge
	 */
	struct UTelopChallenge_C_ExecuteUbergraph_TelopChallenge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NOS7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
