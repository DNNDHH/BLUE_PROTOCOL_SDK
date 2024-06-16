#pragma once

 

// Package: Fang_expedition_AreaListGroup

#include "Basic.hpp"

#include "Fang_expedition_AreaListGroup_classes.hpp"
#include "Fang_expedition_AreaListGroup_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.OnAreaClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListGroup_C::OnAreaClick__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "OnAreaClick__DelegateSignature");

	Params::Fang_expedition_AreaListGroup_C_OnAreaClick__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.OnFieldClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Field                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListGroup_C::OnFieldClick__DelegateSignature(const class FString& Field, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "OnFieldClick__DelegateSignature");

	Params::Fang_expedition_AreaListGroup_C_OnFieldClick__DelegateSignature Parms{};

	Parms.Field = std::move(Field);
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.ExecuteUbergraph_Fang_expedition_AreaListGroup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListGroup_C::ExecuteUbergraph_Fang_expedition_AreaListGroup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "ExecuteUbergraph_Fang_expedition_AreaListGroup");

	Params::Fang_expedition_AreaListGroup_C_ExecuteUbergraph_Fang_expedition_AreaListGroup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_AreaListGroup_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsField                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_AreaListGroup_C::SetData(const struct FSBFang_expeditionAreaData& AreaData, bool IsField)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "SetData");

	Params::Fang_expedition_AreaListGroup_C_SetData Parms{};

	Parms.AreaData = std::move(AreaData);
	Parms.IsField = IsField;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.UpdateData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListGroup_C::UpdateData(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "UpdateData");

	Params::Fang_expedition_AreaListGroup_C_UpdateData Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CB_AreaItemClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListGroup_C::CB_AreaItemClick(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "CB_AreaItemClick");

	Params::Fang_expedition_AreaListGroup_C_CB_AreaItemClick Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_AreaListGroup_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListGroup_C::Initialize(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "Initialize");

	Params::Fang_expedition_AreaListGroup_C_Initialize Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.Finish
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_AreaListGroup_C::Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CheckPlayIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBFang_expeditionPlayData>PlayData                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsField                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_AreaListGroup_C::CheckPlayIcon(TArray<struct FSBFang_expeditionPlayData>& PlayData, bool IsField)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "CheckPlayIcon");

	Params::Fang_expedition_AreaListGroup_C_CheckPlayIcon Parms{};

	Parms.PlayData = std::move(PlayData);
	Parms.IsField = IsField;

	UObject::ProcessEvent(Func, &Parms);

	PlayData = std::move(Parms.PlayData);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.GetData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBFang_expeditionAreaData       AreaData                                               (Parm, OutParm)

void UFang_expedition_AreaListGroup_C::GetData(int32 Param_Index, bool* Valid, struct FSBFang_expeditionAreaData* AreaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "GetData");

	Params::Fang_expedition_AreaListGroup_C_GetData Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

	if (AreaData != nullptr)
		*AreaData = std::move(Parms.AreaData);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetFieldData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Field                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_AreaListGroup_C::SetFieldData(const class FString& Field)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "SetFieldData");

	Params::Fang_expedition_AreaListGroup_C_SetFieldData Parms{};

	Parms.Field = std::move(Field);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.CB_FieldItemClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListGroup_C::CB_FieldItemClick(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "CB_FieldItemClick");

	Params::Fang_expedition_AreaListGroup_C_CB_FieldItemClick Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListGroup_C::SetBtn(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "SetBtn");

	Params::Fang_expedition_AreaListGroup_C_SetBtn Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.SetNewMarkListEx
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InFieldId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UFang_expedition_AreaListGroup_C::SetNewMarkListEx(bool InParam, const class FString& InFieldId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "SetNewMarkListEx");

	Params::Fang_expedition_AreaListGroup_C_SetNewMarkListEx Parms{};

	Parms.InParam = InParam;
	Parms.InFieldId = std::move(InFieldId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListGroup.Fang_expedition_AreaListGroup_C.ClearFieldList
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_AreaListGroup_C::ClearFieldList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListGroup_C", "ClearFieldList");

	UObject::ProcessEvent(Func, nullptr);
}

}

