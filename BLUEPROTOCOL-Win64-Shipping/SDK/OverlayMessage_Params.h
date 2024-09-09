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
	 * Function OverlayMessage.OverlayMessage_C.SetResultForButton
	 */
	struct UOverlayMessage_C_SetResultForButton_Params
	{
	public:
		class USBButton_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.ChangeCurrentButton
	 */
	struct UOverlayMessage_C_ChangeCurrentButton_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ULJG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.OnRepeat_Left
	 */
	struct UOverlayMessage_C_OnRepeat_Left_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.OnRepeat_Right
	 */
	struct UOverlayMessage_C_OnRepeat_Right_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.OnPress_Ok
	 */
	struct UOverlayMessage_C_OnPress_Ok_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.StartMessageDialog
	 */
	struct UOverlayMessage_C_StartMessageDialog_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.StartYesNoDialog
	 */
	struct UOverlayMessage_C_StartYesNoDialog_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOverlayMessage_C_BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_245_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOverlayMessage_C_BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_245_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_269_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOverlayMessage_C_BndEvt__SBButton_Message_K2Node_ComponentBoundEvent_269_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOverlayMessage_C_BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_465_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOverlayMessage_C_BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_465_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_492_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOverlayMessage_C_BndEvt__SBButton_C_1_K2Node_ComponentBoundEvent_492_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_No_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature
	 */
	struct UOverlayMessage_C_BndEvt__SBButton_No_K2Node_ComponentBoundEvent_612_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_No_K2Node_ComponentBoundEvent_646_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOverlayMessage_C_BndEvt__SBButton_No_K2Node_ComponentBoundEvent_646_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.BndEvt__SBButton_No_K2Node_ComponentBoundEvent_676_OnButtonHoverEvent__DelegateSignature
	 */
	struct UOverlayMessage_C_BndEvt__SBButton_No_K2Node_ComponentBoundEvent_676_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.Construct
	 */
	struct UOverlayMessage_C_Construct_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.HideDialog
	 */
	struct UOverlayMessage_C_HideDialog_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.Destruct
	 */
	struct UOverlayMessage_C_Destruct_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.OnAnimationFinished
	 */
	struct UOverlayMessage_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.OnPress_Cancel
	 */
	struct UOverlayMessage_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.ExecuteUbergraph_OverlayMessage
	 */
	struct UOverlayMessage_C_ExecuteUbergraph_OverlayMessage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function OverlayMessage.OverlayMessage_C.OnHide__DelegateSignature
	 */
	struct UOverlayMessage_C_OnHide__DelegateSignature_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
