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
	 * Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.SetBtnSelected
	 */
	struct UCommandMenu_MenuItem3_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L5RX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.SetSoundID
	 */
	struct UCommandMenu_MenuItem3_C_SetSoundID_Params
	{
	public:
		ESystemSE                                                  SoundId;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.SetTextId
	 */
	struct UCommandMenu_MenuItem3_C_SetTextId_Params
	{
	public:
		int32_t                                                    TextId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W8R5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.PreConstruct
	 */
	struct UCommandMenu_MenuItem3_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCommandMenu_MenuItem3_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_113_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCommandMenu_MenuItem3_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_130_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCommandMenu_MenuItem3_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_140_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.ExecuteUbergraph_CommandMenu_MenuItem3
	 */
	struct UCommandMenu_MenuItem3_C_ExecuteUbergraph_CommandMenu_MenuItem3_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommandMenu_MenuItem3.CommandMenu_MenuItem3_C.EventClicked__DelegateSignature
	 */
	struct UCommandMenu_MenuItem3_C_EventClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
