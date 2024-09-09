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
	 * Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.Initialize
	 */
	struct UUsedCheck_CheckBox_C_Initialize_Params
	{	};

	/**
	 * Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.Construct
	 */
	struct UUsedCheck_CheckBox_C_Construct_Params
	{	};

	/**
	 * Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUsedCheck_CheckBox_C_BndEvt__UsedCheck_CheckBox_Chk_Enable_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.ExecuteUbergraph_UsedCheck_CheckBox
	 */
	struct UUsedCheck_CheckBox_C_ExecuteUbergraph_UsedCheck_CheckBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UsedCheck_CheckBox.UsedCheck_CheckBox_C.OnChangeFlag__DelegateSignature
	 */
	struct UUsedCheck_CheckBox_C_OnChangeFlag__DelegateSignature_Params
	{
	public:
		ESBUseCheckDialogType                                      Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       enable;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
