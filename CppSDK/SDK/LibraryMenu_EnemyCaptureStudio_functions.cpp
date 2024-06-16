#pragma once

 

// Package: LibraryMenu_EnemyCaptureStudio

#include "Basic.hpp"

#include "LibraryMenu_EnemyCaptureStudio_classes.hpp"
#include "LibraryMenu_EnemyCaptureStudio_parameters.hpp"


namespace SDK
{

// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnCaptureStudioConstructed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CaptureStudioBase_C*          InConstructedCaptureStudio                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_EnemyCaptureStudio_C::OnCaptureStudioConstructed__DelegateSignature(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "OnCaptureStudioConstructed__DelegateSignature");

	Params::LibraryMenu_EnemyCaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature Parms{};

	Parms.InConstructedCaptureStudio = InConstructedCaptureStudio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnLoadAssetComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_EnemyCaptureStudio_C::OnLoadAssetComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "OnLoadAssetComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnModelLoadedAllMip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_EnemyCaptureStudio_C::OnModelLoadedAllMip__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "OnModelLoadedAllMip__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_EnemyCaptureStudio_C::ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio");

	Params::LibraryMenu_EnemyCaptureStudio_C_ExecuteUbergraph_LibraryMenu_EnemyCaptureStudio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnModelLoadedAllMipDelegate
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_EnemyCaptureStudio_C::OnModelLoadedAllMipDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "OnModelLoadedAllMipDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ModelStateUpdate
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_EnemyCaptureStudio_C::ModelStateUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "ModelStateUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetExternalDirectionalLightRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_EnemyCaptureStudio_C::SetExternalDirectionalLightRotation(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "SetExternalDirectionalLightRotation");

	Params::LibraryMenu_EnemyCaptureStudio_C_SetExternalDirectionalLightRotation Parms{};

	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetEnableCaptureStudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_EnemyCaptureStudio_C::SetEnableCaptureStudio(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "SetEnableCaptureStudio");

	Params::LibraryMenu_EnemyCaptureStudio_C_SetEnableCaptureStudio Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.DoEnableCaptureStudio
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_EnemyCaptureStudio_C::DoEnableCaptureStudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "DoEnableCaptureStudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.DoDisableCaptureStudio
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_EnemyCaptureStudio_C::DoDisableCaptureStudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "DoDisableCaptureStudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_EnemyCaptureStudio_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.OnModelLoaded
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_EnemyCaptureStudio_C::OnModelLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "OnModelLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.LoadAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EnemyCharacterId                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBLibraryEnemyViewSetting              ViewSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBLibraryEnemyWeaponSetting            WeaponSetting                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_EnemyCaptureStudio_C::LoadAsset(const class FString& EnemyCharacterId, ESBLibraryEnemyViewSetting ViewSetting, ESBLibraryEnemyWeaponSetting WeaponSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "LoadAsset");

	Params::LibraryMenu_EnemyCaptureStudio_C_LoadAsset Parms{};

	Parms.EnemyCharacterId = std::move(EnemyCharacterId);
	Parms.ViewSetting = ViewSetting;
	Parms.WeaponSetting = WeaponSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ApplyExternalDirectionalLightRotation
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_EnemyCaptureStudio_C::ApplyExternalDirectionalLightRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "ApplyExternalDirectionalLightRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Construct_Studio
// (BlueprintCallable, BlueprintEvent)

void ULibraryMenu_EnemyCaptureStudio_C::Construct_Studio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "Construct_Studio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULibraryMenu_EnemyCaptureStudio_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureMoveActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_ActiveMove                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_EnemyCaptureStudio_C::SetCaptureMoveActive(bool Param_ActiveMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "SetCaptureMoveActive");

	Params::LibraryMenu_EnemyCaptureStudio_C_SetCaptureMoveActive Parms{};

	Parms.Param_ActiveMove = Param_ActiveMove;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureRotateActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_ActiveRotate                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_EnemyCaptureStudio_C::SetCaptureRotateActive(bool Param_ActiveRotate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "SetCaptureRotateActive");

	Params::LibraryMenu_EnemyCaptureStudio_C_SetCaptureRotateActive Parms{};

	Parms.Param_ActiveRotate = Param_ActiveRotate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetCaptureZoomActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_ActiveZoom                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_EnemyCaptureStudio_C::SetCaptureZoomActive(bool Param_ActiveZoom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "SetCaptureZoomActive");

	Params::LibraryMenu_EnemyCaptureStudio_C_SetCaptureZoomActive Parms{};

	Parms.Param_ActiveZoom = Param_ActiveZoom;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetStudioVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_EnemyCaptureStudio_C::SetStudioVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "SetStudioVisibility");

	Params::LibraryMenu_EnemyCaptureStudio_C_SetStudioVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.Setup and Load Asset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       LoadCompleteEvent                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FSBLibraryEnemyAppearanceData    EnemyData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void ULibraryMenu_EnemyCaptureStudio_C::Setup_and_Load_Asset(const TDelegate<void()>& LoadCompleteEvent, const struct FSBLibraryEnemyAppearanceData& EnemyData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "Setup and Load Asset");

	Params::LibraryMenu_EnemyCaptureStudio_C_Setup_and_Load_Asset Parms{};

	Parms.LoadCompleteEvent = LoadCompleteEvent;
	Parms.EnemyData = std::move(EnemyData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetStudioHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsHidden                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibraryMenu_EnemyCaptureStudio_C::SetStudioHidden(bool InIsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "SetStudioHidden");

	Params::LibraryMenu_EnemyCaptureStudio_C_SetStudioHidden Parms{};

	Parms.InIsHidden = InIsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.GetCaptureModel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                EnemyCharacter                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_EnemyCaptureStudio_C::GetCaptureModel(class ASBEnemyCharacter** EnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "GetCaptureModel");

	Params::LibraryMenu_EnemyCaptureStudio_C_GetCaptureModel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyCharacter != nullptr)
		*EnemyCharacter = Parms.EnemyCharacter;
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.ModelDelete
// (Public, BlueprintCallable, BlueprintEvent)

void ULibraryMenu_EnemyCaptureStudio_C::ModelDelete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "ModelDelete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LibraryMenu_EnemyCaptureStudio.LibraryMenu_EnemyCaptureStudio_C.SetEnemyModelCameraState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Rotate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CameraHeight                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SideOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibraryMenu_EnemyCaptureStudio_C::SetEnemyModelCameraState(float Scale, float Rotate, float CameraHeight, float SideOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LibraryMenu_EnemyCaptureStudio_C", "SetEnemyModelCameraState");

	Params::LibraryMenu_EnemyCaptureStudio_C_SetEnemyModelCameraState Parms{};

	Parms.Scale = Scale;
	Parms.Rotate = Rotate;
	Parms.CameraHeight = CameraHeight;
	Parms.SideOffset = SideOffset;

	UObject::ProcessEvent(Func, &Parms);
}

}

