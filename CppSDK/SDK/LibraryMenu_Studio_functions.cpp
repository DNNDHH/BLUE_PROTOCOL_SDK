#pragma once

 

// Package: LibraryMenu_Studio

#include "Basic.hpp"

#include "LibraryMenu_Studio_classes.hpp"
#include "LibraryMenu_Studio_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnSetModelData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALibraryMenu_Studio_C::OnSetModelData__DelegateSignature(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "OnSetModelData__DelegateSignature");

	Params::LibraryMenu_Studio_C_OnSetModelData__DelegateSignature Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnWeaponSetup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                EnemyActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALibraryMenu_Studio_C::OnWeaponSetup__DelegateSignature(class ASBEnemyCharacter* EnemyActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "OnWeaponSetup__DelegateSignature");

	Params::LibraryMenu_Studio_C_OnWeaponSetup__DelegateSignature Parms{};

	Parms.EnemyActor = EnemyActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnLoadedModelAllMip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ALibraryMenu_Studio_C::OnLoadedModelAllMip__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "OnLoadedModelAllMip__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.ExecuteUbergraph_LibraryMenu_Studio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALibraryMenu_Studio_C::ExecuteUbergraph_LibraryMenu_Studio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "ExecuteUbergraph_LibraryMenu_Studio");

	Params::LibraryMenu_Studio_C_ExecuteUbergraph_LibraryMenu_Studio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnWeaponEquip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                EnemyCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALibraryMenu_Studio_C::OnWeaponEquip(class ASBEnemyCharacter* EnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "OnWeaponEquip");

	Params::LibraryMenu_Studio_C_OnWeaponEquip Parms{};

	Parms.EnemyCharacter = EnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ALibraryMenu_Studio_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnLoadEvent
// (BlueprintCallable, BlueprintEvent)

void ALibraryMenu_Studio_C::OnLoadEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "OnLoadEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.SetEnemyModelId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBLibraryEnemyViewSetting              ViewSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBLibraryEnemyWeaponSetting            WeaponSetting                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALibraryMenu_Studio_C::SetEnemyModelId(const class FString& ID, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "SetEnemyModelId");

	Params::LibraryMenu_Studio_C_SetEnemyModelId Parms{};

	Parms.ID = std::move(ID);
	Parms.ViewSetting = ViewSetting;
	Parms.WeaponSetting = WeaponSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.OnAssetLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bInResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALibraryMenu_Studio_C::OnAssetLoaded(const bool bInResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "OnAssetLoaded");

	Params::LibraryMenu_Studio_C_OnAssetLoaded Parms{};

	Parms.bInResult = bInResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALibraryMenu_Studio_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "ReceiveTick");

	Params::LibraryMenu_Studio_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.LoadEnemyAsset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALibraryMenu_Studio_C::LoadEnemyAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "LoadEnemyAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.ModelSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALibraryMenu_Studio_C::ModelSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "ModelSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.GetModelActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALibraryMenu_Studio_C::GetModelActor(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "GetModelActor");

	Params::LibraryMenu_Studio_C_GetModelActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.WeaponSetup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsComplete                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALibraryMenu_Studio_C::WeaponSetup(bool* IsComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "WeaponSetup");

	Params::LibraryMenu_Studio_C_WeaponSetup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsComplete != nullptr)
		*IsComplete = Parms.IsComplete;
}


// Function LibraryMenu_Studio.LibraryMenu_Studio_C.ModelDelete
// (Public, BlueprintCallable, BlueprintEvent)

void ALibraryMenu_Studio_C::ModelDelete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_Studio_C", "ModelDelete");

	UObject::ProcessEvent(Func, nullptr);
}

}

