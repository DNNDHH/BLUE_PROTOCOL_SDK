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
	 * Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.Set New Icon
	 */
	struct ULibraryMenu_ListItem_C_SetNewIcon_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.SetBtnSelected
	 */
	struct ULibraryMenu_ListItem_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6MQE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.SetName
	 */
	struct ULibraryMenu_ListItem_C_SetName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.Construct
	 */
	struct ULibraryMenu_ListItem_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_ListItem_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_ListItem_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_103_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_ListItem_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_122_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.ExecuteUbergraph_LibraryMenu_ListItem
	 */
	struct ULibraryMenu_ListItem_C_ExecuteUbergraph_LibraryMenu_ListItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_ListItem.LibraryMenu_ListItem_C.OnClick__DelegateSignature
	 */
	struct ULibraryMenu_ListItem_C_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
