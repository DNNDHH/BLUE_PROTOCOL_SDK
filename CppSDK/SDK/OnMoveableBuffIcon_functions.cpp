#pragma once

 

// Package: OnMoveableBuffIcon

#include "Basic.hpp"

#include "OnMoveableBuffIcon_classes.hpp"
#include "OnMoveableBuffIcon_parameters.hpp"


namespace SDK
{

// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.ExecuteUbergraph_OnMoveableBuffIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOnMoveableBuffIcon_C::ExecuteUbergraph_OnMoveableBuffIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "ExecuteUbergraph_OnMoveableBuffIcon");

	Params::OnMoveableBuffIcon_C_ExecuteUbergraph_OnMoveableBuffIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.UnbindOnChangePlayerCharacter
// (BlueprintCallable, BlueprintEvent)

void UOnMoveableBuffIcon_C::UnbindOnChangePlayerCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "UnbindOnChangePlayerCharacter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.BindOnChangePlayerCharacter
// (BlueprintCallable, BlueprintEvent)

void UOnMoveableBuffIcon_C::BindOnChangePlayerCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "BindOnChangePlayerCharacter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOnMoveableBuffIcon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.OnChangePlayerCharacterDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOnMoveableBuffIcon_C::OnChangePlayerCharacterDelegate(class APawn* InPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "OnChangePlayerCharacterDelegate");

	Params::OnMoveableBuffIcon_C_OnChangePlayerCharacterDelegate Parms{};

	Parms.InPawn = InPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOnMoveableBuffIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.BndEvt__OnMoveableBufIcon_BufMultiList_K2Node_ComponentBoundEvent_0_OnClientRecieveBattleStatusDelegete__DelegateSignature
// (BlueprintEvent)

void UOnMoveableBuffIcon_C::BndEvt__OnMoveableBufIcon_BufMultiList_K2Node_ComponentBoundEvent_0_OnClientRecieveBattleStatusDelegete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "BndEvt__OnMoveableBufIcon_BufMultiList_K2Node_ComponentBoundEvent_0_OnClientRecieveBattleStatusDelegete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)

void UOnMoveableBuffIcon_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.Terminate
// (Private, BlueprintCallable, BlueprintEvent)

void UOnMoveableBuffIcon_C::Terminate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "Terminate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.Bind
// (Private, BlueprintCallable, BlueprintEvent)

void UOnMoveableBuffIcon_C::Bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "Bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.Unbind
// (Private, BlueprintCallable, BlueprintEvent)

void UOnMoveableBuffIcon_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "Unbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.SetupBuffIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UOnMoveableBuffIcon_C::SetupBuffIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "SetupBuffIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.ResetBuffIcon
// (Private, BlueprintCallable, BlueprintEvent)

void UOnMoveableBuffIcon_C::ResetBuffIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "ResetBuffIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.SetEditMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EditMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOnMoveableBuffIcon_C::SetEditMode(bool EditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "SetEditMode");

	Params::OnMoveableBuffIcon_C_SetEditMode Parms{};

	Parms.EditMode = EditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OnMoveableBuffIcon.OnMoveableBuffIcon_C.SetVisibleLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOnMoveableBuffIcon_C::SetVisibleLine(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OnMoveableBuffIcon_C", "SetVisibleLine");

	Params::OnMoveableBuffIcon_C_SetVisibleLine Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}

