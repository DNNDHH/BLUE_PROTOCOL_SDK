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
	 * Function Filter_AdventureBoard.Filter_AdventureBoard_C.IsFilterActive
	 */
	struct UFilter_AdventureBoard_C_IsFilterActive_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsActive;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Filter_AdventureBoard.Filter_AdventureBoard_C.CreateFilterList
	 */
	struct UFilter_AdventureBoard_C_CreateFilterList_Params
	{	};

	/**
	 * Function Filter_AdventureBoard.Filter_AdventureBoard_C.Construct
	 */
	struct UFilter_AdventureBoard_C_Construct_Params
	{	};

	/**
	 * Function Filter_AdventureBoard.Filter_AdventureBoard_C.BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature
	 */
	struct UFilter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UD85[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFilterRadioButton_C*                                RadioButton;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Filter_AdventureBoard.Filter_AdventureBoard_C.ResetAll
	 */
	struct UFilter_AdventureBoard_C_ResetAll_Params
	{	};

	/**
	 * Function Filter_AdventureBoard.Filter_AdventureBoard_C.ExecuteUbergraph_Filter_AdventureBoard
	 */
	struct UFilter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
