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
	 * Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.SetMouseClickValue
	 */
	struct ULibraryMenu_LoginBonusListLineItem_C_SetMouseClickValue_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.SetData
	 */
	struct ULibraryMenu_LoginBonusListLineItem_C_SetData_Params
	{
	public:
		struct FSBLoginBonusWindowDayData                          Data;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       StumpOn;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NNZA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.BndEvt__ExplainOpen_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonusListLineItem_C_BndEvt__ExplainOpen_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.BndEvt__ExplainOpen_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonusListLineItem_C_BndEvt__ExplainOpen_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem
	 */
	struct ULibraryMenu_LoginBonusListLineItem_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLineItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusListLineItem.LibraryMenu_LoginBonusListLineItem_C.ItemClick__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonusListLineItem_C_ItemClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
