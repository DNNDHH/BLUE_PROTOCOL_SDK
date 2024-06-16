#pragma once

 

// Package: WBP_CommonToolTipText_Variable

#include "Basic.hpp"

#include "WBP_CommonToolTipText_Variable_classes.hpp"
#include "WBP_CommonToolTipText_Variable_parameters.hpp"


namespace SDK
{

// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.ExecuteUbergraph_WBP_CommonToolTipText_Variable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonToolTipText_Variable_C::ExecuteUbergraph_WBP_CommonToolTipText_Variable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipText_Variable_C", "ExecuteUbergraph_WBP_CommonToolTipText_Variable");

	Params::WBP_CommonToolTipText_Variable_C_ExecuteUbergraph_WBP_CommonToolTipText_Variable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetLimitTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        InDateTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonToolTipText_Variable_C::SetLimitTimer(const struct FDateTime& InDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipText_Variable_C", "SetLimitTimer");

	Params::WBP_CommonToolTipText_Variable_C_SetLimitTimer Parms{};

	Parms.InDateTime = std::move(InDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetTextAndDateTime
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FDateTime                        DateTime                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                                    bHideIfMinValue                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CommonToolTipText_Variable_C::SetTextAndDateTime(const class FText& Text, const struct FDateTime& DateTime, bool bHideIfMinValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipText_Variable_C", "SetTextAndDateTime");

	Params::WBP_CommonToolTipText_Variable_C_SetTextAndDateTime Parms{};

	Parms.Text = std::move(Text);
	Parms.DateTime = std::move(DateTime);
	Parms.bHideIfMinValue = bHideIfMinValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CommonToolTipText_Variable_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipText_Variable_C", "SetText");

	Params::WBP_CommonToolTipText_Variable_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.Set Emotion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonToolTipText_Variable_C::Set_Emotion(class FName InId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipText_Variable_C", "Set Emotion");

	Params::WBP_CommonToolTipText_Variable_C_Set_Emotion Parms{};

	Parms.InId = InId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetWeaponSkin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponSkinId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsTermLimited                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                        InExpiryDateTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonToolTipText_Variable_C::SetWeaponSkin(int32 InWeaponSkinId, bool InIsTermLimited, const struct FDateTime& InExpiryDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipText_Variable_C", "SetWeaponSkin");

	Params::WBP_CommonToolTipText_Variable_C_SetWeaponSkin Parms{};

	Parms.InWeaponSkinId = InWeaponSkinId;
	Parms.InIsTermLimited = InIsTermLimited;
	Parms.InExpiryDateTime = std::move(InExpiryDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetRecipeDateTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        DateTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonToolTipText_Variable_C::SetRecipeDateTime(const struct FDateTime& DateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipText_Variable_C", "SetRecipeDateTime");

	Params::WBP_CommonToolTipText_Variable_C_SetRecipeDateTime Parms{};

	Parms.DateTime = std::move(DateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetAdventureBoardBosstDateTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InLimited                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                        InDateTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonToolTipText_Variable_C::SetAdventureBoardBosstDateTime(bool InLimited, const struct FDateTime& InDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipText_Variable_C", "SetAdventureBoardBosstDateTime");

	Params::WBP_CommonToolTipText_Variable_C_SetAdventureBoardBosstDateTime Parms{};

	Parms.InLimited = InLimited;
	Parms.InDateTime = std::move(InDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CommonToolTipText_Variable.WBP_CommonToolTipText_Variable_C.SetCommunicationSettingMenuAchievement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        InDateTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CommonToolTipText_Variable_C::SetCommunicationSettingMenuAchievement(const struct FDateTime& InDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CommonToolTipText_Variable_C", "SetCommunicationSettingMenuAchievement");

	Params::WBP_CommonToolTipText_Variable_C_SetCommunicationSettingMenuAchievement Parms{};

	Parms.InDateTime = std::move(InDateTime);

	UObject::ProcessEvent(Func, &Parms);
}

}

