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
	 * Function TelopClearDungeon.TelopClearDungeon_C.GetTextEffect
	 */
	struct UTelopClearDungeon_C_GetTextEffect_Params
	{
	public:
		class USBRuntimeTextBlock*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopClearDungeon.TelopClearDungeon_C.GetText
	 */
	struct UTelopClearDungeon_C_GetText_Params
	{
	public:
		class USBRuntimeTextBlock*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopClearDungeon.TelopClearDungeon_C.PlaySE
	 */
	struct UTelopClearDungeon_C_PlaySE_Params
	{
	public:
		class UAkAudioEvent*                                       SE;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopClearDungeon.TelopClearDungeon_C.IsPlayAnim
	 */
	struct UTelopClearDungeon_C_IsPlayAnim_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TelopClearDungeon.TelopClearDungeon_C.StopAnim
	 */
	struct UTelopClearDungeon_C_StopAnim_Params
	{	};

	/**
	 * Function TelopClearDungeon.TelopClearDungeon_C.PlayAnim
	 */
	struct UTelopClearDungeon_C_PlayAnim_Params
	{	};

	/**
	 * Function TelopClearDungeon.TelopClearDungeon_C.OnAnimationFinished
	 */
	struct UTelopClearDungeon_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopClearDungeon.TelopClearDungeon_C.ExecuteUbergraph_TelopClearDungeon
	 */
	struct UTelopClearDungeon_C_ExecuteUbergraph_TelopClearDungeon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6Y52[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
