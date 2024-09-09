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
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.SetBtn
	 */
	struct UUMG_PartyMenu_Button_C_SetBtn_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.PlayBtnAnim
	 */
	struct UUMG_PartyMenu_Button_C_PlayBtnAnim_Params
	{
	public:
		bool                                                       bInActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HZDU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.SetButtonType
	 */
	struct UUMG_PartyMenu_Button_C_SetButtonType_Params
	{
	public:
		EPartyButtonType                                           Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2KF0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.CustomEvent_1
	 */
	struct UUMG_PartyMenu_Button_C_CustomEvent_1_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.ResetButtonState
	 */
	struct UUMG_PartyMenu_Button_C_ResetButtonState_Params
	{	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.CustomEvent_2
	 */
	struct UUMG_PartyMenu_Button_C_CustomEvent_2_Params
	{
	public:
		int32_t                                                    SelectIndex;                                             // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUMG_PartyMenu_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.BndEvt__ContentButton_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUMG_PartyMenu_Button_C_BndEvt__ContentButton_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUMG_PartyMenu_Button_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Tick
	 */
	struct UUMG_PartyMenu_Button_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Construct
	 */
	struct UUMG_PartyMenu_Button_C_Construct_Params
	{	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.PartyUnbindDelegates
	 */
	struct UUMG_PartyMenu_Button_C_PartyUnbindDelegates_Params
	{	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.Destruct
	 */
	struct UUMG_PartyMenu_Button_C_Destruct_Params
	{	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.ExecuteUbergraph_UMG_PartyMenu_Button
	 */
	struct UUMG_PartyMenu_Button_C_ExecuteUbergraph_UMG_PartyMenu_Button_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_PartyMenu_Button.UMG_PartyMenu_Button_C.OnOpenPartyMenu__DelegateSignature
	 */
	struct UUMG_PartyMenu_Button_C_OnOpenPartyMenu__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
