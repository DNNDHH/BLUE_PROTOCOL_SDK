#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_DHCMeasurer.BP_DHCMeasurer_C
	 * Size -> 0x00D8 (FullSize[0x0300] - InheritedSize[0x0228])
	 */
	class ABP_DHCMeasurer_C : public ASBDhcMeasurer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard;                                               // 0x0230(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FDateTime                                           MesuringStartDate;                                       // 0x0238(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash
		struct FDateTime                                           ExitIntervalDate;                                        // 0x0240(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash
		struct FTimespan                                           DateAdjustTimespan;                                      // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      StartInterval;                                           // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MesuringTime;                                            // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DHC_ManagePortal_C*                              InPortal_Manager;                                        // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Mokujin_C*                                       TargetMokujinActor;                                      // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_DHC_OutPortal_C*                                 OutPortal;                                               // 0x0268(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BurstCount;                                              // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsLocalJoined;                                           // 0x0274(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V6TS[0x3];                                   // 0x0275(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_InteractionWarpGoal_C*                           InWarpGoal;                                              // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASBBattleArea*                                       BattleArea;                                              // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AfterTimeSeconds;                                        // 0x0288(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _10Count;                                                // 0x028C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSoloPlay;                                              // 0x028D(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EN_DHCStatus                                               DHCStatus;                                               // 0x028E(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_50NJ[0x1];                                   // 0x028F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        Message;                                                 // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class APlayerController*>                           PlayMembers;                                             // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TArray<struct FST_DHCStatus>                               PartyPlayerList;                                         // 0x02B0(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance
		class FScriptMulticastDelegate                             DHC_StateChanged;                                        // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DHC_LocalPlayerJoined;                                   // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DHC_LocalPlayerQuit;                                     // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              InTimeZone;                                              // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		bool GetIsSoloPlay();
		float GetScore(class APlayerState* InPlayerState);
		void OnRep_MesuringStartDate();
		void OnRep_ExitIntervalDate();
		void ResetLocalPlayerStatusForEnter();
		void RequestBGM();
		void GetCurrentPartyId(class FString* PartyId);
		void OnRep_DHCStatus();
		void GetDHCRemainTime(float* LeftTimeSec);
		void GetDHCPlayerInfo(int32_t Index, class APlayerState** PlayerState, class FString* Name, float* TotalDamage, float* DamagePerSec);
		void GetDHCPlayerNum(int32_t* PlayerNum);
		void GetPlayerStatusRef(class AActor* Player, int32_t* Index);
		void IsInUse(bool* IsUse);
		void RegisterPlayers(class AController* UserController, bool* Initialized);
		void TimeOutWarp();
		void DHCInitalize();
		void CheckStart();
		void CE_InWarp(class ASBPlayerCharacter* OtherActor);
		void CE_BurstCount(ESBAttribute ElementType);
		void Init();
		void CE_OutWarp(class AActor* OtherActor, const struct FRotator& ViewRotation);
		void AddDamage(class AActor* CuaseCharacter, float Damage);
		void AddDamageEnemy(class ASBEnemyCharacter* DamagedActor, float Damage, const struct FSBDamageEvent& DamageEvent, class AController* InstigatedBy, class AActor* DamageCauser);
		void ReceiveTick(float DeltaSeconds);
		void InitPartyPlayerList();
		void ShowMessage(EN_DHCMessage Type);
		void DHCClientInit(TArray<class APlayerController*> RegisterPlayers);
		void DHCClientExit(TArray<class APlayerController*> ExitMembers);
		void InittedHUD();
		void SetMokujinInvincible(bool Invincible);
		void SetCurrentMesurerForPlayer(class APawn* PlayerCharacter, bool Clear);
		void LocalWarpIntoMeasurer();
		void ExecuteUbergraph_BP_DHCMeasurer(int32_t EntryPoint);
		void DHC_LocalPlayerQuit__DelegateSignature();
		void DHC_LocalPlayerJoined__DelegateSignature();
		void DHC_StateChanged__DelegateSignature(EN_DHCStatus DHCState, bool LocalPlayerJoined);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
