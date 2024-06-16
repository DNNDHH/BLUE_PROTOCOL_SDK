#pragma once

 

// Package: LibraryMenu_LoginBonusInfo

#include "Basic.hpp"

#include "LibraryMenu_LoginBonusInfo_classes.hpp"
#include "LibraryMenu_LoginBonusInfo_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBLoginBonusWindowData          LoginBonusData                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_LoginBonusInfo_C::SetData(const struct FSBLoginBonusWindowData& LoginBonusData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusInfo_C", "SetData");

	Params::LibraryMenu_LoginBonusInfo_C_SetData Parms{};

	Parms.LoginBonusData = std::move(LoginBonusData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetImageData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*                Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusInfo_C::SetImageData(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusInfo_C", "SetImageData");

	Params::LibraryMenu_LoginBonusInfo_C_SetImageData Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_LoginBonusInfo.LibraryMenu_LoginBonusInfo_C.SetTextureData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_LoginBonusInfo_C::SetTextureData(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_LoginBonusInfo_C", "SetTextureData");

	Params::LibraryMenu_LoginBonusInfo_C_SetTextureData Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}

}

