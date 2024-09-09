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
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.GetShortcutItemInfo
	 */
	struct UChatStampButtonItem_C_GetShortcutItemInfo_Params
	{
	public:
		struct FShortcutItemInfo                                   OutShortcutItemInfo;                                     // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.SefFloatStampOrder
	 */
	struct UChatStampButtonItem_C_SefFloatStampOrder_Params
	{
	public:
		EUIZOrder                                                  InOrder;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.SetShortcutIcon
	 */
	struct UChatStampButtonItem_C_SetShortcutIcon_Params
	{
	public:
		class FString                                              StampId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsVisibility;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.SetLimitedTimeIcon
	 */
	struct UChatStampButtonItem_C_SetLimitedTimeIcon_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.GetFloatStampPoint
	 */
	struct UChatStampButtonItem_C_GetFloatStampPoint_Params
	{
	public:
		struct FVector2D                                           OutPos;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.SetViewLarger
	 */
	struct UChatStampButtonItem_C_SetViewLarger_Params
	{
	public:
		bool                                                       InViewLarger;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.SetPressedSoundId
	 */
	struct UChatStampButtonItem_C_SetPressedSoundId_Params
	{
	public:
		ESystemSE                                                  PressedSystemSEId;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.OnDragDetected
	 */
	struct UChatStampButtonItem_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.OnPreviewMouseButtonDown
	 */
	struct UChatStampButtonItem_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.SetDragable
	 */
	struct UChatStampButtonItem_C_SetDragable_Params
	{
	public:
		bool                                                       InDragable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.SetIconSelected
	 */
	struct UChatStampButtonItem_C_SetIconSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TS5T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.SetStamp
	 */
	struct UChatStampButtonItem_C_SetStamp_Params
	{
	public:
		int32_t                                                    InStampId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WR43[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChatStampButtonItem_C_BndEvt__StampButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.Construct
	 */
	struct UChatStampButtonItem_C_Construct_Params
	{	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UChatStampButtonItem_C_BndEvt__StampButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.Destruct
	 */
	struct UChatStampButtonItem_C_Destruct_Params
	{	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.OnChangeCoolTimeStamp
	 */
	struct UChatStampButtonItem_C_OnChangeCoolTimeStamp_Params
	{
	public:
		bool                                                       IsCoolTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.OnValidStampDelegate_Event_1
	 */
	struct UChatStampButtonItem_C_OnValidStampDelegate_Event_1_Params
	{
	public:
		bool                                                       bValid;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NR8M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    StampId;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.BndEvt__StampButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatStampButtonItem_C_BndEvt__StampButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.ExecuteUbergraph_ChatStampButtonItem
	 */
	struct UChatStampButtonItem_C_ExecuteUbergraph_ChatStampButtonItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.OnSelectRight__DelegateSignature
	 */
	struct UChatStampButtonItem_C_OnSelectRight__DelegateSignature_Params
	{
	public:
		int32_t                                                    RetStampID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0G0E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UChatStampButtonItem_C*                              InSelectItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatStampButtonItem.ChatStampButtonItem_C.OnSelect__DelegateSignature
	 */
	struct UChatStampButtonItem_C_OnSelect__DelegateSignature_Params
	{
	public:
		int32_t                                                    RetStampID;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E4GV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UChatStampButtonItem_C*                              InSelectItem;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
