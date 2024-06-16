#pragma once

 

// Package: MyCharaMenu_Costume

#include "Basic.hpp"

#include "MyCharaMenu_Costume_classes.hpp"
#include "MyCharaMenu_Costume_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnChangeCostumeProc__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ProcStart                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::OnChangeCostumeProc__DelegateSignature(bool ProcStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnChangeCostumeProc__DelegateSignature");

	Params::MyCharaMenu_Costume_C_OnChangeCostumeProc__DelegateSignature Parms{};

	Parms.ProcStart = ProcStart;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarRotateActive__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::OnPlayerAvatarRotateActive__DelegateSignature(bool InIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnPlayerAvatarRotateActive__DelegateSignature");

	Params::MyCharaMenu_Costume_C_OnPlayerAvatarRotateActive__DelegateSignature Parms{};

	Parms.InIsActive = InIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarSwitchPosing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             OnPosingCommandName                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsSwitchPosingToPrev                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::OnPlayerAvatarSwitchPosing__DelegateSignature(class FName OnPosingCommandName, bool Param_IsSwitchPosingToPrev)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnPlayerAvatarSwitchPosing__DelegateSignature");

	Params::MyCharaMenu_Costume_C_OnPlayerAvatarSwitchPosing__DelegateSignature Parms{};

	Parms.OnPosingCommandName = OnPosingCommandName;
	Parms.Param_IsSwitchPosingToPrev = Param_IsSwitchPosingToPrev;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsCostumeOn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature(bool InIsCostumeOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature");

	Params::MyCharaMenu_Costume_C_OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature Parms{};

	Parms.InIsCostumeOn = InIsCostumeOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSetCostumePreviewParameter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharaCreateParameter          CharaCreateParameter                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::OnSetCostumePreviewParameter__DelegateSignature(const struct FSBCharaCreateParameter& CharaCreateParameter, bool Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnSetCostumePreviewParameter__DelegateSignature");

	Params::MyCharaMenu_Costume_C_OnSetCostumePreviewParameter__DelegateSignature Parms{};

	Parms.CharaCreateParameter = std::move(CharaCreateParameter);
	Parms.Start = Start;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSetAvatarImageReuploadFlag__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::OnSetAvatarImageReuploadFlag__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnSetAvatarImageReuploadFlag__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnRefreshPreviewCostume__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharaCreateParameter          Parameter                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_Costume_C::OnRefreshPreviewCostume__DelegateSignature(const struct FSBCharaCreateParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnRefreshPreviewCostume__DelegateSignature");

	Params::MyCharaMenu_Costume_C_OnRefreshPreviewCostume__DelegateSignature Parms{};

	Parms.Parameter = std::move(Parameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExecuteUbergraph_MyCharaMenu_Costume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Costume_C::ExecuteUbergraph_MyCharaMenu_Costume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "ExecuteUbergraph_MyCharaMenu_Costume");

	Params::MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnOpenMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::OnOpenMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnOpenMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPartsTimeEventStart
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::OnPartsTimeEventStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnPartsTimeEventStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnShowExpiredItemMessage
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::OnShowExpiredItemMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnShowExpiredItemMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ResetPreviewAvaterCostume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ForceReset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::ResetPreviewAvaterCostume(bool ForceReset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "ResetPreviewAvaterCostume");

	Params::MyCharaMenu_Costume_C_ResetPreviewAvaterCostume Parms{};

	Parms.ForceReset = ForceReset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPreviewCostumeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::OnPreviewCostumeChange(bool Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnPreviewCostumeChange");

	Params::MyCharaMenu_Costume_C_OnPreviewCostumeChange Parms{};

	Parms.Start = Start;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnCostumeChange
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::OnCostumeChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnCostumeChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__MyCharaMenu_Costume_BtnCostumeChange_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_Costume_C::BndEvt__MyCharaMenu_Costume_BtnCostumeChange_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "BndEvt__MyCharaMenu_Costume_BtnCostumeChange_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.RequestSaveCharaCostumeMultipleEquips
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::RequestSaveCharaCostumeMultipleEquips()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "RequestSaveCharaCostumeMultipleEquips");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnTimerEndForPlayerAvatarAppearenceUpdateNormalProc
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::OnTimerEndForPlayerAvatarAppearenceUpdateNormalProc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnTimerEndForPlayerAvatarAppearenceUpdateNormalProc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnTimerEndForSaveCostumeEquipInfoRequestFailureProc
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::OnTimerEndForSaveCostumeEquipInfoRequestFailureProc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnTimerEndForSaveCostumeEquipInfoRequestFailureProc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExpiredItemNoticeSystemMessageEnd
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::ExpiredItemNoticeSystemMessageEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "ExpiredItemNoticeSystemMessageEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateCharaImageVisibility_Internal
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::UpdateCharaImageVisibility_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "UpdateCharaImageVisibility_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExpiredItemNoticeSystemMessageTimerEnd
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::ExpiredItemNoticeSystemMessageTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "ExpiredItemNoticeSystemMessageTimerEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ConstructCharaImageGraph
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::ConstructCharaImageGraph()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "ConstructCharaImageGraph");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.DestructCharaImageGraph
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::DestructCharaImageGraph()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "DestructCharaImageGraph");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnExistHigherPriorityCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Costume_C::OnExistHigherPriorityCapture(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnExistHigherPriorityCapture");

	Params::MyCharaMenu_Costume_C_OnExistHigherPriorityCapture Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnUnexistHigherPriorityCapture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Param                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Costume_C::OnUnexistHigherPriorityCapture(class UObject* Sender, class UObject* Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnUnexistHigherPriorityCapture");

	Params::MyCharaMenu_Costume_C_OnUnexistHigherPriorityCapture Parms{};

	Parms.Sender = Sender;
	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsDressVisibilitySwitchOn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature(bool InIsDressVisibilitySwitchOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature");

	Params::MyCharaMenu_Costume_C_BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature Parms{};

	Parms.InIsDressVisibilitySwitchOn = InIsDressVisibilitySwitchOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_4_OnClickedPosingSwitchBtnLeft__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_Costume_C::BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_4_OnClickedPosingSwitchBtnLeft__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_4_OnClickedPosingSwitchBtnLeft__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_5_OnClickedPosingSwitchBtnRight__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_Costume_C::BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_5_OnClickedPosingSwitchBtnRight__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "BndEvt__PosingSwitch_K2Node_ComponentBoundEvent_5_OnClickedPosingSwitchBtnRight__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_Costume_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Init
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMyCharaMenu_Costume_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostume
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::ChangeCostume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "ChangeCostume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveEquipInfo_Costume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_Costume_C::OnSaveEquipInfo_Costume(int32 RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnSaveEquipInfo_Costume");

	Params::MyCharaMenu_Costume_C_OnSaveEquipInfo_Costume Parms{};

	Parms.RetCode = RetCode;
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdatePlayerCharacterCostume
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::UpdatePlayerCharacterCostume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "UpdatePlayerCharacterCostume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnIconSelected_CostumeCandidateList_����
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_Costume_C::OnIconSelected_CostumeCandidateList_____(const class FString& InItemUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnIconSelected_CostumeCandidateList_����");

	Params::MyCharaMenu_Costume_C_OnIconSelected_CostumeCandidateList_____ Parms{};

	Parms.InItemUniqueId = std::move(InItemUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnDetach_CostumeCandidateList_����
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::OnDetach_CostumeCandidateList_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnDetach_CostumeCandidateList_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.DetachCostume
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::DetachCostume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "DetachCostume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnOtherCostumeCandidateSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsDetach                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::OnOtherCostumeCandidateSelected(bool Param_IsDetach)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnOtherCostumeCandidateSelected");

	Params::MyCharaMenu_Costume_C_OnOtherCostumeCandidateSelected Parms{};

	Parms.Param_IsDetach = Param_IsDetach;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateCostumeIconTable
// (BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::UpdateCostumeIconTable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "UpdateCostumeIconTable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveCostumeEquipDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_Costume_C::OnSaveCostumeEquipDelegate(int32 RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnSaveCostumeEquipDelegate");

	Params::MyCharaMenu_Costume_C_OnSaveCostumeEquipDelegate Parms{};

	Parms.RetCode = RetCode;
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveCostumeMultipleEquipsDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBExpiredEquipmentData          InExpiredEquipmentData                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_Costume_C::OnSaveCostumeMultipleEquipsDelegate(int32 RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnSaveCostumeMultipleEquipsDelegate");

	Params::MyCharaMenu_Costume_C_OnSaveCostumeMultipleEquipsDelegate Parms{};

	Parms.RetCode = RetCode;
	Parms.InExpiredEquipmentData = std::move(InExpiredEquipmentData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_6_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_Costume_C::BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_6_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_6_OnEndUsingUnusedEquipConfirmDialog__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_2_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_Costume_C::BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_2_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_2_OnOpenUsingUnusedEquipConfirmDialog__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Costume_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnAnimationFinished");

	Params::MyCharaMenu_Costume_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           InItemUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_Costume_C::BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature(const class FString& InItemUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature");

	Params::MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature Parms{};

	Parms.InItemUniqueId = std::move(InItemUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    InIsLeftHand                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature(bool InIsLeftHand)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature");

	Params::MyCharaMenu_Costume_C_BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature Parms{};

	Parms.InIsLeftHand = InIsLeftHand;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature
// (BlueprintEvent)

void UMyCharaMenu_Costume_C::BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           InRingUniqueId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_Costume_C::BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature(const class FString& InRingUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature");

	Params::MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature Parms{};

	Parms.InRingUniqueId = std::move(InRingUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.Close
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetEquipItemCharaCreateInfoFromEquipItemInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharaEquipItemInfo              InEquipItemInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   InMaterialId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       InEquipType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDetachEquip                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharaEquipItemCharaCreateInfo   OutEquipItemCharaCreateInfo                            (Parm, OutParm)

void UMyCharaMenu_Costume_C::GetEquipItemCharaCreateInfoFromEquipItemInfo(const struct FCharaEquipItemInfo& InEquipItemInfo, int32 InMaterialId, ESBCharaEquipType InEquipType, bool IsDetachEquip, bool* IsValid, struct FCharaEquipItemCharaCreateInfo* OutEquipItemCharaCreateInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "GetEquipItemCharaCreateInfoFromEquipItemInfo");

	Params::MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo Parms{};

	Parms.InEquipItemInfo = std::move(InEquipItemInfo);
	Parms.InMaterialId = InMaterialId;
	Parms.InEquipType = InEquipType;
	Parms.IsDetachEquip = IsDetachEquip;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutEquipItemCharaCreateInfo != nullptr)
		*OutEquipItemCharaCreateInfo = std::move(Parms.OutEquipItemCharaCreateInfo);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeProcStart
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::ChangeCostumeProcStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "ChangeCostumeProcStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeProcTerm
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::ChangeCostumeProcTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "ChangeCostumeProcTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetAvatarCostumePartsLoadingFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsLoading                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::SetAvatarCostumePartsLoadingFlag(bool InIsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "SetAvatarCostumePartsLoadingFlag");

	Params::MyCharaMenu_Costume_C_SetAvatarCostumePartsLoadingFlag Parms{};

	Parms.InIsLoading = InIsLoading;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetAvatarCostumePartsLoadingFlag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    OutIsAvatarCostumePartsLoading                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::GetAvatarCostumePartsLoadingFlag(bool* OutIsAvatarCostumePartsLoading)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "GetAvatarCostumePartsLoadingFlag");

	Params::MyCharaMenu_Costume_C_GetAvatarCostumePartsLoadingFlag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsAvatarCostumePartsLoading != nullptr)
		*OutIsAvatarCostumePartsLoading = Parms.OutIsAvatarCostumePartsLoading;
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetUIBlockerVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::SetUIBlockerVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "SetUIBlockerVisibility");

	Params::MyCharaMenu_Costume_C_SetUIBlockerVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::ChangeCostumeFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "ChangeCostumeFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ClearNewEquipInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::ClearNewEquipInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "ClearNewEquipInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddNewEquipInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharaEquipItemInfo              NewCostumeEquipItemInfo                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCharaEquipItemCharaCreateInfo   NewCostumeEquipCharaCreateInfo                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBCharaEquipType                       CostumeEquipType                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Costume_C::AddNewEquipInfo(const struct FCharaEquipItemInfo& NewCostumeEquipItemInfo, const struct FCharaEquipItemCharaCreateInfo& NewCostumeEquipCharaCreateInfo, const ESBCharaEquipType& CostumeEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "AddNewEquipInfo");

	Params::MyCharaMenu_Costume_C_AddNewEquipInfo Parms{};

	Parms.NewCostumeEquipItemInfo = std::move(NewCostumeEquipItemInfo);
	Parms.NewCostumeEquipCharaCreateInfo = std::move(NewCostumeEquipCharaCreateInfo);
	Parms.CostumeEquipType = CostumeEquipType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.InitDefaultCostumeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::InitDefaultCostumeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "InitDefaultCostumeData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddPreviewCostumeItemMulti
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::AddPreviewCostumeItemMulti()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "AddPreviewCostumeItemMulti");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddPreviewCostumeItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharaEquipItemInfo              NewCostumeEquipItemInfo                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBCharaEquipType                       CostumeEquipType                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharaEquipItemCharaCreateInfo   NewCostumeEquipCharaCreateInfo                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_Costume_C::AddPreviewCostumeItem(struct FCharaEquipItemInfo& NewCostumeEquipItemInfo, ESBCharaEquipType& CostumeEquipType, struct FCharaEquipItemCharaCreateInfo& NewCostumeEquipCharaCreateInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "AddPreviewCostumeItem");

	Params::MyCharaMenu_Costume_C_AddPreviewCostumeItem Parms{};

	Parms.NewCostumeEquipItemInfo = std::move(NewCostumeEquipItemInfo);
	Parms.CostumeEquipType = CostumeEquipType;
	Parms.NewCostumeEquipCharaCreateInfo = std::move(NewCostumeEquipCharaCreateInfo);

	UObject::ProcessEvent(Func, &Parms);

	NewCostumeEquipItemInfo = std::move(Parms.NewCostumeEquipItemInfo);
	CostumeEquipType = Parms.CostumeEquipType;
	NewCostumeEquipCharaCreateInfo = std::move(Parms.NewCostumeEquipCharaCreateInfo);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.MakeSaveRequestItemData
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::MakeSaveRequestItemData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "MakeSaveRequestItemData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckPreviewUnusedItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Unused                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::CheckPreviewUnusedItem(bool* Unused)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "CheckPreviewUnusedItem");

	Params::MyCharaMenu_Costume_C_CheckPreviewUnusedItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Unused != nullptr)
		*Unused = Parms.Unused;
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeDecideButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::ChangeDecideButtonVisibility(bool Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "ChangeDecideButtonVisibility");

	Params::MyCharaMenu_Costume_C_ChangeDecideButtonVisibility Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetCharaCreateParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharaEquipItemCharaCreateInfo   CreateInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UMyCharaMenu_Costume_C::SetCharaCreateParameter(const struct FCharaEquipItemCharaCreateInfo& CreateInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "SetCharaCreateParameter");

	Params::MyCharaMenu_Costume_C_SetCharaCreateParameter Parms{};

	Parms.CreateInfo = std::move(CreateInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckCostumeEquipment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCharaEquipType                       EquipType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    EquipFlag                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::CheckCostumeEquipment(ESBCharaEquipType EquipType, bool* EquipFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "CheckCostumeEquipment");

	Params::MyCharaMenu_Costume_C_CheckCostumeEquipment Parms{};

	Parms.EquipType = EquipType;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipFlag != nullptr)
		*EquipFlag = Parms.EquipFlag;
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetPreviewCostumeUniqueId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCharaEquipType                       EquipmentType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UniqueId                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UMyCharaMenu_Costume_C::GetPreviewCostumeUniqueId(ESBCharaEquipType EquipmentType, class FString* UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "GetPreviewCostumeUniqueId");

	Params::MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId Parms{};

	Parms.EquipmentType = EquipmentType;

	UObject::ProcessEvent(Func, &Parms);

	if (UniqueId != nullptr)
		*UniqueId = std::move(Parms.UniqueId);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.IsPreviewMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Preview                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::IsPreviewMode(bool* Preview)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "IsPreviewMode");

	Params::MyCharaMenu_Costume_C_IsPreviewMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Preview != nullptr)
		*Preview = Parms.Preview;
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateCostumePreview
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::UpdateCostumePreview()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "UpdateCostumePreview");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OutputEquipmentCostumeLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::OutputEquipmentCostumeLog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OutputEquipmentCostumeLog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateEquippedCostumeInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::UpdateEquippedCostumeInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "UpdateEquippedCostumeInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckCostumeRingEquipment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Equipment                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Preview                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBCharaEquipType                       EquipType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Costume_C::CheckCostumeRingEquipment(const class FString& UniqueId, bool* Equipment, bool* Preview, ESBCharaEquipType* EquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "CheckCostumeRingEquipment");

	Params::MyCharaMenu_Costume_C_CheckCostumeRingEquipment Parms{};

	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);

	if (Equipment != nullptr)
		*Equipment = Parms.Equipment;

	if (Preview != nullptr)
		*Preview = Parms.Preview;

	if (EquipType != nullptr)
		*EquipType = Parms.EquipType;
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdatePlayerCharacter_Func
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::UpdatePlayerCharacter_Func()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "UpdatePlayerCharacter_Func");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.FindConflictingCompositeWearbyEquipInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBCharaEquipType                       EquipType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharacterGender                      Gender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsConflict                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBCharaEquipType                       ConflictEquipType                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Costume_C::FindConflictingCompositeWearbyEquipInfo(ESBCharaEquipType EquipType, ESBCharacterGender Gender, bool* IsConflict, ESBCharaEquipType* ConflictEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "FindConflictingCompositeWearbyEquipInfo");

	Params::MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo Parms{};

	Parms.EquipType = EquipType;
	Parms.Gender = Gender;

	UObject::ProcessEvent(Func, &Parms);

	if (IsConflict != nullptr)
		*IsConflict = Parms.IsConflict;

	if (ConflictEquipType != nullptr)
		*ConflictEquipType = Parms.ConflictEquipType;
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetDressOnOffButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDressOn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::SetDressOnOffButton(bool InIsDressOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "SetDressOnOffButton");

	Params::MyCharaMenu_Costume_C_SetDressOnOffButton Parms{};

	Parms.InIsDressOn = InIsDressOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ClearPreviewDatas
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::ClearPreviewDatas()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "ClearPreviewDatas");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.LocationToEquipType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ECharaPartsLocation                     CharaPartsLocation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBCharaEquipType                       CharaEquipType                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_Costume_C::LocationToEquipType(ECharaPartsLocation CharaPartsLocation, ESBCharaEquipType* CharaEquipType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "LocationToEquipType");

	Params::MyCharaMenu_Costume_C_LocationToEquipType Parms{};

	Parms.CharaPartsLocation = CharaPartsLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (CharaEquipType != nullptr)
		*CharaEquipType = Parms.CharaEquipType;
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OpenExpiredMessageWindow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CostumeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOpen                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_Costume_C::OpenExpiredMessageWindow(int32 CostumeId, bool* IsOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OpenExpiredMessageWindow");

	Params::MyCharaMenu_Costume_C_OpenExpiredMessageWindow Parms{};

	Parms.CostumeId = CostumeId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;
}


// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnItemListUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UMyCharaMenu_Costume_C::OnItemListUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_Costume_C", "OnItemListUpdate");

	UObject::ProcessEvent(Func, nullptr);
}

}

