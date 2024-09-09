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
	 * WidgetBlueprintGeneratedClass OtherPCMenu.OtherPCMenu_C
	 * Size -> 0x0700 (FullSize[0x09B0] - InheritedSize[0x02B0])
	 */
	class UOtherPCMenu_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USBButton_C*                                         AutoRunButton;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 AutoRunTextBlock;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BG_1;                                                    // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCaptureImageFace_C*                                 CaptureImageFace;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClassIconProfile_C*                                 ClassIconProfile;                                        // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose01_C*                                       CmnClose01;                                              // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CommentLabel;                                            // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         DirectChatButton;                                        // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 DirectChatTextLabel;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         EmotoButton;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 EmotoButtonLabel;                                        // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         FollowButton;                                            // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          FollowButtonLabel;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            FriendIconOverlay;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        GuildCanvasPanel;                                        // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              LeaderIconImage;                                         // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            LeaderIconOverlay;                                       // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MutualFollow;                                            // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PartyIconImage;                                          // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            PartyIconOverlay;                                        // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         PartyInviteButton;                                       // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 PartyInviteButtonLabel;                                  // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlatformIcon_C*                                     PlatformIcon;                                            // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlayerNameLabel;                                         // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerProfileLikeBtn_C*                             PlayerProfileLikeBtn;                                    // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         ProfileViewButton;                                       // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 ProfileViewButtonLabel;                                  // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        RootCanvasPanel;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTensionTagIcon_C*                                   TensionTagIcon;                                          // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TensionTagLabel;                                         // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_GuildName;                                           // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsClosingMenu;                                           // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UOLD[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASBPlayerState*                                      Player;                                                  // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       IsGetMiscData;                                           // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7S5Q[0x7];                                   // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerProfileMenuDetailData                        ProfileData;                                             // 0x03F0(0x0468) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsFavorite;                                              // 0x0858(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H5NW[0x7];                                   // 0x0859(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CharacterId;                                             // 0x0860(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              OpenTargetCharacterName;                                 // 0x0870(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        FollowWaitBlocker;                                       // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPlayerProfile_C*                                    PlayerProfile;                                           // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBLCondition;                                           // 0x0890(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBProfilePublicSettingType                                PublicSetting;                                           // 0x0891(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IBN2[0x6];                                   // 0x0892(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerProfileSummaryData>                   MyFollowList;                                            // 0x0898(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsPCList;                                                // 0x08A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       isFriend;                                                // 0x08A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsCanSendAdv;                                            // 0x08AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDoneAdv;                                               // 0x08AB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G3ZB[0x4];                                   // 0x08AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerId;                                                // 0x08B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDirectChat;                                            // 0x08C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsSendLIke;                                              // 0x08D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9FFM[0x7];                                   // 0x08D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBPlayerConcernedList*                              ConcernedLlist;                                          // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        FollowIntervalTimerEventHandle;                          // 0x08E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class USBBlackListComponent*                               BlackListComponent;                                      // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Warning;                                                 // 0x08F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsBlackList;                                             // 0x08F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsBindCBS;                                               // 0x08F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_68Y3[0x2];                                   // 0x08F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PlayerName;                                              // 0x08F8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                PlayerComment;                                           // 0x0910(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsUGC;                                                   // 0x0928(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRestrict;                                              // 0x0929(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QRDF[0x6];                                   // 0x092A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuildRepData                                       GuildRepDataCache;                                       // 0x0930(0x0080) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnClickedPhotoLikeBtn(TArray<int32_t>* outLikeCountList, TArray<bool>* outLikeBtnEnbaleList);
		void UpdatePlayerComment();
		void UpdatePlayerName();
		void UpdatePlayerIcon(bool* Download);
		void ShowPlayerProfileErrorMessage(const class FName& InTextNameId, int32_t InTextId);
		bool ShowSendAdventureCardError(bool InWasSuccessful, const struct FSendAdventureCardResult& InSendAdventureResult);
		void SetPlatformIcon();
		void SetPlayerProfile_LikeBtn();
		class ASBPlayerCharacter* GetPlayerCharacter();
		void GetOtherPlayerState(class ASBPlayerState** OutPlayerState);
		void ShowMessage_DisableProfile();
		void ShowMessage_IsBlackListed();
		void CanSendInvitationSelf(bool* bResult);
		void UpdateBlackListState(bool IsBlackList);
		void UpdatePartyIconVisible();
		void CheckProfileEnable(bool* IsOk);
		class FText GetSendAdventurerCardButtonLabelText();
		void SetRootVisibility(bool InVisible);
		void InitProfileDetail(const struct FPlayerProfileMenuDetailData& ProfileData);
		void Init(const class FText& InName, ESBClassType InRole, ESBTensionTagType InTensionTagId, const class FText& InComment, int32_t InAchievementId, bool IsSendLIke, int32_t OnlineStatus);
		void CloseMenu();
		void InitializeGuildData();
		void Construct();
		void Destruct();
		void BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_571_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
		void CustomEvent_1(EYesNoDialogResult Result);
		void BndEvt__EmotoButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
		void OnPress_Cancel();
		void BndEvt__FollowButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
		void OnGetPlayerProfileDetailMenuDelegate_Event(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode);
		void Close();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ProfileViewButton_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__PartyInviteButton_K2Node_ComponentBoundEvent_36_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__EmotoButton_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__EmotoButton_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__FollowButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__FollowButton_K2Node_ComponentBoundEvent_31_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__TradeButton_K2Node_ComponentBoundEvent_75_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__TradeButton_K2Node_ComponentBoundEvent_92_OnButtonHoverEvent__DelegateSignature();
		void OnCancelMatching_Dialog_Event(EYesNoDialogResult Result);
		void BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_118_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_142_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__DirectChatButton_K2Node_ComponentBoundEvent_179_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__AutoRunButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnGameOverDelegate_Event_1();
		void UnbindPlayerConcernedListDelegate();
		void UnbindGameOverDelegate();
		void AddBlackList_Event(const struct FPlayerProfileMenuDetailData& ProfileData);
		void RemoveBlackList();
		void UnbindBlackListDelegate();
		void Close_Force();
		void start_construct();
		void OnNotificationBlackListedDelegate_Event(bool bBlackListed, const class FString& SenderId);
		void UnBindNotificationBlackListedDelegate();
		void OnJankenUIDelegate_Event_1();
		void UnBindJankenUIDelegate();
		void SendMessSendAdv(bool bWasSuccessful, const struct FSendAdventureCardResult& SendAdventureCardResult);
		void OnRequestDirectChat_Event();
		void SendLike();
		void BndEvt__OtherPCMenu_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
		void OnSendLikeEvent();
		void OnCheckBlockStatus_Event(bool bCheckBlockStatus);
		void ResultClose();
		void CustomEvent_2(class UObject* Sender, class UObject* Param);
		void OnSendAdventureCard();
		void ExecuteUbergraph_OtherPCMenu(int32_t EntryPoint);
		void OnDirectChat__DelegateSignature();
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
