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
	 * Function FixedPhrase_Menu.FixedPhrase_Menu_C.SelectFixedPhrase
	 */
	struct UFixedPhrase_Menu_C_SelectFixedPhrase_Params
	{
	public:
		int32_t                                                    InFixedPhraseId;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DQNR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFixedPhrase_Item_C*                                 InFixedPhraseItem;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FixedPhrase_Menu.FixedPhrase_Menu_C.SetDragable
	 */
	struct UFixedPhrase_Menu_C_SetDragable_Params
	{
	public:
		bool                                                       InDragable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MLLV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FixedPhrase_Menu.FixedPhrase_Menu_C.CreateFixedPhrase
	 */
	struct UFixedPhrase_Menu_C_CreateFixedPhrase_Params
	{	};

	/**
	 * Function FixedPhrase_Menu.FixedPhrase_Menu_C.Construct
	 */
	struct UFixedPhrase_Menu_C_Construct_Params
	{	};

	/**
	 * Function FixedPhrase_Menu.FixedPhrase_Menu_C.OnClick
	 */
	struct UFixedPhrase_Menu_C_OnClick_Params
	{
	public:
		int32_t                                                    InIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_772T[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UFixedPhrase_Item_C*                                 InItem;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn0_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
	 */
	struct UFixedPhrase_Menu_C_BndEvt__Btn0_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
	 */
	struct UFixedPhrase_Menu_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
	 */
	struct UFixedPhrase_Menu_C_BndEvt__Btn2_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FixedPhrase_Menu.FixedPhrase_Menu_C.BndEvt__Btn3_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
	 */
	struct UFixedPhrase_Menu_C_BndEvt__Btn3_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function FixedPhrase_Menu.FixedPhrase_Menu_C.ExecuteUbergraph_FixedPhrase_Menu
	 */
	struct UFixedPhrase_Menu_C_ExecuteUbergraph_FixedPhrase_Menu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
