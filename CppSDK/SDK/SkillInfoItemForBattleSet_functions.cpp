#pragma once

 

// Package: SkillInfoItemForBattleSet

#include "Basic.hpp"

#include "SkillInfoItemForBattleSet_classes.hpp"
#include "SkillInfoItemForBattleSet_parameters.hpp"


namespace SDK
{

// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.OnSkillInfoItemPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkillInfoItemForBattleSet_C*     InInfoItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItemForBattleSet_C::OnSkillInfoItemPressed__DelegateSignature(class USkillInfoItemForBattleSet_C* InInfoItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "OnSkillInfoItemPressed__DelegateSignature");

	Params::SkillInfoItemForBattleSet_C_OnSkillInfoItemPressed__DelegateSignature Parms{};

	Parms.InInfoItem = InInfoItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.ExecuteUbergraph_SkillInfoItemForBattleSet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItemForBattleSet_C::ExecuteUbergraph_SkillInfoItemForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "ExecuteUbergraph_SkillInfoItemForBattleSet");

	Params::SkillInfoItemForBattleSet_C_ExecuteUbergraph_SkillInfoItemForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USkillInfoItemForBattleSet_C::BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USkillInfoItemForBattleSet_C::BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "BndEvt__SkillInfoItemForBattleSet_Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USkillInfoItemForBattleSet_C::BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "BndEvt__BtnListItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItemForBattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "PreConstruct");

	Params::SkillInfoItemForBattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSKill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            InSkillClassType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsClassAbility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItemForBattleSet_C::SetSKill(int32 InSkillId, ESBClassType InSkillClassType, bool InIsClassAbility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "SetSKill");

	Params::SkillInfoItemForBattleSet_C_SetSKill Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InSkillClassType = InSkillClassType;
	Parms.InIsClassAbility = InIsClassAbility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkillIconEquippedMarkVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItemForBattleSet_C::SetSkillIconEquippedMarkVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "SetSkillIconEquippedMarkVisibility");

	Params::SkillInfoItemForBattleSet_C_SetSkillIconEquippedMarkVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetSkillName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InSkillName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItemForBattleSet_C::SetSkillName(const class FString& InSkillName, int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "SetSkillName");

	Params::SkillInfoItemForBattleSet_C_SetSkillName Parms{};

	Parms.InSkillName = std::move(InSkillName);
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.CreateTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InNotUseTooltip                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItemForBattleSet_C::CreateTooltip(bool InNotUseTooltip, int32 InSkillId, int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "CreateTooltip");

	Params::SkillInfoItemForBattleSet_C_CreateTooltip Parms{};

	Parms.InNotUseTooltip = InNotUseTooltip;
	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.SetInfoItemSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsSelected                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoItemForBattleSet_C::SetInfoItemSelected(bool InIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "SetInfoItemSelected");

	Params::SkillInfoItemForBattleSet_C_SetInfoItemSelected Parms{};

	Parms.InIsSelected = InIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.GetSkillID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutSkillId                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItemForBattleSet_C::GetSkillID(int32* OutSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "GetSkillID");

	Params::SkillInfoItemForBattleSet_C_GetSkillID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSkillId != nullptr)
		*OutSkillId = Parms.OutSkillId;
}


// Function SkillInfoItemForBattleSet.SkillInfoItemForBattleSet_C.GetSkillClassType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBClassType                            OutSkillClassType                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoItemForBattleSet_C::GetSkillClassType(ESBClassType* OutSkillClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoItemForBattleSet_C", "GetSkillClassType");

	Params::SkillInfoItemForBattleSet_C_GetSkillClassType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSkillClassType != nullptr)
		*OutSkillClassType = Parms.OutSkillClassType;
}

}

