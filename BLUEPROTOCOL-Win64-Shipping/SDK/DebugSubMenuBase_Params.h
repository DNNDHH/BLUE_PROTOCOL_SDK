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
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.ClearMenuItem
	 */
	struct UDebugSubMenuBase_C_ClearMenuItem_Params
	{	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.AddMenuItem
	 */
	struct UDebugSubMenuBase_C_AddMenuItem_Params
	{
	public:
		class UUserWidget*                                         InItemWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.AddChildMenu
	 */
	struct UDebugSubMenuBase_C_AddChildMenu_Params
	{
	public:
		class UUserWidget*                                         InChildMenu;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.SetFocusItem
	 */
	struct UDebugSubMenuBase_C_SetFocusItem_Params
	{
	public:
		int32_t                                                    FocusItemIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J7YR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.OnButtonClicked
	 */
	struct UDebugSubMenuBase_C_OnButtonClicked_Params
	{
	public:
		class UDebugButton_C*                                      DebugButton;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.AddButton_Internal
	 */
	struct UDebugSubMenuBase_C_AddButton_Internal_Params
	{
	public:
		class FText                                                ButtonLabel;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDebugButton_C*                                      NewButton;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.AddButton
	 */
	struct UDebugSubMenuBase_C_AddButton_Params
	{
	public:
		class FText                                                ButtonLabel;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.EventDispatcher_OnClicked_Event_1
	 */
	struct UDebugSubMenuBase_C_EventDispatcher_OnClicked_Event_1_Params
	{
	public:
		class UDebugButton_C*                                      DebugButton;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.AddButtonFromArray
	 */
	struct UDebugSubMenuBase_C_AddButtonFromArray_Params
	{
	public:
		TArray<class FText>                                        ButtonLabels;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.AddButtonEx
	 */
	struct UDebugSubMenuBase_C_AddButtonEx_Params
	{
	public:
		struct FSBDebugParameter                                   InParam;                                                 // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.CustomEvent_1
	 */
	struct UDebugSubMenuBase_C_CustomEvent_1_Params
	{
	public:
		class UDebugButton_C*                                      DebugButton;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.Construct
	 */
	struct UDebugSubMenuBase_C_Construct_Params
	{	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugSubMenuBase_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugSubMenuBase.DebugSubMenuBase_C.ExecuteUbergraph_DebugSubMenuBase
	 */
	struct UDebugSubMenuBase_C_ExecuteUbergraph_DebugSubMenuBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
