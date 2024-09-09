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
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.UpdateReadRecipeTab
	 */
	struct ULibraryMenu_WeaponDetails_C_UpdateReadRecipeTab_Params
	{	};

	/**
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetActiveTab
	 */
	struct ULibraryMenu_WeaponDetails_C_SetActiveTab_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HVD1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetWeaponData
	 */
	struct ULibraryMenu_WeaponDetails_C_SetWeaponData_Params
	{
	public:
		struct FSBWeaponMasterData                                 InWeaponMasterData;                                      // 0x0000(0x00C8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.SetDetailsVisibility
	 */
	struct ULibraryMenu_WeaponDetails_C_SetDetailsVisibility_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U7H5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_WeaponDetails_C_BndEvt__LibraryMenu_ItemDetails_DetailTabButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct ULibraryMenu_WeaponDetails_C_BndEvt__LibraryMenu_ItemDetails_ExplainTabButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.Construct
	 */
	struct ULibraryMenu_WeaponDetails_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.Destruct
	 */
	struct ULibraryMenu_WeaponDetails_C_Destruct_Params
	{	};

	/**
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_WeaponDetails_C_BndEvt__LibraryMenu_WeaponDetails_WindowOpenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.OnWeaponLoaded_Event
	 */
	struct ULibraryMenu_WeaponDetails_C_OnWeaponLoaded_Event_Params
	{	};

	/**
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.ExecuteUbergraph_LibraryMenu_WeaponDetails
	 */
	struct ULibraryMenu_WeaponDetails_C_ExecuteUbergraph_LibraryMenu_WeaponDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.OnClickZoomIn__DelegateSignature
	 */
	struct ULibraryMenu_WeaponDetails_C_OnClickZoomIn__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_WeaponDetails.LibraryMenu_WeaponDetails_C.OnRecipeTabRead__DelegateSignature
	 */
	struct ULibraryMenu_WeaponDetails_C_OnRecipeTabRead__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
