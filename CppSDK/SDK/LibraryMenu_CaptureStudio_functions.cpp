#pragma once

 

// Package: LibraryMenu_CaptureStudio

#include "Basic.hpp"

#include "LibraryMenu_CaptureStudio_classes.hpp"
#include "LibraryMenu_CaptureStudio_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnModelLoadedDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ALibraryMenu_CaptureStudio_C::OnModelLoadedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "OnModelLoadedDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnModelLoadedAllMipDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ALibraryMenu_CaptureStudio_C::OnModelLoadedAllMipDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "OnModelLoadedAllMipDelegate__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ExecuteUbergraph_LibraryMenu_CaptureStudio
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALibraryMenu_CaptureStudio_C::ExecuteUbergraph_LibraryMenu_CaptureStudio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "ExecuteUbergraph_LibraryMenu_CaptureStudio");

	Params::LibraryMenu_CaptureStudio_C_ExecuteUbergraph_LibraryMenu_CaptureStudio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnLoadedModelAllMipEvent
// (BlueprintCallable, BlueprintEvent)

void ALibraryMenu_CaptureStudio_C::OnLoadedModelAllMipEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "OnLoadedModelAllMipEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnSetWeaponEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                EnemyActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALibraryMenu_CaptureStudio_C::OnSetWeaponEvent(class ASBEnemyCharacter* EnemyActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "OnSetWeaponEvent");

	Params::LibraryMenu_CaptureStudio_C_OnSetWeaponEvent Parms{};

	Parms.EnemyActor = EnemyActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ModelStateUpdate
// (BlueprintCallable, BlueprintEvent)

void ALibraryMenu_CaptureStudio_C::ModelStateUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "ModelStateUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.LoadModelAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EnemyCharacterId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBLibraryEnemyViewSetting              ViewSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBLibraryEnemyWeaponSetting            WeaponSetting                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALibraryMenu_CaptureStudio_C::LoadModelAsset(const class FString& EnemyCharacterId, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "LoadModelAsset");

	Params::LibraryMenu_CaptureStudio_C_LoadModelAsset Parms{};

	Parms.EnemyCharacterId = std::move(EnemyCharacterId);
	Parms.ViewSetting = ViewSetting;
	Parms.WeaponSetting = WeaponSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.OnSetModelDataEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALibraryMenu_CaptureStudio_C::OnSetModelDataEvent(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "OnSetModelDataEvent");

	Params::LibraryMenu_CaptureStudio_C_OnSetModelDataEvent Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ResetModel
// (Public, BlueprintCallable, BlueprintEvent)

void ALibraryMenu_CaptureStudio_C::ResetModel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "ResetModel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.RegistShowActorModel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALibraryMenu_CaptureStudio_C::RegistShowActorModel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "RegistShowActorModel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.WeaponSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                EnemyCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALibraryMenu_CaptureStudio_C::WeaponSetup(class ASBEnemyCharacter* EnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "WeaponSetup");

	Params::LibraryMenu_CaptureStudio_C_WeaponSetup Parms{};

	Parms.EnemyCharacter = EnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.GetCaptureModel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                EnemyCharacter                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALibraryMenu_CaptureStudio_C::GetCaptureModel(class ASBEnemyCharacter** EnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "GetCaptureModel");

	Params::LibraryMenu_CaptureStudio_C_GetCaptureModel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyCharacter != nullptr)
		*EnemyCharacter = Parms.EnemyCharacter;
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.SetupCameraPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALibraryMenu_CaptureStudio_C::SetupCameraPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "SetupCameraPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ModelDelete
// (Public, BlueprintCallable, BlueprintEvent)

void ALibraryMenu_CaptureStudio_C::ModelDelete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "ModelDelete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.SetCameraPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Rotate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CameraHeight                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SideOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALibraryMenu_CaptureStudio_C::SetCameraPosition(float Scale, float Rotate, float CameraHeight, float SideOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "SetCameraPosition");

	Params::LibraryMenu_CaptureStudio_C_SetCameraPosition Parms{};

	Parms.Scale = Scale;
	Parms.Rotate = Rotate;
	Parms.CameraHeight = CameraHeight;
	Parms.SideOffset = SideOffset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.AvariteliaEffectCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALibraryMenu_CaptureStudio_C::AvariteliaEffectCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "AvariteliaEffectCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.NormalEffectCheck
// (Public, BlueprintCallable, BlueprintEvent)

void ALibraryMenu_CaptureStudio_C::NormalEffectCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "NormalEffectCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_CaptureStudio.LibraryMenu_CaptureStudio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALibraryMenu_CaptureStudio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_CaptureStudio_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

