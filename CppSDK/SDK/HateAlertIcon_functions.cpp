#pragma once

 

// Package: HateAlertIcon

#include "Basic.hpp"

#include "HateAlertIcon_classes.hpp"
#include "HateAlertIcon_parameters.hpp"


namespace SDK
{

// Function HateAlertIcon.HateAlertIcon_C.ExecuteUbergraph_HateAlertIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHateAlertIcon_C::ExecuteUbergraph_HateAlertIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "ExecuteUbergraph_HateAlertIcon");

	Params::HateAlertIcon_C_ExecuteUbergraph_HateAlertIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HateAlertIcon.HateAlertIcon_C.RequestSetAnimationSpeed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_AnimationSpeed                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHateAlertIcon_C::RequestSetAnimationSpeed(float Param_AnimationSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "RequestSetAnimationSpeed");

	Params::HateAlertIcon_C_RequestSetAnimationSpeed Parms{};

	Parms.Param_AnimationSpeed = Param_AnimationSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HateAlertIcon.HateAlertIcon_C.RequestSetOwnerCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBCharacter*                     OwnerCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHateAlertIcon_C::RequestSetOwnerCharacter(class ASBCharacter* OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "RequestSetOwnerCharacter");

	Params::HateAlertIcon_C_RequestSetOwnerCharacter Parms{};

	Parms.OwnerCharacter = OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HateAlertIcon.HateAlertIcon_C.RequestHide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UHateAlertIcon_C::RequestHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "RequestHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HateAlertIcon.HateAlertIcon_C.RequestShow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UHateAlertIcon_C::RequestShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "RequestShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HateAlertIcon.HateAlertIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHateAlertIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "PreConstruct");

	Params::HateAlertIcon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HateAlertIcon.HateAlertIcon_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHateAlertIcon_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "OnAnimationFinished");

	Params::HateAlertIcon_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HateAlertIcon.HateAlertIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHateAlertIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HateAlertIcon.HateAlertIcon_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UHateAlertIcon_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HateAlertIcon.HateAlertIcon_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UHateAlertIcon_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HateAlertIcon.HateAlertIcon_C.SetIconColor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHateAlertIcon_C::SetIconColor(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "SetIconColor");

	Params::HateAlertIcon_C_SetIconColor Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HateAlertIcon.HateAlertIcon_C.SetIconColorName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ColorName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UHateAlertIcon_C::SetIconColorName(const class FString& ColorName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "SetIconColorName");

	Params::HateAlertIcon_C_SetIconColorName Parms{};

	Parms.ColorName = std::move(ColorName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HateAlertIcon.HateAlertIcon_C.PlayAnimIn
// (Private, BlueprintCallable, BlueprintEvent)

void UHateAlertIcon_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HateAlertIcon.HateAlertIcon_C.PlayAnimOut
// (Private, BlueprintCallable, BlueprintEvent)

void UHateAlertIcon_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HateAlertIcon.HateAlertIcon_C.PlayAnimBlink
// (Private, BlueprintCallable, BlueprintEvent)

void UHateAlertIcon_C::PlayAnimBlink()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "PlayAnimBlink");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HateAlertIcon.HateAlertIcon_C.SetAnimationSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_AnimationSpeed                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHateAlertIcon_C::SetAnimationSpeed(float Param_AnimationSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "SetAnimationSpeed");

	Params::HateAlertIcon_C_SetAnimationSpeed Parms{};

	Parms.Param_AnimationSpeed = Param_AnimationSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HateAlertIcon.HateAlertIcon_C.RequestSetIconColorName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ColorName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UHateAlertIcon_C::RequestSetIconColorName(const class FString& ColorName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HateAlertIcon_C", "RequestSetIconColorName");

	Params::HateAlertIcon_C_RequestSetIconColorName Parms{};

	Parms.ColorName = std::move(ColorName);

	UObject::ProcessEvent(Func, &Parms);
}

}

