#pragma once

 

// Package: BP_MannequinForCapture_Studio

#include "Basic.hpp"

#include "BP_MannequinForCapture_Studio_classes.hpp"
#include "BP_MannequinForCapture_Studio_parameters.hpp"


namespace SDK
{

// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.OnCostumeLoadedDelegete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_MannequinForCapture_Studio_C::OnCostumeLoadedDelegete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "OnCostumeLoadedDelegete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ExecuteUbergraph_BP_MannequinForCapture_Studio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MannequinForCapture_Studio_C::ExecuteUbergraph_BP_MannequinForCapture_Studio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "ExecuteUbergraph_BP_MannequinForCapture_Studio");

	Params::BP_MannequinForCapture_Studio_C_ExecuteUbergraph_BP_MannequinForCapture_Studio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeLoaded
// (BlueprintCallable, BlueprintEvent)

void ABP_MannequinForCapture_Studio_C::CostumeLoaded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "CostumeLoaded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SwitchActiveMannequin_LoadAssetAfter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsMaleActive                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EProtectorCategory                      InProtectorCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InCostumeItemId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsNoResetLocAndRot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MannequinForCapture_Studio_C::SwitchActiveMannequin_LoadAssetAfter(bool Param_IsMaleActive, EProtectorCategory InProtectorCategory, int32 InCostumeItemId, bool InIsNoResetLocAndRot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "SwitchActiveMannequin_LoadAssetAfter");

	Params::BP_MannequinForCapture_Studio_C_SwitchActiveMannequin_LoadAssetAfter Parms{};

	Parms.Param_IsMaleActive = Param_IsMaleActive;
	Parms.InProtectorCategory = InProtectorCategory;
	Parms.InCostumeItemId = InCostumeItemId;
	Parms.InIsNoResetLocAndRot = InIsNoResetLocAndRot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeFemaleLoadEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MannequinForCapture_Studio_C::CostumeFemaleLoadEnd(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "CostumeFemaleLoadEnd");

	Params::BP_MannequinForCapture_Studio_C_CostumeFemaleLoadEnd Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.CostumeMaleLoadEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MannequinForCapture_Studio_C::CostumeMaleLoadEnd(bool Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "CostumeMaleLoadEnd");

	Params::BP_MannequinForCapture_Studio_C_CostumeMaleLoadEnd Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetModelAndCameraTransform
// (BlueprintCallable, BlueprintEvent)

void ABP_MannequinForCapture_Studio_C::ResetModelAndCameraTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "ResetModelAndCameraTransform");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetMannequin
// (BlueprintCallable, BlueprintEvent)

void ABP_MannequinForCapture_Studio_C::ResetMannequin()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "ResetMannequin");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetCostumeToMannequin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCostumeItemIndex                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOwnItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InOwnCostumeColorId                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InOwnCostumeColorS                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InOwnCostumeColorV                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InOwnCostumeMaterialId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MannequinForCapture_Studio_C::SetCostumeToMannequin(int32 InCostumeItemIndex, bool IsOwnItem, int32 InOwnCostumeColorId, const int32 InOwnCostumeColorS, int32 InOwnCostumeColorV, int32 InOwnCostumeMaterialId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "SetCostumeToMannequin");

	Params::BP_MannequinForCapture_Studio_C_SetCostumeToMannequin Parms{};

	Parms.InCostumeItemIndex = InCostumeItemIndex;
	Parms.IsOwnItem = IsOwnItem;
	Parms.InOwnCostumeColorId = InOwnCostumeColorId;
	Parms.InOwnCostumeColorS = InOwnCostumeColorS;
	Parms.InOwnCostumeColorV = InOwnCostumeColorV;
	Parms.InOwnCostumeMaterialId = InOwnCostumeMaterialId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SwitchActiveMannequin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsMaleActive                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EProtectorCategory                      InProtectorCategory                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InCostumeItemId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsNoResetLocAndRot                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MannequinForCapture_Studio_C::SwitchActiveMannequin(bool Param_IsMaleActive, EProtectorCategory InProtectorCategory, int32 InCostumeItemId, bool InIsNoResetLocAndRot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "SwitchActiveMannequin");

	Params::BP_MannequinForCapture_Studio_C_SwitchActiveMannequin Parms{};

	Parms.Param_IsMaleActive = Param_IsMaleActive;
	Parms.InProtectorCategory = InProtectorCategory;
	Parms.InCostumeItemId = InCostumeItemId;
	Parms.InIsNoResetLocAndRot = InIsNoResetLocAndRot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MannequinForCapture_Studio_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "ReceiveEndPlay");

	Params::BP_MannequinForCapture_Studio_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MannequinForCapture_Studio_C::SetMannequinVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "SetMannequinVisibility");

	Params::BP_MannequinForCapture_Studio_C_SetMannequinVisibility Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MannequinForCapture_Studio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MannequinForCapture_Studio_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.ResetMannequinAndCameraToDefaultTrans
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MannequinForCapture_Studio_C::ResetMannequinAndCameraToDefaultTrans()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "ResetMannequinAndCameraToDefaultTrans");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.DestroyAllChildComponents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MannequinForCapture_Studio_C::DestroyAllChildComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "DestroyAllChildComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetMannequinCameraSettingInfoFromType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EProtectorCategory                      InCostumType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsMale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_MannequinForCapture_Info     OutCostumeMannequinInfo                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MannequinForCapture_Studio_C::GetMannequinCameraSettingInfoFromType(EProtectorCategory InCostumType, bool InIsMale, struct FST_MannequinForCapture_Info* OutCostumeMannequinInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "GetMannequinCameraSettingInfoFromType");

	Params::BP_MannequinForCapture_Studio_C_GetMannequinCameraSettingInfoFromType Parms{};

	Parms.InCostumType = InCostumType;
	Parms.InIsMale = InIsMale;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCostumeMannequinInfo != nullptr)
		*OutCostumeMannequinInfo = std::move(Parms.OutCostumeMannequinInfo);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinAndCameraByCostumeType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EProtectorCategory                      InCostumeType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InCostumeId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MannequinForCapture_Studio_C::SetMannequinAndCameraByCostumeType(EProtectorCategory InCostumeType, int32 InCostumeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "SetMannequinAndCameraByCostumeType");

	Params::BP_MannequinForCapture_Studio_C_SetMannequinAndCameraByCostumeType Parms{};

	Parms.InCostumeType = InCostumeType;
	Parms.InCostumeId = InCostumeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.SetMannequinGradationEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MannequinForCapture_Studio_C::SetMannequinGradationEnable(bool InIsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "SetMannequinGradationEnable");

	Params::BP_MannequinForCapture_Studio_C_SetMannequinGradationEnable Parms{};

	Parms.InIsEnable = InIsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.IsPartsLoaded
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UChildActorComponent*             Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_MannequinForCapture_Studio_C::IsPartsLoaded(class UChildActorComponent* Target, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "IsPartsLoaded");

	Params::BP_MannequinForCapture_Studio_C_IsPartsLoaded Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetMannequinArrangementCameraSettingInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InCostumeId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsMale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FST_MannequinForCapture_CameraSettingInfoOutArrangementCameraSettingInfo                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MannequinForCapture_Studio_C::GetMannequinArrangementCameraSettingInfo(int32 InCostumeId, bool InIsMale, bool* IsValid, struct FST_MannequinForCapture_CameraSettingInfo* OutArrangementCameraSettingInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "GetMannequinArrangementCameraSettingInfo");

	Params::BP_MannequinForCapture_Studio_C_GetMannequinArrangementCameraSettingInfo Parms{};

	Parms.InCostumeId = InCostumeId;
	Parms.InIsMale = InIsMale;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutArrangementCameraSettingInfo != nullptr)
		*OutArrangementCameraSettingInfo = std::move(Parms.OutArrangementCameraSettingInfo);
}


// Function BP_MannequinForCapture_Studio.BP_MannequinForCapture_Studio_C.GetActiveMannequin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASBCharaCreateCharacter*          AsSBChara_Create_Character                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MannequinForCapture_Studio_C::GetActiveMannequin(class ASBCharaCreateCharacter** AsSBChara_Create_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MannequinForCapture_Studio_C", "GetActiveMannequin");

	Params::BP_MannequinForCapture_Studio_C_GetActiveMannequin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsSBChara_Create_Character != nullptr)
		*AsSBChara_Create_Character = Parms.AsSBChara_Create_Character;
}

}

