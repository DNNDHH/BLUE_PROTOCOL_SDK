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
	 * Function CmnBtn23.CmnBtn23_C.SetTextId
	 */
	struct UCmnBtn23_C_SetTextId_Params
	{
	public:
		int32_t                                                    InTextId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q53X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnBtn23.CmnBtn23_C.SetSelected
	 */
	struct UCmnBtn23_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RSJK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnBtn23.CmnBtn23_C.SetHoveredSoundId
	 */
	struct UCmnBtn23_C_SetHoveredSoundId_Params
	{
	public:
		ESystemSE                                                  InSoundId;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn23.CmnBtn23_C.SetPressedSoundId
	 */
	struct UCmnBtn23_C_SetPressedSoundId_Params
	{
	public:
		ESystemSE                                                  InSoundId;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn23.CmnBtn23_C.PreConstruct
	 */
	struct UCmnBtn23_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnBtn23.CmnBtn23_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnBtn23_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn23.CmnBtn23_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnBtn23_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn23.CmnBtn23_C.BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnBtn23_C_BndEvt__Btn01_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtn23.CmnBtn23_C.ExecuteUbergraph_CmnBtn23
	 */
	struct UCmnBtn23_C_ExecuteUbergraph_CmnBtn23_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtn23.CmnBtn23_C.EventOnClicked__DelegateSignature
	 */
	struct UCmnBtn23_C_EventOnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
