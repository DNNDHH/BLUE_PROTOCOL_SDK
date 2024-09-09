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
	 * Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.SetPossessionMarkIcon
	 */
	struct ULibraryMenu_ListItemIcon_C_SetPossessionMarkIcon_Params
	{
	public:
		bool                                                       InVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.SetBtnSelected
	 */
	struct ULibraryMenu_ListItemIcon_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UITH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.SetName
	 */
	struct ULibraryMenu_ListItemIcon_C_SetName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_ListItemIcon_C_BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_147_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.Construct
	 */
	struct ULibraryMenu_ListItemIcon_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_ListItemIcon_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_80_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature
	 */
	struct ULibraryMenu_ListItemIcon_C_BndEvt__Btn1_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.ExecuteUbergraph_LibraryMenu_ListItemIcon
	 */
	struct ULibraryMenu_ListItemIcon_C_ExecuteUbergraph_LibraryMenu_ListItemIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_ListItemIcon.LibraryMenu_ListItemIcon_C.OnClick__DelegateSignature
	 */
	struct ULibraryMenu_ListItemIcon_C_OnClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
