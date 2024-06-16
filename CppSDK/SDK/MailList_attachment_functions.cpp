#pragma once

 

// Package: MailList_attachment

#include "Basic.hpp"

#include "MailList_attachment_classes.hpp"
#include "MailList_attachment_parameters.hpp"


namespace SDK
{

// Function MailList_attachment.MailList_attachment_C.ExecuteUbergraph_MailList_attachment
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailList_attachment_C::ExecuteUbergraph_MailList_attachment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailList_attachment_C", "ExecuteUbergraph_MailList_attachment");

	Params::MailList_attachment_C_ExecuteUbergraph_MailList_attachment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailList_attachment.MailList_attachment_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UMailList_attachment_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailList_attachment_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailList_attachment.MailList_attachment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMailList_attachment_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailList_attachment_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailList_attachment.MailList_attachment_C.SetMoney
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailList_attachment_C::SetMoney(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailList_attachment_C", "SetMoney");

	Params::MailList_attachment_C_SetMoney Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailList_attachment.MailList_attachment_C.SetViewType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBMailAttachmentViewType               Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailList_attachment_C::SetViewType(ESBMailAttachmentViewType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailList_attachment_C", "SetViewType");

	Params::MailList_attachment_C_SetViewType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailList_attachment.MailList_attachment_C.SetAttentionStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailList_attachment_C::SetAttentionStatus(int32 Status)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailList_attachment_C", "SetAttentionStatus");

	Params::MailList_attachment_C_SetAttentionStatus Parms{};

	Parms.Status = Status;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailList_attachment.MailList_attachment_C.UpdateIconExtraData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailList_attachment_C::UpdateIconExtraData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailList_attachment_C", "UpdateIconExtraData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailList_attachment.MailList_attachment_C.UpdateStorageIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailList_attachment_C::UpdateStorageIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailList_attachment_C", "UpdateStorageIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailList_attachment.MailList_attachment_C.SetToolTips
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailList_attachment_C::SetToolTips()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailList_attachment_C", "SetToolTips");

	UObject::ProcessEvent(Func, nullptr);
}

}

