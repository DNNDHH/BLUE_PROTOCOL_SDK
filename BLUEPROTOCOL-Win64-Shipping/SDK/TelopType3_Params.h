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
	 * Function TelopType3.TelopType3_C.SetBG
	 */
	struct UTelopType3_C_SetBG_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopType3.TelopType3_C.GetTextEffect
	 */
	struct UTelopType3_C_GetTextEffect_Params
	{
	public:
		class USBRuntimeTextBlock*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopType3.TelopType3_C.GetText
	 */
	struct UTelopType3_C_GetText_Params
	{
	public:
		class USBRuntimeTextBlock*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopType3.TelopType3_C.PlaySE
	 */
	struct UTelopType3_C_PlaySE_Params
	{
	public:
		class UAkAudioEvent*                                       SE;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopType3.TelopType3_C.PlayBGM
	 */
	struct UTelopType3_C_PlayBGM_Params
	{	};

	/**
	 * Function TelopType3.TelopType3_C.IsPlayAnim
	 */
	struct UTelopType3_C_IsPlayAnim_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TelopType3.TelopType3_C.StopAnim
	 */
	struct UTelopType3_C_StopAnim_Params
	{	};

	/**
	 * Function TelopType3.TelopType3_C.PlayAnim
	 */
	struct UTelopType3_C_PlayAnim_Params
	{	};

	/**
	 * Function TelopType3.TelopType3_C.OnAnimationFinished
	 */
	struct UTelopType3_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopType3.TelopType3_C.ExecuteUbergraph_TelopType3
	 */
	struct UTelopType3_C_ExecuteUbergraph_TelopType3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BOZW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
