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
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.UpdatePopTime
	 */
	struct UChatLogWindowTempList_C_UpdatePopTime_Params
	{	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetUnreadIconVisible
	 */
	struct UChatLogWindowTempList_C_SetUnreadIconVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.IsVisibleChat
	 */
	struct UChatLogWindowTempList_C_IsVisibleChat_Params
	{
	public:
		struct FSBChatUIMessage                                    InChatMessage;                                           // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsVisible;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetVisible
	 */
	struct UChatLogWindowTempList_C_SetVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.CreateMessageEntry
	 */
	struct UChatLogWindowTempList_C_CreateMessageEntry_Params
	{
	public:
		struct FSBChatUIMessage                                    InMess;                                                  // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bRecieve;                                                // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.ClearLogList
	 */
	struct UChatLogWindowTempList_C_ClearLogList_Params
	{	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetWindowSize
	 */
	struct UChatLogWindowTempList_C_SetWindowSize_Params
	{
	public:
		struct FVector2D                                           InSize;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.GetWindowSize
	 */
	struct UChatLogWindowTempList_C_GetWindowSize_Params
	{
	public:
		struct FVector2D                                           retSize;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetEditMode
	 */
	struct UChatLogWindowTempList_C_SetEditMode_Params
	{
	public:
		bool                                                       InEdit;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.HideWindow
	 */
	struct UChatLogWindowTempList_C_HideWindow_Params
	{	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.ShowWindow
	 */
	struct UChatLogWindowTempList_C_ShowWindow_Params
	{	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.Construct
	 */
	struct UChatLogWindowTempList_C_Construct_Params
	{	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnCreateMessage_Event
	 */
	struct UChatLogWindowTempList_C_OnCreateMessage_Event_Params
	{
	public:
		struct FSBChatUIMessage                                    InMess;                                                  // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bRecieve;                                                // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnUpdateFilterType
	 */
	struct UChatLogWindowTempList_C_OnUpdateFilterType_Params
	{
	public:
		int32_t                                                    InType;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnPopTimeEnd
	 */
	struct UChatLogWindowTempList_C_OnPopTimeEnd_Params
	{	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
	 */
	struct UChatLogWindowTempList_C_BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.Destruct
	 */
	struct UChatLogWindowTempList_C_Destruct_Params
	{	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnLogWindowTempVisibleDelegate_Event
	 */
	struct UChatLogWindowTempList_C_OnLogWindowTempVisibleDelegate_Event_Params
	{	};

	/**
	 * Function ChatLogWindowTempList.ChatLogWindowTempList_C.ExecuteUbergraph_ChatLogWindowTempList
	 */
	struct UChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
