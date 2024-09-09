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
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Play Anim Login Bonus List In
	 */
	struct ULibraryMenu_LoginBonusList_C_PlayAnimLoginBonusListIn_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.UpdateBannerViewIndex
	 */
	struct ULibraryMenu_LoginBonusList_C_UpdateBannerViewIndex_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerTexture
	 */
	struct ULibraryMenu_LoginBonusList_C_SetBannerTexture_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LYTO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Texture;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerViewIndex
	 */
	struct ULibraryMenu_LoginBonusList_C_SetBannerViewIndex_Params
	{
	public:
		int32_t                                                    ViewIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerData
	 */
	struct ULibraryMenu_LoginBonusList_C_SetBannerData_Params
	{
	public:
		TArray<struct FSBLoginBonusWindowData>                     DataList;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerImage
	 */
	struct ULibraryMenu_LoginBonusList_C_SetBannerImage_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TP9P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2DDynamic*                                   TextureData;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetupMouseClickEvent
	 */
	struct ULibraryMenu_LoginBonusList_C_SetupMouseClickEvent_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetData
	 */
	struct ULibraryMenu_LoginBonusList_C_SetData_Params
	{
	public:
		struct FSBLoginBonusWindowData                             DataList;                                                // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       MouseClick;                                              // 0x00A0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NGCZ[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Initialize
	 */
	struct ULibraryMenu_LoginBonusList_C_Initialize_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Finish
	 */
	struct ULibraryMenu_LoginBonusList_C_Finish_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnImageLoadComplete
	 */
	struct ULibraryMenu_LoginBonusList_C_OnImageLoadComplete_Params
	{
	public:
		bool                                                       enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Construct
	 */
	struct ULibraryMenu_LoginBonusList_C_Construct_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnListItemClick
	 */
	struct ULibraryMenu_LoginBonusList_C_OnListItemClick_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BndEvt__LibraryMenu_LoginBonusList_LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonusList_C_BndEvt__LibraryMenu_LoginBonusList_LeftArrow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BndEvt__LibraryMenu_LoginBonusList_RightArrow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonusList_C_BndEvt__LibraryMenu_LoginBonusList_RightArrow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnBannerClicked
	 */
	struct ULibraryMenu_LoginBonusList_C_OnBannerClicked_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BAI4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULibraryMenu_LoginBonus_BannerImage_C*               SelectedBtn;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.ExecuteUbergraph_LibraryMenu_LoginBonusList
	 */
	struct ULibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BannerClick__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonusList_C_BannerClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.ListItemClick__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonusList_C_ListItemClick__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnListInitComplete__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonusList_C_OnListInitComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
