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
	 * Function TelopGameOver.TelopGameOver_C.GetText
	 */
	struct UTelopGameOver_C_GetText_Params
	{
	public:
		class USBRuntimeTextBlock*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopGameOver.TelopGameOver_C.PlaySE
	 */
	struct UTelopGameOver_C_PlaySE_Params
	{
	public:
		class UAkAudioEvent*                                       SE;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopGameOver.TelopGameOver_C.PlayBGM
	 */
	struct UTelopGameOver_C_PlayBGM_Params
	{	};

	/**
	 * Function TelopGameOver.TelopGameOver_C.IsPlayAnim
	 */
	struct UTelopGameOver_C_IsPlayAnim_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TelopGameOver.TelopGameOver_C.StopAnim
	 */
	struct UTelopGameOver_C_StopAnim_Params
	{	};

	/**
	 * Function TelopGameOver.TelopGameOver_C.PlayAnim
	 */
	struct UTelopGameOver_C_PlayAnim_Params
	{	};

	/**
	 * Function TelopGameOver.TelopGameOver_C.OnAnimationFinished
	 */
	struct UTelopGameOver_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopGameOver.TelopGameOver_C.Tick
	 */
	struct UTelopGameOver_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TelopGameOver.TelopGameOver_C.OnPlayAnim
	 */
	struct UTelopGameOver_C_OnPlayAnim_Params
	{	};

	/**
	 * Function TelopGameOver.TelopGameOver_C.ExecuteUbergraph_TelopGameOver
	 */
	struct UTelopGameOver_C_ExecuteUbergraph_TelopGameOver_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H1AP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
