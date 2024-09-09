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
	 * Function SelectorDialogBtn.SelectorDialogBtn_C.Set Btn Width
	 */
	struct USelectorDialogBtn_C_SetBtnWidth_Params
	{
	public:
		float                                                      BtnWidth;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectorDialogBtn.SelectorDialogBtn_C.SetSelected
	 */
	struct USelectorDialogBtn_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectorDialogBtn.SelectorDialogBtn_C.BndEvt__Selector_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USelectorDialogBtn_C_BndEvt__Selector_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectorDialogBtn.SelectorDialogBtn_C.SetString
	 */
	struct USelectorDialogBtn_C_SetString_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectorDialogBtn.SelectorDialogBtn_C.BndEvt__Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct USelectorDialogBtn_C_BndEvt__Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectorDialogBtn.SelectorDialogBtn_C.BndEvt__Selector_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct USelectorDialogBtn_C_BndEvt__Selector_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SelectorDialogBtn.SelectorDialogBtn_C.Construct
	 */
	struct USelectorDialogBtn_C_Construct_Params
	{	};

	/**
	 * Function SelectorDialogBtn.SelectorDialogBtn_C.Set UseCheck
	 */
	struct USelectorDialogBtn_C_SetUseCheck_Params
	{
	public:
		bool                                                       bUse;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectorDialogBtn.SelectorDialogBtn_C.ExecuteUbergraph_SelectorDialogBtn
	 */
	struct USelectorDialogBtn_C_ExecuteUbergraph_SelectorDialogBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectorDialogBtn.SelectorDialogBtn_C.OnSelected__DelegateSignature
	 */
	struct USelectorDialogBtn_C_OnSelected__DelegateSignature_Params
	{
	public:
		class USelectorDialogBtn_C*                                Selected;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SelectNum;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
