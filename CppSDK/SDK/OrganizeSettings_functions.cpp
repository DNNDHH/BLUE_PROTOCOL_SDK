#pragma once

 

// Package: OrganizeSettings

#include "Basic.hpp"

#include "OrganizeSettings_classes.hpp"
#include "OrganizeSettings_parameters.hpp"


namespace SDK
{

// Function OrganizeSettings.OrganizeSettings_C.OnOrganizeCansel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOrganizeSettings_C::OnOrganizeCansel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "OnOrganizeCansel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OrganizeSettings.OrganizeSettings_C.Organizeing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOrganizeSettings_C::Organizeing__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "Organizeing__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OrganizeSettings.OrganizeSettings_C.ExecuteUbergraph_OrganizeSettings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOrganizeSettings_C::ExecuteUbergraph_OrganizeSettings(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "ExecuteUbergraph_OrganizeSettings");

	Params::OrganizeSettings_C_ExecuteUbergraph_OrganizeSettings Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.OnCompletedGuildOrganized
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOrganizeSettings_C::OnCompletedGuildOrganized(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "OnCompletedGuildOrganized");

	Params::OrganizeSettings_C_OnCompletedGuildOrganized Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOrganizeSettings_C::BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildName_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOrganizeSettings_C::BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildShortName_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOrganizeSettings_C::BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	Params::OrganizeSettings_C_BndEvt__OrganizeSettings_TB_GuildComment_K2Node_ComponentBoundEvent_3_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.UpdateOrganizingBtn
// (BlueprintCallable, BlueprintEvent)

void UOrganizeSettings_C::UpdateOrganizingBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "UpdateOrganizingBtn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OrganizeSettings.OrganizeSettings_C.OnCheckedGuildOrganize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOrganizeSettings_C::OnCheckedGuildOrganize(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "OnCheckedGuildOrganize");

	Params::OrganizeSettings_C_OnCheckedGuildOrganize Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UOrganizeSettings_C::BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OrganizeSettings.OrganizeSettings_C.OnCompleteGuildNameCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsDuplicate                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOrganizeSettings_C::OnCompleteGuildNameCheck(const int32 RetCode, const bool bIsDuplicate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "OnCompleteGuildNameCheck");

	Params::OrganizeSettings_C_OnCompleteGuildNameCheck Parms{};

	Parms.RetCode = RetCode;
	Parms.bIsDuplicate = bIsDuplicate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.InitializeGuildDuplicateCheck
// (BlueprintCallable, BlueprintEvent)

void UOrganizeSettings_C::InitializeGuildDuplicateCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "InitializeGuildDuplicateCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OrganizeSettings.OrganizeSettings_C.BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOrganizeSettings_C::BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::OrganizeSettings_C_BndEvt__TB_GuildShortName_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOrganizeSettings_C::BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::OrganizeSettings_C_BndEvt__TB_GuildComment_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOrganizeSettings_C::BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::OrganizeSettings_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOrganizeSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OrganizeSettings.OrganizeSettings_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOrganizeSettings_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "PreConstruct");

	Params::OrganizeSettings_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.GenerateAttribute
// (Public, BlueprintCallable, BlueprintEvent)

void UOrganizeSettings_C::GenerateAttribute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "GenerateAttribute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OrganizeSettings.OrganizeSettings_C.GenerateTimes
// (Public, BlueprintCallable, BlueprintEvent)

void UOrganizeSettings_C::GenerateTimes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "GenerateTimes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OrganizeSettings.OrganizeSettings_C.ConstructGuildData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildData                       GuildData                                              (Parm, OutParm)

void UOrganizeSettings_C::ConstructGuildData(struct FGuildData* GuildData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "ConstructGuildData");

	Params::OrganizeSettings_C_ConstructGuildData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GuildData != nullptr)
		*GuildData = std::move(Parms.GuildData);
}


// Function OrganizeSettings.OrganizeSettings_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UOrganizeSettings_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "GetGuildComp");

	Params::OrganizeSettings_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function OrganizeSettings.OrganizeSettings_C.ClearData
// (Public, BlueprintCallable, BlueprintEvent)

void UOrganizeSettings_C::ClearData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "ClearData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OrganizeSettings.OrganizeSettings_C.CheckGuildComment
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOrganizeSettings_C::CheckGuildComment(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "CheckGuildComment");

	Params::OrganizeSettings_C_CheckGuildComment Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.CheckGuildTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOrganizeSettings_C::CheckGuildTag(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "CheckGuildTag");

	Params::OrganizeSettings_C_CheckGuildTag Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OrganizeSettings.OrganizeSettings_C.CheckGuildName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOrganizeSettings_C::CheckGuildName(const class FText& InText, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OrganizeSettings_C", "CheckGuildName");

	Params::OrganizeSettings_C_CheckGuildName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

