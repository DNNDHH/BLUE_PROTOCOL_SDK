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
	 * BlueprintGeneratedClass BP_PlayerUIComponent.BP_PlayerUIComponent_C
	 * Size -> 0x004C (FullSize[0x025C] - InheritedSize[0x0210])
	 */
	class UBP_PlayerUIComponent_C : public USBPlayerUIComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0210(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnCastSkill;                                             // 0x0218(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USchedulerDateTimeHud_C*                             SchedulerDateTimeHud;                                    // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UJankenWindow_C*                                     JankenWindow;                                            // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UResultMenuBase_C*                                   Result;                                                  // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSetupResult;                                           // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSetupFailed;                                           // 0x0241(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSetMenuMode;                                           // 0x0242(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ICPH[0x5];                                   // 0x0243(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ResultType;                                              // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    RET_CODE_MISSION_ALREADY_GET_REWARD;                     // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EndGameOver();
		void EndGameClear();
		void ResetSlientBaloon();
		void OnRequestAutoLikeSend();
		void SetSlientBaloon();
		void ResetMenuMode();
		void SetMenuMode();
		void DeleteResult();
		void OnSkipDungeonClear();
		void OnComplateDungeonFailed();
		void OnComplateDungeonClear();
		void OnRequestDungeonFailed(ESBGameOver InGameOverType);
		void OnRequestDungeonClear();
		void ResetResult();
		void SetupFailed(bool* Result);
		void SetupResult(bool* Result);
		void UpdateResult();
		void UnbindResult();
		void BindResult();
		void GetDungeonComponent(class USBPlayerDungeonComponent** DungeonComponent);
		void Terminate();
		void Initialize();
		void OnLoaded_2BEC9CDC4CE8DF1CFAD672AE4B151726(class UClass* Loaded);
		void OnLoaded_726AEB824AC88A5C1621D2A6B4CD6F67(class UClass* Loaded);
		void OnLoaded_DBC22C7F4DC42FCC28D569B7193A74EF(class UClass* Loaded);
		void OnLoaded_E0603C6B44161052AF941591848D438A(class UClass* Loaded);
		void OnLoaded_698586454896DB641C19D693D96ED60D(class UClass* Loaded);
		void OnLoaded_069377654D13A7187F0A43AE1026CAF8(class UClass* Loaded);
		void OnLoaded_7D1867C2409FD80E3A58C39FDD75F797(class UClass* Loaded);
		void OnLoaded_A4F536AA42247A2D509B259D1F1A6D2A(class UClass* Loaded);
		void OnLoaded_1BC6453D43889E654F51A3A00EE84C6F(class UClass* Loaded);
		void OnLoaded_23C7A54141864CEF5FF5F089CA9C231E(class UClass* Loaded);
		void OnLoaded_2959E7A6448E4A19F01A719E578C8E3D(class UClass* Loaded);
		void OnLoaded_6C711DCE45199B782A855D82C81016A7(class UClass* Loaded);
		void OnLoaded_693A7C1845F6EAE19463A184C6C44674(class UClass* Loaded);
		void OnLoaded_0AB9338748E6F335CE49BA903CAD7296(class UClass* Loaded);
		void OnDungeonClearDelegate(int32_t RetCode);
		void BindEventDungeonClear();
		void UnbindEventDungeonClear();
		void BindEventResultEnd(class UResultMenuBase_C* Target);
		void UnbindEventResultEnd(class UResultMenuBase_C* Target);
		void OnResultEnd();
		void BindAutoLikeSend();
		void OnAutoLikeSendDelegate(int32_t RetCode);
		void UnbindAutoLikeSend();
		void BindEventDungeonFailed();
		void UnbindEventDungeonFailed();
		void OnDungeonFailedDelegate(int32_t RetCode, ESBGameOver InGameOverType);
		void CustomEvent_1();
		void BindOnTimeOver();
		void UnbindOnTimeOver();
		void BindOnGameOver();
		void UnbindOnGameOver();
		void BindOnRequestEndResultMenu();
		void UnbindOnRequestEndResultMenu();
		void CustomEvent();
		void CreateResult();
		void CreateFailed();
		void AutoDeliveryQuestDelegate();
		void AchievementedAutoDeliveryQuestDelegete(ESBSeasonPassQuestCycleType CycleType, const class FString& QuestID);
		void DebugPlayGashaDemo(const struct FSBGashaResultData& InResultData, bool bInSkip);
		void DebugPlayGashaSpecialCut(ESBRarity InDemoRarity, ESBRarity InActualRarity);
		void NotifyCastSkill(ESkillActionPosition InSkillPosition);
		void InitInterruptQuestDelegate();
		void CustomEvent_2(const class FName& InQuestId);
		void OnLeaveInterruptQuestDelegete_Event_1(const class FName& InQuestId);
		void ReceiveBeginPlay();
		void BP_ShowSerialKillMessage(int32_t InKillCount);
		void BP_ShowKillMessage(class AActor* InOtherActor);
		void BP_ShowKillMark();
		void BP_ShowCombo(int32_t InComboNum);
		void BP_ShowRespawn(float RespawnTime);
		void BP_DisableRespawn();
		void BP_ShowRespawnBattleArea();
		void BP_ShowJankenWindow();
		void OnClose_Event_1();
		void BP_EscapeConfirmation();
		void OnSelect(EDialogResult Result);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ReceiveTick(float DeltaSeconds);
		void BP_UpdateRespawnGauge();
		void ExecuteUbergraph_BP_PlayerUIComponent(int32_t EntryPoint);
		void OnCastSkill__DelegateSignature(ESkillActionPosition InSkillPosition);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
