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
	 * WidgetBlueprintGeneratedClass PlayerProfile.PlayerProfile_C
	 * Size -> 0x0DF2 (FullSize[0x10A2] - InheritedSize[0x02B0])
	 */
	class UPlayerProfile_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    GuildDetailsAnimOut;                                     // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    GuildDetailsAnimIn;                                      // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              AdventureCardFrame;                                      // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAdventureCardSwitchTab_C*                           AdventureCardSwitchTab;                                  // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BackGroundColorFrameImg;                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BgBlk;                                                   // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        BgGroup;                                                 // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        BgGroup2;                                                // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BgSdw;                                                   // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnBlackList;                                            // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnCheckGuild;                                           // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnClose2;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnClose3;                                               // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnDirectChat;                                           // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerProfileFollowBtn_C*                           BtnFollow;                                               // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        BtnGroup1;                                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnInviteGuild;                                          // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnPartyInvite;                                          // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         BtnReport;                                               // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel;                                             // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose02_C*                                       CmnClose02;                                              // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Comenticon;                                              // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CommentGrp;                                              // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          CommentLabel;                                            // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommunicateSettingMenu_FaceBgData_C*                CommunicateSettingMenu_FaceBgData;                       // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommunicateSettingMenu_HeaderBG_C*                  CommunicateSettingMenu_HeaderBG;                         // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommunicateSettingMenu_NameAndAchieve_C*            CommunicateSettingMenu_NameAndAchieve;                   // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommunicateSettingMenu_ShortId_C*                   CommunicateSettingMenu_ShortId;                          // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        GuildDetailsPanel;                                       // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_5;                                                 // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MutualFollow;                                            // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PartyLeader;                                             // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPhotoViewer_C*                                      PhotoViewer;                                             // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PhotoViewerPanel;                                        // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerProfileClassList_C*                           PlayerProfileClassList;                                  // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerProfileLikeBtn_C*                             PlayerProfileLikeBtn;                                    // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlayerReport_C*                                     PlayerReport;                                            // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PosSetCanvas;                                            // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PosSetCanvas_2;                                          // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBtnBlackList;                                        // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBtnCheckGuild;                                       // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBtnDirectChat;                                       // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBtnInviteGuild;                                      // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBtnPartyInvite;                                      // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBtnReport;                                           // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchParty;                                             // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TensionTagBg;                                            // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTensionTagIcon_C*                                   TensionTagIcon;                                          // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TensionTagLabel;                                         // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              UI_CmnGlowLine1;                                         // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_1;                                             // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsClosingMenu;                                           // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GUI1[0x7];                                   // 0x0469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              CharacterId;                                             // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             UpdateFollowData;                                        // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              CharacterShortId;                                        // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FPlayerProfileMenuDetailData                        DetailData;                                              // 0x04B0(0x0468) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsShowPlayerLocationUI;                                  // 0x0918(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       IsBlackList;                                             // 0x0919(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       InitBlackList;                                           // 0x091A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7AK4[0x5];                                   // 0x091B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             AddBlackList;                                            // 0x0920(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              CharacterName;                                           // 0x0930(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsJumpCommand;                                           // 0x0940(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H5QK[0x7];                                   // 0x0941(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnRequestDirectChat;                                     // 0x0948(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsActive;                                                // 0x0958(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsInviteParty;                                           // 0x0959(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BackGroundVisivirity;                                    // 0x095A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_CT5W[0x5];                                   // 0x095B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnDestruct;                                              // 0x0960(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsCanSendInvite;                                         // 0x0970(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C9UC[0x3];                                   // 0x0971(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           BgCaptureImageOffsetUV;                                  // 0x0974(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           BgImage;                                                 // 0x097C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PositionPattern;                                         // 0x0984(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              TransitionMenu;                                          // 0x0988(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnDestructForPlayerList;                                 // 0x0998(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             RequestTransitionMenu;                                   // 0x09A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUIBlocker_C*                                        FollowWaitBlocker;                                       // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             RemoveBlackList;                                         // 0x09C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnNotificationBlackListed;                               // 0x09D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsOffNotice;                                             // 0x09E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsAnyClose;                                              // 0x09E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZS63[0x6];                                   // 0x09E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTravel;                                                // 0x09E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              OwnerGameContentId;                                      // 0x09F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              OwnerSessionId;                                          // 0x0A08(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		class FString                                              PlayerId;                                                // 0x0A18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FGuildData                                          GuildData;                                               // 0x0A28(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              GuildName;                                               // 0x0AE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              GuildId;                                                 // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UGuildDetails_C*                                     GuildDetailsWG;                                          // 0x0B00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPhotoViewer_C*                                      PhotoViewer2;                                            // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              LocationName;                                            // 0x0B10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              ZoneId;                                                  // 0x0B20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              ContentId;                                               // 0x0B30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    AchievementSelected;                                     // 0x0B40(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OnlineStatus;                                            // 0x0B44(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AdventurerRank;                                          // 0x0B48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalPower;                                              // 0x0B4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              Comment;                                                 // 0x0B50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		ESBClassType                                               ClassType;                                               // 0x0B60(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBTensionTagType                                          TensionTag;                                              // 0x0B61(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MUQV[0x6];                                   // 0x0B62(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerProfilePhotoTrimmingInfo>             PlayerProfileTrimmingInfo;                               // 0x0B68(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsActivedMap;                                            // 0x0B78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsMe;                                                    // 0x0B79(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsDungeon;                                               // 0x0B7A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSaveName;                                              // 0x0B7B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsSearchMode;                                            // 0x0B7C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VOTU[0x3];                                   // 0x0B7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SessionId;                                               // 0x0B80(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              GameContentId;                                           // 0x0B90(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsFriend;                                                // 0x0BA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsDoneSendAdvCard;                                       // 0x0BA1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsCanSendAdvCard;                                        // 0x0BA2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       IsCanSendLike;                                           // 0x0BA3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M4YT[0x4];                                   // 0x0BA4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSendLikeEvent;                                         // 0x0BA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSBPlatformInfo                                     PlatformInfo;                                            // 0x0BB8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FPlayerProfileMenuDetailData                        DetailData2;                                             // 0x0BD8(0x0468) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnUpdateBlackList;                                       // 0x1040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsRankingMode;                                           // 0x1050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsComunicateMode;                                        // 0x1051(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z29V[0x2];                                   // 0x1052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Warning;                                                 // 0x1054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSendAdventureCard;                                     // 0x1058(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<int32_t>                                            AwardIdList;                                             // 0x1068(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    AdventureCardFrameId;                                    // 0x1078(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CharacterCardFrameId;                                    // 0x107C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BackGroundColorId;                                       // 0x1080(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IC5N[0x4];                                   // 0x1084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMG_ProductDetailMenu_C*                            ProductDetailMenuWG;                                     // 0x1088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClickedPhotoLikeBtn;                                   // 0x1090(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsUGC;                                                   // 0x10A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRestrict;                                              // 0x10A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdatePlayerComment();
		void UpdatePlayerScreenshot();
		void UpdatePlayerName();
		void IsAbleToTeleport(bool* bResult);
		void SetBtnGroup1Visibility(bool bInIsVisible);
		void IsPlayingMission(bool* Result);
		void SetActiveGuildInviteButton();
		void UnbindBlackList();
		void BindBlackList();
		void SetCommunicateBtn(bool IsComunicateMode);
		void SetRankingBtn();
		bool ShowSendAdventureCardError(bool InWasSuccessful, const struct FSendAdventureCardResult& InSendAdventureResult);
		void ShowPlayerProfileErrorMessage(const class FName& InTextNameId, int32_t InTextId);
		void IsCalledCommandGuildMenu(bool* bResult);
		void SetBG(class UImage* , float InScale, const struct FVector2D& InPosition, class UWidget* Widget, class UTexture2DDynamic* InTexture, class UWidgetSwitcher* InWidgetSwitcher);
		void InitTeleportBtnInfo();
		void InitProfilePartyInfo();
		void InitVisibilityForButtons();
		void InitTensionInfo();
		void InitPlayerCharacterPositionInfo();
		void InitScreenshotInfo();
		void InitProfileLikeInfo();
		void InitComment();
		void SetPlayerProfileMenuDetailData(const struct FPlayerProfileMenuDetailData& DetailData);
		void SetEquipLIstData();
		void InitReport();
		void IsInvited(bool* bIsInvited);
		bool CanSendPartyInvitation();
		void RemoveBlocker();
		void AddBlocker();
		void UpdateClassData(const struct FPlayerProfileMenuDetailData& Data);
		void GetClassLevel(ESBClassType Type, int32_t Exp, int32_t* Level);
		void AllDataButtonDisabled();
		void SetActiveDirectChatButton();
		void SetActivePartyInviteButton();
		bool Get_PartyInviteButton_bIsEnabled_1();
		ESlateVisibility Get_DirectChatButton_Visibility_1();
		ESlateVisibility Get_PartyInviteButton_Visibility_1();
		class FText Get_BlackListButtonText_Text_1();
		class FText Get_AddBlackListTextLabel_Text_1();
		void SetLocationFollowerUIVisible();
		void UpdateFollow();
		void Init_BlackList();
		void Init(const struct FPlayerProfileMenuDetailData& DetailData, bool IsFavorite, bool IsMe, bool IsDungeon, bool IsSaveName, bool IsSearchMode);
		void CloseMenu();
		void OnLoaded_112687964F2BE7FAB45CE180EB11CC13(class UObject* Loaded);
		void OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67(class UObject* Loaded);
		void OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4(class UObject* Loaded);
		void OnGetedGuildDetailData_Event(int32_t RetCode, const struct FGuildData& InGuildData);
		void WidgetAnimationEvt_GuildDetailsAnimIn_K2Node_WidgetAnimationEvent_1();
		void OnCompletedGuildEntry_Event(int32_t RetCode);
		void UnbindGuildDetailDelegate();
		void OnPress_QuickAccess(ESBKeyConfigAction QuickAccess);
		void Construct();
		void Destruct();
		void BlackListDialogResult(EYesNoDialogResult Result);
		void BndEvt__BtnCheckGuild_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void OnAddBlackListPlayerDelegate_Event(bool bWasSuccessful);
		void OnRemoveBlackListPlayerDelegate_Event(bool bWasSuccessful);
		void OnPress_Cancel();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnCloseParentsMenu();
		void BndEvt__BtnClose2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BtnBlackList_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
		void BndEvt__BtnInvite_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature();
		void BndEvt__BtnDirectChat_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature();
		void BndEvt__PlayerProfileFollowBtn_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature();
		void CloseByQuickAccess();
		void OnNotificationBlackListedDelegate_Event(bool bBlackListed, const class FString& SenderId);
		void OnGuildDataArriverd(int32_t RetCode);
		void OnNotifyBlocked_Event(bool bWasSuccessful);
		void OnTeleport_Event(EYesNoDialogResult Result);
		void OnInvited(int32_t RetCode);
		void BndEvt__BtnReport_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
		void Teleport();
		void SendFriend(bool bWasSuccessful, const struct FSendAdventureCardResult& SendAdventureCardResult);
		void BndEvt__BtnClose3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnGetBlackListDataEvent(bool bWasSuccessful, TArray<struct FPlayerProfileSummaryData> CharacterName, int32_t totalPageNum, int32_t currentPageNum);
		void InitializeGuilds();
		void SendLike();
		void BndEvt__PlayerProfile_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
		void BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_8_OnClickedThumbnail__DelegateSignature();
		void PhotoViewerCloseCompleteEvent();
		void GuildDetailsClose();
		void WidgetAnimationEvt_GuildDetailsAnimOut_K2Node_WidgetAnimationEvent_1();
		void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2();
		void BndEvt__BtnInviteGuild_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
		void CustomEvent_1();
		void OnClosedFromPlayerReport();
		void AddBlackListEvent(bool Condition);
		void RemoveBlackListEvent(bool Condition);
		void OnCheckBlockStatus(bool bCheckBlockStatus);
		void SetDecoFrame(int32_t InItemID, class UImage* InWG);
		void SetBgPattern(int32_t InItemID);
		void SetAdventureCardFrame(int32_t InItemID);
		void BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature(int32_t OutItemId, const class FString& outUniqueId);
		void ProductDetailMenuCloseEvent(class UUMG_ProductDetailMenu_C* Sender);
		void BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature(TArray<int32_t>* outLikeCountList, TArray<bool>* outLikeBtnEnableList);
		void PartyInvite_Dialog_Event(EYesNoDialogResult Result);
		void Matched_Cancel_Invite_Dialog_Event(EYesNoDialogResult Result);
		void ExecuteUbergraph_PlayerProfile(int32_t EntryPoint);
		void OnClickedPhotoLikeBtn__DelegateSignature(TArray<int32_t>* outLikeCountList, TArray<bool>* outLikeBtnEnbaleList);
		void OnSendAdventureCard__DelegateSignature();
		void OnUpdateBlackList__DelegateSignature();
		void OnSendLikeEvent__DelegateSignature();
		void OnTravel__DelegateSignature();
		void OnDestructForPlayerList__DelegateSignature(const struct FPlayerProfileMenuDetailData& Data, bool AnyClose);
		void OnNotificationBlackListed__DelegateSignature();
		void RemoveBlackList__DelegateSignature();
		void RequestTransitionMenu__DelegateSignature(const class FString& MenuType);
		void OnDestruct__DelegateSignature(const struct FPlayerProfileMenuDetailData& Data);
		void OnRequestDirectChat__DelegateSignature();
		void AddBlackList__DelegateSignature(const struct FPlayerProfileMenuDetailData& ProfileData);
		void UpdateFollowData__DelegateSignature(const struct FPlayerProfileMenuDetailData& DetailData, bool IsUnFollow);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
