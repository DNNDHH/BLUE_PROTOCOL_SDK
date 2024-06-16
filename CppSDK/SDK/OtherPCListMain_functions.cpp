#pragma once

 

// Package: OtherPCListMain

#include "Basic.hpp"

#include "OtherPCListMain_classes.hpp"
#include "OtherPCListMain_parameters.hpp"


namespace SDK
{

// Function OtherPCListMain.OtherPCListMain_C.OnListSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerState*                   PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCListMain_C::OnListSelected__DelegateSignature(class ASBPlayerState* PlayerState, class FName CharacterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "OnListSelected__DelegateSignature");

	Params::OtherPCListMain_C_OnListSelected__DelegateSignature Parms{};

	Parms.PlayerState = PlayerState;
	Parms.CharacterId = CharacterId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCListMain.OtherPCListMain_C.OnClickUpdateButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOtherPCListMain_C::OnClickUpdateButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "OnClickUpdateButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListMain.OtherPCListMain_C.OnListUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UOtherPCListMain_C::OnListUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "OnListUpdated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListMain.OtherPCListMain_C.ExecuteUbergraph_OtherPCListMain
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCListMain_C::ExecuteUbergraph_OtherPCListMain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "ExecuteUbergraph_OtherPCListMain");

	Params::OtherPCListMain_C_ExecuteUbergraph_OtherPCListMain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCListMain.OtherPCListMain_C.OnEventListSelectedMain
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bOnlyListUpdate                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCListMain_C::OnEventListSelectedMain(int32 ListIndex, bool bOnlyListUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "OnEventListSelectedMain");

	Params::OtherPCListMain_C_OnEventListSelectedMain Parms{};

	Parms.ListIndex = ListIndex;
	Parms.bOnlyListUpdate = bOnlyListUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCListMain.OtherPCListMain_C.Update
// (BlueprintCallable, BlueprintEvent)

void UOtherPCListMain_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListMain.OtherPCListMain_C.MoveCursorPositionToList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCListMain_C::MoveCursorPositionToList(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "MoveCursorPositionToList");

	Params::OtherPCListMain_C_MoveCursorPositionToList Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCListMain.OtherPCListMain_C.EndUpdateAnim
// (BlueprintCallable, BlueprintEvent)

void UOtherPCListMain_C::EndUpdateAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "EndUpdateAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListMain.OtherPCListMain_C.StartUpdateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLoop                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCListMain_C::StartUpdateAnim(bool IsLoop)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "StartUpdateAnim");

	Params::OtherPCListMain_C_StartUpdateAnim Parms{};

	Parms.IsLoop = IsLoop;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCListMain.OtherPCListMain_C.OnIsBlackListed_event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsBlackListed                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCListMain_C::OnIsBlackListed_event_0(const bool bIsBlackListed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "OnIsBlackListed_event_0");

	Params::OtherPCListMain_C_OnIsBlackListed_event_0 Parms{};

	Parms.bIsBlackListed = bIsBlackListed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCListMain.OtherPCListMain_C.BndEvt__UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOtherPCListMain_C::BndEvt__UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "BndEvt__UpdateButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListMain.OtherPCListMain_C.OnEventListSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ListIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCListMain_C::OnEventListSelected(int32 ListIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "OnEventListSelected");

	Params::OtherPCListMain_C_OnEventListSelected Parms{};

	Parms.ListIndex = ListIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCListMain.OtherPCListMain_C.Open
// (BlueprintCallable, BlueprintEvent)

void UOtherPCListMain_C::Open()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "Open");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListMain.OtherPCListMain_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOtherPCListMain_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListMain.OtherPCListMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOtherPCListMain_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListMain.OtherPCListMain_C.UpdatePlayerList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOtherPCListMain_C::UpdatePlayerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "UpdatePlayerList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListMain.OtherPCListMain_C.ResetSelectList
// (Public, BlueprintCallable, BlueprintEvent)

void UOtherPCListMain_C::ResetSelectList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "ResetSelectList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function OtherPCListMain.OtherPCListMain_C.Search Player List
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     InPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MatchistID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOtherPCListMain_C::Search_Player_List(class APlayerState* InPlayerState, int32* MatchistID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "Search Player List");

	Params::OtherPCListMain_C_Search_Player_List Parms{};

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);

	if (MatchistID != nullptr)
		*MatchistID = Parms.MatchistID;
}


// Function OtherPCListMain.OtherPCListMain_C.SelectPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     InPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bOnlyListUpdate                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOtherPCListMain_C::SelectPlayer(class APlayerState* InPlayerState, bool bOnlyListUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "SelectPlayer");

	Params::OtherPCListMain_C_SelectPlayer Parms{};

	Parms.InPlayerState = InPlayerState;
	Parms.bOnlyListUpdate = bOnlyListUpdate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OtherPCListMain.OtherPCListMain_C.GetOwningSbPlayerState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerState*                   Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UOtherPCListMain_C::GetOwningSbPlayerState(class ASBPlayerState** Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OtherPCListMain_C", "GetOwningSbPlayerState");

	Params::OtherPCListMain_C_GetOwningSbPlayerState Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}

