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
	 * Function TelopProficiency.TelopProficiency_C.PlayAnimGlow
	 */
	struct UTelopProficiency_C_PlayAnimGlow_Params
	{	};

	/**
	 * Function TelopProficiency.TelopProficiency_C.GetText
	 */
	struct UTelopProficiency_C_GetText_Params
	{
	public:
		class USBRuntimeTextBlock*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopProficiency.TelopProficiency_C.PlaySE
	 */
	struct UTelopProficiency_C_PlaySE_Params
	{
	public:
		class UAkAudioEvent*                                       SE;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopProficiency.TelopProficiency_C.PlayAnimOut
	 */
	struct UTelopProficiency_C_PlayAnimOut_Params
	{	};

	/**
	 * Function TelopProficiency.TelopProficiency_C.SetupStar
	 */
	struct UTelopProficiency_C_SetupStar_Params
	{	};

	/**
	 * Function TelopProficiency.TelopProficiency_C.OnPlay
	 */
	struct UTelopProficiency_C_OnPlay_Params
	{	};

	/**
	 * Function TelopProficiency.TelopProficiency_C.IsPlayAnim
	 */
	struct UTelopProficiency_C_IsPlayAnim_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TelopProficiency.TelopProficiency_C.StopAnim
	 */
	struct UTelopProficiency_C_StopAnim_Params
	{	};

	/**
	 * Function TelopProficiency.TelopProficiency_C.PlayAnim
	 */
	struct UTelopProficiency_C_PlayAnim_Params
	{	};

	/**
	 * Function TelopProficiency.TelopProficiency_C.OnAnimationFinished
	 */
	struct UTelopProficiency_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopProficiency.TelopProficiency_C.EndAnimStarActive
	 */
	struct UTelopProficiency_C_EndAnimStarActive_Params
	{	};

	/**
	 * Function TelopProficiency.TelopProficiency_C.ExecuteUbergraph_TelopProficiency
	 */
	struct UTelopProficiency_C_ExecuteUbergraph_TelopProficiency_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TYA6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
