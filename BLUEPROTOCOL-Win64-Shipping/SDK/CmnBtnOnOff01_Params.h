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
	 * Function CmnBtnOnOff01.CmnBtnOnOff01_C.SetSelected
	 */
	struct UCmnBtnOnOff01_C_SetSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6XCE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnBtnOnOff01.CmnBtnOnOff01_C.SetSoundID
	 */
	struct UCmnBtnOnOff01_C_SetSoundID_Params
	{
	public:
		ESystemSE                                                  SoundId;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtnOnOff01.CmnBtnOnOff01_C.SetTextName
	 */
	struct UCmnBtnOnOff01_C_SetTextName_Params
	{
	public:
		class FName                                                InTextName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtnOnOff01.CmnBtnOnOff01_C.SetTextId
	 */
	struct UCmnBtnOnOff01_C_SetTextId_Params
	{
	public:
		int32_t                                                    TextId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X4AA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CmnBtnOnOff01.CmnBtnOnOff01_C.PreConstruct
	 */
	struct UCmnBtnOnOff01_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CmnBtnOnOff01.CmnBtnOnOff01_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnBtnOnOff01_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtnOnOff01.CmnBtnOnOff01_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCmnBtnOnOff01_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtnOnOff01.CmnBtnOnOff01_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCmnBtnOnOff01_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CmnBtnOnOff01.CmnBtnOnOff01_C.ExecuteUbergraph_CmnBtnOnOff01
	 */
	struct UCmnBtnOnOff01_C_ExecuteUbergraph_CmnBtnOnOff01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CmnBtnOnOff01.CmnBtnOnOff01_C.EventOnClicked__DelegateSignature
	 */
	struct UCmnBtnOnOff01_C_EventOnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
