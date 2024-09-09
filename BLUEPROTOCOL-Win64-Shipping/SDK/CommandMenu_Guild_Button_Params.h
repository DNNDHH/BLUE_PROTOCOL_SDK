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
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.SetBtn
	 */
	struct UCommandMenu_Guild_Button_C_SetBtn_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.IsUpdateMatch
	 */
	struct UCommandMenu_Guild_Button_C_IsUpdateMatch_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.PlayBtnAnim
	 */
	struct UCommandMenu_Guild_Button_C_PlayBtnAnim_Params
	{
	public:
		bool                                                       bInActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_452D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NowConfirmCountText_Text_1
	 */
	struct UCommandMenu_Guild_Button_C_Get_NowConfirmCountText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_MaxConfirmCountText_Text_1
	 */
	struct UCommandMenu_Guild_Button_C_Get_MaxConfirmCountText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_MatchingText_Visibility_1
	 */
	struct UCommandMenu_Guild_Button_C_Get_MatchingText_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.IsParticipantNumberCompleted
	 */
	struct UCommandMenu_Guild_Button_C_IsParticipantNumberCompleted_Params
	{
	public:
		bool                                                       bCompleted;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NeedParticipantSizeText_Text_1
	 */
	struct UCommandMenu_Guild_Button_C_Get_NeedParticipantSizeText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_ServerWaitText_Visibility_1
	 */
	struct UCommandMenu_Guild_Button_C_Get_ServerWaitText_Visibility_1_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.Get_NowParticipantSizeText_Text_1
	 */
	struct UCommandMenu_Guild_Button_C_Get_NowParticipantSizeText_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommandMenu_Guild_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCommandMenu_Guild_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCommandMenu_Guild_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.UpdateExclamation
	 */
	struct UCommandMenu_Guild_Button_C_UpdateExclamation_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.ExecuteUbergraph_CommandMenu_Guild_Button
	 */
	struct UCommandMenu_Guild_Button_C_ExecuteUbergraph_CommandMenu_Guild_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu_Guild_Button.CommandMenu_Guild_Button_C.OpenGuildMenu__DelegateSignature
	 */
	struct UCommandMenu_Guild_Button_C_OpenGuildMenu__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
