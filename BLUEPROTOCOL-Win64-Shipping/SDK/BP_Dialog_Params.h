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
	 * Function BP_Dialog.BP_Dialog_C.SetPosition
	 */
	struct UBP_Dialog_C_SetPosition_Params
	{
	public:
		EDialogPositionType                                        PositionType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_04OR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.Construct
	 */
	struct UBP_Dialog_C_Construct_Params
	{	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.Hide
	 */
	struct UBP_Dialog_C_Hide_Params
	{	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.StartMessageDialog
	 */
	struct UBP_Dialog_C_StartMessageDialog_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EDialogPositionType                                        Type;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEnableBgBlur;                                           // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.StartYesNoDialog
	 */
	struct UBP_Dialog_C_StartYesNoDialog_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EDialogPositionType                                        Type;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEnableBgBlur;                                           // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.Destruct
	 */
	struct UBP_Dialog_C_Destruct_Params
	{	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.OnAnimationFinished
	 */
	struct UBP_Dialog_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.ChangeMessage
	 */
	struct UBP_Dialog_C_ChangeMessage_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature
	 */
	struct UBP_Dialog_C_BndEvt__Button1_2_K2Node_ComponentBoundEvent_99_OnClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InButtonWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature
	 */
	struct UBP_Dialog_C_BndEvt__Button2_K2Node_ComponentBoundEvent_462_OnClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InButtonWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature
	 */
	struct UBP_Dialog_C_BndEvt__ButtonNo_K2Node_ComponentBoundEvent_682_OnClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InButtonWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.OnDestructMainWidget
	 */
	struct UBP_Dialog_C_OnDestructMainWidget_Params
	{	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.OnPress_Cancel
	 */
	struct UBP_Dialog_C_OnPress_Cancel_Params
	{	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.OnPress_Ok
	 */
	struct UBP_Dialog_C_OnPress_Ok_Params
	{	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.SetPositionType_2
	 */
	struct UBP_Dialog_C_SetPositionType_2_Params
	{	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.SetYesButtonClickSe
	 */
	struct UBP_Dialog_C_SetYesButtonClickSe_Params
	{
	public:
		class UAkAudioEvent*                                       AkEvent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              EventName;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.SetInputBlockerMode
	 */
	struct UBP_Dialog_C_SetInputBlockerMode_Params
	{
	public:
		bool                                                       bIsBlock;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.SetCheckBoxMessage
	 */
	struct UBP_Dialog_C_SetCheckBoxMessage_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q314[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UBP_Dialog_C_BndEvt__BP_Dialog_SBCheckBox_C_121_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.ShowWarning
	 */
	struct UBP_Dialog_C_ShowWarning_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Dialog.BP_Dialog_C.ExecuteUbergraph_BP_Dialog
	 */
	struct UBP_Dialog_C_ExecuteUbergraph_BP_Dialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
