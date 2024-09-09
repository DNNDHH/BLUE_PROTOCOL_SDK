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
	 * Function TextWindow.TextWindow_C.SetYOffset
	 */
	struct UTextWindow_C_SetYOffset_Params
	{
	public:
		float                                                      InYOffset;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextWindow.TextWindow_C.CloseOther
	 */
	struct UTextWindow_C_CloseOther_Params
	{	};

	/**
	 * Function TextWindow.TextWindow_C.GetBGVisible
	 */
	struct UTextWindow_C_GetBGVisible_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextWindow.TextWindow_C.SetBGOpacity
	 */
	struct UTextWindow_C_SetBGOpacity_Params
	{
	public:
		float                                                      Opacity;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextWindow.TextWindow_C.IsShow
	 */
	struct UTextWindow_C_IsShow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextWindow.TextWindow_C.Construct
	 */
	struct UTextWindow_C_Construct_Params
	{	};

	/**
	 * Function TextWindow.TextWindow_C.OnAnimationFinished
	 */
	struct UTextWindow_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextWindow.TextWindow_C.Destruct
	 */
	struct UTextWindow_C_Destruct_Params
	{	};

	/**
	 * Function TextWindow.TextWindow_C.CustomEvent_1
	 */
	struct UTextWindow_C_CustomEvent_1_Params
	{	};

	/**
	 * Function TextWindow.TextWindow_C.CustomEvent_2
	 */
	struct UTextWindow_C_CustomEvent_2_Params
	{	};

	/**
	 * Function TextWindow.TextWindow_C.CustomEvent_3
	 */
	struct UTextWindow_C_CustomEvent_3_Params
	{	};

	/**
	 * Function TextWindow.TextWindow_C.OnInputKey
	 */
	struct UTextWindow_C_OnInputKey_Params
	{	};

	/**
	 * Function TextWindow.TextWindow_C.CustomEvent_4
	 */
	struct UTextWindow_C_CustomEvent_4_Params
	{	};

	/**
	 * Function TextWindow.TextWindow_C.SetText
	 */
	struct UTextWindow_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function TextWindow.TextWindow_C.Hide
	 */
	struct UTextWindow_C_Hide_Params
	{	};

	/**
	 * Function TextWindow.TextWindow_C.Show
	 */
	struct UTextWindow_C_Show_Params
	{	};

	/**
	 * Function TextWindow.TextWindow_C.SetSpeaker
	 */
	struct UTextWindow_C_SetSpeaker_Params
	{
	public:
		class FName                                                InProfileId;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextWindow.TextWindow_C.SetNextMarkVisibility
	 */
	struct UTextWindow_C_SetNextMarkVisibility_Params
	{
	public:
		bool                                                       bInVisibility;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextWindow.TextWindow_C.HideWithoutBG
	 */
	struct UTextWindow_C_HideWithoutBG_Params
	{	};

	/**
	 * Function TextWindow.TextWindow_C.SetBGVisible
	 */
	struct UTextWindow_C_SetBGVisible_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TextWindow.TextWindow_C.Tick
	 */
	struct UTextWindow_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TextWindow.TextWindow_C.HideAndDestruct
	 */
	struct UTextWindow_C_HideAndDestruct_Params
	{	};

	/**
	 * Function TextWindow.TextWindow_C.ExecuteUbergraph_TextWindow
	 */
	struct UTextWindow_C_ExecuteUbergraph_TextWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
