#pragma once

 

// Package: BP_PlayerName_Layoutable

#include "Basic.hpp"

#include "BP_PlayerName_Layoutable_classes.hpp"
#include "BP_PlayerName_Layoutable_parameters.hpp"


namespace SDK
{

// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.ExecuteUbergraph_BP_PlayerName_Layoutable
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerName_Layoutable_C::ExecuteUbergraph_BP_PlayerName_Layoutable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "ExecuteUbergraph_BP_PlayerName_Layoutable");

	Params::BP_PlayerName_Layoutable_C_ExecuteUbergraph_BP_PlayerName_Layoutable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.UnbindPlayerStateDelegate
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerName_Layoutable_C::UnbindPlayerStateDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "UnbindPlayerStateDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.UnbindAttachedClientPlayerStateDelegate
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerName_Layoutable_C::UnbindAttachedClientPlayerStateDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "UnbindAttachedClientPlayerStateDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PlayerName_Layoutable_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnAchievementSelectedChangeDelegate_����_0
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerName_Layoutable_C::OnAchievementSelectedChangeDelegate______0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "OnAchievementSelectedChangeDelegate_����_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnReciveBattleStatus
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerName_Layoutable_C::OnReciveBattleStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "OnReciveBattleStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnChangePlayerCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            InPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerName_Layoutable_C::OnChangePlayerCharacter(class APawn* InPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "OnChangePlayerCharacter");

	Params::BP_PlayerName_Layoutable_C_OnChangePlayerCharacter Parms{};

	Parms.InPawn = InPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnCharacterNameChangeDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_PlayerName_Layoutable_C::OnCharacterNameChangeDelegate_Event_0(const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "OnCharacterNameChangeDelegate_Event_0");

	Params::BP_PlayerName_Layoutable_C_OnCharacterNameChangeDelegate_Event_0 Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.InitPlayerStateDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerState*                   InPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerName_Layoutable_C::InitPlayerStateDelegate(class ASBPlayerState* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "InitPlayerStateDelegate");

	Params::BP_PlayerName_Layoutable_C_InitPlayerStateDelegate Parms{};

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.OnAttachedClientPlayerStateDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerController*              PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerName_Layoutable_C::OnAttachedClientPlayerStateDelegate_Event_0(class ASBPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "OnAttachedClientPlayerStateDelegate_Event_0");

	Params::BP_PlayerName_Layoutable_C_OnAttachedClientPlayerStateDelegate_Event_0 Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_PlayerName_Layoutable_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetLayoutEditMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_LayoutEditMode                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerName_Layoutable_C::SetLayoutEditMode(bool Param_LayoutEditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "SetLayoutEditMode");

	Params::BP_PlayerName_Layoutable_C_SetLayoutEditMode Parms{};

	Parms.Param_LayoutEditMode = Param_LayoutEditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PlayerName_Layoutable_C::SetPlayerName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "SetPlayerName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerName_Layoutable.BP_PlayerName_Layoutable_C.SetAchievementName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PlayerName_Layoutable_C::SetAchievementName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerName_Layoutable_C", "SetAchievementName");

	UObject::ProcessEvent(Func, nullptr);
}

}

