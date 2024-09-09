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
	 * Function ChatTypeWindow.ChatTypeWindow_C.InitDirectChatItem
	 */
	struct UChatTypeWindow_C_InitDirectChatItem_Params
	{	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.IsEndAnimOut
	 */
	struct UChatTypeWindow_C_IsEndAnimOut_Params
	{
	public:
		bool                                                       IsEnd;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.CalcPosition
	 */
	struct UChatTypeWindow_C_CalcPosition_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.EndChat
	 */
	struct UChatTypeWindow_C_EndChat_Params
	{	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.HideWindow
	 */
	struct UChatTypeWindow_C_HideWindow_Params
	{	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.ShowWindow
	 */
	struct UChatTypeWindow_C_ShowWindow_Params
	{	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.Construct
	 */
	struct UChatTypeWindow_C_Construct_Params
	{	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature
	 */
	struct UChatTypeWindow_C_BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature_Params
	{
	public:
		class UChatWindowTypeItem_C*                               TypeItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature
	 */
	struct UChatTypeWindow_C_BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature_Params
	{
	public:
		class UChatWindowTypeItem_C*                               TypeItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature
	 */
	struct UChatTypeWindow_C_BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature_Params
	{
	public:
		class UChatWindowTypeItem_C*                               TypeItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature
	 */
	struct UChatTypeWindow_C_BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature_Params
	{
	public:
		class UChatWindowTypeItem_C*                               TypeItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.OnAnimationFinished_イベント_1
	 */
	struct UChatTypeWindow_C_OnAnimationFinished__1_Params
	{	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.OnClickedDirectChatItem
	 */
	struct UChatTypeWindow_C_OnClickedDirectChatItem_Params
	{
	public:
		class UChatWindowTypeItem_C*                               TypeItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.OnPressCancel
	 */
	struct UChatTypeWindow_C_OnPressCancel_Params
	{	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatTypeWindow_Button_Hit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UChatTypeWindow_C_BndEvt__ChatTypeWindow_Button_Hit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.ExecuteUbergraph_ChatTypeWindow
	 */
	struct UChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatTypeWindow.ChatTypeWindow_C.EventTypeSelected__DelegateSignature
	 */
	struct UChatTypeWindow_C_EventTypeSelected__DelegateSignature_Params
	{
	public:
		ESBChatLogType                                             SelectedType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
