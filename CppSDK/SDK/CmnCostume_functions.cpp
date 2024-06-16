#pragma once

 

// Package: CmnCostume

#include "Basic.hpp"

#include "CmnCostume_classes.hpp"
#include "CmnCostume_parameters.hpp"


namespace SDK
{

// Function CmnCostume.CmnCostume_C.OnCreatePlayerCapture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerSceneCapture2D_Studio_C*PlayerCapture                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnCostume_C::OnCreatePlayerCapture__DelegateSignature(class ABP_PlayerSceneCapture2D_Studio_C* PlayerCapture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "OnCreatePlayerCapture__DelegateSignature");

	Params::CmnCostume_C_OnCreatePlayerCapture__DelegateSignature Parms{};

	Parms.PlayerCapture = PlayerCapture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.OnClickZoomIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCmnCostume_C::OnClickZoomIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "OnClickZoomIn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.OnClickZoomOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCmnCostume_C::OnClickZoomOut__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "OnClickZoomOut__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.OnTrying__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnCostume_C::OnTrying__DelegateSignature(int32 ItemIndex, bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "OnTrying__DelegateSignature");

	Params::CmnCostume_C_OnTrying__DelegateSignature Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.ExecuteUbergraph_CmnCostume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnCostume_C::ExecuteUbergraph_CmnCostume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "ExecuteUbergraph_CmnCostume");

	Params::CmnCostume_C_ExecuteUbergraph_CmnCostume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_L_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnCostume_C::BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_L_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_L_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_S_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnCostume_C::BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_S_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "BndEvt__CmnCostume_SBTextButtonCmnBtn27_ResetTrying_S_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_CmnBtnOnOff01_L_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UCmnCostume_C::BndEvt__CmnCostume_CmnBtnOnOff01_L_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "BndEvt__CmnCostume_CmnBtnOnOff01_L_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.BndEvt__CmnCostume_CmnBtnOnOff01_266_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UCmnCostume_C::BndEvt__CmnCostume_CmnBtnOnOff01_266_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "BndEvt__CmnCostume_CmnBtnOnOff01_266_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_LayoutType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnCostume_C::Init(class FName Param_LayoutType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "Init");

	Params::CmnCostume_C_Init Parms{};

	Parms.Param_LayoutType = Param_LayoutType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomInPlayerCapture_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnCostume_C::BndEvt__SBButton_ZoomInPlayerCapture_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "BndEvt__SBButton_ZoomInPlayerCapture_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomOutPlayerCapture_L_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnCostume_C::BndEvt__SBButton_ZoomOutPlayerCapture_L_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "BndEvt__SBButton_ZoomOutPlayerCapture_L_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_R_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnCostume_C::BndEvt__PosingSwitchBtn_R_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "BndEvt__PosingSwitchBtn_R_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_L_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnCostume_C::BndEvt__PosingSwitchBtn_L_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "BndEvt__PosingSwitchBtn_L_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnCostume_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_L_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnCostume_C::BndEvt__PosingSwitchBtn_L_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "BndEvt__PosingSwitchBtn_L_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.BndEvt__PosingSwitchBtn_R_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnCostume_C::BndEvt__PosingSwitchBtn_R_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "BndEvt__PosingSwitchBtn_R_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomOutPlayerCapture_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnCostume_C::BndEvt__SBButton_ZoomOutPlayerCapture_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "BndEvt__SBButton_ZoomOutPlayerCapture_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.BndEvt__SBButton_ZoomInPlayerCapture_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnCostume_C::BndEvt__SBButton_ZoomInPlayerCapture_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "BndEvt__SBButton_ZoomInPlayerCapture_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.Zoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bZoomIn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bAnimation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnCostume_C::Zoom(bool bZoomIn, bool bAnimation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "Zoom");

	Params::CmnCostume_C_Zoom Parms{};

	Parms.bZoomIn = bZoomIn;
	Parms.bAnimation = bAnimation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnCostume_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.SetTryingCostume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 CostumeData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           UniqueId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bUpdateCapture                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnCostume_C::SetTryingCostume(const struct FSBMasterCostume& CostumeData, const class FString& UniqueId, bool bTrying, bool bUpdateCapture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "SetTryingCostume");

	Params::CmnCostume_C_SetTryingCostume Parms{};

	Parms.CostumeData = std::move(CostumeData);
	Parms.UniqueId = std::move(UniqueId);
	Parms.bTrying = bTrying;
	Parms.bUpdateCapture = bUpdateCapture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.UpdateCapture
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnCostume_C::UpdateCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "UpdateCapture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.ResetTryingData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bUpdateCapture                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnCostume_C::ResetTryingData(bool bUpdateCapture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "ResetTryingData");

	Params::CmnCostume_C_ResetTryingData Parms{};

	Parms.bUpdateCapture = bUpdateCapture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsVisible                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bForceLightVisible                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnCostume_C::SetVisible(bool bInIsVisible, bool bForceLightVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "SetVisible");

	Params::CmnCostume_C_SetVisible Parms{};

	Parms.bInIsVisible = bInIsVisible;
	Parms.bForceLightVisible = bForceLightVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.SetVisibleIfValidCostumeData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 CostumeData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bVisible                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnCostume_C::SetVisibleIfValidCostumeData(const struct FSBMasterCostume& CostumeData, bool* bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "SetVisibleIfValidCostumeData");

	Params::CmnCostume_C_SetVisibleIfValidCostumeData Parms{};

	Parms.CostumeData = std::move(CostumeData);

	UObject::ProcessEvent(Func, &Parms);

	if (bVisible != nullptr)
		*bVisible = Parms.bVisible;
}


// Function CmnCostume.CmnCostume_C.IsValidCosutumeData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBMasterCostume                 CostumeData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCmnCostume_C::IsValidCosutumeData(const struct FSBMasterCostume& CostumeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "IsValidCosutumeData");

	Params::CmnCostume_C_IsValidCosutumeData Parms{};

	Parms.CostumeData = std::move(CostumeData);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CmnCostume.CmnCostume_C.InitBaseData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCmnCostume_C::InitBaseData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "InitBaseData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.AddTryingCosutume
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 MasterCostume                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           UniqueId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UCmnCostume_C::AddTryingCosutume(const struct FSBMasterCostume& MasterCostume, const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "AddTryingCosutume");

	Params::CmnCostume_C_AddTryingCosutume Parms{};

	Parms.MasterCostume = std::move(MasterCostume);
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.RemoveTryingCostume
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 MasterCostume                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UCmnCostume_C::RemoveTryingCostume(const struct FSBMasterCostume& MasterCostume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "RemoveTryingCostume");

	Params::CmnCostume_C_RemoveTryingCostume Parms{};

	Parms.MasterCostume = std::move(MasterCostume);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.OccupTryingLocation
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EProtectorCategory                      ProtectorCategory                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnCostume_C::OccupTryingLocation(const EProtectorCategory& ProtectorCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "OccupTryingLocation");

	Params::CmnCostume_C_OccupTryingLocation Parms{};

	Parms.ProtectorCategory = ProtectorCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.OccupTryingLocationByMasterCostume
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterCostume                 MasterCostume                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCmnCostume_C::OccupTryingLocationByMasterCostume(const struct FSBMasterCostume& MasterCostume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "OccupTryingLocationByMasterCostume");

	Params::CmnCostume_C_OccupTryingLocationByMasterCostume Parms{};

	Parms.MasterCostume = std::move(MasterCostume);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.ApplyBaseEquip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCmnCostume_C::ApplyBaseEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "ApplyBaseEquip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.ApplyTryingCostumeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCmnCostume_C::ApplyTryingCostumeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "ApplyTryingCostumeData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnCostume.CmnCostume_C.IsOccupiedTryingLocation
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EProtectorCategory                      ProtectorCategory                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOccupied                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterCostume                 MasterCostume                                          (Parm, OutParm)

void UCmnCostume_C::IsOccupiedTryingLocation(const EProtectorCategory& ProtectorCategory, bool* IsOccupied, struct FSBMasterCostume* MasterCostume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "IsOccupiedTryingLocation");

	Params::CmnCostume_C_IsOccupiedTryingLocation Parms{};

	Parms.ProtectorCategory = ProtectorCategory;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOccupied != nullptr)
		*IsOccupied = Parms.IsOccupied;

	if (MasterCostume != nullptr)
		*MasterCostume = std::move(Parms.MasterCostume);
}


// Function CmnCostume.CmnCostume_C.IsOccupiedTryingLocationByCostumeId
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CostumeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsOccupied                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMasterCostume                 MasterCostume                                          (Parm, OutParm)

void UCmnCostume_C::IsOccupiedTryingLocationByCostumeId(int32 CostumeId, bool* IsValid, bool* IsOccupied, struct FSBMasterCostume* MasterCostume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "IsOccupiedTryingLocationByCostumeId");

	Params::CmnCostume_C_IsOccupiedTryingLocationByCostumeId Parms{};

	Parms.CostumeId = CostumeId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (IsOccupied != nullptr)
		*IsOccupied = Parms.IsOccupied;

	if (MasterCostume != nullptr)
		*MasterCostume = std::move(Parms.MasterCostume);
}


// Function CmnCostume.CmnCostume_C.SetButtonPosition_Posing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EShopType                               ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnCostume_C::SetButtonPosition_Posing(EShopType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "SetButtonPosition_Posing");

	Params::CmnCostume_C_SetButtonPosition_Posing Parms{};

	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnCostume.CmnCostume_C.RefreshCharaCreateParameter
// (Public, BlueprintCallable, BlueprintEvent)

void UCmnCostume_C::RefreshCharaCreateParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnCostume_C", "RefreshCharaCreateParameter");

	UObject::ProcessEvent(Func, nullptr);
}

}

