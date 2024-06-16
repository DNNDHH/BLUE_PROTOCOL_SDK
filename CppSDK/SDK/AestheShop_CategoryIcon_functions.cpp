#pragma once

 

// Package: AestheShop_CategoryIcon

#include "Basic.hpp"

#include "AestheShop_CategoryIcon_classes.hpp"
#include "AestheShop_CategoryIcon_parameters.hpp"


namespace SDK
{

// Function AestheShop_CategoryIcon.AestheShop_CategoryIcon_C.SetIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_AestheShop_TopMenuItems_DetailSettingsInDetailSettings                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAestheShop_CategoryIcon_C::SetIcon(E_AestheShop_TopMenuItems_DetailSettings InDetailSettings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AestheShop_CategoryIcon_C", "SetIcon");

	Params::AestheShop_CategoryIcon_C_SetIcon Parms{};

	Parms.InDetailSettings = InDetailSettings;

	UObject::ProcessEvent(Func, &Parms);
}

}

