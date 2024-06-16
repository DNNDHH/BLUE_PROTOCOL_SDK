#pragma once

 

// Package: GuildRenameDialog

#include "Basic.hpp"

#include "GuildRenameDialog_classes.hpp"
#include "GuildRenameDialog_parameters.hpp"


namespace SDK
{

// Function GuildRenameDialog.GuildRenameDialog_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGuildRenameDialog_C::OnCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "OnCancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.OnChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGuildRenameDialog_C::OnChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "OnChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.ExecuteUbergraph_GuildRenameDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRenameDialog_C::ExecuteUbergraph_GuildRenameDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "ExecuteUbergraph_GuildRenameDialog");

	Params::GuildRenameDialog_C_ExecuteUbergraph_GuildRenameDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRenameDialog.GuildRenameDialog_C.UnBindEvent
// (BlueprintCallable, BlueprintEvent)

void UGuildRenameDialog_C::UnBindEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "UnBindEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UGuildRenameDialog_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRenameDialog_C::BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature");

	Params::GuildRenameDialog_C_BndEvt__GuildRenameDialog_UpdateNameBtn_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGuildRenameDialog_C::BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_Tag_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGuildRenameDialog_C::BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::GuildRenameDialog_C_BndEvt__GuildRenameDialog_TB_GuildName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRenameDialog.GuildRenameDialog_C.Close
// (BlueprintCallable, BlueprintEvent)

void UGuildRenameDialog_C::Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__GuildRenameDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature
// (BlueprintEvent)

void UGuildRenameDialog_C::BndEvt__GuildRenameDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "BndEvt__GuildRenameDialog_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildRenameDialog_C::BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.CreateNetWorking
// (BlueprintCallable, BlueprintEvent)

void UGuildRenameDialog_C::CreateNetWorking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "CreateNetWorking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.RemoveNetworking
// (BlueprintCallable, BlueprintEvent)

void UGuildRenameDialog_C::RemoveNetworking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "RemoveNetworking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildRenameDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.OnChangedName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRenameDialog_C::OnChangedName(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "OnChangedName");

	Params::GuildRenameDialog_C_OnChangedName Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRenameDialog.GuildRenameDialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildRenameDialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.OnComplete_DuplicationChecked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsDuplicate                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildRenameDialog_C::OnComplete_DuplicationChecked(const int32 RetCode, const bool bIsDuplicate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "OnComplete_DuplicationChecked");

	Params::GuildRenameDialog_C_OnComplete_DuplicationChecked Parms{};

	Parms.RetCode = RetCode;
	Parms.bIsDuplicate = bIsDuplicate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRenameDialog.GuildRenameDialog_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UGuildRenameDialog_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.UpdateExecButton
// (BlueprintCallable, BlueprintEvent)

void UGuildRenameDialog_C::UpdateExecButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "UpdateExecButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRenameDialog_C::BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::GuildRenameDialog_C_BndEvt__TB_GuildName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRenameDialog_C::BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::GuildRenameDialog_C_BndEvt__TB_Tag_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRenameDialog.GuildRenameDialog_C.BndEvt__Btn_OutCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildRenameDialog_C::BndEvt__Btn_OutCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "BndEvt__Btn_OutCancel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRenameDialog.GuildRenameDialog_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildRenameDialog_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "GetGuildComp");

	Params::GuildRenameDialog_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildRenameDialog.GuildRenameDialog_C.CheckTypedNewGuildName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGuildRenameDialog_C::CheckTypedNewGuildName(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "CheckTypedNewGuildName");

	Params::GuildRenameDialog_C_CheckTypedNewGuildName Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRenameDialog.GuildRenameDialog_C.CheckTypedNewGuildTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGuildRenameDialog_C::CheckTypedNewGuildTag(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRenameDialog_C", "CheckTypedNewGuildTag");

	Params::GuildRenameDialog_C_CheckTypedNewGuildTag Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

