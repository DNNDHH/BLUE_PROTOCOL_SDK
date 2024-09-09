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
	 * Function TelopType1.TelopType1_C.OnPlay
	 */
	struct UTelopType1_C_OnPlay_Params
	{	};

	/**
	 * Function TelopType1.TelopType1_C.GetText
	 */
	struct UTelopType1_C_GetText_Params
	{
	public:
		class USBRuntimeTextBlock*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopType1.TelopType1_C.PlaySE
	 */
	struct UTelopType1_C_PlaySE_Params
	{
	public:
		class UAkAudioEvent*                                       SE;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopType1.TelopType1_C.PlayBGM
	 */
	struct UTelopType1_C_PlayBGM_Params
	{	};

	/**
	 * Function TelopType1.TelopType1_C.IsPlayAnim
	 */
	struct UTelopType1_C_IsPlayAnim_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TelopType1.TelopType1_C.StopAnim
	 */
	struct UTelopType1_C_StopAnim_Params
	{	};

	/**
	 * Function TelopType1.TelopType1_C.PlayAnim
	 */
	struct UTelopType1_C_PlayAnim_Params
	{	};

	/**
	 * Function TelopType1.TelopType1_C.OnAnimationFinished
	 */
	struct UTelopType1_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopType1.TelopType1_C.ExecuteUbergraph_TelopType1
	 */
	struct UTelopType1_C_ExecuteUbergraph_TelopType1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NYZK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
