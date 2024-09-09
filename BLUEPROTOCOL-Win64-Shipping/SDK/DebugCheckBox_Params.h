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
	 * Function DebugCheckBox.DebugCheckBox_C.Set Menu Focus
	 */
	struct UDebugCheckBox_C_SetMenuFocus_Params
	{
	public:
		bool                                                       bFocus;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_27PO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugCheckBox.DebugCheckBox_C.GetBattleHUD
	 */
	struct UDebugCheckBox_C_GetBattleHUD_Params
	{
	public:
		bool                                                       IsSuccess;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugCheckBox.DebugCheckBox_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_174_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UDebugCheckBox_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_174_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugCheckBox.DebugCheckBox_C.BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature
	 */
	struct UDebugCheckBox_C_BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function DebugCheckBox.DebugCheckBox_C.OnPressOk
	 */
	struct UDebugCheckBox_C_OnPressOk_Params
	{	};

	/**
	 * Function DebugCheckBox.DebugCheckBox_C.OnGetFocus
	 */
	struct UDebugCheckBox_C_OnGetFocus_Params
	{	};

	/**
	 * Function DebugCheckBox.DebugCheckBox_C.OnLostFocus
	 */
	struct UDebugCheckBox_C_OnLostFocus_Params
	{	};

	/**
	 * Function DebugCheckBox.DebugCheckBox_C.ChangeCheckBoxState
	 */
	struct UDebugCheckBox_C_ChangeCheckBoxState_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugCheckBox.DebugCheckBox_C.Construct
	 */
	struct UDebugCheckBox_C_Construct_Params
	{	};

	/**
	 * Function DebugCheckBox.DebugCheckBox_C.Destruct
	 */
	struct UDebugCheckBox_C_Destruct_Params
	{	};

	/**
	 * Function DebugCheckBox.DebugCheckBox_C.OnChangedFlag
	 */
	struct UDebugCheckBox_C_OnChangedFlag_Params
	{
	public:
		ESBDebugMenuType                                           MenuType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KCT0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                RowName;                                                 // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugCheckBox.DebugCheckBox_C.ExecuteUbergraph_DebugCheckBox
	 */
	struct UDebugCheckBox_C_ExecuteUbergraph_DebugCheckBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
