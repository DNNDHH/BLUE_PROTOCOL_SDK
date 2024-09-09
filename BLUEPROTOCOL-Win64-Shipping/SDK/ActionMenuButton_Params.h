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
	 * Function ActionMenuButton.ActionMenuButton_C.SetText
	 */
	struct UActionMenuButton_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function ActionMenuButton.ActionMenuButton_C.Construct
	 */
	struct UActionMenuButton_C_Construct_Params
	{	};

	/**
	 * Function ActionMenuButton.ActionMenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
	 */
	struct UActionMenuButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ActionMenuButton.ActionMenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UActionMenuButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ActionMenuButton.ActionMenuButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UActionMenuButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ActionMenuButton.ActionMenuButton_C.ExecuteUbergraph_ActionMenuButton
	 */
	struct UActionMenuButton_C_ExecuteUbergraph_ActionMenuButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ActionMenuButton.ActionMenuButton_C.OnClicked__DelegateSignature
	 */
	struct UActionMenuButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UActionMenuButton_C*                                 Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
