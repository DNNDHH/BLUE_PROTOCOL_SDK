#pragma once

 

// Package: RmShopMenuBg

#include "Basic.hpp"

#include "RmShopMenuBg_classes.hpp"
#include "RmShopMenuBg_parameters.hpp"


namespace SDK
{

// Function RmShopMenuBg.RmShopMenuBg_C.ShowBg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       InMenuType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenuBg_C::ShowBg(ESBRmShopMenuType InMenuType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenuBg_C", "ShowBg");

	Params::RmShopMenuBg_C_ShowBg Parms{};

	Parms.InMenuType = InMenuType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RmShopMenuBg.RmShopMenuBg_C.SetBgImg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       InMenuType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           InImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URmShopMenuBg_C::SetBgImg(ESBRmShopMenuType InMenuType, class UImage* InImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RmShopMenuBg_C", "SetBgImg");

	Params::RmShopMenuBg_C_SetBgImg Parms{};

	Parms.InMenuType = InMenuType;
	Parms.InImage = InImage;

	UObject::ProcessEvent(Func, &Parms);
}

}

