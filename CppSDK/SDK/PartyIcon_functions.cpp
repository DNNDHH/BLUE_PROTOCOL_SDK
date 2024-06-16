#pragma once

 

// Package: PartyIcon

#include "Basic.hpp"

#include "PartyIcon_classes.hpp"
#include "PartyIcon_parameters.hpp"


namespace SDK
{

// Function PartyIcon.PartyIcon_C.ExecuteUbergraph_PartyIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyIcon_C::ExecuteUbergraph_PartyIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "ExecuteUbergraph_PartyIcon");

	Params::PartyIcon_C_ExecuteUbergraph_PartyIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.RequestSetOwnerCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBCharacter*                     Param_OwnerCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyIcon_C::RequestSetOwnerCharacter(class ASBCharacter* Param_OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "RequestSetOwnerCharacter");

	Params::PartyIcon_C_RequestSetOwnerCharacter Parms{};

	Parms.Param_OwnerCharacter = Param_OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.UnbindQuestDelegete
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::UnbindQuestDelegete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "UnbindQuestDelegete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.RequestHide
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::RequestHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "RequestHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.RequestSetAnimationSpeed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AnimationSpeed                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyIcon_C::RequestSetAnimationSpeed(float AnimationSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "RequestSetAnimationSpeed");

	Params::PartyIcon_C_RequestSetAnimationSpeed Parms{};

	Parms.AnimationSpeed = AnimationSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.RequestShow
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::RequestShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "RequestShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.FollowUnbindDelegate
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::FollowUnbindDelegate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "FollowUnbindDelegate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.PartyUnbindDelegates
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::PartyUnbindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "PartyUnbindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.PartyPlayerStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPartyMemberState*              MemberState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyIcon_C::PartyPlayerStateChange(class USBPartyMemberState* MemberState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "PartyPlayerStateChange");

	Params::PartyIcon_C_PartyPlayerStateChange Parms{};

	Parms.MemberState = MemberState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyIcon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.OnAttachedClientPlayerStateDelegate_����_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerController*              PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyIcon_C::OnAttachedClientPlayerStateDelegate______0(class ASBPlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "OnAttachedClientPlayerStateDelegate_����_0");

	Params::PartyIcon_C_OnAttachedClientPlayerStateDelegate______0 Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.FreeOnce
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::FreeOnce()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "FreeOnce");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.RequestReInit
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::RequestReInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "RequestReInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.Init
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.OnPartyMemberUpdate
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::OnPartyMemberUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "OnPartyMemberUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.OnSetOwnerPlayerCharacter
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::OnSetOwnerPlayerCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "OnSetOwnerPlayerCharacter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.Retry_Init_Follow
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::Retry_Init_Follow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "Retry_Init_Follow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.Retry_Group_Init
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::Retry_Group_Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "Retry_Group_Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.InterruptUpdate
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::InterruptUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "InterruptUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.OnFollowStateChanged
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::OnFollowStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "OnFollowStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.SetOwnerCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBCharacter*                     Param_OwnerCharacter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyIcon_C::SetOwnerCharacter(class ASBCharacter* Param_OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "SetOwnerCharacter");

	Params::PartyIcon_C_SetOwnerCharacter Parms{};

	Parms.Param_OwnerCharacter = Param_OwnerCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.InterruptProgressUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerInterruptQuestComponent* InComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyIcon_C::InterruptProgressUpdate(class USBPlayerInterruptQuestComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "InterruptProgressUpdate");

	Params::PartyIcon_C_InterruptProgressUpdate Parms{};

	Parms.InComponent = InComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.InterruptSuccsess
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InQuestId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InSuccess                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyIcon_C::InterruptSuccsess(const class FName& InQuestId, bool InSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "InterruptSuccsess");

	Params::PartyIcon_C_InterruptSuccsess Parms{};

	Parms.InQuestId = InQuestId;
	Parms.InSuccess = InSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.InterruptTeamMemberUpdate
// (BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::InterruptTeamMemberUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "InterruptTeamMemberUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.InterruptPlayerInfo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBInterruptQuestPlayInfo        InPlayInfo                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UPartyIcon_C::InterruptPlayerInfo(const struct FSBInterruptQuestPlayInfo& InPlayInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "InterruptPlayerInfo");

	Params::PartyIcon_C_InterruptPlayerInfo Parms{};

	Parms.InPlayInfo = std::move(InPlayInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.OnJoinInterrupt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerInterruptQuestComponent* InComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInFirst                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyIcon_C::OnJoinInterrupt(class USBPlayerInterruptQuestComponent* InComponent, const bool bInFirst)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "OnJoinInterrupt");

	Params::PartyIcon_C_OnJoinInterrupt Parms{};

	Parms.InComponent = InComponent;
	Parms.bInFirst = bInFirst;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.InterruptQuest
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InQuestId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyIcon_C::InterruptQuest(const class FName& InQuestId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "InterruptQuest");

	Params::PartyIcon_C_InterruptQuest Parms{};

	Parms.InQuestId = InQuestId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.CheckParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::CheckParty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "CheckParty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.CheckFollow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerProfileSummaryData>InFriendList                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPartyIcon_C::CheckFollow(const TArray<struct FPlayerProfileSummaryData>& InFriendList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "CheckFollow");

	Params::PartyIcon_C_CheckFollow Parms{};

	Parms.InFriendList = std::move(InFriendList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.CheckGroup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::CheckGroup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "CheckGroup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.CheckNPC
// (Public, BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::CheckNPC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "CheckNPC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.Failed Retry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InString                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPartyIcon_C::Failed_Retry(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "Failed Retry");

	Params::PartyIcon_C_Failed_Retry Parms{};

	Parms.InString = std::move(InString);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyIcon.PartyIcon_C.CheckLeader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPartyIcon_C::CheckLeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "CheckLeader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyIcon.PartyIcon_C.RequestSetIconColorName
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ColorName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPartyIcon_C::RequestSetIconColorName(const class FString& ColorName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyIcon_C", "RequestSetIconColorName");

	Params::PartyIcon_C_RequestSetIconColorName Parms{};

	Parms.ColorName = std::move(ColorName);

	UObject::ProcessEvent(Func, &Parms);
}

}

