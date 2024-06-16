#pragma once

 

// Package: BP_WeaponForCapture_Studio

#include "Basic.hpp"

#include "BP_WeaponForCapture_Studio_classes.hpp"
#include "BP_WeaponForCapture_Studio_parameters.hpp"


namespace SDK
{

// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.OnWeaponLoadedDelegete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WeaponForCapture_Studio_C::OnWeaponLoadedDelegete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "OnWeaponLoadedDelegete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ExecuteUbergraph_BP_WeaponForCapture_Studio
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponForCapture_Studio_C::ExecuteUbergraph_BP_WeaponForCapture_Studio(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "ExecuteUbergraph_BP_WeaponForCapture_Studio");

	Params::BP_WeaponForCapture_Studio_C_ExecuteUbergraph_BP_WeaponForCapture_Studio Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetAllWeaponVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponForCapture_Studio_C::SetAllWeaponVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "SetAllWeaponVisibility");

	Params::BP_WeaponForCapture_Studio_C_SetAllWeaponVisibility Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.OnLoadWeaponAssetDelegate_����
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   WeaponID                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsMain                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ASBWeapon*>                Weapons                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WeaponForCapture_Studio_C::OnLoadWeaponAssetDelegate_____(const int32 WeaponID, const bool IsMain, const TArray<class ASBWeapon*>& Weapons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "OnLoadWeaponAssetDelegate_����");

	Params::BP_WeaponForCapture_Studio_C_OnLoadWeaponAssetDelegate_____ Parms{};

	Parms.WeaponID = WeaponID;
	Parms.IsMain = IsMain;
	Parms.Weapons = std::move(Weapons);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.LoadWeaponAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponItemId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponForCapture_Studio_C::LoadWeaponAsset(int32 InWeaponItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "LoadWeaponAsset");

	Params::BP_WeaponForCapture_Studio_C_LoadWeaponAsset Parms{};

	Parms.InWeaponItemId = InWeaponItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSubWeaponVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponForCapture_Studio_C::SetSubWeaponVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "SetSubWeaponVisibility");

	Params::BP_WeaponForCapture_Studio_C_SetSubWeaponVisibility Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetWeaponVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponForCapture_Studio_C::SetWeaponVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "SetWeaponVisibility");

	Params::BP_WeaponForCapture_Studio_C_SetWeaponVisibility Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.DestroyAllChildComponents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponForCapture_Studio_C::DestroyAllChildComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "DestroyAllChildComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetMainWeaponNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponForCapture_Studio_C::SetMainWeaponNum(int32 InWeaponNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "SetMainWeaponNum");

	Params::BP_WeaponForCapture_Studio_C_SetMainWeaponNum Parms{};

	Parms.InWeaponNum = InWeaponNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ResetWeapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponForCapture_Studio_C::ResetWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "ResetWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.GetWeaponInfoFromType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBWeaponType                           InWeaponType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FST_WeaponForCapture_Info        OutWeaponInfo                                          (Parm, OutParm, HasGetValueTypeHash)

void ABP_WeaponForCapture_Studio_C::GetWeaponInfoFromType(ESBWeaponType InWeaponType, struct FST_WeaponForCapture_Info* OutWeaponInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "GetWeaponInfoFromType");

	Params::BP_WeaponForCapture_Studio_C_GetWeaponInfoFromType Parms{};

	Parms.InWeaponType = InWeaponType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutWeaponInfo != nullptr)
		*OutWeaponInfo = std::move(Parms.OutWeaponInfo);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetMainWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASBWeapon*>                InWeaponAssets                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WeaponForCapture_Studio_C::SetMainWeapon(int32 InWeaponID, TArray<class ASBWeapon*>& InWeaponAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "SetMainWeapon");

	Params::BP_WeaponForCapture_Studio_C_SetMainWeapon Parms{};

	Parms.InWeaponID = InWeaponID;
	Parms.InWeaponAssets = std::move(InWeaponAssets);

	UObject::ProcessEvent(Func, &Parms);

	InWeaponAssets = std::move(Parms.InWeaponAssets);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSubWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ASBWeapon*>                InWeaponAssets                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WeaponForCapture_Studio_C::SetSubWeapon(int32 InWeaponID, TArray<class ASBWeapon*>& InWeaponAssets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "SetSubWeapon");

	Params::BP_WeaponForCapture_Studio_C_SetSubWeapon Parms{};

	Parms.InWeaponID = InWeaponID;
	Parms.InWeaponAssets = std::move(InWeaponAssets);

	UObject::ProcessEvent(Func, &Parms);

	InWeaponAssets = std::move(Parms.InWeaponAssets);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.SetSceneCaptureEveryFrameFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsCaptureEveryFrame                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponForCapture_Studio_C::SetSceneCaptureEveryFrameFlag(bool InIsCaptureEveryFrame)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "SetSceneCaptureEveryFrameFlag");

	Params::BP_WeaponForCapture_Studio_C_SetSceneCaptureEveryFrameFlag Parms{};

	Parms.InIsCaptureEveryFrame = InIsCaptureEveryFrame;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.CaptureScene
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponForCapture_Studio_C::CaptureScene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "CaptureScene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponForCapture_Studio_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "ReceiveEndPlay");

	Params::BP_WeaponForCapture_Studio_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WeaponForCapture_Studio_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_WeaponForCapture_Studio.BP_WeaponForCapture_Studio_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WeaponForCapture_Studio_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_Studio_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

