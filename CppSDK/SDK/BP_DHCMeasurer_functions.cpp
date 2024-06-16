#pragma once

 

// Package: BP_DHCMeasurer

#include "Basic.hpp"

#include "BP_DHCMeasurer_classes.hpp"
#include "BP_DHCMeasurer_parameters.hpp"


namespace SDK
{

// Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_StateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EN_DHCStatus                            DHCState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    LocalPlayerJoined                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DHCMeasurer_C::DHC_StateChanged__DelegateSignature(EN_DHCStatus DHCState, bool LocalPlayerJoined)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "DHC_StateChanged__DelegateSignature");

	Params::BP_DHCMeasurer_C_DHC_StateChanged__DelegateSignature Parms{};

	Parms.DHCState = DHCState;
	Parms.LocalPlayerJoined = LocalPlayerJoined;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_LocalPlayerJoined__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::DHC_LocalPlayerJoined__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "DHC_LocalPlayerJoined__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHC_LocalPlayerQuit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::DHC_LocalPlayerQuit__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "DHC_LocalPlayerQuit__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.ExecuteUbergraph_BP_DHCMeasurer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHCMeasurer_C::ExecuteUbergraph_BP_DHCMeasurer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "ExecuteUbergraph_BP_DHCMeasurer");

	Params::BP_DHCMeasurer_C_ExecuteUbergraph_BP_DHCMeasurer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.LocalWarpIntoMeasurer
// (BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::LocalWarpIntoMeasurer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "LocalWarpIntoMeasurer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.SetCurrentMesurerForPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Clear                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DHCMeasurer_C::SetCurrentMesurerForPlayer(class APawn* PlayerCharacter, bool Clear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "SetCurrentMesurerForPlayer");

	Params::BP_DHCMeasurer_C_SetCurrentMesurerForPlayer Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.Clear = Clear;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.SetMokujinInvincible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Invincible                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DHCMeasurer_C::SetMokujinInvincible(bool Invincible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "SetMokujinInvincible");

	Params::BP_DHCMeasurer_C_SetMokujinInvincible Parms{};

	Parms.Invincible = Invincible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.InittedHUD
// (BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::InittedHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "InittedHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCClientExit
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerController*>        ExitMembers                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_DHCMeasurer_C::DHCClientExit(const TArray<class APlayerController*>& ExitMembers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "DHCClientExit");

	Params::BP_DHCMeasurer_C_DHCClientExit Parms{};

	Parms.ExitMembers = std::move(ExitMembers);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCClientInit
// (Net, NetReliable, NetMulticast, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerController*>        Param_RegisterPlayers                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_DHCMeasurer_C::DHCClientInit(const TArray<class APlayerController*>& Param_RegisterPlayers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "DHCClientInit");

	Params::BP_DHCMeasurer_C_DHCClientInit Parms{};

	Parms.Param_RegisterPlayers = std::move(Param_RegisterPlayers);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.ShowMessage
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// EN_DHCMessage                           Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHCMeasurer_C::ShowMessage(EN_DHCMessage Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "ShowMessage");

	Params::BP_DHCMeasurer_C_ShowMessage Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.InitPartyPlayerList
// (BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::InitPartyPlayerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "InitPartyPlayerList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHCMeasurer_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "ReceiveTick");

	Params::BP_DHCMeasurer_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.AddDamageEnemy
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBDamageEvent                   DamageEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHCMeasurer_C::AddDamageEnemy(class ASBEnemyCharacter* DamagedActor, float Damage, const struct FSBDamageEvent& DamageEvent, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "AddDamageEnemy");

	Params::BP_DHCMeasurer_C_AddDamageEnemy Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.DamageEvent = std::move(DamageEvent);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.AddDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           CuaseCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHCMeasurer_C::AddDamage(class AActor* CuaseCharacter, float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "AddDamage");

	Params::BP_DHCMeasurer_C_AddDamage Parms{};

	Parms.CuaseCharacter = CuaseCharacter;
	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_OutWarp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Other_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         View_Rotation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DHCMeasurer_C::CE_OutWarp(class AActor* Other_Actor, const struct FRotator& View_Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "CE_OutWarp");

	Params::BP_DHCMeasurer_C_CE_OutWarp Parms{};

	Parms.Other_Actor = Other_Actor;
	Parms.View_Rotation = std::move(View_Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.Init
// (BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_BurstCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBAttribute                            ElementType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHCMeasurer_C::CE_BurstCount(ESBAttribute ElementType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "CE_BurstCount");

	Params::BP_DHCMeasurer_C_CE_BurstCount Parms{};

	Parms.ElementType = ElementType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.CE_InWarp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               Other_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHCMeasurer_C::CE_InWarp(class ASBPlayerCharacter* Other_Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "CE_InWarp");

	Params::BP_DHCMeasurer_C_CE_InWarp Parms{};

	Parms.Other_Actor = Other_Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.CheckStart
// (BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::CheckStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "CheckStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.DHCInitalize
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::DHCInitalize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "DHCInitalize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.TimeOutWarp
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::TimeOutWarp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "TimeOutWarp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.RegisterPlayers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                      UserController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Initialized                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DHCMeasurer_C::RegisterPlayers(class AController* UserController, bool* Initialized)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "RegisterPlayers");

	Params::BP_DHCMeasurer_C_RegisterPlayers Parms{};

	Parms.UserController = UserController;

	UObject::ProcessEvent(Func, &Parms);

	if (Initialized != nullptr)
		*Initialized = Parms.Initialized;
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.IsInUse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DHCMeasurer_C::IsInUse(bool* IsUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "IsInUse");

	Params::BP_DHCMeasurer_C_IsInUse Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsUse != nullptr)
		*IsUse = Parms.IsUse;
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetPlayerStatusRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHCMeasurer_C::GetPlayerStatusRef(class AActor* Player, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "GetPlayerStatusRef");

	Params::BP_DHCMeasurer_C_GetPlayerStatusRef Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCPlayerNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   PlayerNum                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHCMeasurer_C::GetDHCPlayerNum(int32* PlayerNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "GetDHCPlayerNum");

	Params::BP_DHCMeasurer_C_GetDHCPlayerNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerNum != nullptr)
		*PlayerNum = Parms.PlayerNum;
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCPlayerInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                     PlayerState                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_Name                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// float                                   TotalDamage                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DamagePerSec                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHCMeasurer_C::GetDHCPlayerInfo(int32 Param_Index, class APlayerState** PlayerState, class FString* Param_Name, float* TotalDamage, float* DamagePerSec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "GetDHCPlayerInfo");

	Params::BP_DHCMeasurer_C_GetDHCPlayerInfo Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerState != nullptr)
		*PlayerState = Parms.PlayerState;

	if (Param_Name != nullptr)
		*Param_Name = std::move(Parms.Param_Name);

	if (TotalDamage != nullptr)
		*TotalDamage = Parms.TotalDamage;

	if (DamagePerSec != nullptr)
		*DamagePerSec = Parms.DamagePerSec;
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetDHCRemainTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   LeftTimeSec                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DHCMeasurer_C::GetDHCRemainTime(float* LeftTimeSec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "GetDHCRemainTime");

	Params::BP_DHCMeasurer_C_GetDHCRemainTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LeftTimeSec != nullptr)
		*LeftTimeSec = Parms.LeftTimeSec;
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_DHCStatus
// (BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::OnRep_DHCStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "OnRep_DHCStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetCurrentPartyId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           PartyId                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ABP_DHCMeasurer_C::GetCurrentPartyId(class FString* PartyId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "GetCurrentPartyId");

	Params::BP_DHCMeasurer_C_GetCurrentPartyId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PartyId != nullptr)
		*PartyId = std::move(Parms.PartyId);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.RequestBGM
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::RequestBGM()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "RequestBGM");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.ResetLocalPlayerStatusForEnter
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::ResetLocalPlayerStatusForEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "ResetLocalPlayerStatusForEnter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_ExitIntervalDate
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::OnRep_ExitIntervalDate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "OnRep_ExitIntervalDate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.OnRep_MesuringStartDate
// (BlueprintCallable, BlueprintEvent)

void ABP_DHCMeasurer_C::OnRep_MesuringStartDate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "OnRep_MesuringStartDate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     InPlayerState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_DHCMeasurer_C::GetScore(class APlayerState* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "GetScore");

	Params::BP_DHCMeasurer_C_GetScore Parms{};

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_DHCMeasurer.BP_DHCMeasurer_C.GetIsSoloPlay
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_DHCMeasurer_C::GetIsSoloPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DHCMeasurer_C", "GetIsSoloPlay");

	Params::BP_DHCMeasurer_C_GetIsSoloPlay Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

