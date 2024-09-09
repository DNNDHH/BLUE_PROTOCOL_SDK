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
	 * Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.Generate
	 */
	struct UFilter_ProtectorEquipPosition_C_Generate_Params
	{	};

	/**
	 * Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.PreConstruct
	 */
	struct UFilter_ProtectorEquipPosition_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.Construct
	 */
	struct UFilter_ProtectorEquipPosition_C_Construct_Params
	{	};

	/**
	 * Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.ResetAll
	 */
	struct UFilter_ProtectorEquipPosition_C_ResetAll_Params
	{	};

	/**
	 * Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature
	 */
	struct UFilter_ProtectorEquipPosition_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DA0H[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFilterRadioButton_C*                                RadioButton;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Filter_ProtectorEquipPosition.Filter_ProtectorEquipPosition_C.ExecuteUbergraph_Filter_ProtectorEquipPosition
	 */
	struct UFilter_ProtectorEquipPosition_C_ExecuteUbergraph_Filter_ProtectorEquipPosition_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
