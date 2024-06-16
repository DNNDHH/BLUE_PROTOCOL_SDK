#pragma once

 

// Package: BP_PlayerUIComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerUIComponent.BP_PlayerUIComponent_C
// 0x0050 (0x0260 - 0x0210)
class UBP_PlayerUIComponent_C final : public USBPlayerUIComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_             OnCastSkill;                                       // 0x0218(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USchedulerDateTimeHud_C*                SchedulerDateTimeHud;                              // 0x0228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJankenWindow_C*                        JankenWindow;                                      // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UResultMenuBase_C*                      Result;                                            // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSetupResult;                                     // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSetupFailed;                                     // 0x0241(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSetMenuMode;                                     // 0x0242(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9D1B[0x5];                                     // 0x0243(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ResultType;                                        // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         RET_CODE_MISSION_ALREADY_GET_REWARD;               // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCastSkill__DelegateSignature(ESkillActionPosition InSkillPosition);
	void ExecuteUbergraph_BP_PlayerUIComponent(int32 EntryPoint);
	void BP_UpdateRespawnGauge();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnSelect(EDialogResult Param_Result);
	void BP_EscapeConfirmation();
	void OnClose_Event_0();
	void BP_ShowJankenWindow();
	void BP_ShowRespawnBattleArea();
	void BP_DisableRespawn();
	void BP_ShowRespawn(const float RespawnTime);
	void BP_ShowCombo(const int32 InComboNum);
	void BP_ShowKillMark();
	void BP_ShowKillMessage(const class AActor* InOtherActor);
	void BP_ShowSerialKillMessage(const int32 InKillCount);
	void ReceiveBeginPlay();
	void OnLeaveInterruptQuestDelegete_Event_0(const class FName& InQuestId);
	void CustomEvent_1(const class FName& InQuestId);
	void InitInterruptQuestDelegate();
	void NotifyCastSkill(ESkillActionPosition InSkillPosition);
	void DebugPlayGashaSpecialCut(const ESBRarity InDemoRarity, const ESBRarity InActualRarity);
	void DebugPlayGashaDemo(const struct FSBGashaResultData& InResultData, const bool bInSkip);
	void AchievementedAutoDeliveryQuestDelegete(const ESBSeasonPassQuestCycleType CycleType, const class FString& QuestID);
	void AutoDeliveryQuestDelegate();
	void CreateFailed();
	void CreateResult();
	void CustomEvent();
	void UnbindOnRequestEndResultMenu();
	void BindOnRequestEndResultMenu();
	void UnbindOnGameOver();
	void BindOnGameOver();
	void UnbindOnTimeOver();
	void BindOnTimeOver();
	void CustomEvent_0();
	void OnDungeonFailedDelegate(const int32 RetCode, const ESBGameOver InGameOverType);
	void UnbindEventDungeonFailed();
	void BindEventDungeonFailed();
	void UnbindAutoLikeSend();
	void OnAutoLikeSendDelegate(const int32 RetCode);
	void BindAutoLikeSend();
	void OnResultEnd();
	void UnbindEventResultEnd(class UResultMenuBase_C* Target);
	void BindEventResultEnd(class UResultMenuBase_C* Target);
	void UnbindEventDungeonClear();
	void BindEventDungeonClear();
	void OnDungeonClearDelegate(const int32 RetCode);
	void OnLoaded_0AB9338748E6F335CE49BA903CAD7296(TSubclassOf<class UObject> Loaded);
	void OnLoaded_693A7C1845F6EAE19463A184C6C44674(TSubclassOf<class UObject> Loaded);
	void OnLoaded_2959E7A6448E4A19F01A719E578C8E3D(TSubclassOf<class UObject> Loaded);
	void OnLoaded_23C7A54141864CEF5FF5F089CA9C231E(TSubclassOf<class UObject> Loaded);
	void OnLoaded_1BC6453D43889E654F51A3A00EE84C6F(TSubclassOf<class UObject> Loaded);
	void OnLoaded_A4F536AA42247A2D509B259D1F1A6D2A(TSubclassOf<class UObject> Loaded);
	void OnLoaded_7D1867C2409FD80E3A58C39FDD75F797(TSubclassOf<class UObject> Loaded);
	void OnLoaded_069377654D13A7187F0A43AE1026CAF8(TSubclassOf<class UObject> Loaded);
	void OnLoaded_698586454896DB641C19D693D96ED60D(TSubclassOf<class UObject> Loaded);
	void OnLoaded_E0603C6B44161052AF941591848D438A(TSubclassOf<class UObject> Loaded);
	void OnLoaded_DBC22C7F4DC42FCC28D569B7193A74EF(TSubclassOf<class UObject> Loaded);
	void OnLoaded_726AEB824AC88A5C1621D2A6B4CD6F67(TSubclassOf<class UObject> Loaded);
	void OnLoaded_2BEC9CDC4CE8DF1CFAD672AE4B151726(TSubclassOf<class UObject> Loaded);
	void Initialize();
	void Terminate();
	void GetDungeonComponent(class USBPlayerDungeonComponent** DungeonComponent);
	void BindResult();
	void UnbindResult();
	void UpdateResult();
	void SetupResult(bool* Param_Result);
	void SetupFailed(bool* Param_Result);
	void ResetResult();
	void OnRequestDungeonClear();
	void OnRequestDungeonFailed(const ESBGameOver& InGameOverType);
	void OnComplateDungeonClear();
	void OnComplateDungeonFailed();
	void OnSkipDungeonClear();
	void DeleteResult();
	void SetMenuMode();
	void ResetMenuMode();
	void SetSlientBaloon();
	void OnRequestAutoLikeSend();
	void ResetSlientBaloon();
	void EndGameClear();
	void EndGameOver();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerUIComponent_C">();
	}
	static class UBP_PlayerUIComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerUIComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerUIComponent_C) == 0x000010, "Wrong alignment on UBP_PlayerUIComponent_C");
static_assert(sizeof(UBP_PlayerUIComponent_C) == 0x000260, "Wrong size on UBP_PlayerUIComponent_C");
static_assert(offsetof(UBP_PlayerUIComponent_C, UberGraphFrame) == 0x000210, "Member 'UBP_PlayerUIComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_PlayerUIComponent_C, OnCastSkill) == 0x000218, "Member 'UBP_PlayerUIComponent_C::OnCastSkill' has a wrong offset!");
static_assert(offsetof(UBP_PlayerUIComponent_C, SchedulerDateTimeHud) == 0x000228, "Member 'UBP_PlayerUIComponent_C::SchedulerDateTimeHud' has a wrong offset!");
static_assert(offsetof(UBP_PlayerUIComponent_C, JankenWindow) == 0x000230, "Member 'UBP_PlayerUIComponent_C::JankenWindow' has a wrong offset!");
static_assert(offsetof(UBP_PlayerUIComponent_C, Result) == 0x000238, "Member 'UBP_PlayerUIComponent_C::Result' has a wrong offset!");
static_assert(offsetof(UBP_PlayerUIComponent_C, IsSetupResult) == 0x000240, "Member 'UBP_PlayerUIComponent_C::IsSetupResult' has a wrong offset!");
static_assert(offsetof(UBP_PlayerUIComponent_C, IsSetupFailed) == 0x000241, "Member 'UBP_PlayerUIComponent_C::IsSetupFailed' has a wrong offset!");
static_assert(offsetof(UBP_PlayerUIComponent_C, IsSetMenuMode) == 0x000242, "Member 'UBP_PlayerUIComponent_C::IsSetMenuMode' has a wrong offset!");
static_assert(offsetof(UBP_PlayerUIComponent_C, ResultType) == 0x000248, "Member 'UBP_PlayerUIComponent_C::ResultType' has a wrong offset!");
static_assert(offsetof(UBP_PlayerUIComponent_C, RET_CODE_MISSION_ALREADY_GET_REWARD) == 0x000258, "Member 'UBP_PlayerUIComponent_C::RET_CODE_MISSION_ALREADY_GET_REWARD' has a wrong offset!");

}

