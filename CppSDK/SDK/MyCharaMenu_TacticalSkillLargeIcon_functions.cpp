#pragma once

 

// Package: MyCharaMenu_TacticalSkillLargeIcon

#include "Basic.hpp"

#include "MyCharaMenu_TacticalSkillLargeIcon_classes.hpp"
#include "MyCharaMenu_TacticalSkillLargeIcon_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.ExecuteUbergraph_MyCharaMenu_TacticalSkillLargeIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_TacticalSkillLargeIcon_C::ExecuteUbergraph_MyCharaMenu_TacticalSkillLargeIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_TacticalSkillLargeIcon_C", "ExecuteUbergraph_MyCharaMenu_TacticalSkillLargeIcon");

	Params::MyCharaMenu_TacticalSkillLargeIcon_C_ExecuteUbergraph_MyCharaMenu_TacticalSkillLargeIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_TacticalSkillLargeIcon_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_TacticalSkillLargeIcon_C", "OnMouseEnter");

	Params::MyCharaMenu_TacticalSkillLargeIcon_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.SetSKill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsInformationHidden                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_TacticalSkillLargeIcon_C::SetSKill(int32 InSkillId, int32 InSkillLevel, bool InIsInformationHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_TacticalSkillLargeIcon_C", "SetSKill");

	Params::MyCharaMenu_TacticalSkillLargeIcon_C_SetSKill Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;
	Parms.InIsInformationHidden = InIsInformationHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.CreateTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InNotUseTooltip                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_TacticalSkillLargeIcon_C::CreateTooltip(bool InNotUseTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_TacticalSkillLargeIcon_C", "CreateTooltip");

	Params::MyCharaMenu_TacticalSkillLargeIcon_C_CreateTooltip Parms{};

	Parms.InNotUseTooltip = InNotUseTooltip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.SetIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_TacticalSkillLargeIcon_C::SetIconTexture(class UTexture2D* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_TacticalSkillLargeIcon_C", "SetIconTexture");

	Params::MyCharaMenu_TacticalSkillLargeIcon_C_SetIconTexture Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.SetIsIconEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_TacticalSkillLargeIcon_C::SetIsIconEnabled(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_TacticalSkillLargeIcon_C", "SetIsIconEnabled");

	Params::MyCharaMenu_TacticalSkillLargeIcon_C_SetIsIconEnabled Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_TacticalSkillLargeIcon.MyCharaMenu_TacticalSkillLargeIcon_C.SetIsHoverEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_TacticalSkillLargeIcon_C::SetIsHoverEnabled(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_TacticalSkillLargeIcon_C", "SetIsHoverEnabled");

	Params::MyCharaMenu_TacticalSkillLargeIcon_C_SetIsHoverEnabled Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}

