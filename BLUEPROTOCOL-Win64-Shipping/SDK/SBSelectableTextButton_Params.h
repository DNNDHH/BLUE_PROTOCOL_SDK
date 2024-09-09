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
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.SearchChildText
	 */
	struct USBSelectableTextButton_C_SearchChildText_Params
	{
	public:
		class UPanelWidget*                                        PanelWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.IsSelected
	 */
	struct USBSelectableTextButton_C_IsSelected_Params
	{
	public:
		bool                                                       bIsSelected;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.InitChildText
	 */
	struct USBSelectableTextButton_C_InitChildText_Params
	{	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.SetSelected
	 */
	struct USBSelectableTextButton_C_SetSelected_Params
	{
	public:
		bool                                                       bSelect;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.InitBothStyle
	 */
	struct USBSelectableTextButton_C_InitBothStyle_Params
	{
	public:
		struct FButtonStyle                                        SelectedStyle;                                           // 0x0000(0x0278)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.OnHovered_Event_1
	 */
	struct USBSelectableTextButton_C_OnHovered_Event_1_Params
	{	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.OnUnhovered_Event_1
	 */
	struct USBSelectableTextButton_C_OnUnhovered_Event_1_Params
	{	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.UpdateChildTextColor
	 */
	struct USBSelectableTextButton_C_UpdateChildTextColor_Params
	{	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.Construct
	 */
	struct USBSelectableTextButton_C_Construct_Params
	{	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.PreConstruct
	 */
	struct USBSelectableTextButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.UpdateButtonStyle
	 */
	struct USBSelectableTextButton_C_UpdateButtonStyle_Params
	{	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.OnPressed_Event_1
	 */
	struct USBSelectableTextButton_C_OnPressed_Event_1_Params
	{	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.OnReleased_Event_1
	 */
	struct USBSelectableTextButton_C_OnReleased_Event_1_Params
	{	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.UpdateButtonStyleByDesignCheck
	 */
	struct USBSelectableTextButton_C_UpdateButtonStyleByDesignCheck_Params
	{	};

	/**
	 * Function SBSelectableTextButton.SBSelectableTextButton_C.ExecuteUbergraph_SBSelectableTextButton
	 */
	struct USBSelectableTextButton_C_ExecuteUbergraph_SBSelectableTextButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
