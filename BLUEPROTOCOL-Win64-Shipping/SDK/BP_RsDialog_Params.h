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
	 * Function BP_RsDialog.BP_RsDialog_C.SetErrorMessage
	 */
	struct UBP_RsDialog_C_SetErrorMessage_Params
	{
	public:
		int32_t                                                    MessageId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog.BP_RsDialog_C.Destruct
	 */
	struct UBP_RsDialog_C_Destruct_Params
	{	};

	/**
	 * Function BP_RsDialog.BP_RsDialog_C.StartErrorMessageRsDialog
	 */
	struct UBP_RsDialog_C_StartErrorMessageRsDialog_Params
	{
	public:
		int32_t                                                    MessageId;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog.BP_RsDialog_C.StartProcessingRsDialog
	 */
	struct UBP_RsDialog_C_StartProcessingRsDialog_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_RsDialog.BP_RsDialog_C.BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBP_RsDialog_C_BndEvt__Btn_Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         InButtonWidget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog.BP_RsDialog_C.Construct
	 */
	struct UBP_RsDialog_C_Construct_Params
	{	};

	/**
	 * Function BP_RsDialog.BP_RsDialog_C.EndProcessingRsDialog
	 */
	struct UBP_RsDialog_C_EndProcessingRsDialog_Params
	{	};

	/**
	 * Function BP_RsDialog.BP_RsDialog_C.DialogEnd
	 */
	struct UBP_RsDialog_C_DialogEnd_Params
	{	};

	/**
	 * Function BP_RsDialog.BP_RsDialog_C.OnAnimationFinished
	 */
	struct UBP_RsDialog_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog.BP_RsDialog_C.DialogStart
	 */
	struct UBP_RsDialog_C_DialogStart_Params
	{
	public:
		int32_t                                                    SwitchId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RsDialog.BP_RsDialog_C.ExecuteUbergraph_BP_RsDialog
	 */
	struct UBP_RsDialog_C_ExecuteUbergraph_BP_RsDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
