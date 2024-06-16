#pragma once

 

// Package: BP_BattleHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "EKeyGuideType_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_BattleHUD.BP_BattleHUD_C
// 0x00C0 (0x03F0 - 0x0330)
class ABP_BattleHUD_C final : public ASBBattleHUD
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBattleInfoHUD_C*                       BattleInfoHUD;                                     // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessage_C*                       NotifyMessage;                                     // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULayoutableHUD_C*                       LayoutableHUD;                                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_Notifications_C*                   Notifications;                                     // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextWindowDemo_C*                      TextWindowDemo;                                    // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextWindow_C*                          TextWindow;                                        // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextWindowSkit_C*                      TextWindowSkit;                                    // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatHUD_C*                             ChatHUD;                                           // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOpenCommandMenu_C*                     OpenCommandMenu;                                   // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ShortPinView_C*                    ShortPinHUD;                                       // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDedicatedClassHUD_C*                   ClassHUD;                                          // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatUnreadNotify_C*                    ChatUnreadNotify;                                  // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMailLimitIndicator_C*                  MailLimitIndicator;                                // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKeyGuideHUD_C*                         KeyGuideHUD;                                       // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBBattleContentsHUD*                   SBBattleContentsHUD;                               // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTelopManager_C*                        TelopManager;                                      // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LayoutEditMode;                                    // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5206[0x3];                                     // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   AutoReset;                                         // 0x03C4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   JoinInterreputQuestTutorialHelpId;                 // 0x03CC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5207[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URmShopMenu_C*                          RMShop;                                            // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCloseRmShop;                                     // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnCloseRmShop__DelegateSignature();
	void ExecuteUbergraph_BP_BattleHUD(int32 EntryPoint);
	void DeleteBattleContentsHUD();
	void UnbindVisibleSetting();
	void BindVisibleSetting();
	void OnVisibleSetting(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void ShowSimpleAlertByID(const class FName& TextId);
	void OnGameSettingAfter();
	void RegistClassHud(class UUserWidget* Widget, const class FString& Param_Name);
	void OnGetMaterial(class UObject* Sender, class UObject* Param);
	void OnReceiveUpdateQuestProgressEvent2(class UObject* Sender, class UObject* Param);
	void UnbindBalloonWIdget();
	void OnReceivedMessage(const class USBChatMessage* Message, const struct FSBChatUIMessage& Mess);
	void BindBalloonWidget();
	void ReceiveDestroyed();
	void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
	void ReceiveBeginPlay();
	void AddItemExpiryNotifyMessage(int32 InItemID);
	void AddLine2NotifyMessage(const class FText& InMainMessage, const class FText& InSubMessage);
	void AddLine1LNotifyMessage(const class FText& InMessage);
	void AddLine1NotifyMessage(const class FText& InMessage);
	void AddRankingRewardNotifyMessage();
	void AddMailAcceptLimitNotifyMessage();
	void AddMemberDeadNotifyMessage(const class FText& MemberName);
	void AddLoginBonusNotifyMessage(const class FText& InMessage);
	void AddNetworkCafeLoginTimeNotificationMessage(const int32 NetworkCafeTotalTimePlayedToday, const bool bIsLoginTimeOnly);
	void AddRecipeMessage(const ESBRecipeType RecipeType, const int32 RecepiId);
	void AddWarehouseAbilityNotifyMessage(const TArray<struct FSBWarehouseAbilityNotifyUIInfo>& InParam);
	void AddAutoDeliveryQuestCompleteMessage(const ESBSeasonPassQuestCycleType InCycle, const class FString& QuestName);
	void OnGetMaterial_Core(class UObject* Param);
	void AddAdventurerRankUpdateCompleteMessage(const ESBPlayerPassiveImagineSlotType Slot);
	void AddTutorialHelpMessage(const class FName InTutorialHelpId);
	void AddAchievementGainedMessage(const int32 InAchievementId);
	void AddAwakeInterruptQuestMessage(const class FName& InQuestId);
	void TryShowQuestCompleteMessage_Delay(int32 InQuestIndex, int32 InStepNo, float DelaySeconds);
	void OnChangedDebugValue(ESBDebugMenuType MenuType, class FName RowName);
	void DestructDebugMenu();
	void ConstructDebugMenu();
	void UnbindWarehouseAbility();
	void BindWarehouseAbility();
	void OnWarehouseAbilityUpdateDelegate______0(const TArray<struct FSBWarehouseAbilityNotifyUIInfo>& UIInfo);
	void ShortcutRingExecuteF12();
	void ShortcutRingExecuteF11();
	void ShortcutRingExecuteF10();
	void ShortcutRingExecuteF9();
	void ShortcutRingExecuteF8();
	void ShortcutRingExecuteF7();
	void ShortcutRingExecuteF6();
	void ShortcutRingExecuteF5();
	void SetKeyGuideTextVisible(ESkillActionPosition InSkillActionPosition, bool InIsVisible);
	void SetBattleInfoHUDVisible(ESlateVisibility InVisibility);
	void BattleAreaDisableMessage();
	void ChangeKeyGuide1_2Visibility();
	void OpenInitSelect();
	void SetEditMode(bool bEditMode);
	void OnUpdateRespawnGauge();
	void OnShowRespawnBattleArea();
	void OnDisableRespawn();
	void OnShowRespawn(float InRespawnTime);
	void OnShowCombo(int32 Combo);
	void OnSaveCharaConfigUpdate(EKeyGuideType InKeyGuideType);
	void ChangeKeyGuideUpdate(EKeyGuideType InKeyGuideType);
	void OnClickedCloseChatHUD();
	void CallAddMemberDeadNotifyMessage(const class FText& MemberName);
	void OpenCursorModeToOtherPCMenu(class ABP_PlayerCharacter_C* InOtherPC);
	void HitIndicatorAddMarker(const struct FVector& HitLocation);
	void SetFocusActor(class AActor* Actor);
	void Switching_Map();
	void NextQuestInfo();
	void ItemSelectorExe();
	void ItemSelectorMoveLeftPress();
	void ItemSelectorMoveLeftRepeat();
	void ItemSelectorMoveRightPress();
	void ItemSelectorMoveRightRepeat();
	void ShortcutRingSwitch();
	void ShortcutRingOpen();
	void ShortcutRingClose();
	void ForceCloseChatHUD();
	void ShowChatHUD();
	void CallUpdateInteractionNotice(const struct FSBInteractionInfo& InteractionInfo);
	void OnRequestTutorialHelp(bool bCheckUnlock);
	void KeyShortcut_Stamp();
	void UpdateMouseCursorIcon();
	void RequestDirectChat(const class FString& PlayerId, const class FText& Param_Name, const class FString& CharacterId, ESBPrivilegeType Privilege_Type);
	void DeleteRmShop();
	void UnbindRmShop(class URmShopMenu_C* InRmShop);
	void BindRmShop(class URmShopMenu_C* InRmShop);
	void CreateRmShop();
	void OnCloseRmShopMenuEvent();
	void CreateEventMenu();
	void AddAdventurerRankupCompleteMessage();
	void AddLevelUpSkill(const class FString& SkillType);
	void AddLevelUpClass(int32 Level);
	void InitDhcBattleHUD(class AActor* Actor);
	void InitTimerRespawnHUD(ETimerHUDType HUDType);
	void OnLoaded_8C3FC3404068A5A4F9E11583B480FFA8(TSubclassOf<class UObject> Loaded);
	void OnLoaded_3798F6A1449D023D9BCBF4B02DB4C9EB(TSubclassOf<class UObject> Loaded);
	void DrawWireLocator(int32 SizeX, int32 SizeY);
	void SetLayoutEditMode(bool EditModeEnabled);
	void IsLayoutEditMode(bool* Param_LayoutEditMode);
	void OnQuestUpdateProgress(const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo);
	class USBTextWindow* GetTextWindow();
	void GetHitFlash(class UHitFlash_C** RefHitFlash);
	void GetHitIndicator(bool* bValid, class UHitIndicator_C** HitIndicator);
	class UUserWidget* GetOptionLayoutableHUD();
	void GetRespawnHUD(bool* bValid, class URespawnHUD_C** RespawnHUD);
	class USBTextWindowBase* GetTextWindowSkit();
	bool UnregistClassHud(const class FString& Param_Name);
	class USBTextWindowBase* GetTextWindowDemo();
	void CreateHUD();
	void DeleteHUD();
	void CreateBattleInfoHUD();
	void DeleteBattleInfoHUD();
	void UpdateBattleInfoHUD(const struct FSBInteractionInfo& InteractionInfo);
	void CreateLayoutHUD();
	void DeleteLayoutHUD();
	void CreateKeyGuideHUD();
	void DeleteKeyGuideHUD();
	void CreateChatHUD();
	void DeleteChatHUD();
	void CreateShortPinHUD();
	void DeleteShortPinHUD();
	void CreateClassHUD();
	void DeleteClassHUD();
	void CreateNotifyMessage();
	void DeleteNotifyMessage();
	void CreateNotifications();
	void DeleteNotifications();
	void CreateTextWindowDemo();
	void DeleteTextWindowDemo();
	void CreateTextWindow();
	void DeleteTextWindow();
	void CreateTextWindowSkit();
	void DeleteTextWindowSkit();
	void CreateMailLimitIndicator();
	void DeleteMailLimitIndicator();
	void CreateOpenCommandMenu();
	void DeleteOpenCommandMenu();
	void CreateStatusAlimentNotifyWidgetOwner();
	void DeleteStatusAlimentNotifyWidgetOwner();
	void CreateChatUnreadNotify();
	void DeleteChatUnreadNotify();
	void CreateTelopManager();
	void DeleteTelopManager();
	void Bind();
	void Unbind();
	void BindOnJoinInterruptQuest();
	void UnbindOnJoinInterruptQuest();
	void OnJoinInterreputQuestDelegete(class USBPlayerInterruptQuestComponent* InComponent, const bool bInFirst);
	void GetPlaceGuideWidget(class UPlaceGuide_C** PlaceGuideWidget);
	void IsChatWindowActive(bool* Active);
	void IsOtherPCListMenuVisible(bool* Visible);
	void IsEditMap(float PressTime, bool* Result);

	class USBLayoutableHUD* GetLayoutableHUD() const;
	class UUserWidget* GetChatHUD() const;
	class UUserWidget* GetNotifyMessage() const;
	class USBBattleContentsHUD* GetBattleContentsHUD() const;
	class USBTelopManager* GetTelopManager() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BattleHUD_C">();
	}
	static class ABP_BattleHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BattleHUD_C>();
	}
};
static_assert(alignof(ABP_BattleHUD_C) == 0x000008, "Wrong alignment on ABP_BattleHUD_C");
static_assert(sizeof(ABP_BattleHUD_C) == 0x0003F0, "Wrong size on ABP_BattleHUD_C");
static_assert(offsetof(ABP_BattleHUD_C, UberGraphFrame) == 0x000330, "Member 'ABP_BattleHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, DefaultSceneRoot) == 0x000338, "Member 'ABP_BattleHUD_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, BattleInfoHUD) == 0x000340, "Member 'ABP_BattleHUD_C::BattleInfoHUD' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, NotifyMessage) == 0x000348, "Member 'ABP_BattleHUD_C::NotifyMessage' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, LayoutableHUD) == 0x000350, "Member 'ABP_BattleHUD_C::LayoutableHUD' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, Notifications) == 0x000358, "Member 'ABP_BattleHUD_C::Notifications' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, TextWindowDemo) == 0x000360, "Member 'ABP_BattleHUD_C::TextWindowDemo' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, TextWindow) == 0x000368, "Member 'ABP_BattleHUD_C::TextWindow' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, TextWindowSkit) == 0x000370, "Member 'ABP_BattleHUD_C::TextWindowSkit' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, ChatHUD) == 0x000378, "Member 'ABP_BattleHUD_C::ChatHUD' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, OpenCommandMenu) == 0x000380, "Member 'ABP_BattleHUD_C::OpenCommandMenu' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, ShortPinHUD) == 0x000388, "Member 'ABP_BattleHUD_C::ShortPinHUD' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, ClassHUD) == 0x000390, "Member 'ABP_BattleHUD_C::ClassHUD' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, ChatUnreadNotify) == 0x000398, "Member 'ABP_BattleHUD_C::ChatUnreadNotify' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, MailLimitIndicator) == 0x0003A0, "Member 'ABP_BattleHUD_C::MailLimitIndicator' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, KeyGuideHUD) == 0x0003A8, "Member 'ABP_BattleHUD_C::KeyGuideHUD' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, SBBattleContentsHUD) == 0x0003B0, "Member 'ABP_BattleHUD_C::SBBattleContentsHUD' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, TelopManager) == 0x0003B8, "Member 'ABP_BattleHUD_C::TelopManager' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, LayoutEditMode) == 0x0003C0, "Member 'ABP_BattleHUD_C::LayoutEditMode' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, AutoReset) == 0x0003C4, "Member 'ABP_BattleHUD_C::AutoReset' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, JoinInterreputQuestTutorialHelpId) == 0x0003CC, "Member 'ABP_BattleHUD_C::JoinInterreputQuestTutorialHelpId' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, RMShop) == 0x0003D8, "Member 'ABP_BattleHUD_C::RMShop' has a wrong offset!");
static_assert(offsetof(ABP_BattleHUD_C, OnCloseRmShop) == 0x0003E0, "Member 'ABP_BattleHUD_C::OnCloseRmShop' has a wrong offset!");

}

