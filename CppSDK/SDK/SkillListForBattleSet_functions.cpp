#pragma once

 

// Package: SkillListForBattleSet

#include "Basic.hpp"

#include "SkillListForBattleSet_classes.hpp"
#include "SkillListForBattleSet_parameters.hpp"


namespace SDK
{

// Function SkillListForBattleSet.SkillListForBattleSet_C.OnInfoItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkillInfoItemForBattleSet_C*     InSelectedInfoItem                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillListForBattleSet_C::OnInfoItemSelected__DelegateSignature(class USkillInfoItemForBattleSet_C* InSelectedInfoItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "OnInfoItemSelected__DelegateSignature");

	Params::SkillListForBattleSet_C_OnInfoItemSelected__DelegateSignature Parms{};

	Parms.InSelectedInfoItem = InSelectedInfoItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.OnSkillChangeBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillListForBattleSet_C::OnSkillChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "OnSkillChangeBtnPressed__DelegateSignature");

	Params::SkillListForBattleSet_C_OnSkillChangeBtnPressed__DelegateSignature Parms{};

	Parms.InInfoType = InInfoType;
	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.OnCancelBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USkillListForBattleSet_C::OnCancelBtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "OnCancelBtnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.ExecuteUbergraph_SkillListForBattleSet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillListForBattleSet_C::ExecuteUbergraph_SkillListForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "ExecuteUbergraph_SkillListForBattleSet");

	Params::SkillListForBattleSet_C_ExecuteUbergraph_SkillListForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillListForBattleSet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.OnSkillInfoItemPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkillInfoItemForBattleSet_C*     InInfoItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillListForBattleSet_C::OnSkillInfoItemPressed(class USkillInfoItemForBattleSet_C* InInfoItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "OnSkillInfoItemPressed");

	Params::SkillListForBattleSet_C_OnSkillInfoItemPressed Parms{};

	Parms.InInfoItem = InInfoItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.BndEvt__SkillListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void USkillListForBattleSet_C::BndEvt__SkillListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "BndEvt__SkillListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void USkillListForBattleSet_C::BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillListForBattleSet_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.InitList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            InSkillClassType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillSlotId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassAbilityTypeId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillListForBattleSet_C::InitList(E_BattleSetInfoType InBattleSetInfoType, ESBClassType InSkillClassType, int32 InSkillSlotId, int32 InClassAbilityTypeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "InitList");

	Params::SkillListForBattleSet_C_InitList Parms{};

	Parms.InBattleSetInfoType = InBattleSetInfoType;
	Parms.InSkillClassType = InSkillClassType;
	Parms.InSkillSlotId = InSkillSlotId;
	Parms.InClassAbilityTypeId = InClassAbilityTypeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.UpdateList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USkillListForBattleSet_C::UpdateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "UpdateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.PlayListInAnimForward
// (Public, BlueprintCallable, BlueprintEvent)

void USkillListForBattleSet_C::PlayListInAnimForward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "PlayListInAnimForward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.PlayListInAnimReverse
// (Public, BlueprintCallable, BlueprintEvent)

void USkillListForBattleSet_C::PlayListInAnimReverse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "PlayListInAnimReverse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.HideInfoItemAll
// (Public, BlueprintCallable, BlueprintEvent)

void USkillListForBattleSet_C::HideInfoItemAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "HideInfoItemAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.ResetSelectedInfoItemAll
// (Public, BlueprintCallable, BlueprintEvent)

void USkillListForBattleSet_C::ResetSelectedInfoItemAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "ResetSelectedInfoItemAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.SetIsEquipChangeBtnEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEnabled                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillListForBattleSet_C::SetIsEquipChangeBtnEnabled(bool InIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "SetIsEquipChangeBtnEnabled");

	Params::SkillListForBattleSet_C_SetIsEquipChangeBtnEnabled Parms{};

	Parms.InIsEnabled = InIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.SetListVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillListForBattleSet_C::SetListVisibility(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "SetListVisibility");

	Params::SkillListForBattleSet_C_SetListVisibility Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.SetInfoType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillListForBattleSet_C::SetInfoType(E_BattleSetInfoType InInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "SetInfoType");

	Params::SkillListForBattleSet_C_SetInfoType Parms{};

	Parms.InInfoType = InInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.SwitchEquipmentIconListBody
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEquipmentIconListBodyEmpty                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillListForBattleSet_C::SwitchEquipmentIconListBody(bool InIsEquipmentIconListBodyEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "SwitchEquipmentIconListBody");

	Params::SkillListForBattleSet_C_SwitchEquipmentIconListBody Parms{};

	Parms.InIsEquipmentIconListBodyEmpty = InIsEquipmentIconListBodyEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.SetSkillListItemSelectedBySkillId
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillListForBattleSet_C::SetSkillListItemSelectedBySkillId(int32 InSkillId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "SetSkillListItemSelectedBySkillId");

	Params::SkillListForBattleSet_C_SetSkillListItemSelectedBySkillId Parms{};

	Parms.InSkillId = InSkillId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.SetTacticalSkillSlotType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerActiveArtsSlotType             InSlotType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillListForBattleSet_C::SetTacticalSkillSlotType(ESBPlayerActiveArtsSlotType InSlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "SetTacticalSkillSlotType");

	Params::SkillListForBattleSet_C_SetTacticalSkillSlotType Parms{};

	Parms.InSlotType = InSlotType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.GetTacticalSkillDatas
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBPlayerSkillData>       OutDataArray                                           (Parm, OutParm)

void USkillListForBattleSet_C::GetTacticalSkillDatas(ESBClassType InClassType, TArray<struct FSBPlayerSkillData>* OutDataArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "GetTacticalSkillDatas");

	Params::SkillListForBattleSet_C_GetTacticalSkillDatas Parms{};

	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDataArray != nullptr)
		*OutDataArray = std::move(Parms.OutDataArray);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.GetClassAbilityDatas
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBPlayerArtsType                       InArtsType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBPlayerPassiveSkillData>OutDataArray                                           (Parm, OutParm)

void USkillListForBattleSet_C::GetClassAbilityDatas(ESBClassType InClassType, ESBPlayerArtsType InArtsType, TArray<struct FSBPlayerPassiveSkillData>* OutDataArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "GetClassAbilityDatas");

	Params::SkillListForBattleSet_C_GetClassAbilityDatas Parms{};

	Parms.InClassType = InClassType;
	Parms.InArtsType = InArtsType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDataArray != nullptr)
		*OutDataArray = std::move(Parms.OutDataArray);
}


// Function SkillListForBattleSet.SkillListForBattleSet_C.UISupportRefresh
// (Public, BlueprintCallable, BlueprintEvent)

void USkillListForBattleSet_C::UISupportRefresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillListForBattleSet_C", "UISupportRefresh");

	UObject::ProcessEvent(Func, nullptr);
}

}

