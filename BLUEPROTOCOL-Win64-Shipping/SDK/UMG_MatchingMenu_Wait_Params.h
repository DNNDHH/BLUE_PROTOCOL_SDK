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
	 * Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.ResetParam
	 */
	struct UUMG_MatchingMenu_Wait_C_ResetParam_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.AdvanceMatching
	 */
	struct UUMG_MatchingMenu_Wait_C_AdvanceMatching_Params
	{
	public:
		bool                                                       CallApi;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DQC0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.UpdateAnimation
	 */
	struct UUMG_MatchingMenu_Wait_C_UpdateAnimation_Params
	{
	public:
		struct FTimespan                                           InTime;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.UpdateWaitTimer
	 */
	struct UUMG_MatchingMenu_Wait_C_UpdateWaitTimer_Params
	{
	public:
		struct FTimespan                                           InTime;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Get_CurrentMembers_Text
	 */
	struct UUMG_MatchingMenu_Wait_C_Get_CurrentMembers_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Get_MaxMembers_Text
	 */
	struct UUMG_MatchingMenu_Wait_C_Get_MaxMembers_Text_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.RequestClose
	 */
	struct UUMG_MatchingMenu_Wait_C_RequestClose_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.Tick
	 */
	struct UUMG_MatchingMenu_Wait_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UUMG_MatchingMenu_Wait_C_BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Wait.UMG_MatchingMenu_Wait_C.ExecuteUbergraph_UMG_MatchingMenu_Wait
	 */
	struct UUMG_MatchingMenu_Wait_C_ExecuteUbergraph_UMG_MatchingMenu_Wait_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
