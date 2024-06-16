#pragma once

 

// Package: BP_PlayerSceneCapture2D

#include "Basic.hpp"

#include "BP_PlayerSceneCapture2D_classes.hpp"
#include "BP_PlayerSceneCapture2D_parameters.hpp"


namespace SDK
{

// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.OnChangeState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InPrevStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNextStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::OnChangeState__DelegateSignature(const class FString& InPrevStateName, const class FString& InNextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "OnChangeState__DelegateSignature");

	Params::BP_PlayerSceneCapture2D_C_OnChangeState__DelegateSignature Parms{};

	Parms.InPrevStateName = std::move(InPrevStateName);
	Parms.InNextStateName = std::move(InNextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.TestShowAvatarEquipWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShowWeapon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_bIsCheckSheathe                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsCopyAnimation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_C::TestShowAvatarEquipWeapon__DelegateSignature(bool bIsShowWeapon, bool Param_bIsCheckSheathe, bool bIsCopyAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "TestShowAvatarEquipWeapon__DelegateSignature");

	Params::BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon__DelegateSignature Parms{};

	Parms.bIsShowWeapon = bIsShowWeapon;
	Parms.Param_bIsCheckSheathe = Param_bIsCheckSheathe;
	Parms.bIsCopyAnimation = bIsCopyAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ExecuteUbergraph_BP_PlayerSceneCapture2D
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::ExecuteUbergraph_BP_PlayerSceneCapture2D(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "ExecuteUbergraph_BP_PlayerSceneCapture2D");

	Params::BP_PlayerSceneCapture2D_C_ExecuteUbergraph_BP_PlayerSceneCapture2D Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ShowWeapon_Debug
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bShow                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_C::ShowWeapon_Debug(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "ShowWeapon_Debug");

	Params::BP_PlayerSceneCapture2D_C_ShowWeapon_Debug Parms{};

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.TestShowAvatarEquipWeapon_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsShowWeapon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_bIsCheckSheathe                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsCopyAnimation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_C::TestShowAvatarEquipWeapon_Event(bool bIsShowWeapon, bool Param_bIsCheckSheathe, bool bIsCopyAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "TestShowAvatarEquipWeapon_Event");

	Params::BP_PlayerSceneCapture2D_C_TestShowAvatarEquipWeapon_Event Parms{};

	Parms.bIsShowWeapon = bIsShowWeapon;
	Parms.Param_bIsCheckSheathe = Param_bIsCheckSheathe;
	Parms.bIsCopyAnimation = bIsCopyAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "ReceiveEndPlay");

	Params::BP_PlayerSceneCapture2D_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.OnChangeState_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InPrevStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           InNextStateName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::OnChangeState_____(const class FString& InPrevStateName, const class FString& InNextStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "OnChangeState_����");

	Params::BP_PlayerSceneCapture2D_C_OnChangeState_____ Parms{};

	Parms.InPrevStateName = std::move(InPrevStateName);
	Parms.InNextStateName = std::move(InNextStateName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PlayerSceneCapture2D_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharaCreateParameter          InNewCharaCreateParameter                              (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerSceneCapture2D_C::UpdateAvatar(const struct FSBCharaCreateParameter& InNewCharaCreateParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "UpdateAvatar");

	Params::BP_PlayerSceneCapture2D_C_UpdateAvatar Parms{};

	Parms.InNewCharaCreateParameter = std::move(InNewCharaCreateParameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateAvatarFromPlayerCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_C::UpdateAvatarFromPlayerCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "UpdateAvatarFromPlayerCharacter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.RefreshAvatar
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_C::RefreshAvatar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "RefreshAvatar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetCurrentAvatarPosingAnimStateName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           OutAnimStateName                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::GetCurrentAvatarPosingAnimStateName(class FString* OutAnimStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "GetCurrentAvatarPosingAnimStateName");

	Params::BP_PlayerSceneCapture2D_C_GetCurrentAvatarPosingAnimStateName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutAnimStateName != nullptr)
		*OutAnimStateName = std::move(Parms.OutAnimStateName);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get State Machine Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           OutName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::Get_State_Machine_Name(class FString* OutName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "Get State Machine Name");

	Params::BP_PlayerSceneCapture2D_C_Get_State_Machine_Name Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get State Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InStateNameNo                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           OutStateName                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::Get_State_Name(int32 InStateNameNo, bool* IsValid, class FString* OutStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "Get State Name");

	Params::BP_PlayerSceneCapture2D_C_Get_State_Name Parms{};

	Parms.InStateNameNo = InStateNameNo;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutStateName != nullptr)
		*OutStateName = std::move(Parms.OutStateName);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetStateNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutNum                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::GetStateNum(int32* OutNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "GetStateNum");

	Params::BP_PlayerSceneCapture2D_C_GetStateNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutNum != nullptr)
		*OutNum = Parms.OutNum;
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.FindStateName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           InStateName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   OutNo                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::FindStateName(const class FString& InStateName, int32* OutNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "FindStateName");

	Params::BP_PlayerSceneCapture2D_C_FindStateName Parms{};

	Parms.InStateName = std::move(InStateName);

	UObject::ProcessEvent(Func, &Parms);

	if (OutNo != nullptr)
		*OutNo = Parms.OutNo;
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetIsAvatarNaked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsNaked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_C::SetIsAvatarNaked(bool InIsNaked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "SetIsAvatarNaked");

	Params::BP_PlayerSceneCapture2D_C_SetIsAvatarNaked Parms{};

	Parms.InIsNaked = InIsNaked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 CostumeData                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerSceneCapture2D_C::SetCostumePartsData(const struct FSBMasterCostume& CostumeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "SetCostumePartsData");

	Params::BP_PlayerSceneCapture2D_C_SetCostumePartsData Parms{};

	Parms.CostumeData = std::move(CostumeData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsDataByUniqueId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 CostumeData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::SetCostumePartsDataByUniqueId(const struct FSBMasterCostume& CostumeData, const class FString& InUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "SetCostumePartsDataByUniqueId");

	Params::BP_PlayerSceneCapture2D_C_SetCostumePartsDataByUniqueId Parms{};

	Parms.CostumeData = std::move(CostumeData);
	Parms.InUniqueId = std::move(InUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCostumePartsDataMain
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 CostumeData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   ColorIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ColorSaturation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ColorValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InMaterialIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::SetCostumePartsDataMain(const struct FSBMasterCostume& CostumeData, int32 ColorIndex, int32 ColorSaturation, int32 ColorValue, int32 InMaterialIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "SetCostumePartsDataMain");

	Params::BP_PlayerSceneCapture2D_C_SetCostumePartsDataMain Parms{};

	Parms.CostumeData = std::move(CostumeData);
	Parms.ColorIndex = ColorIndex;
	Parms.ColorSaturation = ColorSaturation;
	Parms.ColorValue = ColorValue;
	Parms.InMaterialIndex = InMaterialIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetCharaCreateParameterOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharaCreateParameter          Param_CharaCreateParameter                             (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerSceneCapture2D_C::SetCharaCreateParameterOnly(const struct FSBCharaCreateParameter& Param_CharaCreateParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "SetCharaCreateParameterOnly");

	Params::BP_PlayerSceneCapture2D_C_SetCharaCreateParameterOnly Parms{};

	Parms.Param_CharaCreateParameter = std::move(Param_CharaCreateParameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Get Fidget State Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           OutStateName                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::Get_Fidget_State_Name(bool* IsValid, class FString* OutStateName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "Get Fidget State Name");

	Params::BP_PlayerSceneCapture2D_C_Get_Fidget_State_Name Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutStateName != nullptr)
		*OutStateName = std::move(Parms.OutStateName);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UpdateWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_C::UpdateWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "UpdateWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.Show Weapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsViewWeapon                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_bIsCheckSheathe                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bIsCopyAnimation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PlayerSceneCapture2D_C::Show_Weapon(bool Param_bIsViewWeapon, bool Param_bIsCheckSheathe, bool bIsCopyAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "Show Weapon");

	Params::BP_PlayerSceneCapture2D_C_Show_Weapon Parms{};

	Parms.Param_bIsViewWeapon = Param_bIsViewWeapon;
	Parms.Param_bIsCheckSheathe = Param_bIsCheckSheathe;
	Parms.bIsCopyAnimation = bIsCopyAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.InitPhotoMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               Param_BasePlayerCharacter                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::InitPhotoMode(class ASBPlayerCharacter* Param_BasePlayerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "InitPhotoMode");

	Params::BP_PlayerSceneCapture2D_C_InitPhotoMode Parms{};

	Parms.Param_BasePlayerCharacter = Param_BasePlayerCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.InitCopyPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           SourceCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::InitCopyPose(class USkeletalMeshComponent* SourceCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "InitCopyPose");

	Params::BP_PlayerSceneCapture2D_C_InitCopyPose Parms{};

	Parms.SourceCharacter = SourceCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.UnuseCopyPose
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PlayerSceneCapture2D_C::UnuseCopyPose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "UnuseCopyPose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.GetExtraCharaPartsComponentList
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USBCharaPartsComponent*>   ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USBCharaPartsComponent*> ABP_PlayerSceneCapture2D_C::GetExtraCharaPartsComponentList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "GetExtraCharaPartsComponentList");

	Params::BP_PlayerSceneCapture2D_C_GetExtraCharaPartsComponentList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PlayerSceneCapture2D.BP_PlayerSceneCapture2D_C.SetFacialType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFacialType                           InFacialType                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerSceneCapture2D_C::SetFacialType(const ESBFacialType InFacialType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerSceneCapture2D_C", "SetFacialType");

	Params::BP_PlayerSceneCapture2D_C_SetFacialType Parms{};

	Parms.InFacialType = InFacialType;

	UObject::ProcessEvent(Func, &Parms);
}

}

