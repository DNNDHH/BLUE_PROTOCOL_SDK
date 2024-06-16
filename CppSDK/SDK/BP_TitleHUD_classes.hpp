#pragma once

 

// Package: BP_TitleHUD

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TitleHUD.BP_TitleHUD_C
// 0x0060 (0x0380 - 0x0320)
class ABP_TitleHUD_C final : public ASBTitleHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTitleMenu_C*                           HUD;                                               // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULaunchScreen_C*                        LaunchScreen;                                      // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bSoundAssetLoaded;                                 // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6189[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_TermsOfService_C*                  TermsOfService;                                    // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TermsOfServiceIndex;                               // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_618A[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBTermsOfUseInfo>              Terms_Of_Use_List;                                 // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UStartup_C*                             LogoWidget;                                        // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 SBTitleMenuCharaLayer;                             // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessage_C*                       NotifyMessage;                                     // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_TitleHUD(int32 EntryPoint);
	void ReceiveDestroyed();
	void LoadCharaLayer();
	void LogoFinish();
	void OnTermsOfRead(int32 RetCode);
	void OnTermsOfUse(const TArray<struct FSBTermsOfUseInfo>& TermsOfUseList);
	void TryCreateTermsOfService();
	void CustomEvent_0(bool Approval);
	void StartTermsOfService();
	void ExecNetworkCafe_Event();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void OnLoginCompleted_Event_0();
	void LoginMenu();
	void OnFinish_Event_0();
	void StartLogo();
	void StartTitle();
	void ReceiveBeginPlay();
	void OnSoundAssetLoaded();
	void WaitAssetLoad();
	void BeginWaitAssetLoad();
	void AddNetworkCafeLoginTimeNotificationMessage(const int32 NetworkCafeTotalTimePlayedToday, const bool bIsLoginTimeOnly);
	void AddTutorialHelpMessage(const class FName InTutorialHelpId);
	void AddRecipeMessage(const ESBRecipeType RecipeType, const int32 RecepiId);
	void AddRankingRewardNotifyMessage();
	void AddMailAcceptLimitNotifyMessage();
	void AddLoginBonusNotifyMessage(const class FText& InMessage);
	void AddLine2NotifyMessage(const class FText& InMainMessage, const class FText& InSubMessage);
	void AddLine1NotifyMessage(const class FText& InMessage);
	void AddLine1LNotifyMessage(const class FText& InMessage);
	void AddItemExpiryNotifyMessage(int32 InItemID);
	void AddAwakeInterruptQuestMessage(const class FName& InQuestId);
	void AddAutoDeliveryQuestCompleteMessage(const ESBSeasonPassQuestCycleType InCycle, const class FString& QuestName);
	void AddAdventurerRankUpdateCompleteMessage(const ESBPlayerPassiveImagineSlotType Slot);
	void AddAdventurerRankupCompleteMessage();
	void AddAchievementGainedMessage(const int32 InAchievementId);
	void OnLoaded_B892930043DB34F90488159C5989E221(TSubclassOf<class UObject> Loaded);
	void Get_Terms_Of_Service(int32 IndexPin, bool* Create, struct FSBTermsOfUseInfo* Output);
	void GetTermsOfUseIds(TArray<int32>* IDs);
	void DeleteHUD();
	void DeleteNotifyMessage();
	void CreateNotifyMessage();
	void CreateHUD();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TitleHUD_C">();
	}
	static class ABP_TitleHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_TitleHUD_C>();
	}
};
static_assert(alignof(ABP_TitleHUD_C) == 0x000008, "Wrong alignment on ABP_TitleHUD_C");
static_assert(sizeof(ABP_TitleHUD_C) == 0x000380, "Wrong size on ABP_TitleHUD_C");
static_assert(offsetof(ABP_TitleHUD_C, UberGraphFrame) == 0x000320, "Member 'ABP_TitleHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_TitleHUD_C, DefaultSceneRoot) == 0x000328, "Member 'ABP_TitleHUD_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_TitleHUD_C, HUD) == 0x000330, "Member 'ABP_TitleHUD_C::HUD' has a wrong offset!");
static_assert(offsetof(ABP_TitleHUD_C, LaunchScreen) == 0x000338, "Member 'ABP_TitleHUD_C::LaunchScreen' has a wrong offset!");
static_assert(offsetof(ABP_TitleHUD_C, bSoundAssetLoaded) == 0x000340, "Member 'ABP_TitleHUD_C::bSoundAssetLoaded' has a wrong offset!");
static_assert(offsetof(ABP_TitleHUD_C, TermsOfService) == 0x000348, "Member 'ABP_TitleHUD_C::TermsOfService' has a wrong offset!");
static_assert(offsetof(ABP_TitleHUD_C, TermsOfServiceIndex) == 0x000350, "Member 'ABP_TitleHUD_C::TermsOfServiceIndex' has a wrong offset!");
static_assert(offsetof(ABP_TitleHUD_C, Terms_Of_Use_List) == 0x000358, "Member 'ABP_TitleHUD_C::Terms_Of_Use_List' has a wrong offset!");
static_assert(offsetof(ABP_TitleHUD_C, LogoWidget) == 0x000368, "Member 'ABP_TitleHUD_C::LogoWidget' has a wrong offset!");
static_assert(offsetof(ABP_TitleHUD_C, SBTitleMenuCharaLayer) == 0x000370, "Member 'ABP_TitleHUD_C::SBTitleMenuCharaLayer' has a wrong offset!");
static_assert(offsetof(ABP_TitleHUD_C, NotifyMessage) == 0x000378, "Member 'ABP_TitleHUD_C::NotifyMessage' has a wrong offset!");

}

