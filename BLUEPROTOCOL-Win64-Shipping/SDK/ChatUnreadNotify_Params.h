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
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.InitChatLogData
	 */
	struct UChatUnreadNotify_C_InitChatLogData_Params
	{	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.CheckMessageWidth
	 */
	struct UChatUnreadNotify_C_CheckMessageWidth_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsEllipsisWidthSize;                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Exceeded;                                                // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.SetTextOverflowEllipsis
	 */
	struct UChatUnreadNotify_C_SetTextOverflowEllipsis_Params
	{
	public:
		class FString                                              InStr;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.VisibleCheck
	 */
	struct UChatUnreadNotify_C_VisibleCheck_Params
	{
	public:
		struct FSBChatUIMessage                                    ChatUIMessage;                                           // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bResult;                                                 // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P8PZ[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.UpdateFilter
	 */
	struct UChatUnreadNotify_C_UpdateFilter_Params
	{
	public:
		ESBChatLogWindowSlot                                       Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.SetMessage
	 */
	struct UChatUnreadNotify_C_SetMessage_Params
	{
	public:
		struct FSBChatUIMessage                                    InChatUIMessage;                                         // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.Construct
	 */
	struct UChatUnreadNotify_C_Construct_Params
	{	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.DownLoadFaceImage_Event
	 */
	struct UChatUnreadNotify_C_DownLoadFaceImage_Event_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 */
	struct UChatUnreadNotify_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.PlayAnim
	 */
	struct UChatUnreadNotify_C_PlayAnim_Params
	{	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.Destruct
	 */
	struct UChatUnreadNotify_C_Destruct_Params
	{	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.OnReciveMessageToUnreadNotify_Event
	 */
	struct UChatUnreadNotify_C_OnReciveMessageToUnreadNotify_Event_Params
	{
	public:
		ESBChatLogWindowSlot                                       Slot;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UIBB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBChatUIMessage                                    UIMessage;                                               // 0x0008(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.OnReceiveMessageDelegate_Event
	 */
	struct UChatUnreadNotify_C_OnReceiveMessageDelegate_Event_Params
	{
	public:
		class USBChatMessage*                                      Message;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBChatUIMessage                                    Mess;                                                    // 0x0008(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ChatUnreadNotify.ChatUnreadNotify_C.ExecuteUbergraph_ChatUnreadNotify
	 */
	struct UChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
