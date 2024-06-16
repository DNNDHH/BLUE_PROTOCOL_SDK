#pragma once

 

// Package: LibraryMenu_LoginBonus_BannerImage

#include "Basic.hpp"

#include "LibraryMenu_LoginBonus_BannerImage_classes.hpp"
#include "LibraryMenu_LoginBonus_BannerImage_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.OnBannerClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULibraryMenu_LoginBonus_BannerImage_C*SelectedBtn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_BannerImage_C::OnBannerClicked__DelegateSignature(int32 Param_ID, class ULibraryMenu_LoginBonus_BannerImage_C* SelectedBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_BannerImage_C", "OnBannerClicked__DelegateSignature");

	Params::LibraryMenu_LoginBonus_BannerImage_C_OnBannerClicked__DelegateSignature Parms{};

	Parms.Param_ID = Param_ID;
	Parms.SelectedBtn = SelectedBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_BannerImage_C::ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_BannerImage_C", "ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage");

	Params::LibraryMenu_LoginBonus_BannerImage_C_ExecuteUbergraph_LibraryMenu_LoginBonus_BannerImage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.BndEvt__LibraryMenu_LoginBonus_BannerImage_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULibraryMenu_LoginBonus_BannerImage_C::BndEvt__LibraryMenu_LoginBonus_BannerImage_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_BannerImage_C", "BndEvt__LibraryMenu_LoginBonus_BannerImage_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                TextureImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_BannerImage_C::SetImage(class UTexture2DDynamic* TextureImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_BannerImage_C", "SetImage");

	Params::LibraryMenu_LoginBonus_BannerImage_C_SetImage Parms{};

	Parms.TextureImage = TextureImage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetBtnSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_LoginBonus_BannerImage_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_BannerImage_C", "SetBtnSelected");

	Params::LibraryMenu_LoginBonus_BannerImage_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonus_BannerImage.LibraryMenu_LoginBonus_BannerImage_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonus_BannerImage_C::SetTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonus_BannerImage_C", "SetTexture");

	Params::LibraryMenu_LoginBonus_BannerImage_C_SetTexture Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

}

