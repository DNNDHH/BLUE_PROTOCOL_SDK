#pragma once

 

// Package: WBP_CommonToolTipDetail_Fixed

#include "Basic.hpp"

#include "WBP_CommonToolTipDetail_Fixed_classes.hpp"
#include "WBP_CommonToolTipDetail_Fixed_parameters.hpp"


namespace SDK
{

// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipDetail_Fixed_C::SetAbilityNameText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Fixed_C", "SetAbilityNameText");

	Params::WBP_CommonToolTipDetail_Fixed_C_SetAbilityNameText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityDescText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipDetail_Fixed_C::SetAbilityDescText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Fixed_C", "SetAbilityDescText");

	Params::WBP_CommonToolTipDetail_Fixed_C_SetAbilityDescText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAbilityPerkID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PerkId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonToolTipDetail_Fixed_C::SetAbilityPerkID(int32 PerkId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Fixed_C", "SetAbilityPerkID");

	Params::WBP_CommonToolTipDetail_Fixed_C_SetAbilityPerkID Parms{};

	Parms.PerkId = PerkId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetWeaponPerkData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       SBCharacterWeaponPerkData                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UWBP_CommonToolTipDetail_Fixed_C::SetWeaponPerkData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Fixed_C", "SetWeaponPerkData");

	Params::WBP_CommonToolTipDetail_Fixed_C_SetWeaponPerkData Parms{};

	Parms.SBCharacterWeaponPerkData = std::move(SBCharacterWeaponPerkData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetAsWeaponSkinUnattached
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CommonToolTipDetail_Fixed_C::SetAsWeaponSkinUnattached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Fixed_C", "SetAsWeaponSkinUnattached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndDescText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipDetail_Fixed_C::SetNameAndDescText(const class FText& InName, const class FText& InDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Fixed_C", "SetNameAndDescText");

	Params::WBP_CommonToolTipDetail_Fixed_C_SetNameAndDescText Parms{};

	Parms.InName = std::move(InName);
	Parms.InDesc = std::move(InDesc);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndTypeText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipDetail_Fixed_C::SetNameAndTypeText(const class FText& InName, const class FText& Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Fixed_C", "SetNameAndTypeText");

	Params::WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeText Parms{};

	Parms.InName = std::move(InName);
	Parms.Type = std::move(Type);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.SetNameAndTypeAndDescText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InDesc                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipDetail_Fixed_C::SetNameAndTypeAndDescText(const class FText& InName, const class FText& Type, const class FText& InDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Fixed_C", "SetNameAndTypeAndDescText");

	Params::WBP_CommonToolTipDetail_Fixed_C_SetNameAndTypeAndDescText Parms{};

	Parms.InName = std::move(InName);
	Parms.Type = std::move(Type);
	Parms.InDesc = std::move(InDesc);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.Set Visible Stack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CommonToolTipDetail_Fixed_C::Set_Visible_Stack(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Fixed_C", "Set Visible Stack");

	Params::WBP_CommonToolTipDetail_Fixed_C_Set_Visible_Stack Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipDetail_Fixed.WBP_CommonToolTipDetail_Fixed_C.Set Stack Imagine Mode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Type1                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Desc1                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Type2                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             Desc2                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOwnItemInfo                     Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    StackBEffectiveDisplay                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CommonToolTipDetail_Fixed_C::Set_Stack_Imagine_Mode(const class FText& InName, const class FText& Type1, const class FText& Desc1, const class FText& Type2, const class FText& Desc2, const struct FOwnItemInfo& Info, bool StackBEffectiveDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipDetail_Fixed_C", "Set Stack Imagine Mode");

	Params::WBP_CommonToolTipDetail_Fixed_C_Set_Stack_Imagine_Mode Parms{};

	Parms.InName = std::move(InName);
	Parms.Type1 = std::move(Type1);
	Parms.Desc1 = std::move(Desc1);
	Parms.Type2 = std::move(Type2);
	Parms.Desc2 = std::move(Desc2);
	Parms.Info = std::move(Info);
	Parms.StackBEffectiveDisplay = StackBEffectiveDisplay;

	UObject::ProcessEvent(Func, &Parms);
}

}

