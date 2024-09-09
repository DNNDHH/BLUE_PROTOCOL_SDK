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
	 * Function TextWindowSkit.TextWindowSkit_C.GetBGVisible
	 */
	struct UTextWindowSkit_C_GetBGVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.SetBGOpacity
	 */
	struct UTextWindowSkit_C_SetBGOpacity_Params
	{
	public:
		float                                                      Opacity;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.IsShow
	 */
	struct UTextWindowSkit_C_IsShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.OnAnimationFinished
	 */
	struct UTextWindowSkit_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.Destruct
	 */
	struct UTextWindowSkit_C_Destruct_Params
	{	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.CustomEvent_1
	 */
	struct UTextWindowSkit_C_CustomEvent_1_Params
	{	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.CustomEvent_2
	 */
	struct UTextWindowSkit_C_CustomEvent_2_Params
	{	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.CustomEvent_3
	 */
	struct UTextWindowSkit_C_CustomEvent_3_Params
	{	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.OnInputKey
	 */
	struct UTextWindowSkit_C_OnInputKey_Params
	{	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.CustomEvent_4
	 */
	struct UTextWindowSkit_C_CustomEvent_4_Params
	{	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.Construct
	 */
	struct UTextWindowSkit_C_Construct_Params
	{	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.SetText
	 */
	struct UTextWindowSkit_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.Hide
	 */
	struct UTextWindowSkit_C_Hide_Params
	{	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.Show
	 */
	struct UTextWindowSkit_C_Show_Params
	{	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.SetSpeaker
	 */
	struct UTextWindowSkit_C_SetSpeaker_Params
	{
	public:
		class FName                                                InProfileId;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.SetNextMarkVisibility
	 */
	struct UTextWindowSkit_C_SetNextMarkVisibility_Params
	{
	public:
		bool                                                       bInVisibility;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.HideWithoutBG
	 */
	struct UTextWindowSkit_C_HideWithoutBG_Params
	{	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.SetBGVisible
	 */
	struct UTextWindowSkit_C_SetBGVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextWindowSkit.TextWindowSkit_C.ExecuteUbergraph_TextWindowSkit
	 */
	struct UTextWindowSkit_C_ExecuteUbergraph_TextWindowSkit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
