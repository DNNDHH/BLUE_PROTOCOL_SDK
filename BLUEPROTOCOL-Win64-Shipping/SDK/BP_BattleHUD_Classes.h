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
	 * BlueprintGeneratedClass BP_BattleHUD.BP_BattleHUD_C
	 * Size -> 0x00C0 (FullSize[0x03F0] - InheritedSize[0x0330])
	 */
	class ABP_BattleHUD_C : public ASBBattleHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBattleInfoHUD_C*                                    BattleInfoHUD;                                           // 0x0340(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UNotifyMessage_C*                                    NotifyMessage;                                           // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULayoutableHUD_C*                                    LayoutableHUD;                                           // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUMG_Notifications_C*                                Notifications;                                           // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextWindowDemo_C*                                   TextWindowDemo;                                          // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextWindow_C*                                       TextWindow;                                              // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextWindowSkit_C*                                   TextWindowSkit;                                          // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChatHUD_C*                                          ChatHUD;                                                 // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UOpenCommandMenu_C*                                  OpenCommandMenu;                                         // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_ShortPinView_C*                                 ShortPinHUD;                                             // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDedicatedClassHUD_C*                                ClassHUD;                                                // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChatUnreadNotify_C*                                 ChatUnreadNotify;                                        // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMailLimitIndicator_C*                               MailLimitIndicator;                                      // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UKeyGuideHUD_C*                                      KeyGuideHUD;                                             // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBBattleContentsHUD*                                SBBattleContentsHUD;                                     // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTelopManager_C*                                     TelopManager;                                            // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LayoutEditMode;                                          // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HJF5[0x3];                                   // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AutoReset;                                               // 0x03C4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                JoinInterreputQuestTutorialHelpId;                       // 0x03CC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FUUI[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URmShopMenu_C*                                       RMShop;                                                  // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCloseRmShop;                                           // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void IsEditMap(float PressTime, bool* Result);
		void IsOtherPCListMenuVisible(bool* Visible);
		void IsChatWindowActive(bool* Active);
		void GetPlaceGuideWidget(class UPlaceGuide_C** PlaceGuideWidget);
		void OnJoinInterreputQuestDelegete(class USBPlayerInterruptQuestComponent* InComponent, bool bInFirst);
		void UnbindOnJoinInterruptQuest();
		void BindOnJoinInterruptQuest();
		void Unbind();
		void Bind();
		void DeleteTelopManager();
		void CreateTelopManager();
		void DeleteChatUnreadNotify();
		void CreateChatUnreadNotify();
		void DeleteStatusAlimentNotifyWidgetOwner();
		void CreateStatusAlimentNotifyWidgetOwner();
		void DeleteOpenCommandMenu();
		void CreateOpenCommandMenu();
		void DeleteMailLimitIndicator();
		void CreateMailLimitIndicator();
		void DeleteTextWindowSkit();
		void CreateTextWindowSkit();
		void DeleteTextWindow();
		void CreateTextWindow();
		void DeleteTextWindowDemo();
		void CreateTextWindowDemo();
		void DeleteNotifications();
		void CreateNotifications();
		void DeleteNotifyMessage();
		void CreateNotifyMessage();
		void DeleteClassHUD();
		void CreateClassHUD();
		void DeleteShortPinHUD();
		void CreateShortPinHUD();
		void DeleteChatHUD();
		void CreateChatHUD();
		void DeleteKeyGuideHUD();
		void CreateKeyGuideHUD();
		void DeleteLayoutHUD();
		void CreateLayoutHUD();
		void UpdateBattleInfoHUD(const struct FSBInteractionInfo& InteractionInfo);
		void DeleteBattleInfoHUD();
		void CreateBattleInfoHUD();
		void DeleteHUD();
		void CreateHUD();
		class USBTelopManager* GetTelopManager();
		class USBBattleContentsHUD* GetBattleContentsHUD();
		class UUserWidget* GetNotifyMessage();
		class UUserWidget* GetChatHUD();
		class USBTextWindowBase* GetTextWindowDemo();
		class USBLayoutableHUD* GetLayoutableHUD();
		bool UnregistClassHud(const class FString& Name);
		class USBTextWindowBase* GetTextWindowSkit();
		void GetRespawnHUD(bool* bValid, class URespawnHUD_C** RespawnHUD);
		class UUserWidget* GetOptionLayoutableHUD();
		void GetHitIndicator(bool* bValid, class UHitIndicator_C** HitIndicator);
		void GetHitFlash(class UHitFlash_C** refHitFlash);
		class USBTextWindow* GetTextWindow();
		void OnQuestUpdateProgress(const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo);
		void IsLayoutEditMode(bool* LayoutEditMode);
		void SetLayoutEditMode(bool EditModeEnabled);
		void DrawWireLocator(int32_t SizeX, int32_t SizeY);
		void OnLoaded_C39F708F49F4F4B3ADAF68B0B1BBE799(class UClass* Loaded);
		void OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB(class UClass* Loaded);
		void OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8(class UClass* Loaded);
		void InitTimerRespawnHUD(ETimerHUDType HUDType);
		void InitDhcBattleHUD(class AActor* Actor);
		void AddLevelUpClass(int32_t Level);
		void AddLevelUpSkill(const class FString& SkillType);
		void AddAdventurerRankupCompleteMessage();
		void CreateEventMenu();
		void OnCloseRmShopMenuEvent();
		void CreateRmShop();
		void BindRmShop(class URmShopMenu_C* InRmShop);
		void UnbindRmShop(class URmShopMenu_C* InRmShop);
		void DeleteRmShop();
		void RequestDirectChat(const class FString& PlayerId, const class FText& Name, const class FString& CharacterId, ESBPrivilegeType PrivilegeType);
		void UpdateMouseCursorIcon();
		void KeyShortcut_Stamp();
		void OnRequestTutorialHelp(bool bCheckUnlock);
		void CallUpdateInteractionNotice(const struct FSBInteractionInfo& InteractionInfo);
		void ShowChatHUD();
		void ForceCloseChatHUD();
		void ShortcutRingClose();
		void ShortcutRingOpen();
		void ShortcutRingSwitch();
		void ItemSelectorMoveRightRepeat();
		void ItemSelectorMoveRightPress();
		void ItemSelectorMoveLeftRepeat();
		void ItemSelectorMoveLeftPress();
		void ItemSelectorExe();
		void NextQuestInfo();
		void SwitchingMap();
		void SetFocusActor(class AActor* Actor);
		void HitIndicatorAddMarker(const struct FVector& HitLocation);
		void OpenCursorModeToOtherPCMenu(class ABP_PlayerCharacter_C* InOtherPC);
		void CallAddMemberDeadNotifyMessage(const class FText& MemberName);
		void OnClickedCloseChatHUD();
		void ChangeKeyGuideUpdate(EKeyGuideType InKeyGuideType);
		void OnSaveCharaConfigUpdate(EKeyGuideType InKeyGuideType);
		void OnShowCombo(int32_t Combo);
		void OnShowRespawn(float InRespawnTime);
		void OnDisableRespawn();
		void OnShowRespawnBattleArea();
		void OnUpdateRespawnGauge();
		void SetEditMode(bool bEditMode);
		void OpenInitSelect();
		void ChangeKeyGuide1_2Visibility();
		void BattleAreaDisableMessage();
		void SetBattleInfoHUDVisible(ESlateVisibility InVisibility);
		void SetKeyGuideTextVisible(ESkillActionPosition InSkillActionPosition, bool InIsVisible);
		void ShortcutRingExecuteF5();
		void ShortcutRingExecuteF6();
		void ShortcutRingExecuteF7();
		void ShortcutRingExecuteF8();
		void ShortcutRingExecuteF9();
		void ShortcutRingExecuteF10();
		void ShortcutRingExecuteF11();
		void ShortcutRingExecuteF12();
		void OnWarehouseAbilityUpdateDelegate__1(TArray<struct FSBWarehouseAbilityNotifyUIInfo> UIInfo);
		void BindWarehouseAbility();
		void UnbindWarehouseAbility();
		void ConstructDebugMenu();
		void DestructDebugMenu();
		void OnChangedDebugValue(ESBDebugMenuType MenuType, const class FName& RowName);
		void TryShowQuestCompleteMessage_Delay(int32_t InQuestIndex, int32_t InStepNo, float DelaySeconds);
		void AddAwakeInterruptQuestMessage(const class FName& InQuestId);
		void AddAchievementGainedMessage(int32_t InAchievementId);
		void AddTutorialHelpMessage(const class FName& InTutorialHelpId);
		void AddAdventurerRankUpdateCompleteMessage(ESBPlayerPassiveImagineSlotType Slot);
		void OnGetMaterial_Core(class UObject* Param);
		void AddAutoDeliveryQuestCompleteMessage(ESBSeasonPassQuestCycleType InCycle, const class FString& QuestName);
		void AddWarehouseAbilityNotifyMessage(TArray<struct FSBWarehouseAbilityNotifyUIInfo> InParam);
		void AddRecipeMessage(ESBRecipeType RecipeType, int32_t RecepiId);
		void AddNetworkCafeLoginTimeNotificationMessage(int32_t NetworkCafeTotalTimePlayedToday, bool bIsLoginTimeOnly);
		void AddLoginBonusNotifyMessage(const class FText& InMessage);
		void AddMemberDeadNotifyMessage(const class FText& MemberName);
		void AddMailAcceptLimitNotifyMessage();
		void AddRankingRewardNotifyMessage();
		void AddLine1NotifyMessage(const class FText& InMessage);
		void AddLine1LNotifyMessage(const class FText& InMessage);
		void AddLine2NotifyMessage(const class FText& InMainMessage, const class FText& InSubMessage);
		void AddItemExpiryNotifyMessage(int32_t InItemID);
		void ReceiveBeginPlay();
		void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY);
		void ReceiveDestroyed();
		void BindBalloonWidget();
		void OnReceivedMessage(class USBChatMessage* Message, const struct FSBChatUIMessage& Mess);
		void UnbindBalloonWIdget();
		void OnReceiveUpdateQuestProgressEvent2(class UObject* Sender, class UObject* Param);
		void OnGetMaterial(class UObject* Sender, class UObject* Param);
		void RegistClassHud(class UUserWidget* Widget, const class FString& Name);
		void OnGameSettingAfter();
		void ShowSimpleAlertByID(const class FName& TextId);
		void OnVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void BindVisibleSetting();
		void UnbindVisibleSetting();
		void DeleteBattleContentsHUD();
		void ExecuteUbergraph_BP_BattleHUD(int32_t EntryPoint);
		void OnCloseRmShop__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
