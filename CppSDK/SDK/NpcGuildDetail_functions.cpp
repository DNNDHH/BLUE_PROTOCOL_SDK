#pragma once

 

// Package: NpcGuildDetail

#include "Basic.hpp"

#include "NpcGuildDetail_classes.hpp"
#include "NpcGuildDetail_parameters.hpp"


namespace SDK
{

// Function NpcGuildDetail.NpcGuildDetail_C.ExecuteUbergraph_NpcGuildDetail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuildDetail_C::ExecuteUbergraph_NpcGuildDetail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildDetail_C", "ExecuteUbergraph_NpcGuildDetail");

	Params::NpcGuildDetail_C_ExecuteUbergraph_NpcGuildDetail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildDetail.NpcGuildDetail_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UNpcGuildDetail_C::BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildDetail_C", "BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildDetail.NpcGuildDetail_C.BndEvt__Btn_TeamRename_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UNpcGuildDetail_C::BndEvt__Btn_TeamRename_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildDetail_C", "BndEvt__Btn_TeamRename_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildDetail.NpcGuildDetail_C.OnChangeName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuildDetail_C::OnChangeName(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildDetail_C", "OnChangeName");

	Params::NpcGuildDetail_C_OnChangeName Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildDetail.NpcGuildDetail_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNpcGuildDetail_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildDetail_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildDetail.NpcGuildDetail_C.OnRequestDissolution
// (BlueprintCallable, BlueprintEvent)

void UNpcGuildDetail_C::OnRequestDissolution()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildDetail_C", "OnRequestDissolution");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildDetail.NpcGuildDetail_C.OnChanged
// (BlueprintCallable, BlueprintEvent)

void UNpcGuildDetail_C::OnChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildDetail_C", "OnChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildDetail.NpcGuildDetail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNpcGuildDetail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildDetail_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildDetail.NpcGuildDetail_C.SetGuildData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildData                       Param_GuildData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UNpcGuildDetail_C::SetGuildData(const struct FGuildData& Param_GuildData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildDetail_C", "SetGuildData");

	Params::NpcGuildDetail_C_SetGuildData Parms{};

	Parms.Param_GuildData = std::move(Param_GuildData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildDetail.NpcGuildDetail_C.GetGiuldComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UNpcGuildDetail_C::GetGiuldComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildDetail_C", "GetGiuldComp");

	Params::NpcGuildDetail_C_GetGiuldComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

