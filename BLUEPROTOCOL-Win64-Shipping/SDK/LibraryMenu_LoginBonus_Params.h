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
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.SetItemDetail
	 */
	struct ULibraryMenu_LoginBonus_C_SetItemDetail_Params
	{
	public:
		struct FSBLoginBonusWindowDayData                          ItemData;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailVisibility
	 */
	struct ULibraryMenu_LoginBonus_C_DetailVisibility_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailBannerChange
	 */
	struct ULibraryMenu_LoginBonus_C_DetailBannerChange_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ItemClickChange
	 */
	struct ULibraryMenu_LoginBonus_C_ItemClickChange_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NG93[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.SetInfomation
	 */
	struct ULibraryMenu_LoginBonus_C_SetInfomation_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4
	 */
	struct ULibraryMenu_LoginBonus_C_OnLoaded_ED6E864F49F04294CCC4DFAE0330EDC4_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ImageLoadWork
	 */
	struct ULibraryMenu_LoginBonus_C_ImageLoadWork_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Construct
	 */
	struct ULibraryMenu_LoginBonus_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Initialize
	 */
	struct ULibraryMenu_LoginBonus_C_Initialize_Params
	{
	public:
		int32_t                                                    DataCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.LoginBonusListChange
	 */
	struct ULibraryMenu_LoginBonus_C_LoginBonusListChange_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.Finish
	 */
	struct ULibraryMenu_LoginBonus_C_Finish_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.DetailClose
	 */
	struct ULibraryMenu_LoginBonus_C_DetailClose_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BannerImageLoadCompleted
	 */
	struct ULibraryMenu_LoginBonus_C_BannerImageLoadCompleted_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_0_OnClickItemBoxDetail__DelegateSignature_Params
	{
	public:
		class UBP_SBProductItemData_C*                             Data;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnCloseDetailMenu
	 */
	struct ULibraryMenu_LoginBonus_C_OnCloseDetailMenu_Params
	{
	public:
		class UUMG_ProductDetailMenu_C*                            Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_ProductDetail_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature_Params
	{
	public:
		E_SBDetailsZoomIn                                          Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.BndEvt__LibraryMenu_LoginBonus_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonus_C_BndEvt__LibraryMenu_LoginBonus_UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_2_OnClickZoomOut__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.ExecuteUbergraph_LibraryMenu_LoginBonus
	 */
	struct ULibraryMenu_LoginBonus_C_ExecuteUbergraph_LibraryMenu_LoginBonus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonus.LibraryMenu_LoginBonus_C.OnFinishDelegate__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonus_C_OnFinishDelegate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
