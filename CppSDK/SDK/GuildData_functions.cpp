#pragma once

 

// Package: GuildData

#include "Basic.hpp"

#include "GuildData_classes.hpp"
#include "GuildData_parameters.hpp"


namespace SDK
{

// Function GuildData.GuildData_C.OnGuildSetting__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGuildData_C::OnGuildSetting__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnGuildSetting__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.OnGuildMember__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGuildData_C::OnGuildMember__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnGuildMember__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.OnGuildApplications__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGuildData_C::OnGuildApplications__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnGuildApplications__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.OnGuildOrganize__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGuildData_C::OnGuildOrganize__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnGuildOrganize__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.OnSelectEntry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  GuildEntry                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildData_C::OnSelectEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnSelectEntry__DelegateSignature");

	Params::GuildData_C_OnSelectEntry__DelegateSignature Parms{};

	Parms.GuildEntry = std::move(GuildEntry);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.OnRefreshRightMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGuildData_C::OnRefreshRightMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnRefreshRightMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.SetNowTutorialHelpId__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TutorialHelpId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::SetNowTutorialHelpId__DelegateSignature(class FName TutorialHelpId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "SetNowTutorialHelpId__DelegateSignature");

	Params::GuildData_C_SetNowTutorialHelpId__DelegateSignature Parms{};

	Parms.TutorialHelpId = TutorialHelpId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.ExecuteUbergraph_GuildData
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::ExecuteUbergraph_GuildData(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "ExecuteUbergraph_GuildData");

	Params::GuildData_C_ExecuteUbergraph_GuildData Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildData_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.UnBindEvent
// (BlueprintCallable, BlueprintEvent)

void UGuildData_C::UnBindEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "UnBindEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGuildData_C::BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UGuildData_C::BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildData_C::BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BndEvt__GuildData_BtnFind_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.On Update Guild Member List
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::On_Update_Guild_Member_List(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "On Update Guild Member List");

	Params::GuildData_C_On_Update_Guild_Member_List Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.OnAddedNewMember
// (BlueprintCallable, BlueprintEvent)

void UGuildData_C::OnAddedNewMember()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnAddedNewMember");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.OnMember Denied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::OnMember_Denied(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnMember Denied");

	Params::GuildData_C_OnMember_Denied Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.OnMemberAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::OnMemberAccepted(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnMemberAccepted");

	Params::GuildData_C_OnMemberAccepted Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.SetTitleTextById
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::SetTitleTextById(int32 TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "SetTitleTextById");

	Params::GuildData_C_SetTitleTextById Parms{};

	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature");

	Params::GuildData_C_BndEvt__GuildData_Own_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_12_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                             NewText                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildData_C::BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature(const class FText& NewText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature");

	Params::GuildData_C_BndEvt__GuildData_SearchBox_K2Node_ComponentBoundEvent_11_OnTextChange__DelegateSignature Parms{};

	Parms.NewText = std::move(NewText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.BndEvt__GuildData_Btn_ShowHint_RecruitGuild_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildData_C::BndEvt__GuildData_Btn_ShowHint_RecruitGuild_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BndEvt__GuildData_Btn_ShowHint_RecruitGuild_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature");

	Params::GuildData_C_BndEvt__GuildData_GuildMenuCommandSubButtonList_K2Node_ComponentBoundEvent_8_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.BndEvt__GuildData_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildData_C::BndEvt__GuildData_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BndEvt__GuildData_Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.Value Init
// (BlueprintCallable, BlueprintEvent)

void UGuildData_C::Value_Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "Value Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.OnBootExternalBrowser
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::OnBootExternalBrowser(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnBootExternalBrowser");

	Params::GuildData_C_OnBootExternalBrowser Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.BndEvt__GuildData_BtnSearch_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildData_C::BndEvt__GuildData_BtnSearch_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BndEvt__GuildData_BtnSearch_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.OnSearched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::OnSearched(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnSearched");

	Params::GuildData_C_OnSearched Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.Unlock Search
// (BlueprintCallable, BlueprintEvent)

void UGuildData_C::Unlock_Search()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "Unlock Search");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.Lock Search
// (BlueprintCallable, BlueprintEvent)

void UGuildData_C::Lock_Search()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "Lock Search");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.OnGuiluildDatailGeted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuildData                       InGuildData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGuildData_C::OnGuiluildDatailGeted(const int32 RetCode, const struct FGuildData& InGuildData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnGuiluildDatailGeted");

	Params::GuildData_C_OnGuiluildDatailGeted Parms{};

	Parms.RetCode = RetCode;
	Parms.InGuildData = std::move(InGuildData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ETextCommit                             CommitMethod                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::GuildData_C_BndEvt__TB_SearchBox_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  GuildEntryData                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildData_C::BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature");

	Params::GuildData_C_BndEvt__GuildEntriesList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature Parms{};

	Parms.GuildEntryData = std::move(GuildEntryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.BndEvt__Btn_GuildOrganize_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildData_C::BndEvt__Btn_GuildOrganize_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BndEvt__Btn_GuildOrganize_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.OnCmplInviteArraignment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAccept                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InEntryId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGuildData_C::OnCmplInviteArraignment(const int32 RetCode, bool IsAccept, const class FString& InEntryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnCmplInviteArraignment");

	Params::GuildData_C_OnCmplInviteArraignment Parms{};

	Parms.RetCode = RetCode;
	Parms.IsAccept = IsAccept;
	Parms.InEntryId = std::move(InEntryId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.OnCompleteRefleshData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::OnCompleteRefleshData(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnCompleteRefleshData");

	Params::GuildData_C_OnCompleteRefleshData Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.BindInit
// (BlueprintCallable, BlueprintEvent)

void UGuildData_C::BindInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BindInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.Reinit
// (BlueprintCallable, BlueprintEvent)

void UGuildData_C::Reinit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "Reinit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.InitializeGuildMember
// (BlueprintCallable, BlueprintEvent)

void UGuildData_C::InitializeGuildMember()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "InitializeGuildMember");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.InitializeNoGuild
// (BlueprintCallable, BlueprintEvent)

void UGuildData_C::InitializeNoGuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "InitializeNoGuild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildData_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.ResetMouseCursorTypeToDefaultRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGuildData_C::ResetMouseCursorTypeToDefaultRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "ResetMouseCursorTypeToDefaultRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.OnSubMenuUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MainPage                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::OnSubMenuUpdate(int32 MainPage, int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnSubMenuUpdate");

	Params::GuildData_C_OnSubMenuUpdate Parms{};

	Parms.MainPage = MainPage;
	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.OnSameMenuBookmarkAccessNew
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InBookMarkType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGuildData_C::OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnSameMenuBookmarkAccessNew");

	Params::GuildData_C_OnSameMenuBookmarkAccessNew Parms{};

	Parms.InBookMarkType = std::move(InBookMarkType);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.OnRMShopClosed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGuildData_C::OnRMShopClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnRMShopClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.OnParentTerm
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGuildData_C::OnParentTerm()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "OnParentTerm");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.BookmarkUpdateRequest
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGuildData_C::BookmarkUpdateRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "BookmarkUpdateRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildData_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "GetGuildComp");

	Params::GuildData_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildData.GuildData_C.SetPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PageIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::SetPage(int32 PageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "SetPage");

	Params::GuildData_C_SetPage Parms{};

	Parms.PageIndex = PageIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.UpdateSubMenuButtonStateByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubButtonIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildData_C::UpdateSubMenuButtonStateByIndex(int32 SubButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "UpdateSubMenuButtonStateByIndex");

	Params::GuildData_C_UpdateSubMenuButtonStateByIndex Parms{};

	Parms.SubButtonIndex = SubButtonIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildData.GuildData_C.GetPageIndex
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildData_C::GetPageIndex()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "GetPageIndex");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildData.GuildData_C.IsGuildInvited
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildData_C::IsGuildInvited(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "IsGuildInvited");

	Params::GuildData_C_IsGuildInvited Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function GuildData.GuildData_C.TermRequest
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubMenuTermReason                      InReason                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESubMenuTermRequestReply                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESubMenuTermRequestReply UGuildData_C::TermRequest(const ESubMenuTermReason InReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildData_C", "TermRequest");

	Params::GuildData_C_TermRequest Parms{};

	Parms.InReason = InReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

