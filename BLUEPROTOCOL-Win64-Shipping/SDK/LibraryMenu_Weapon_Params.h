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
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.TermRequest
	 */
	struct ULibraryMenu_Weapon_C_TermRequest_Params
	{
	public:
		ESubMenuTermReason                                         InReason;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESubMenuTermRequestReply                                   ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.CreateData
	 */
	struct ULibraryMenu_Weapon_C_CreateData_Params
	{	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.UpdateCategoryNewIcon
	 */
	struct ULibraryMenu_Weapon_C_UpdateCategoryNewIcon_Params
	{
	public:
		int32_t                                                    InCategoryId;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InListIndex;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCheckAllRead;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.IsSecretItem
	 */
	struct ULibraryMenu_Weapon_C_IsSecretItem_Params
	{
	public:
		int32_t                                                    WeaponID;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BU3H[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.CreateWeaponList
	 */
	struct ULibraryMenu_Weapon_C_CreateWeaponList_Params
	{	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.CreateCategoryList
	 */
	struct ULibraryMenu_Weapon_C_CreateCategoryList_Params
	{	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature
	 */
	struct ULibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_CategoryList_Type1_K2Node_ComponentBoundEvent_0_CategoryChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature
	 */
	struct ULibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_LibraryMenu_WeaponDetails_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature
	 */
	struct ULibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_LibraryMenu_WeaponDetails_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnClickWeaponEvent
	 */
	struct ULibraryMenu_Weapon_C_OnClickWeaponEvent_Params
	{
	public:
		int32_t                                                    listIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_SBButton_C_356_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature
	 */
	struct ULibraryMenu_Weapon_C_BndEvt__LibraryMenu_Search_K2Node_ComponentBoundEvent_13_OnTextChange__DelegateSignature_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_LibraryMenu_WeaponDetails_K2Node_ComponentBoundEvent_4_OnRecipeTabRead__DelegateSignature
	 */
	struct ULibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_LibraryMenu_WeaponDetails_K2Node_ComponentBoundEvent_4_OnRecipeTabRead__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.Construct
	 */
	struct ULibraryMenu_Weapon_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.ResetMouseCursorTypeToDefaultRequest
	 */
	struct ULibraryMenu_Weapon_C_ResetMouseCursorTypeToDefaultRequest_Params
	{	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnSubMenuUpdate
	 */
	struct ULibraryMenu_Weapon_C_OnSubMenuUpdate_Params
	{
	public:
		int32_t                                                    MainPage;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SubPage;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnSameMenuBookmarkAccessNew
	 */
	struct ULibraryMenu_Weapon_C_OnSameMenuBookmarkAccessNew_Params
	{
	public:
		class FString                                              InBookMarkType;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnRMShopClosed
	 */
	struct ULibraryMenu_Weapon_C_OnRMShopClosed_Params
	{	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.OnParentTerm
	 */
	struct ULibraryMenu_Weapon_C_OnParentTerm_Params
	{	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.BndEvt__LibraryMenu_Weapon_SBButton_C_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_Weapon_C_BndEvt__LibraryMenu_Weapon_SBButton_C_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.GetIdListCallback
	 */
	struct ULibraryMenu_Weapon_C_GetIdListCallback_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O5C4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBLibraryPictureBookType                                  Type;                                                    // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.ExecuteUbergraph_LibraryMenu_Weapon
	 */
	struct ULibraryMenu_Weapon_C_ExecuteUbergraph_LibraryMenu_Weapon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_Weapon.LibraryMenu_Weapon_C.AllReadWeapon__DelegateSignature
	 */
	struct ULibraryMenu_Weapon_C_AllReadWeapon__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
