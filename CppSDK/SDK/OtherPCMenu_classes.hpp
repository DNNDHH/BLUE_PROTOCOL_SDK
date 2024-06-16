#pragma once

 

// Package: OtherPCMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OtherPCMenu.OtherPCMenu_C
// 0x0690 (0x0940 - 0x02B0)
class UOtherPCMenu_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            AutoRunButton;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    AutoRunTextBlock;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_0;                                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCaptureImageFace_C*                    CaptureImageFace;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIconProfile_C*                    ClassIconProfile;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CommentLabel;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DirectChatButton;                                  // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    DirectChatTextLabel;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            EmotoButton;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    EmotoButtonLabel;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            FollowButton;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FollowButtonLabel;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               FriendIconOverlay;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           GuildCanvasPanel;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LeaderIconImage;                                   // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               LeaderIconOverlay;                                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MutualFollow;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PartyIconImage;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               PartyIconOverlay;                                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            PartyInviteButton;                                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    PartyInviteButtonLabel;                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlatformIcon_C*                        PlatformIcon;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerNameLabel;                                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerProfileLikeBtn_C*                PlayerProfileLikeBtn;                              // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ProfileViewButton;                                 // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ProfileViewButtonLabel;                            // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootCanvasPanel;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTensionTagIcon_C*                      TensionTagIcon_320;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TensionTagLabel;                                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_GuildName;                                     // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsClosingMenu;                                     // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C7A[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         Player;                                            // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsGetMiscData;                                     // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C7B[0x7];                                     // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           ProfileData;                                       // 0x03F0(0x03F8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsFavorite;                                        // 0x07E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C7C[0x7];                                     // 0x07E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CharacterId;                                       // 0x07F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 OpenTargetCharacterName;                           // 0x0800(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           FollowWaitBlocker;                                 // 0x0810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerProfile_C*                       PlayerProfile;                                     // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBLCondition;                                     // 0x0820(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBProfilePublicSettingType                   PublicSetting;                                     // 0x0821(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C7D[0x6];                                     // 0x0822(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPlayerProfileSummaryData>      MyFollowList;                                      // 0x0828(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsPCList;                                          // 0x0838(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsFriend;                                          // 0x0839(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsCanSendAdv;                                      // 0x083A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDoneAdv;                                         // 0x083B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C7E[0x4];                                     // 0x083C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayerId;                                          // 0x0840(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDirectChat;                                      // 0x0850(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsSendLIke;                                        // 0x0860(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C7F[0x7];                                     // 0x0861(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerConcernedList*                 ConcernedLlist;                                    // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           FollowIntervalTimerEventHandle;                    // 0x0870(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USBBlackListComponent*                  Black_List_Component;                              // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Warning;                                           // 0x0880(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBlackList;                                       // 0x0884(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsBindCBS;                                         // 0x0885(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C80[0x2];                                     // 0x0886(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   PlayerName;                                        // 0x0888(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PlayerComment;                                     // 0x08A0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsUGC;                                             // 0x08B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRestrict;                                        // 0x08B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4C81[0x6];                                     // 0x08BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuildRepData                          GuildRepDataCache;                                 // 0x08C0(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClose__DelegateSignature();
	void OnDirectChat__DelegateSignature();
	void ExecuteUbergraph_OtherPCMenu(int32 EntryPoint);
	void OnSendAdventureCard();
	void CustomEvent_1(class UObject* Sender, class UObject* Param);
	void ResultClose();
	void OnCheckBlockStatus_Event(const bool bCheckBlockStatus);
	void OnSendLikeEvent();
	void BndEvt__OtherPCMenu_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void SendLike();
	void OnRequestDirectChat_Event();
	void SendMess_SendAdv_(const bool bWasSuccessful, const struct FSendAdventureCardResult& SendAdventureCardResult);
	void UnBindJankenUIDelegate();
	void OnJankenUIDelegate_Event_0();
	void UnBindNotificationBlackListedDelegate();
	void OnNotificationBlackListedDelegate_Event(const bool bBlackListed, const class FString& SenderId);
	void Start_construct();
	void Close_Force();
	void UnbindBlackListDelegate();
	void RemoveBlackList();
	void AddBlackList_Event(const struct FPlayerProfileMenuDetailData& Param_ProfileData);
	void UnbindGameOverDelegate();
	void UnbindPlayerConcernedListDelegate();
	void OnGameOverDelegate_Event_0();
	void BndEvt__AutoRunButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature();
	void OnCancelMatching_Dialog_Event(const EYesNoDialogResult Result);
	void BndEvt__TradeButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TradeButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FollowButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FollowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__EmotoButton_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__EmotoButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Close();
	void OnGetPlayerProfileDetailMenuDelegate_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void BndEvt__FollowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void OnPress_Cancel();
	void BndEvt__EmotoButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
	void CustomEvent_0(const EYesNoDialogResult Result);
	void BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_571_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void Construct();
	void Initialize_GuildData();
	void CloseMenu();
	void Init(const class FText& InName, ESBClassType InRole, ESBTensionTagType InTensionTagId, const class FText& InComment, int32 InAchievementId, bool Param_IsSendLIke, int32 OnlineStatus);
	void InitProfileDetail(const struct FPlayerProfileMenuDetailData& Param_ProfileData);
	void SetRootVisibility(bool InVisible);
	class FText GetSendAdventurerCardButtonLabelText();
	void CheckProfileEnable(bool* IsOk);
	void UpdatePartyIconVisible();
	void UpdateBlackListState(bool Param_IsBlackList);
	void CanSendInvitationSelf(bool* bResult);
	void ShowMessage_IsBlackListed();
	void ShowMessage_DisableProfile();
	void GetOtherPlayerState(class ASBPlayerState** OutPlayerState);
	class ASBPlayerCharacter* GetPlayerCharacter();
	void SetPlayerProfile_LikeBtn();
	void SetPlatformIcon();
	bool ShowSendAdventureCardError(bool InWasSuccessful, const struct FSendAdventureCardResult& InSendAdventureResult);
	void Show_Player_Profile_Error_Message(class FName InTextNameId, const int32 InTextID);
	void UpdatePlayerIcon(bool* Download);
	void UpdatePlayerName();
	void Update_Player_Comment();
	void OnClickedPhotoLikeBtn(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnbaleList);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OtherPCMenu_C">();
	}
	static class UOtherPCMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOtherPCMenu_C>();
	}
};
static_assert(alignof(UOtherPCMenu_C) == 0x000008, "Wrong alignment on UOtherPCMenu_C");
static_assert(sizeof(UOtherPCMenu_C) == 0x000940, "Wrong size on UOtherPCMenu_C");
static_assert(offsetof(UOtherPCMenu_C, UberGraphFrame) == 0x0002B0, "Member 'UOtherPCMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, AnimOut) == 0x0002B8, "Member 'UOtherPCMenu_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, AnimIn) == 0x0002C0, "Member 'UOtherPCMenu_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, AutoRunButton) == 0x0002C8, "Member 'UOtherPCMenu_C::AutoRunButton' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, AutoRunTextBlock) == 0x0002D0, "Member 'UOtherPCMenu_C::AutoRunTextBlock' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, BG_0) == 0x0002D8, "Member 'UOtherPCMenu_C::BG_0' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, CaptureImageFace) == 0x0002E0, "Member 'UOtherPCMenu_C::CaptureImageFace' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, ClassIconProfile) == 0x0002E8, "Member 'UOtherPCMenu_C::ClassIconProfile' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, CmnClose01) == 0x0002F0, "Member 'UOtherPCMenu_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, CommentLabel) == 0x0002F8, "Member 'UOtherPCMenu_C::CommentLabel' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, DirectChatButton) == 0x000300, "Member 'UOtherPCMenu_C::DirectChatButton' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, DirectChatTextLabel) == 0x000308, "Member 'UOtherPCMenu_C::DirectChatTextLabel' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, EmotoButton) == 0x000310, "Member 'UOtherPCMenu_C::EmotoButton' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, EmotoButtonLabel) == 0x000318, "Member 'UOtherPCMenu_C::EmotoButtonLabel' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, FollowButton) == 0x000320, "Member 'UOtherPCMenu_C::FollowButton' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, FollowButtonLabel) == 0x000328, "Member 'UOtherPCMenu_C::FollowButtonLabel' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, FriendIconOverlay) == 0x000330, "Member 'UOtherPCMenu_C::FriendIconOverlay' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, GuildCanvasPanel) == 0x000338, "Member 'UOtherPCMenu_C::GuildCanvasPanel' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, LeaderIconImage) == 0x000340, "Member 'UOtherPCMenu_C::LeaderIconImage' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, LeaderIconOverlay) == 0x000348, "Member 'UOtherPCMenu_C::LeaderIconOverlay' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, MutualFollow) == 0x000350, "Member 'UOtherPCMenu_C::MutualFollow' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, PartyIconImage) == 0x000358, "Member 'UOtherPCMenu_C::PartyIconImage' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, PartyIconOverlay) == 0x000360, "Member 'UOtherPCMenu_C::PartyIconOverlay' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, PartyInviteButton) == 0x000368, "Member 'UOtherPCMenu_C::PartyInviteButton' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, PartyInviteButtonLabel) == 0x000370, "Member 'UOtherPCMenu_C::PartyInviteButtonLabel' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, PlatformIcon) == 0x000378, "Member 'UOtherPCMenu_C::PlatformIcon' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, PlayerNameLabel) == 0x000380, "Member 'UOtherPCMenu_C::PlayerNameLabel' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, PlayerProfileLikeBtn) == 0x000388, "Member 'UOtherPCMenu_C::PlayerProfileLikeBtn' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, ProfileViewButton) == 0x000390, "Member 'UOtherPCMenu_C::ProfileViewButton' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, ProfileViewButtonLabel) == 0x000398, "Member 'UOtherPCMenu_C::ProfileViewButtonLabel' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, RootCanvasPanel) == 0x0003A0, "Member 'UOtherPCMenu_C::RootCanvasPanel' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, TensionTagIcon_320) == 0x0003A8, "Member 'UOtherPCMenu_C::TensionTagIcon_320' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, TensionTagLabel) == 0x0003B0, "Member 'UOtherPCMenu_C::TensionTagLabel' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, Txt_GuildName) == 0x0003B8, "Member 'UOtherPCMenu_C::Txt_GuildName' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, UIBlocker) == 0x0003C0, "Member 'UOtherPCMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, OnClose) == 0x0003C8, "Member 'UOtherPCMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsClosingMenu) == 0x0003D8, "Member 'UOtherPCMenu_C::IsClosingMenu' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, Player) == 0x0003E0, "Member 'UOtherPCMenu_C::Player' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsGetMiscData) == 0x0003E8, "Member 'UOtherPCMenu_C::IsGetMiscData' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, ProfileData) == 0x0003F0, "Member 'UOtherPCMenu_C::ProfileData' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsFavorite) == 0x0007E8, "Member 'UOtherPCMenu_C::IsFavorite' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, CharacterId) == 0x0007F0, "Member 'UOtherPCMenu_C::CharacterId' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, OpenTargetCharacterName) == 0x000800, "Member 'UOtherPCMenu_C::OpenTargetCharacterName' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, FollowWaitBlocker) == 0x000810, "Member 'UOtherPCMenu_C::FollowWaitBlocker' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, PlayerProfile) == 0x000818, "Member 'UOtherPCMenu_C::PlayerProfile' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsBLCondition) == 0x000820, "Member 'UOtherPCMenu_C::IsBLCondition' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, PublicSetting) == 0x000821, "Member 'UOtherPCMenu_C::PublicSetting' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, MyFollowList) == 0x000828, "Member 'UOtherPCMenu_C::MyFollowList' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsPCList) == 0x000838, "Member 'UOtherPCMenu_C::IsPCList' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsFriend) == 0x000839, "Member 'UOtherPCMenu_C::IsFriend' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsCanSendAdv) == 0x00083A, "Member 'UOtherPCMenu_C::IsCanSendAdv' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsDoneAdv) == 0x00083B, "Member 'UOtherPCMenu_C::IsDoneAdv' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, PlayerId) == 0x000840, "Member 'UOtherPCMenu_C::PlayerId' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, OnDirectChat) == 0x000850, "Member 'UOtherPCMenu_C::OnDirectChat' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsSendLIke) == 0x000860, "Member 'UOtherPCMenu_C::IsSendLIke' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, ConcernedLlist) == 0x000868, "Member 'UOtherPCMenu_C::ConcernedLlist' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, FollowIntervalTimerEventHandle) == 0x000870, "Member 'UOtherPCMenu_C::FollowIntervalTimerEventHandle' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, Black_List_Component) == 0x000878, "Member 'UOtherPCMenu_C::Black_List_Component' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, Warning) == 0x000880, "Member 'UOtherPCMenu_C::Warning' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsBlackList) == 0x000884, "Member 'UOtherPCMenu_C::IsBlackList' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsBindCBS) == 0x000885, "Member 'UOtherPCMenu_C::IsBindCBS' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, PlayerName) == 0x000888, "Member 'UOtherPCMenu_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, PlayerComment) == 0x0008A0, "Member 'UOtherPCMenu_C::PlayerComment' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsUGC) == 0x0008B8, "Member 'UOtherPCMenu_C::IsUGC' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, IsRestrict) == 0x0008B9, "Member 'UOtherPCMenu_C::IsRestrict' has a wrong offset!");
static_assert(offsetof(UOtherPCMenu_C, GuildRepDataCache) == 0x0008C0, "Member 'UOtherPCMenu_C::GuildRepDataCache' has a wrong offset!");

}

