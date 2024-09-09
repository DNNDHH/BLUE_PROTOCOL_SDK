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
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.SetClipboardCopy
	 */
	struct UChatLogMyMessage_C_SetClipboardCopy_Params
	{
	public:
		bool                                                       IsCopy;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.OnMouseButtonDown
	 */
	struct UChatLogMyMessage_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.GetFloatStampPoint
	 */
	struct UChatLogMyMessage_C_GetFloatStampPoint_Params
	{
	public:
		struct FVector2D                                           NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.SetStamp
	 */
	struct UChatLogMyMessage_C_SetStamp_Params
	{
	public:
		int32_t                                                    InStampId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEndInit;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_75G1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                InText;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.ZeroPadding
	 */
	struct UChatLogMyMessage_C_ZeroPadding_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1IW9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                RetValue;                                                // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.Init
	 */
	struct UChatLogMyMessage_C_Init_Params
	{
	public:
		struct FSBChatUIMessage                                    InMessLog;                                               // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsEndInit;                                               // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCursorStampHit;                                        // 0x0071(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.DonwloadFaceImage_Event
	 */
	struct UChatLogMyMessage_C_DonwloadFaceImage_Event_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.OnTimeEvent
	 */
	struct UChatLogMyMessage_C_OnTimeEvent_Params
	{	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.Destruct
	 */
	struct UChatLogMyMessage_C_Destruct_Params
	{	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChatLogMyMessage_C_BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChatLogMyMessage_C_BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.ClipboardCopy
	 */
	struct UChatLogMyMessage_C_ClipboardCopy_Params
	{	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChatLogMyMessage_C_BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChatLogMyMessage_C_BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.SetWidthOverride
	 */
	struct UChatLogMyMessage_C_SetWidthOverride_Params
	{	};

	/**
	 * Function ChatLogMyMessage.ChatLogMyMessage_C.ExecuteUbergraph_ChatLogMyMessage
	 */
	struct UChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O6EJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
