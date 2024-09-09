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
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetClipboardCopy
	 */
	struct UChatLogOtherPlayerMessage_C_SetClipboardCopy_Params
	{
	public:
		bool                                                       IsCopy;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnMouseButtonDown
	 */
	struct UChatLogOtherPlayerMessage_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.GetFloatStampPoint
	 */
	struct UChatLogOtherPlayerMessage_C_GetFloatStampPoint_Params
	{
	public:
		struct FVector2D                                           NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetStamp
	 */
	struct UChatLogOtherPlayerMessage_C_SetStamp_Params
	{
	public:
		int32_t                                                    InStampId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEndInit;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QZC8[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ZeroPadding
	 */
	struct UChatLogOtherPlayerMessage_C_ZeroPadding_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RIVD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                RetValue;                                                // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.Init
	 */
	struct UChatLogOtherPlayerMessage_C_Init_Params
	{
	public:
		struct FSBChatUIMessage                                    InMessLog;                                               // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsEndInit;                                               // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCursorStampHit;                                        // 0x0071(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__FaceImageButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatLogOtherPlayerMessage_C_BndEvt__FaceImageButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.DonwloadFaceImage_Event
	 */
	struct UChatLogOtherPlayerMessage_C_DonwloadFaceImage_Event_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnTimeEvent
	 */
	struct UChatLogOtherPlayerMessage_C_OnTimeEvent_Params
	{	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChatLogOtherPlayerMessage_C_BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChatLogOtherPlayerMessage_C_BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChatLogOtherPlayerMessage_C_BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChatLogOtherPlayerMessage_C_BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ClipboardCopy
	 */
	struct UChatLogOtherPlayerMessage_C_ClipboardCopy_Params
	{	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.Destruct
	 */
	struct UChatLogOtherPlayerMessage_C_Destruct_Params
	{	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnGetPlayerProfile
	 */
	struct UChatLogOtherPlayerMessage_C_OnGetPlayerProfile_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1F04[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnClose_Event
	 */
	struct UChatLogOtherPlayerMessage_C_OnClose_Event_Params
	{	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetWidthOverride
	 */
	struct UChatLogOtherPlayerMessage_C_SetWidthOverride_Params
	{	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ExecuteUbergraph_ChatLogOtherPlayerMessage
	 */
	struct UChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GSTB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnClickedDirectMessage__DelegateSignature
	 */
	struct UChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature_Params
	{
	public:
		class FString                                              TagertPlayerId;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                TagertName;                                              // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              CharacterId;                                             // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESBPrivilegeType                                           PrivilegeType;                                           // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
