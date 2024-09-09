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
	 * Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetTexture
	 */
	struct ULibraryMenu_LoginBonus_BannerImage_C_SetTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetBtnSelected
	 */
	struct ULibraryMenu_LoginBonus_BannerImage_C_SetBtnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetImage
	 */
	struct ULibraryMenu_LoginBonus_BannerImage_C_SetImage_Params
	{
	public:
		class UTexture2DDynamic*                                   TextureImage;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.BndEvt__LibraryMenu_LoginBonus_BannerImage_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonus_BannerImage_C_BndEvt__LibraryMenu_LoginBonus_BannerImage_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage
	 */
	struct ULibraryMenu_LoginBonus_BannerImage_C_ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.OnBannerClicked__DelegateSignature
	 */
	struct ULibraryMenu_LoginBonus_BannerImage_C_OnBannerClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UAZX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ULibraryMenu_LoginBonus_BannerImage_C*               SelectedBtn;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
