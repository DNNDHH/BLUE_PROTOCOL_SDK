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
	 * Function HUDConfigMode.HUDConfigMode_C.On_Cmb_HelpDisplay_GenerateWidget_1
	 */
	struct UHUDConfigMode_C_On_Cmb_HelpDisplay_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDConfigMode.HUDConfigMode_C.On_Cmb_BasePlate_GenerateWidget_1
	 */
	struct UHUDConfigMode_C_On_Cmb_BasePlate_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDConfigMode.HUDConfigMode_C.GenerateCmbBox
	 */
	struct UHUDConfigMode_C_GenerateCmbBox_Params
	{	};

	/**
	 * Function HUDConfigMode.HUDConfigMode_C.Construct
	 */
	struct UHUDConfigMode_C_Construct_Params
	{	};

	/**
	 * Function HUDConfigMode.HUDConfigMode_C.EndEdit
	 */
	struct UHUDConfigMode_C_EndEdit_Params
	{	};

	/**
	 * Function HUDConfigMode.HUDConfigMode_C.bEditMode
	 */
	struct UHUDConfigMode_C_bEditMode_Params
	{
	public:
		bool                                                       bIsEditMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUDConfigMode.HUDConfigMode_C.BndEvt__StartEdit_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UHUDConfigMode_C_BndEvt__StartEdit_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function HUDConfigMode.HUDConfigMode_C.BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UHUDConfigMode_C_BndEvt__Cmb_BasePlate_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDConfigMode.HUDConfigMode_C.BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UHUDConfigMode_C_BndEvt__Cmb_HelpDisplay_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDConfigMode.HUDConfigMode_C.SyncKeyGuide
	 */
	struct UHUDConfigMode_C_SyncKeyGuide_Params
	{	};

	/**
	 * Function HUDConfigMode.HUDConfigMode_C.ExecuteUbergraph_HUDConfigMode
	 */
	struct UHUDConfigMode_C_ExecuteUbergraph_HUDConfigMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUDConfigMode.HUDConfigMode_C.StartEditMode__DelegateSignature
	 */
	struct UHUDConfigMode_C_StartEditMode__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
