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
	 * Function Filter_ClassType.Filter_ClassType_C.Gen
	 */
	struct UFilter_ClassType_C_Gen_Params
	{	};

	/**
	 * Function Filter_ClassType.Filter_ClassType_C.PreConstruct
	 */
	struct UFilter_ClassType_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Filter_ClassType.Filter_ClassType_C.Construct
	 */
	struct UFilter_ClassType_C_Construct_Params
	{	};

	/**
	 * Function Filter_ClassType.Filter_ClassType_C.ResetAll
	 */
	struct UFilter_ClassType_C_ResetAll_Params
	{	};

	/**
	 * Function Filter_ClassType.Filter_ClassType_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature
	 */
	struct UFilter_ClassType_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UXJ7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFilterRadioButton_C*                                RadioButton;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Filter_ClassType.Filter_ClassType_C.ExecuteUbergraph_Filter_ClassType
	 */
	struct UFilter_ClassType_C_ExecuteUbergraph_Filter_ClassType_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
