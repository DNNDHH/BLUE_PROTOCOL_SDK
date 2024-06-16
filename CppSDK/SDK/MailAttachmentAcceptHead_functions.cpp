#pragma once

 

// Package: MailAttachmentAcceptHead

#include "Basic.hpp"

#include "MailAttachmentAcceptHead_classes.hpp"
#include "MailAttachmentAcceptHead_parameters.hpp"


namespace SDK
{

// Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.ExecuteUbergraph_MailAttachmentAcceptHead
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailAttachmentAcceptHead_C::ExecuteUbergraph_MailAttachmentAcceptHead(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptHead_C", "ExecuteUbergraph_MailAttachmentAcceptHead");

	Params::MailAttachmentAcceptHead_C_ExecuteUbergraph_MailAttachmentAcceptHead Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.BndEvt__MailAttachmentAcceptHead_Expandable_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UExpandableArea*                  Area                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailAttachmentAcceptHead_C::BndEvt__MailAttachmentAcceptHead_Expandable_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptHead_C", "BndEvt__MailAttachmentAcceptHead_Expandable_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature");

	Params::MailAttachmentAcceptHead_C_BndEvt__MailAttachmentAcceptHead_Expandable_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature Parms{};

	Parms.Area = Area;
	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.AddAttachment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMailAttachment                InAttachment                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UMailAttachmentAcceptHead_C::AddAttachment(const struct FSBMailAttachment& InAttachment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptHead_C", "AddAttachment");

	Params::MailAttachmentAcceptHead_C_AddAttachment Parms{};

	Parms.InAttachment = std::move(InAttachment);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.SetStorageNo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_StorageNo                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailAttachmentAcceptHead_C::SetStorageNo(int32 Param_StorageNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptHead_C", "SetStorageNo");

	Params::MailAttachmentAcceptHead_C_SetStorageNo Parms{};

	Parms.Param_StorageNo = Param_StorageNo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailAttachmentAcceptHead_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptHead_C", "PreConstruct");

	Params::MailAttachmentAcceptHead_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.Get Storage Text
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_StorageNo                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UMailAttachmentAcceptHead_C::Get_Storage_Text(int32 Param_StorageNo, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptHead_C", "Get Storage Text");

	Params::MailAttachmentAcceptHead_C_Get_Storage_Text Parms{};

	Parms.Param_StorageNo = Param_StorageNo;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.FindAttachments
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBMailAttachment                Find                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   Attachment                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMailAttachmentAcceptHead_C::FindAttachments(const struct FSBMailAttachment& Find, int32* Attachment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptHead_C", "FindAttachments");

	Params::MailAttachmentAcceptHead_C_FindAttachments Parms{};

	Parms.Find = std::move(Find);

	UObject::ProcessEvent(Func, &Parms);

	if (Attachment != nullptr)
		*Attachment = Parms.Attachment;
}


// Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.GenerateAttachmentList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMailAttachmentAcceptHead_C::GenerateAttachmentList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptHead_C", "GenerateAttachmentList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.isAnyOverFlow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Overflow                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailAttachmentAcceptHead_C::IsAnyOverFlow(bool* Overflow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptHead_C", "isAnyOverFlow");

	Params::MailAttachmentAcceptHead_C_IsAnyOverFlow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Overflow != nullptr)
		*Overflow = Parms.Overflow;
}


// Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.isAnyDuplicate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Duplicate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailAttachmentAcceptHead_C::IsAnyDuplicate(bool* Duplicate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptHead_C", "isAnyDuplicate");

	Params::MailAttachmentAcceptHead_C_IsAnyDuplicate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Duplicate != nullptr)
		*Duplicate = Parms.Duplicate;
}


// Function MailAttachmentAcceptHead.MailAttachmentAcceptHead_C.IsAccepted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Accept                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMailAttachmentAcceptHead_C::IsAccepted(bool* Accept)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MailAttachmentAcceptHead_C", "IsAccepted");

	Params::MailAttachmentAcceptHead_C_IsAccepted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Accept != nullptr)
		*Accept = Parms.Accept;
}

}

