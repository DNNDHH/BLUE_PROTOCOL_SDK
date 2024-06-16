#pragma once

 

// Package: CmnWeaponSkinIcon

#include "Basic.hpp"

#include "CmnWeaponSkinIcon_classes.hpp"
#include "CmnWeaponSkinIcon_parameters.hpp"


namespace SDK
{

// Function CmnWeaponSkinIcon.CmnWeaponSkinIcon_C.SetWeaponSkinInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponItemData                InWeaponItemData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UCmnWeaponSkinIcon_C::SetWeaponSkinInfo(const struct FSBWeaponItemData& InWeaponItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnWeaponSkinIcon_C", "SetWeaponSkinInfo");

	Params::CmnWeaponSkinIcon_C_SetWeaponSkinInfo Parms{};

	Parms.InWeaponItemData = std::move(InWeaponItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnWeaponSkinIcon.CmnWeaponSkinIcon_C.CreateTooltipWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSkinAttached                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InWeaponSkinId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsTermLimited                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                        InExpiryDateTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UCmnWeaponSkinIcon_C::CreateTooltipWidget(bool InIsSkinAttached, int32 InWeaponSkinId, bool InIsTermLimited, const struct FDateTime& InExpiryDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnWeaponSkinIcon_C", "CreateTooltipWidget");

	Params::CmnWeaponSkinIcon_C_CreateTooltipWidget Parms{};

	Parms.InIsSkinAttached = InIsSkinAttached;
	Parms.InWeaponSkinId = InWeaponSkinId;
	Parms.InIsTermLimited = InIsTermLimited;
	Parms.InExpiryDateTime = std::move(InExpiryDateTime);

	UObject::ProcessEvent(Func, &Parms);
}

}

