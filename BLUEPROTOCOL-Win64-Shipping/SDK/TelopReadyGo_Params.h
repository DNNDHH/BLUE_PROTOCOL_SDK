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
	 * Function TelopReadyGo.TelopReadyGo_C.PlaySE
	 */
	struct UTelopReadyGo_C_PlaySE_Params
	{
	public:
		class UAkAudioEvent*                                       SE;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopReadyGo.TelopReadyGo_C.IsPlayAnim
	 */
	struct UTelopReadyGo_C_IsPlayAnim_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TelopReadyGo.TelopReadyGo_C.StopAnim
	 */
	struct UTelopReadyGo_C_StopAnim_Params
	{	};

	/**
	 * Function TelopReadyGo.TelopReadyGo_C.PlayAnim
	 */
	struct UTelopReadyGo_C_PlayAnim_Params
	{	};

	/**
	 * Function TelopReadyGo.TelopReadyGo_C.OnAnimationFinished
	 */
	struct UTelopReadyGo_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopReadyGo.TelopReadyGo_C.ExecuteUbergraph_TelopReadyGo
	 */
	struct UTelopReadyGo_C_ExecuteUbergraph_TelopReadyGo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_43N1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
