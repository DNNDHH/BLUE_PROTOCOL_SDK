#pragma once

 

// Package: EnemyNamePlate

#include "Basic.hpp"

#include "EnemyNamePlate_classes.hpp"
#include "EnemyNamePlate_parameters.hpp"


namespace SDK
{

// Function EnemyNamePlate.EnemyNamePlate_C.ExecuteUbergraph_EnemyNamePlate
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyNamePlate_C::ExecuteUbergraph_EnemyNamePlate(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "ExecuteUbergraph_EnemyNamePlate");

	Params::EnemyNamePlate_C_ExecuteUbergraph_EnemyNamePlate Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyNamePlate.EnemyNamePlate_C.SetScreenPositionOffset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InScreenPositionOffset                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyNamePlate_C::SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "SetScreenPositionOffset");

	Params::EnemyNamePlate_C_SetScreenPositionOffset Parms{};

	Parms.InScreenPositionOffset = std::move(InScreenPositionOffset);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyNamePlate.EnemyNamePlate_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEnemyNamePlate_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyNamePlate.EnemyNamePlate_C.SetDepth
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDepth                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyNamePlate_C::SetDepth(const float InDepth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "SetDepth");

	Params::EnemyNamePlate_C_SetDepth Parms{};

	Parms.InDepth = InDepth;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyNamePlate.EnemyNamePlate_C.SetHpRate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   HPRate                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyNamePlate_C::SetHpRate(const float HPRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "SetHpRate");

	Params::EnemyNamePlate_C_SetHpRate Parms{};

	Parms.HPRate = HPRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyNamePlate.EnemyNamePlate_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UEnemyNamePlate_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyNamePlate.EnemyNamePlate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEnemyNamePlate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyNamePlate.EnemyNamePlate_C.UIVisibleSettingChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBUIType                               InUIType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInVisibility                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInInstantly                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyNamePlate_C::UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "UIVisibleSettingChangeDelegate_Event_0");

	Params::EnemyNamePlate_C_UIVisibleSettingChangeDelegate_Event_0 Parms{};

	Parms.InUIType = InUIType;
	Parms.bInVisibility = bInVisibility;
	Parms.bInInstantly = bInInstantly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyNamePlate.EnemyNamePlate_C.UnbindUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)

void UEnemyNamePlate_C::UnbindUIVisibleSettingChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "UnbindUIVisibleSettingChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyNamePlate.EnemyNamePlate_C.BindUIVisibleSettingChange
// (BlueprintCallable, BlueprintEvent)

void UEnemyNamePlate_C::BindUIVisibleSettingChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "BindUIVisibleSettingChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyNamePlate.EnemyNamePlate_C.Bind
// (Private, BlueprintCallable, BlueprintEvent)

void UEnemyNamePlate_C::Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyNamePlate.EnemyNamePlate_C.Unbind
// (Private, BlueprintCallable, BlueprintEvent)

void UEnemyNamePlate_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "Unbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyNamePlate.EnemyNamePlate_C.SetupBuffIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UEnemyNamePlate_C::SetupBuffIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "SetupBuffIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyNamePlate.EnemyNamePlate_C.SetColorText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyNamePlate_C::SetColorText(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "SetColorText");

	Params::EnemyNamePlate_C_SetColorText Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyNamePlate.EnemyNamePlate_C.SetColorLV
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UEnemyNamePlate_C::SetColorLV(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "SetColorLV");

	Params::EnemyNamePlate_C_SetColorLV Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyNamePlate.EnemyNamePlate_C.SetColorName
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      InColorAndOpacity                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UEnemyNamePlate_C::SetColorName(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "SetColorName");

	Params::EnemyNamePlate_C_SetColorName Parms{};

	Parms.InColorAndOpacity = std::move(InColorAndOpacity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyNamePlate.EnemyNamePlate_C.OnDisplayStart
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UEnemyNamePlate_C::OnDisplayStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "OnDisplayStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyNamePlate.EnemyNamePlate_C.SetLevel
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyNamePlate_C::SetLevel(const int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "SetLevel");

	Params::EnemyNamePlate_C_SetLevel Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyNamePlate.EnemyNamePlate_C.SetName
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEnemyNamePlate_C::SetName(const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "SetName");

	Params::EnemyNamePlate_C_SetName Parms{};

	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyNamePlate.EnemyNamePlate_C.ResetBuffIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UEnemyNamePlate_C::ResetBuffIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "ResetBuffIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EnemyNamePlate.EnemyNamePlate_C.SetVisibleCanvas
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyNamePlate_C::SetVisibleCanvas(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "SetVisibleCanvas");

	Params::EnemyNamePlate_C_SetVisibleCanvas Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EnemyNamePlate.EnemyNamePlate_C.IsShowBuddyIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ShowBuddyIcon                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyNamePlate_C::IsShowBuddyIcon(bool* ShowBuddyIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "IsShowBuddyIcon");

	Params::EnemyNamePlate_C_IsShowBuddyIcon Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShowBuddyIcon != nullptr)
		*ShowBuddyIcon = Parms.ShowBuddyIcon;
}


// Function EnemyNamePlate.EnemyNamePlate_C.SetCharacter_Internal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBCharacter*                     InCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyNamePlate_C::SetCharacter_Internal(class ASBCharacter* InCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnemyNamePlate_C", "SetCharacter_Internal");

	Params::EnemyNamePlate_C_SetCharacter_Internal Parms{};

	Parms.InCharacter = InCharacter;

	UObject::ProcessEvent(Func, &Parms);
}

}

