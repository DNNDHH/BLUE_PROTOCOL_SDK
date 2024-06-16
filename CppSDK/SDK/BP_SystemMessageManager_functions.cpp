#pragma once

 

// Package: BP_SystemMessageManager

#include "Basic.hpp"

#include "BP_SystemMessageManager_classes.hpp"
#include "BP_SystemMessageManager_parameters.hpp"


namespace SDK
{

// Function BP_SystemMessageManager.BP_SystemMessageManager_C.ExecuteUbergraph_BP_SystemMessageManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SystemMessageManager_C::ExecuteUbergraph_BP_SystemMessageManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SystemMessageManager_C", "ExecuteUbergraph_BP_SystemMessageManager");

	Params::BP_SystemMessageManager_C_ExecuteUbergraph_BP_SystemMessageManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SystemMessageManager.BP_SystemMessageManager_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UBP_SystemMessageManager_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SystemMessageManager_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SystemMessageManager.BP_SystemMessageManager_C.OnEndMessage_����
// (BlueprintCallable, BlueprintEvent)

void UBP_SystemMessageManager_C::OnEndMessage_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SystemMessageManager_C", "OnEndMessage_����");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SystemMessageManager.BP_SystemMessageManager_C.CreateSysMsg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSystemMessageRequestData        ReqData                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_SystemMessageManager_C::CreateSysMsg(const struct FSystemMessageRequestData& ReqData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SystemMessageManager_C", "CreateSysMsg");

	Params::BP_SystemMessageManager_C_CreateSysMsg Parms{};

	Parms.ReqData = std::move(ReqData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SystemMessageManager.BP_SystemMessageManager_C.ClearSystemMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_SystemMessageManager_C::ClearSystemMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SystemMessageManager_C", "ClearSystemMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SystemMessageManager.BP_SystemMessageManager_C.ShowMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsLowerPosition                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bDoNotSkip                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SystemMessageManager_C::ShowMessage(const class UObject* WorldContextObject, const class FText& Message, const bool IsLowerPosition, const bool bDoNotSkip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SystemMessageManager_C", "ShowMessage");

	Params::BP_SystemMessageManager_C_ShowMessage Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Message = std::move(Message);
	Parms.IsLowerPosition = IsLowerPosition;
	Parms.bDoNotSkip = bDoNotSkip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SystemMessageManager.BP_SystemMessageManager_C.EndMessage
// (BlueprintCallable, BlueprintEvent)

void UBP_SystemMessageManager_C::EndMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SystemMessageManager_C", "EndMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SystemMessageManager.BP_SystemMessageManager_C.ShowGetEmoteMessage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EmoteId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SystemMessageManager_C::ShowGetEmoteMessage(const class UObject* WorldContextObject, const class FName& EmoteId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SystemMessageManager_C", "ShowGetEmoteMessage");

	Params::BP_SystemMessageManager_C_ShowGetEmoteMessage Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.EmoteId = EmoteId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SystemMessageManager.BP_SystemMessageManager_C.IsSystemMessageShowingOrStandby
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SystemMessageManager_C::IsSystemMessageShowingOrStandby()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SystemMessageManager_C", "IsSystemMessageShowingOrStandby");

	Params::BP_SystemMessageManager_C_IsSystemMessageShowingOrStandby Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SystemMessageManager.BP_SystemMessageManager_C.GetContentActivateMessage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     ContentId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             Message                                                (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SystemMessageManager_C::GetContentActivateMessage(const TArray<class FName>& ContentId, class FText* Message)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SystemMessageManager_C", "GetContentActivateMessage");

	Params::BP_SystemMessageManager_C_GetContentActivateMessage Parms{};

	Parms.ContentId = std::move(ContentId);

	UObject::ProcessEvent(Func, &Parms);

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

	return Parms.ReturnValue;
}

}

