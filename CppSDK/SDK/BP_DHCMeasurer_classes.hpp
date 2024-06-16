#pragma once

 

// Package: BP_DHCMeasurer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ST_DHCStatus_structs.hpp"
#include "EN_DHCMessage_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EN_DHCStatus_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DHCMeasurer.BP_DHCMeasurer_C
// 0x00D8 (0x0300 - 0x0228)
class ABP_DHCMeasurer_C final : public ASBDhcMeasurer
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              MesuringStartDate;                                 // 0x0238(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              ExitIntervalDate;                                  // 0x0240(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              DateAdjustTimespan;                                // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         StartInterval;                                     // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MesuringTime;                                      // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DHC_ManagePortal_C*                 InPortal_Manager;                                  // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Mokujin_C*                          TargetMokujinActor;                                // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DHC_OutPortal_C*                    OutPortal;                                         // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BurstCount;                                        // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLocalJoined;                                     // 0x0274(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_559C[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_InteractionWarpGoal_C*              InWarpGoal;                                        // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBBattleArea*                          BattleArea;                                        // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AfterTimeSeconds;                                  // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          One0Count;                                         // 0x028C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSoloPlay;                                        // 0x028D(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EN_DHCStatus                                  DHCStatus;                                         // 0x028E(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_559D[0x1];                                     // 0x028F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           Message;                                           // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class APlayerController*>              PlayMembers;                                       // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FST_DHCStatus>                  PartyPlayerList;                                   // 0x02B0(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             DHC_StateChanged;                                  // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             DHC_LocalPlayerJoined;                             // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             DHC_LocalPlayerQuit;                               // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 In_Time_Zone;                                      // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void DHC_StateChanged__DelegateSignature(EN_DHCStatus DHCState, bool LocalPlayerJoined);
	void DHC_LocalPlayerJoined__DelegateSignature();
	void DHC_LocalPlayerQuit__DelegateSignature();
	void ExecuteUbergraph_BP_DHCMeasurer(int32 EntryPoint);
	void LocalWarpIntoMeasurer();
	void SetCurrentMesurerForPlayer(class APawn* PlayerCharacter, bool Clear);
	void SetMokujinInvincible(bool Invincible);
	void InittedHUD();
	void DHCClientExit(const TArray<class APlayerController*>& ExitMembers);
	void DHCClientInit(const TArray<class APlayerController*>& Param_RegisterPlayers);
	void ShowMessage(EN_DHCMessage Type);
	void InitPartyPlayerList();
	void ReceiveTick(float DeltaSeconds);
	void AddDamageEnemy(class ASBEnemyCharacter* DamagedActor, float Damage, const struct FSBDamageEvent& DamageEvent, class AController* InstigatedBy, class AActor* DamageCauser);
	void AddDamage(class AActor* CuaseCharacter, float Damage);
	void CE_OutWarp(class AActor* Other_Actor, const struct FRotator& View_Rotation);
	void Init();
	void CE_BurstCount(ESBAttribute ElementType);
	void CE_InWarp(class ASBPlayerCharacter* Other_Actor);
	void CheckStart();
	void DHCInitalize();
	void TimeOutWarp();
	void RegisterPlayers(class AController* UserController, bool* Initialized);
	void IsInUse(bool* IsUse);
	void GetPlayerStatusRef(class AActor* Player, int32* Param_Index);
	void GetDHCPlayerNum(int32* PlayerNum);
	void GetDHCPlayerInfo(int32 Param_Index, class APlayerState** PlayerState, class FString* Param_Name, float* TotalDamage, float* DamagePerSec);
	void GetDHCRemainTime(float* LeftTimeSec);
	void OnRep_DHCStatus();
	void GetCurrentPartyId(class FString* PartyId);
	void RequestBGM();
	void ResetLocalPlayerStatusForEnter();
	void OnRep_ExitIntervalDate();
	void OnRep_MesuringStartDate();
	float GetScore(class APlayerState* InPlayerState);
	bool GetIsSoloPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DHCMeasurer_C">();
	}
	static class ABP_DHCMeasurer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DHCMeasurer_C>();
	}
};
static_assert(alignof(ABP_DHCMeasurer_C) == 0x000008, "Wrong alignment on ABP_DHCMeasurer_C");
static_assert(sizeof(ABP_DHCMeasurer_C) == 0x000300, "Wrong size on ABP_DHCMeasurer_C");
static_assert(offsetof(ABP_DHCMeasurer_C, UberGraphFrame) == 0x000228, "Member 'ABP_DHCMeasurer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, Billboard) == 0x000230, "Member 'ABP_DHCMeasurer_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, MesuringStartDate) == 0x000238, "Member 'ABP_DHCMeasurer_C::MesuringStartDate' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, ExitIntervalDate) == 0x000240, "Member 'ABP_DHCMeasurer_C::ExitIntervalDate' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, DateAdjustTimespan) == 0x000248, "Member 'ABP_DHCMeasurer_C::DateAdjustTimespan' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, StartInterval) == 0x000250, "Member 'ABP_DHCMeasurer_C::StartInterval' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, MesuringTime) == 0x000254, "Member 'ABP_DHCMeasurer_C::MesuringTime' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, InPortal_Manager) == 0x000258, "Member 'ABP_DHCMeasurer_C::InPortal_Manager' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, TargetMokujinActor) == 0x000260, "Member 'ABP_DHCMeasurer_C::TargetMokujinActor' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, OutPortal) == 0x000268, "Member 'ABP_DHCMeasurer_C::OutPortal' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, BurstCount) == 0x000270, "Member 'ABP_DHCMeasurer_C::BurstCount' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, IsLocalJoined) == 0x000274, "Member 'ABP_DHCMeasurer_C::IsLocalJoined' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, InWarpGoal) == 0x000278, "Member 'ABP_DHCMeasurer_C::InWarpGoal' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, BattleArea) == 0x000280, "Member 'ABP_DHCMeasurer_C::BattleArea' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, AfterTimeSeconds) == 0x000288, "Member 'ABP_DHCMeasurer_C::AfterTimeSeconds' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, One0Count) == 0x00028C, "Member 'ABP_DHCMeasurer_C::One0Count' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, IsSoloPlay) == 0x00028D, "Member 'ABP_DHCMeasurer_C::IsSoloPlay' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, DHCStatus) == 0x00028E, "Member 'ABP_DHCMeasurer_C::DHCStatus' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, Message) == 0x000290, "Member 'ABP_DHCMeasurer_C::Message' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, PlayMembers) == 0x0002A0, "Member 'ABP_DHCMeasurer_C::PlayMembers' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, PartyPlayerList) == 0x0002B0, "Member 'ABP_DHCMeasurer_C::PartyPlayerList' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, DHC_StateChanged) == 0x0002C0, "Member 'ABP_DHCMeasurer_C::DHC_StateChanged' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, DHC_LocalPlayerJoined) == 0x0002D0, "Member 'ABP_DHCMeasurer_C::DHC_LocalPlayerJoined' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, DHC_LocalPlayerQuit) == 0x0002E0, "Member 'ABP_DHCMeasurer_C::DHC_LocalPlayerQuit' has a wrong offset!");
static_assert(offsetof(ABP_DHCMeasurer_C, In_Time_Zone) == 0x0002F0, "Member 'ABP_DHCMeasurer_C::In_Time_Zone' has a wrong offset!");

}

