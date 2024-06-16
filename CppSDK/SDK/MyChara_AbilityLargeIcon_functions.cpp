#pragma once

 

// Package: MyChara_AbilityLargeIcon

#include "Basic.hpp"

#include "MyChara_AbilityLargeIcon_classes.hpp"
#include "MyChara_AbilityLargeIcon_parameters.hpp"


namespace SDK
{

// Function MyChara_AbilityLargeIcon.MyChara_AbilityLargeIcon_C.ExecuteUbergraph_MyChara_AbilityLargeIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyChara_AbilityLargeIcon_C::ExecuteUbergraph_MyChara_AbilityLargeIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyChara_AbilityLargeIcon_C", "ExecuteUbergraph_MyChara_AbilityLargeIcon");

	Params::MyChara_AbilityLargeIcon_C_ExecuteUbergraph_MyChara_AbilityLargeIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyChara_AbilityLargeIcon.MyChara_AbilityLargeIcon_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyChara_AbilityLargeIcon_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyChara_AbilityLargeIcon_C", "OnMouseEnter");

	Params::MyChara_AbilityLargeIcon_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyChara_AbilityLargeIcon.MyChara_AbilityLargeIcon_C.SetAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsInformationHidden                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyChara_AbilityLargeIcon_C::SetAbility(int32 InSkillId, int32 InSkillLevel, ESBClassType InClassType, bool InIsInformationHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyChara_AbilityLargeIcon_C", "SetAbility");

	Params::MyChara_AbilityLargeIcon_C_SetAbility Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;
	Parms.InClassType = InClassType;
	Parms.InIsInformationHidden = InIsInformationHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyChara_AbilityLargeIcon.MyChara_AbilityLargeIcon_C.SetIconTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       InTexture                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyChara_AbilityLargeIcon_C::SetIconTexture(class UTexture2D* InTexture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyChara_AbilityLargeIcon_C", "SetIconTexture");

	Params::MyChara_AbilityLargeIcon_C_SetIconTexture Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyChara_AbilityLargeIcon.MyChara_AbilityLargeIcon_C.CreateTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InNotUseTooltip                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyChara_AbilityLargeIcon_C::CreateTooltip(bool InNotUseTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyChara_AbilityLargeIcon_C", "CreateTooltip");

	Params::MyChara_AbilityLargeIcon_C_CreateTooltip Parms{};

	Parms.InNotUseTooltip = InNotUseTooltip;

	UObject::ProcessEvent(Func, &Parms);
}

}

