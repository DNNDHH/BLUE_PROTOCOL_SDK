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
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBookmarkEnable
	 */
	struct UCommandMenuCommonSubButton_C_SetBookmarkEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBtnText
	 */
	struct UCommandMenuCommonSubButton_C_SetBtnText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetBtnImage
	 */
	struct UCommandMenuCommonSubButton_C_SetBtnImage_Params
	{
	public:
		class UImage*                                              BtnType;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.SetEnable
	 */
	struct UCommandMenuCommonSubButton_C_SetEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.Set Menu Focus
	 */
	struct UCommandMenuCommonSubButton_C_SetMenuFocus_Params
	{
	public:
		bool                                                       InFocus;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_79P0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.PreConstruct
	 */
	struct UCommandMenuCommonSubButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.Construct
	 */
	struct UCommandMenuCommonSubButton_C_Construct_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommandMenuCommonSubButton_C_BndEvt__Button_115_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCommandMenuCommonSubButton_C_BndEvt__Button_115_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCommandMenuCommonSubButton_C_BndEvt__Button_115_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.EventInAnimation
	 */
	struct UCommandMenuCommonSubButton_C_EventInAnimation_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.ExcramationIconVisible
	 */
	struct UCommandMenuCommonSubButton_C_ExcramationIconVisible_Params
	{
	public:
		bool                                                       bIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.AbortAnimAndCollapse
	 */
	struct UCommandMenuCommonSubButton_C_AbortAnimAndCollapse_Params
	{	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.ExecuteUbergraph_CommandMenuCommonSubButton
	 */
	struct UCommandMenuCommonSubButton_C_ExecuteUbergraph_CommandMenuCommonSubButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenuCommonSubButton.CommandMenuCommonSubButton_C.OnClick__DelegateSignature
	 */
	struct UCommandMenuCommonSubButton_C_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
