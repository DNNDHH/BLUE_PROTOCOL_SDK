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
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.ClearComboBox
	 */
	struct UMapWidget_CompoundBox_C_ClearComboBox_Params
	{	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.On_CBox_1_GenerateWidget_1
	 */
	struct UMapWidget_CompoundBox_C_On_CBox_1_GenerateWidget_1_Params
	{
	public:
		class FString                                              item;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UWidget*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetComboBoxEnable
	 */
	struct UMapWidget_CompoundBox_C_SetComboBoxEnable_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetTitleTextId
	 */
	struct UMapWidget_CompoundBox_C_SetTitleTextId_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetTitleText
	 */
	struct UMapWidget_CompoundBox_C_SetTitleText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetOptionWidgetVisibility
	 */
	struct UMapWidget_CompoundBox_C_SetOptionWidgetVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetWidgetToOptionCanvas
	 */
	struct UMapWidget_CompoundBox_C_SetWidgetToOptionCanvas_Params
	{
	public:
		class UUserWidget*                                         InUserWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.SetComboBoxItemSelected
	 */
	struct UMapWidget_CompoundBox_C_SetComboBoxItemSelected_Params
	{
	public:
		class FString                                              InItemName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.AddItemToComboBox
	 */
	struct UMapWidget_CompoundBox_C_AddItemToComboBox_Params
	{
	public:
		class FString                                              InItemName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.Destruct
	 */
	struct UMapWidget_CompoundBox_C_Destruct_Params
	{	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UMapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
	 */
	struct UMapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.BndEvt__SBComboBox_K2Node_ComponentBoundEvent_3_OnClosingEvent__DelegateSignature
	 */
	struct UMapWidget_CompoundBox_C_BndEvt__SBComboBox_K2Node_ComponentBoundEvent_3_OnClosingEvent__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.ExecuteUbergraph_MapWidget_CompoundBox
	 */
	struct UMapWidget_CompoundBox_C_ExecuteUbergraph_MapWidget_CompoundBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnListBoxClosed__DelegateSignature
	 */
	struct UMapWidget_CompoundBox_C_OnListBoxClosed__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnListBoxOpened__DelegateSignature
	 */
	struct UMapWidget_CompoundBox_C_OnListBoxOpened__DelegateSignature_Params
	{	};

	/**
	 * Function MapWidget_CompoundBox.MapWidget_CompoundBox_C.OnItemSelected__DelegateSignature
	 */
	struct UMapWidget_CompoundBox_C_OnItemSelected__DelegateSignature_Params
	{
	public:
		class FString                                              InSelectedItemName;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InSelectedItemId;                                        // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
