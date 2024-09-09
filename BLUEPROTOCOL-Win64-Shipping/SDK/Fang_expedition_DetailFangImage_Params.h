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
	 * Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.ResetAnimState
	 */
	struct UFang_expedition_DetailFangImage_C_ResetAnimState_Params
	{	};

	/**
	 * Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.SetTextureRef
	 */
	struct UFang_expedition_DetailFangImage_C_SetTextureRef_Params
	{
	public:
		unsigned char                                              UnknownData_ZR24[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.SetTexture
	 */
	struct UFang_expedition_DetailFangImage_C_SetTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnLoaded_B65A1B5649E5906D193D59B0005B2979
	 */
	struct UFang_expedition_DetailFangImage_C_OnLoaded_B65A1B5649E5906D193D59B0005B2979_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.LoadImage
	 */
	struct UFang_expedition_DetailFangImage_C_LoadImage_Params
	{	};

	/**
	 * Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.PlayMoveAnim
	 */
	struct UFang_expedition_DetailFangImage_C_PlayMoveAnim_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnAnimationFinished
	 */
	struct UFang_expedition_DetailFangImage_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.FoceRemoveAnim
	 */
	struct UFang_expedition_DetailFangImage_C_FoceRemoveAnim_Params
	{	};

	/**
	 * Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.ExecuteUbergraph_Fang_expedition_DetailFangImage
	 */
	struct UFang_expedition_DetailFangImage_C_ExecuteUbergraph_Fang_expedition_DetailFangImage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_75G8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C.OnFinishAnimation__DelegateSignature
	 */
	struct UFang_expedition_DetailFangImage_C_OnFinishAnimation__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
