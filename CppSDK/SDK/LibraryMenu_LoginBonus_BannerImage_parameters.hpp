#pragma once

 

// Package: LibraryMenu_LoginBonus_BannerImage

#include "Basic.hpp"


namespace SDK::Params
{

// Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.OnBannerClicked__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_LoginBonus_BannerImage_C_OnBannerClicked__DelegateSignature final
{
public:
	int32                                         Param_ID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_705A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_LoginBonus_BannerImage_C*  SelectedBtn;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_BannerImage_C_OnBannerClicked__DelegateSignature) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonus_BannerImage_C_OnBannerClicked__DelegateSignature");
static_assert(sizeof(LibraryMenu_LoginBonus_BannerImage_C_OnBannerClicked__DelegateSignature) == 0x000010, "Wrong size on LibraryMenu_LoginBonus_BannerImage_C_OnBannerClicked__DelegateSignature");
static_assert(offsetof(LibraryMenu_LoginBonus_BannerImage_C_OnBannerClicked__DelegateSignature, Param_ID) == 0x000000, "Member 'LibraryMenu_LoginBonus_BannerImage_C_OnBannerClicked__DelegateSignature::Param_ID' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonus_BannerImage_C_OnBannerClicked__DelegateSignature, SelectedBtn) == 0x000008, "Member 'LibraryMenu_LoginBonus_BannerImage_C_OnBannerClicked__DelegateSignature::SelectedBtn' has a wrong offset!");

// Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_LoginBonus_BannerImage_C_ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_BannerImage_C_ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonus_BannerImage_C_ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage");
static_assert(sizeof(LibraryMenu_LoginBonus_BannerImage_C_ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage) == 0x000004, "Wrong size on LibraryMenu_LoginBonus_BannerImage_C_ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage");
static_assert(offsetof(LibraryMenu_LoginBonus_BannerImage_C_ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage, EntryPoint) == 0x000000, "Member 'LibraryMenu_LoginBonus_BannerImage_C_ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage::EntryPoint' has a wrong offset!");

// Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetImage
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_LoginBonus_BannerImage_C_SetImage final
{
public:
	class UTexture2DDynamic*                      TextureImage;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_BannerImage_C_SetImage) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonus_BannerImage_C_SetImage");
static_assert(sizeof(LibraryMenu_LoginBonus_BannerImage_C_SetImage) == 0x000008, "Wrong size on LibraryMenu_LoginBonus_BannerImage_C_SetImage");
static_assert(offsetof(LibraryMenu_LoginBonus_BannerImage_C_SetImage, TextureImage) == 0x000000, "Member 'LibraryMenu_LoginBonus_BannerImage_C_SetImage::TextureImage' has a wrong offset!");

// Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetBtnSelected
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_LoginBonus_BannerImage_C_SetBtnSelected final
{
public:
	bool                                          bSelected;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonus_BannerImage_C_SetBtnSelected) == 0x000001, "Wrong alignment on LibraryMenu_LoginBonus_BannerImage_C_SetBtnSelected");
static_assert(sizeof(LibraryMenu_LoginBonus_BannerImage_C_SetBtnSelected) == 0x000001, "Wrong size on LibraryMenu_LoginBonus_BannerImage_C_SetBtnSelected");
static_assert(offsetof(LibraryMenu_LoginBonus_BannerImage_C_SetBtnSelected, bSelected) == 0x000000, "Member 'LibraryMenu_LoginBonus_BannerImage_C_SetBtnSelected::bSelected' has a wrong offset!");

// Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetTexture
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_LoginBonus_BannerImage_C_SetTexture final
{
public:
	class UTexture2D*                             Texture;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonus_BannerImage_C_SetTexture) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonus_BannerImage_C_SetTexture");
static_assert(sizeof(LibraryMenu_LoginBonus_BannerImage_C_SetTexture) == 0x000008, "Wrong size on LibraryMenu_LoginBonus_BannerImage_C_SetTexture");
static_assert(offsetof(LibraryMenu_LoginBonus_BannerImage_C_SetTexture, Texture) == 0x000000, "Member 'LibraryMenu_LoginBonus_BannerImage_C_SetTexture::Texture' has a wrong offset!");

}

