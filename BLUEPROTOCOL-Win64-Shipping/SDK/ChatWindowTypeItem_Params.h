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
	 * Function ChatWindowTypeItem.ChatWindowTypeItem_C.SetDirectChatData
	 */
	struct UChatWindowTypeItem_C_SetDirectChatData_Params
	{
	public:
		struct FSBDirectChatSenderLogData                          InSenderData;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ChatWindowTypeItem.ChatWindowTypeItem_C.GetTypeWindowPosition
	 */
	struct UChatWindowTypeItem_C_GetTypeWindowPosition_Params
	{
	public:
		struct FVector2D                                           Position;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatWindowTypeItem.ChatWindowTypeItem_C.SetType
	 */
	struct UChatWindowTypeItem_C_SetType_Params
	{
	public:
		ESBChatLogType                                             InChatLogType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatWindowTypeItem.ChatWindowTypeItem_C.PreConstruct
	 */
	struct UChatWindowTypeItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatWindowTypeItem.ChatWindowTypeItem_C.BndEvt__ChatWindowTypeItem_Btn1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UChatWindowTypeItem_C_BndEvt__ChatWindowTypeItem_Btn1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatWindowTypeItem.ChatWindowTypeItem_C.BndEvt__ChatWindowTypeItem_Btn1_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UChatWindowTypeItem_C_BndEvt__ChatWindowTypeItem_Btn1_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatWindowTypeItem.ChatWindowTypeItem_C.ExecuteUbergraph_ChatWindowTypeItem
	 */
	struct UChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatWindowTypeItem.ChatWindowTypeItem_C.EventBtnClicked__DelegateSignature
	 */
	struct UChatWindowTypeItem_C_EventBtnClicked__DelegateSignature_Params
	{
	public:
		class UChatWindowTypeItem_C*                               TypeItem;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
