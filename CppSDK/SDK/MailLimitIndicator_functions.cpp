#pragma once

 

// Package: MailLimitIndicator

#include "Basic.hpp"

#include "MailLimitIndicator_classes.hpp"
#include "MailLimitIndicator_parameters.hpp"


namespace SDK
{

// Function MailLimitIndicator.MailLimitIndicator_C.ExecuteUbergraph_MailLimitIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailLimitIndicator_C::ExecuteUbergraph_MailLimitIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailLimitIndicator_C", "ExecuteUbergraph_MailLimitIndicator");

	Params::MailLimitIndicator_C_ExecuteUbergraph_MailLimitIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailLimitIndicator.MailLimitIndicator_C.OnPhotoMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailLimitIndicator_C::OnPhotoMode(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailLimitIndicator_C", "OnPhotoMode");

	Params::MailLimitIndicator_C_OnPhotoMode Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailLimitIndicator.MailLimitIndicator_C.UpdateShow
// (BlueprintCallable, BlueprintEvent)

void UMailLimitIndicator_C::UpdateShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailLimitIndicator_C", "UpdateShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailLimitIndicator.MailLimitIndicator_C.UIVisibleSettingChangeDelegates
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailLimitIndicator_C::UIVisibleSettingChangeDelegates(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailLimitIndicator_C", "UIVisibleSettingChangeDelegates");

	Params::MailLimitIndicator_C_UIVisibleSettingChangeDelegates Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailLimitIndicator.MailLimitIndicator_C.ChangeBorderColor
// (BlueprintCallable, BlueprintEvent)

void UMailLimitIndicator_C::ChangeBorderColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailLimitIndicator_C", "ChangeBorderColor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailLimitIndicator.MailLimitIndicator_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMailLimitIndicator_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailLimitIndicator_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailLimitIndicator.MailLimitIndicator_C.OnChangeCommandMenuFlag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailLimitIndicator_C::OnChangeCommandMenuFlag(const bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailLimitIndicator_C", "OnChangeCommandMenuFlag");

	Params::MailLimitIndicator_C_OnChangeCommandMenuFlag Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailLimitIndicator.MailLimitIndicator_C.Hide
// (BlueprintCallable, BlueprintEvent)

void UMailLimitIndicator_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailLimitIndicator_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailLimitIndicator.MailLimitIndicator_C.Show
// (BlueprintCallable, BlueprintEvent)

void UMailLimitIndicator_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailLimitIndicator_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailLimitIndicator.MailLimitIndicator_C.OnUpdateSkin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPadKeySkinType                       SkinType                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailLimitIndicator_C::OnUpdateSkin(const ESBPadKeySkinType SkinType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailLimitIndicator_C", "OnUpdateSkin");

	Params::MailLimitIndicator_C_OnUpdateSkin Parms{};

	Parms.SkinType = SkinType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailLimitIndicator.MailLimitIndicator_C.OnUpdateBookType
// (BlueprintCallable, BlueprintEvent)

void UMailLimitIndicator_C::OnUpdateBookType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailLimitIndicator_C", "OnUpdateBookType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailLimitIndicator.MailLimitIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMailLimitIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailLimitIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

