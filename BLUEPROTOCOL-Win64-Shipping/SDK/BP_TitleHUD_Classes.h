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
	 * BlueprintGeneratedClass BP_TitleHUD.BP_TitleHUD_C
	 * Size -> 0x0060 (FullSize[0x0380] - InheritedSize[0x0320])
	 */
	class ABP_TitleHUD_C : public ASBTitleHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTitleMenu_C*                                        HUD;                                                     // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULaunchScreen_C*                                     LaunchScreen;                                            // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bSoundAssetLoaded;                                       // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QJ1K[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWBP_TermsOfService_C*                               TermsOfService;                                          // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TermsOfServiceIndex;                                     // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BL34[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBTermsOfUseInfo>                           TermsOfUseList;                                          // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UStartup_C*                                          LogoWidget;                                              // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              SBTitleMenuCharaLayer;                                   // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNotifyMessage_C*                                    NotifyMessage;                                           // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CreateHUD();
		void CreateNotifyMessage();
		void DeleteNotifyMessage();
		void DeleteHUD();
		void GetTermsOfUseIds(TArray<int32_t>* IDs);
		void GetTermsOfService(int32_t IndexPin, bool* Create, struct FSBTermsOfUseInfo* Output);
		void OnLoaded_B892930043DB34F90488159C5989E221(class UClass* Loaded);
		void AddAchievementGainedMessage(int32_t InAchievementId);
		void AddAdventurerRankupCompleteMessage();
		void AddAdventurerRankUpdateCompleteMessage(ESBPlayerPassiveImagineSlotType Slot);
		void AddAutoDeliveryQuestCompleteMessage(ESBSeasonPassQuestCycleType InCycle, const class FString& QuestName);
		void AddAwakeInterruptQuestMessage(const class FName& InQuestId);
		void AddItemExpiryNotifyMessage(int32_t InItemID);
		void AddLine1LNotifyMessage(const class FText& InMessage);
		void AddLine1NotifyMessage(const class FText& InMessage);
		void AddLine2NotifyMessage(const class FText& InMainMessage, const class FText& InSubMessage);
		void AddLoginBonusNotifyMessage(const class FText& InMessage);
		void AddMailAcceptLimitNotifyMessage();
		void AddRankingRewardNotifyMessage();
		void AddRecipeMessage(ESBRecipeType RecipeType, int32_t RecepiId);
		void AddTutorialHelpMessage(const class FName& InTutorialHelpId);
		void AddNetworkCafeLoginTimeNotificationMessage(int32_t NetworkCafeTotalTimePlayedToday, bool bIsLoginTimeOnly);
		void BeginWaitAssetLoad();
		void WaitAssetLoad();
		void OnSoundAssetLoaded();
		void ReceiveBeginPlay();
		void StartTitle();
		void StartLogo();
		void OnFinish_Event_1();
		void LoginMenu();
		void OnLoginCompleted_Event_1();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecNetworkCafe_Event();
		void StartTermsOfService();
		void CustomEvent_1(bool Approval);
		void TryCreateTermsOfService();
		void OnTermsOfUse(TArray<struct FSBTermsOfUseInfo> TermsOfUseList);
		void OnTermsOfRead(int32_t RetCode);
		void LogoFinish();
		void LoadCharaLayer();
		void ReceiveDestroyed();
		void ExecuteUbergraph_BP_TitleHUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
