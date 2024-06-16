#pragma once

 

// Package: LibraryMenu_LoginBonus_BannerImage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C
// 0x0520 (0x0798 - 0x0278)
class ULibraryMenu_LoginBonus_BannerImage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BannerButton;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BannerImage;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnBannerClicked;                                   // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ID;                                                // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7059[0x4];                                     // 0x02A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           BtnSelectedStyle;                                  // 0x02A8(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           BtnNomalStyle;                                     // 0x0520(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnBannerClicked__DelegateSignature(int32 Param_ID, class ULibraryMenu_LoginBonus_BannerImage_C* SelectedBtn);
	void ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage(int32 EntryPoint);
	void BndEvt__LibraryMenu_LoginBonus_BannerImage_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetImage(class UTexture2DDynamic* TextureImage);
	void SetBtnSelected(bool bSelected);
	void SetTexture(class UTexture2D* Texture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_LoginBonus_BannerImage_C">();
	}
	static class ULibraryMenu_LoginBonus_BannerImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_LoginBonus_BannerImage_C>();
	}
};
static_assert(alignof(ULibraryMenu_LoginBonus_BannerImage_C) == 0x000008, "Wrong alignment on ULibraryMenu_LoginBonus_BannerImage_C");
static_assert(sizeof(ULibraryMenu_LoginBonus_BannerImage_C) == 0x000798, "Wrong size on ULibraryMenu_LoginBonus_BannerImage_C");
static_assert(offsetof(ULibraryMenu_LoginBonus_BannerImage_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_LoginBonus_BannerImage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_BannerImage_C, BannerButton) == 0x000280, "Member 'ULibraryMenu_LoginBonus_BannerImage_C::BannerButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_BannerImage_C, BannerImage) == 0x000288, "Member 'ULibraryMenu_LoginBonus_BannerImage_C::BannerImage' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_BannerImage_C, OnBannerClicked) == 0x000290, "Member 'ULibraryMenu_LoginBonus_BannerImage_C::OnBannerClicked' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_BannerImage_C, ID) == 0x0002A0, "Member 'ULibraryMenu_LoginBonus_BannerImage_C::ID' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_BannerImage_C, BtnSelectedStyle) == 0x0002A8, "Member 'ULibraryMenu_LoginBonus_BannerImage_C::BtnSelectedStyle' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_LoginBonus_BannerImage_C, BtnNomalStyle) == 0x000520, "Member 'ULibraryMenu_LoginBonus_BannerImage_C::BtnNomalStyle' has a wrong offset!");

}

