#pragma once

 

// Package: UMG_CaptureStudio

#include "Basic.hpp"

#include "UMG_CaptureStudio_classes.hpp"
#include "UMG_CaptureStudio_parameters.hpp"


namespace SDK
{

// Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnCaptureStudioConstructed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CaptureStudioBase_C*          InConstructedCaptureStudio                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CaptureStudio_C::OnCaptureStudioConstructed__DelegateSignature(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "OnCaptureStudioConstructed__DelegateSignature");

	Params::UMG_CaptureStudio_C_OnCaptureStudioConstructed__DelegateSignature Parms{};

	Parms.InConstructedCaptureStudio = InConstructedCaptureStudio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnLoadAssetComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::OnLoadAssetComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "OnLoadAssetComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.ExecuteUbergraph_UMG_CaptureStudio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CaptureStudio_C::ExecuteUbergraph_UMG_CaptureStudio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "ExecuteUbergraph_UMG_CaptureStudio");

	Params::UMG_CaptureStudio_C_ExecuteUbergraph_UMG_CaptureStudio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.ApplyExternalDirectionalLightRotation
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::ApplyExternalDirectionalLightRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "ApplyExternalDirectionalLightRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetExternalDirectionalLightRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::SetExternalDirectionalLightRotation(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetExternalDirectionalLightRotation");

	Params::UMG_CaptureStudio_C_SetExternalDirectionalLightRotation Parms{};

	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnMountImagineLoaded
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::OnMountImagineLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "OnMountImagineLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadMountImagineAsset
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::LoadMountImagineAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "LoadMountImagineAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnImagineLoaded
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::OnImagineLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "OnImagineLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnCostumeLoaded
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::OnCostumeLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "OnCostumeLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.DoEnableCaptureStudio
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::DoEnableCaptureStudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "DoEnableCaptureStudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetEnableCaptureStudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::SetEnableCaptureStudio(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetEnableCaptureStudio");

	Params::UMG_CaptureStudio_C_SetEnableCaptureStudio Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.DoDisableCaptureStudio
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::DoDisableCaptureStudio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "DoDisableCaptureStudio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.OnWeaponLoaded
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::OnWeaponLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "OnWeaponLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadImagineAsset
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::LoadImagineAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "LoadImagineAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_CaptureStudio_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_CaptureStudio_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.Destruct Capture Studio
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::Destruct_Capture_Studio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "Destruct Capture Studio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadMannequinAsset
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::LoadMannequinAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "LoadMannequinAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadWeaponAsset
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::LoadWeaponAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "LoadWeaponAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.LoadAsset
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::LoadAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "LoadAsset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.Construct_Capture_Studio
// (BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::Construct_Capture_Studio()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "Construct_Capture_Studio");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureMoveActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_ActiveMove                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::SetCaptureMoveActive(bool Param_ActiveMove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetCaptureMoveActive");

	Params::UMG_CaptureStudio_C_SetCaptureMoveActive Parms{};

	Parms.Param_ActiveMove = Param_ActiveMove;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureRotateActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_ActiveRotate                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::SetCaptureRotateActive(bool Param_ActiveRotate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetCaptureRotateActive");

	Params::UMG_CaptureStudio_C_SetCaptureRotateActive Parms{};

	Parms.Param_ActiveRotate = Param_ActiveRotate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetDrawMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemType                               Param_ItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CaptureStudio_C::SetDrawMode(EItemType Param_ItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetDrawMode");

	Params::UMG_CaptureStudio_C_SetDrawMode Parms{};

	Parms.Param_ItemType = Param_ItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetWeaponId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_WeaponItemId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExist                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::SetWeaponId(int32 Param_WeaponItemId, bool* IsExist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetWeaponId");

	Params::UMG_CaptureStudio_C_SetWeaponId Parms{};

	Parms.Param_WeaponItemId = Param_WeaponItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsExist != nullptr)
		*IsExist = Parms.IsExist;
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCostumeItemID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_CostumeItemId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_CostumeUniqueID                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Param_CostumeStorageNumber                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CaptureStudio_C::SetCostumeItemID(int32 Param_CostumeItemId, const class FString& Param_CostumeUniqueID, int32 Param_CostumeStorageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetCostumeItemID");

	Params::UMG_CaptureStudio_C_SetCostumeItemID Parms{};

	Parms.Param_CostumeItemId = Param_CostumeItemId;
	Parms.Param_CostumeUniqueID = std::move(Param_CostumeUniqueID);
	Parms.Param_CostumeStorageNumber = Param_CostumeStorageNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetCaptureZoomActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_ActiveZoom                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::SetCaptureZoomActive(bool Param_ActiveZoom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetCaptureZoomActive");

	Params::UMG_CaptureStudio_C_SetCaptureZoomActive Parms{};

	Parms.Param_ActiveZoom = Param_ActiveZoom;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.IsCostumeValid
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::IsCostumeValid(bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "IsCostumeValid");

	Params::UMG_CaptureStudio_C_IsCostumeValid Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetImagineId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ImaginetemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExist                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::SetImagineId(int32 ImaginetemId, bool* IsExist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetImagineId");

	Params::UMG_CaptureStudio_C_SetImagineId Parms{};

	Parms.ImaginetemId = ImaginetemId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsExist != nullptr)
		*IsExist = Parms.IsExist;
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetStudioVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::SetStudioVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetStudioVisibility");

	Params::UMG_CaptureStudio_C_SetStudioVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.Load Costume Asset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MannequinForCapture_Studio_C* MannequiCaptionStudio                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       Event                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::Load_Costume_Asset(class ABP_MannequinForCapture_Studio_C* MannequiCaptionStudio, const TDelegate<void()>& Event, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "Load Costume Asset");

	Params::UMG_CaptureStudio_C_Load_Costume_Asset Parms{};

	Parms.MannequiCaptionStudio = MannequiCaptionStudio;
	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetupAndLoadAsset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TDelegate<void()>                       LoadCompleteEvent                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FInventoryItemData               InInventoryItemData                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_CaptureStudio_C::SetupAndLoadAsset(const TDelegate<void()>& LoadCompleteEvent, const struct FInventoryItemData& InInventoryItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetupAndLoadAsset");

	Params::UMG_CaptureStudio_C_SetupAndLoadAsset Parms{};

	Parms.LoadCompleteEvent = LoadCompleteEvent;
	Parms.InInventoryItemData = std::move(InInventoryItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetStudioHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsHidden                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::SetStudioHidden(bool InIsHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetStudioHidden");

	Params::UMG_CaptureStudio_C_SetStudioHidden Parms{};

	Parms.InIsHidden = InIsHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.DebugPrintObjectPath
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::DebugPrintObjectPath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "DebugPrintObjectPath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetMountImagineId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ImaginetemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExist                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::SetMountImagineId(int32 ImaginetemId, bool* IsExist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetMountImagineId");

	Params::UMG_CaptureStudio_C_SetMountImagineId Parms{};

	Parms.ImaginetemId = ImaginetemId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsExist != nullptr)
		*IsExist = Parms.IsExist;
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.ResetWeaponMeshAndCameraTransform
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::ResetWeaponMeshAndCameraTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "ResetWeaponMeshAndCameraTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.ResetMountImagineMeshAndCameraTransform
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_CaptureStudio_C::ResetMountImagineMeshAndCameraTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "ResetMountImagineMeshAndCameraTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetLightEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CaptureStudio_C::SetLightEnable(bool bIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetLightEnable");

	Params::UMG_CaptureStudio_C_SetLightEnable Parms{};

	Parms.bIsEnable = bIsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_CaptureStudio.UMG_CaptureStudio_C.SetOwnItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItem                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_CaptureStudio_C::SetOwnItem(const struct FOwnItemInfo& InOwnItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_CaptureStudio_C", "SetOwnItem");

	Params::UMG_CaptureStudio_C_SetOwnItem Parms{};

	Parms.InOwnItem = std::move(InOwnItem);

	UObject::ProcessEvent(Func, &Parms);
}

}

