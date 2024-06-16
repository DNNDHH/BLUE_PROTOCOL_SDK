#pragma once

 

// Package: SkillStatusDescForBattleSet

#include "Basic.hpp"

#include "SkillStatusDescForBattleSet_classes.hpp"
#include "SkillStatusDescForBattleSet_parameters.hpp"


namespace SDK
{

// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.OnClassAbilityRemoveBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkillStatusDescForBattleSet_C::OnClassAbilityRemoveBtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "OnClassAbilityRemoveBtnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.OnTacticalSkillTypeSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSelectedSkillTypeId                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSelectedSkillId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescForBattleSet_C::OnTacticalSkillTypeSelected__DelegateSignature(int32 InSelectedSkillTypeId, int32 InSelectedSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "OnTacticalSkillTypeSelected__DelegateSignature");

	Params::SkillStatusDescForBattleSet_C_OnTacticalSkillTypeSelected__DelegateSignature Parms{};

	Parms.InSelectedSkillTypeId = InSelectedSkillTypeId;
	Parms.InSelectedSkillId = InSelectedSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.ExecuteUbergraph_SkillStatusDescForBattleSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescForBattleSet_C::ExecuteUbergraph_SkillStatusDescForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "ExecuteUbergraph_SkillStatusDescForBattleSet");

	Params::SkillStatusDescForBattleSet_C_ExecuteUbergraph_SkillStatusDescForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   InSelectedSkillTypeId                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSelectedSkillId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescForBattleSet_C::BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature(int32 InSelectedSkillTypeId, int32 InSelectedSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature");

	Params::SkillStatusDescForBattleSet_C_BndEvt__SkillStatusDescForBattleSet_TacticalSkillInfo_K2Node_ComponentBoundEvent_1_OnSkillTypeRadioBtnSelected__DelegateSignature Parms{};

	Parms.InSelectedSkillTypeId = InSelectedSkillTypeId;
	Parms.InSelectedSkillId = InSelectedSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void USkillStatusDescForBattleSet_C::BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "BndEvt__EquipmentStatusDescForBattleSet_ImagineRemoveBtn_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescForBattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "PreConstruct");

	Params::SkillStatusDescForBattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetSKill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescForBattleSet_C::SetSKill(int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "SetSKill");

	Params::SkillStatusDescForBattleSet_C_SetSKill Parms{};

	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchDescType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDescDefault                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescForBattleSet_C::SwitchDescType(bool InIsDescDefault)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "SwitchDescType");

	Params::SkillStatusDescForBattleSet_C_SwitchDescType Parms{};

	Parms.InIsDescDefault = InIsDescDefault;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetInfoType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescForBattleSet_C::SetInfoType(E_BattleSetInfoType InInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "SetInfoType");

	Params::SkillStatusDescForBattleSet_C_SetInfoType Parms{};

	Parms.InInfoType = InInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetDefaultDescType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsSharedAbility                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescForBattleSet_C::SetDefaultDescType(E_BattleSetInfoType InInfoType, bool InIsSharedAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "SetDefaultDescType");

	Params::SkillStatusDescForBattleSet_C_SetDefaultDescType Parms{};

	Parms.InInfoType = InInfoType;
	Parms.InIsSharedAbility = InIsSharedAbility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetDescBlank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDescBlank                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescForBattleSet_C::SetDescBlank(bool InIsDescBlank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "SetDescBlank");

	Params::SkillStatusDescForBattleSet_C_SetDescBlank Parms{};

	Parms.InIsDescBlank = InIsDescBlank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchBaseBgType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsNormalType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescForBattleSet_C::SwitchBaseBgType(bool InIsNormalType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "SwitchBaseBgType");

	Params::SkillStatusDescForBattleSet_C_SwitchBaseBgType Parms{};

	Parms.InIsNormalType = InIsNormalType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetClassAbilityRemoveBtnVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescForBattleSet_C::SetClassAbilityRemoveBtnVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "SetClassAbilityRemoveBtnVisibility");

	Params::SkillStatusDescForBattleSet_C_SetClassAbilityRemoveBtnVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SwitchStatusType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InStatusTypeId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescForBattleSet_C::SwitchStatusType(int32 InStatusTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "SwitchStatusType");

	Params::SkillStatusDescForBattleSet_C_SwitchStatusType Parms{};

	Parms.InStatusTypeId = InStatusTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.SetWindowSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InWindowSize                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescForBattleSet_C::SetWindowSize(const struct FVector2D& InWindowSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "SetWindowSize");

	Params::SkillStatusDescForBattleSet_C_SetWindowSize Parms{};

	Parms.InWindowSize = std::move(InWindowSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.CheckIfTacticalSkillIsEquppedAndItsSkillType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsEquipped                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutSkillType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescForBattleSet_C::CheckIfTacticalSkillIsEquppedAndItsSkillType(int32 InSkillId, bool* OutIsEquipped, int32* OutSkillType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "CheckIfTacticalSkillIsEquppedAndItsSkillType");

	Params::SkillStatusDescForBattleSet_C_CheckIfTacticalSkillIsEquppedAndItsSkillType Parms{};

	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsEquipped != nullptr)
		*OutIsEquipped = Parms.OutIsEquipped;

	if (OutSkillType != nullptr)
		*OutSkillType = Parms.OutSkillType;
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.GetTacticalSkillBaseInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBSkillDataMasterData           InSkillMasterData                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsTacticalSkill                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutBaseSkillId                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutBaseSkillLevel                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillStatusDescForBattleSet_C::GetTacticalSkillBaseInfo(const struct FSBSkillDataMasterData& InSkillMasterData, bool* IsTacticalSkill, int32* OutBaseSkillId, int32* OutBaseSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "GetTacticalSkillBaseInfo");

	Params::SkillStatusDescForBattleSet_C_GetTacticalSkillBaseInfo Parms{};

	Parms.InSkillMasterData = std::move(InSkillMasterData);

	UObject::ProcessEvent(Func, &Parms);

	if (IsTacticalSkill != nullptr)
		*IsTacticalSkill = Parms.IsTacticalSkill;

	if (OutBaseSkillId != nullptr)
		*OutBaseSkillId = Parms.OutBaseSkillId;

	if (OutBaseSkillLevel != nullptr)
		*OutBaseSkillLevel = Parms.OutBaseSkillLevel;
}


// Function SkillStatusDescForBattleSet.SkillStatusDescForBattleSet_C.CheckIsSkillTypeSelectable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsSkillTypeSelectable                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillStatusDescForBattleSet_C::CheckIsSkillTypeSelectable(int32 InSkillId, int32 InSkillLevel, bool* OutIsSkillTypeSelectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillStatusDescForBattleSet_C", "CheckIsSkillTypeSelectable");

	Params::SkillStatusDescForBattleSet_C_CheckIsSkillTypeSelectable Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsSkillTypeSelectable != nullptr)
		*OutIsSkillTypeSelectable = Parms.OutIsSkillTypeSelectable;
}

}

