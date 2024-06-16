#pragma once

 

// Package: BP_EF_Library

#include "Basic.hpp"

#include "BP_EF_Library_classes.hpp"
#include "BP_EF_Library_parameters.hpp"


namespace SDK
{

// Function BP_EF_Library.BP_EF_Library_C.IsShouldExecOnServerOnly
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExec                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EF_Library_C::IsShouldExecOnServerOnly(class UObject* __WorldContext, bool* IsExec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_EF_Library_C", "IsShouldExecOnServerOnly");

	Params::BP_EF_Library_C_IsShouldExecOnServerOnly Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsExec != nullptr)
		*IsExec = Parms.IsExec;
}


// Function BP_EF_Library.BP_EF_Library_C.IsShouldExecOnClientOnly
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExec                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EF_Library_C::IsShouldExecOnClientOnly(class UObject* __WorldContext, bool* IsExec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_EF_Library_C", "IsShouldExecOnClientOnly");

	Params::BP_EF_Library_C_IsShouldExecOnClientOnly Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsExec != nullptr)
		*IsExec = Parms.IsExec;
}


// Function BP_EF_Library.BP_EF_Library_C.IsIntervalExec
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                                   RefTotalDeltaTime                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ExecIntervalTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExec                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_EF_Library_C::IsIntervalExec(float& RefTotalDeltaTime, float DeltaTime, float ExecIntervalTime, class UObject* __WorldContext, bool* IsExec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_EF_Library_C", "IsIntervalExec");

	Params::BP_EF_Library_C_IsIntervalExec Parms{};

	Parms.RefTotalDeltaTime = RefTotalDeltaTime;
	Parms.DeltaTime = DeltaTime;
	Parms.ExecIntervalTime = ExecIntervalTime;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	RefTotalDeltaTime = Parms.RefTotalDeltaTime;

	if (IsExec != nullptr)
		*IsExec = Parms.IsExec;
}

}

