#pragma once

 

// Package: CharaCreateClassSkillMenuItem

#include "Basic.hpp"

#include "CharaCreateClassSkillMenuItem_classes.hpp"
#include "CharaCreateClassSkillMenuItem_parameters.hpp"


namespace SDK
{

// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharaCreateClassSkillMenuItem_C* InSelectedItem                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaCreateClassSkillMenuItem_C::OnSelected__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* InSelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateClassSkillMenuItem_C", "OnSelected__DelegateSignature");

	Params::CharaCreateClassSkillMenuItem_C_OnSelected__DelegateSignature Parms{};

	Parms.InSelectedItem = InSelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharaCreateClassSkillMenuItem_C* Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaCreateClassSkillMenuItem_C::OnPressed__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateClassSkillMenuItem_C", "OnPressed__DelegateSignature");

	Params::CharaCreateClassSkillMenuItem_C_OnPressed__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharaCreateClassSkillMenuItem_C* Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaCreateClassSkillMenuItem_C::OnReleased__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateClassSkillMenuItem_C", "OnReleased__DelegateSignature");

	Params::CharaCreateClassSkillMenuItem_C_OnReleased__DelegateSignature Parms{};

	Parms.Sender = Sender;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.ExecuteUbergraph_CharaCreateClassSkillMenuItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaCreateClassSkillMenuItem_C::ExecuteUbergraph_CharaCreateClassSkillMenuItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateClassSkillMenuItem_C", "ExecuteUbergraph_CharaCreateClassSkillMenuItem");

	Params::CharaCreateClassSkillMenuItem_C_ExecuteUbergraph_CharaCreateClassSkillMenuItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaCreateClassSkillMenuItem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateClassSkillMenuItem_C", "Tick");

	Params::CharaCreateClassSkillMenuItem_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UCharaCreateClassSkillMenuItem_C::BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateClassSkillMenuItem_C", "BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.BndEvt__Btn_K2Node_ComponentBoundEvent_140_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UCharaCreateClassSkillMenuItem_C::BndEvt__Btn_K2Node_ComponentBoundEvent_140_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateClassSkillMenuItem_C", "BndEvt__Btn_K2Node_ComponentBoundEvent_140_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetSkillNameText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCharaCreateClassSkillMenuItem_C::SetSkillNameText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateClassSkillMenuItem_C", "SetSkillNameText");

	Params::CharaCreateClassSkillMenuItem_C_SetSkillNameText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaCreateClassSkillMenuItem_C::SetSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateClassSkillMenuItem_C", "SetSelected");

	Params::CharaCreateClassSkillMenuItem_C_SetSelected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetPlayIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaCreateClassSkillMenuItem_C::SetPlayIconVisibility(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateClassSkillMenuItem_C", "SetPlayIconVisibility");

	Params::CharaCreateClassSkillMenuItem_C_SetPlayIconVisibility Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetSkillNamePadding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin                          InPadding                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharaCreateClassSkillMenuItem_C::SetSkillNamePadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateClassSkillMenuItem_C", "SetSkillNamePadding");

	Params::CharaCreateClassSkillMenuItem_C_SetSkillNamePadding Parms{};

	Parms.InPadding = std::move(InPadding);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharaCreateClassSkillMenuItem.CharaCreateClassSkillMenuItem_C.SetSkillDataAtPhotoMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// ESkillActionPosition                    InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharaCreateClassSkillMenuItem_C::SetSkillDataAtPhotoMode(const class FText& InText, ESkillActionPosition InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharaCreateClassSkillMenuItem_C", "SetSkillDataAtPhotoMode");

	Params::CharaCreateClassSkillMenuItem_C_SetSkillDataAtPhotoMode Parms{};

	Parms.InText = std::move(InText);
	Parms.InPosition = InPosition;

	UObject::ProcessEvent(Func, &Parms);
}

}

