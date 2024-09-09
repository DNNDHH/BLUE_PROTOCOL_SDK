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
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.GetPlayerControllerEx
	 */
	struct UChatWindow_InputText_C_GetPlayerControllerEx_Params
	{
	public:
		class APlayerController*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.OnPreviewMouseButtonDown
	 */
	struct UChatWindow_InputText_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.IsTextInputFocus
	 */
	struct UChatWindow_InputText_C_IsTextInputFocus_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R1AK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.UpdateTextCount
	 */
	struct UChatWindow_InputText_C_UpdateTextCount_Params
	{	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.SetUserFocusAtITextInput
	 */
	struct UChatWindow_InputText_C_SetUserFocusAtITextInput_Params
	{
	public:
		bool                                                       MessageReset;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BWZZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.Hide
	 */
	struct UChatWindow_InputText_C_Hide_Params
	{	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.Show
	 */
	struct UChatWindow_InputText_C_Show_Params
	{	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.RoundText
	 */
	struct UChatWindow_InputText_C_RoundText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsRound;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q3QK[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                OutText;                                                 // 0x0020(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.OnKeyUp
	 */
	struct UChatWindow_InputText_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.OnPreviewKeyDown
	 */
	struct UChatWindow_InputText_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 */
	struct UChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__CmnBtn15_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UChatWindow_InputText_C_BndEvt__CmnBtn15_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UChatWindow_InputText_C_BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.UpdateMouseCursorIcon
	 */
	struct UChatWindow_InputText_C_UpdateMouseCursorIcon_Params
	{	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.SendMessage
	 */
	struct UChatWindow_InputText_C_SendMessage_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.ExecuteUbergraph_ChatWindow_InputText
	 */
	struct UChatWindow_InputText_C_ExecuteUbergraph_ChatWindow_InputText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HVUY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatWindow_InputText.ChatWindow_InputText_C.OnClose__DelegateSignature
	 */
	struct UChatWindow_InputText_C_OnClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
