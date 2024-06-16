#pragma once

 

// Package: PlayerProfile

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerProfile.PlayerProfile_C
// 0x0D20 (0x0FD0 - 0x02B0)
class UPlayerProfile_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       GuildDetailsAnimOut;                               // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       GuildDetailsAnimIn;                                // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 AdventureCardFrame;                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdventureCardSwitchTab_C*              AdventureCardSwitchTab;                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackGroundColorFrameImg;                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgBlk;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BgGroup;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BgGroup2;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgSdw;                                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnBlackList;                                      // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnCheckGuild;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnClose2;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnClose3;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnDirectChat;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerProfileFollowBtn_C*              BtnFollow;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BtnGroup1;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnInviteGuild;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnPartyInvite;                                    // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnReport;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Comenticon;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CommentGrp;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CommentLabel;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommunicateSettingMenu_FaceBgData_C*   CommunicateSettingMenu_FaceBgData;                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommunicateSettingMenu_HeaderBG_C*     CommunicateSettingMenu_HeaderBG;                   // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommunicateSettingMenu_NameAndAchieve_C* CommunicateSettingMenu_NameAndAchieve;             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommunicateSettingMenu_ShortId_C*      CommunicateSettingMenu_ShortId;                    // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           GuildDetailsPanel;                                 // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MutualFollow;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PartyLeader;                                       // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPhotoViewer_C*                         PhotoViewer;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PhotoViewerPanel;                                  // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerProfileClassList_C*              PlayerProfileClassList;                            // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerProfileLikeBtn_C*                PlayerProfileLikeBtn;                              // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerReport_C*                        PlayerReport;                                      // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PosSetCanvas;                                      // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PosSetCanvas_1;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBtnBlackList;                                  // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBtnCheckGuild;                                 // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBtnDirectChat;                                 // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBtnInviteGuild;                                // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBtnPartyInvite;                                // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBtnReport;                                     // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchParty;                                       // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TensionTagBg;                                      // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTensionTagIcon_C*                      TensionTagIcon;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TensionTagLabel;                                   // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UI_CmnGlowLine1;                                   // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_0;                                       // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsClosingMenu;                                     // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A48[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 CharacterId;                                       // 0x0480(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             UpdateFollowData;                                  // 0x0490(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 CharacterShortId;                                  // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FPlayerProfileMenuDetailData           DetailData;                                        // 0x04B0(0x03F8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsShowPlayerLocationUI;                            // 0x08A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsBlackList;                                       // 0x08A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InitBlackList;                                     // 0x08AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A49[0x5];                                     // 0x08AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             AddBlackList;                                      // 0x08B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 CharacterName;                                     // 0x08C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsJumpCommand;                                     // 0x08D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A4A[0x7];                                     // 0x08D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRequestDirectChat;                               // 0x08D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsActive;                                          // 0x08E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsInviteParty;                                     // 0x08E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          BackGroundVisivirity;                              // 0x08EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6A4B[0x5];                                     // 0x08EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnDestruct;                                        // 0x08F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsCanSendInvite;                                   // 0x0900(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A4C[0x3];                                     // 0x0901(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              BgCaptureImageOffsetUV;                            // 0x0904(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              BgImage;                                           // 0x090C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PositionPattern;                                   // 0x0914(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 TransitionMenu;                                    // 0x0918(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDestructForPlayerList;                           // 0x0928(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             RequestTransitionMenu;                             // 0x0938(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUIBlocker_C*                           FollowWaitBlocker;                                 // 0x0948(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             RemoveBlackList;                                   // 0x0950(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnNotificationBlackListed;                         // 0x0960(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsOffNotice;                                       // 0x0970(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsAnyClose;                                        // 0x0971(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A4D[0x6];                                     // 0x0972(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnTravel;                                          // 0x0978(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 OwnerGameContentId;                                // 0x0988(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 OwnerSessionId;                                    // 0x0998(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 PlayerId;                                          // 0x09A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGuildData                             GuildData;                                         // 0x09B8(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 GuildName;                                         // 0x0A70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 GuildId;                                           // 0x0A80(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UGuildDetails_C*                        GuildDetailsWG;                                    // 0x0A90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhotoViewer_C*                         PhotoViewer_0;                                     // 0x0A98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTensionTagIcon_C*                      TensionTagIcon_320;                                // 0x0AA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Location_Name;                                     // 0x0AA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Zone_Id;                                           // 0x0AB8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Content_Id;                                        // 0x0AC8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         Achievement_Selected;                              // 0x0AD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Online_Status;                                     // 0x0ADC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Adventurer_Rank;                                   // 0x0AE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Total_Power;                                       // 0x0AE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Comment;                                           // 0x0AE8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	ESBClassType                                  Class_Type;                                        // 0x0AF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBTensionTagType                             Tension_Tag;                                       // 0x0AF9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A4E[0x6];                                     // 0x0AFA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FPlayerProfilePhotoTrimmingInfo> PlayerProfileTrimmingInfo;                         // 0x0B00(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsActivedMap;                                      // 0x0B10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Me;                                             // 0x0B11(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Dungeon;                                        // 0x0B12(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Save_Name;                                      // 0x0B13(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Search_Mode;                                    // 0x0B14(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A4F[0x3];                                     // 0x0B15(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Session_Id;                                        // 0x0B18(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Game_Content_Id;                                   // 0x0B28(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Is_Friend;                                         // 0x0B38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Is_Done_Send_Adv_Card;                             // 0x0B39(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Is_Can_Send_Adv_Card;                              // 0x0B3A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCanSendLike;                                     // 0x0B3B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A50[0x4];                                     // 0x0B3C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSendLikeEvent;                                   // 0x0B40(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBPlatformInfo                        Platform_Info;                                     // 0x0B50(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPlayerProfileMenuDetailData           Detail_Data;                                       // 0x0B70(0x03F8)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnUpdateBlackList;                                 // 0x0F68(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsRankingMode;                                     // 0x0F78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsComunicateMode;                                  // 0x0F79(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A51[0x2];                                     // 0x0F7A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Warning;                                           // 0x0F7C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSendAdventureCard;                               // 0x0F80(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 AwardIdList;                                       // 0x0F90(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         AdventureCardFrameId;                              // 0x0FA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CharacterCardFrameId;                              // 0x0FA4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         BackGroundColorId;                                 // 0x0FA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A52[0x4];                                     // 0x0FAC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ProductDetailMenu_C*               ProductDetailMenuWG;                               // 0x0FB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedPhotoLikeBtn;                             // 0x0FB8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Is_UGC;                                            // 0x0FC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Restrict;                                       // 0x0FC9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void UpdateFollowData__DelegateSignature(const struct FPlayerProfileMenuDetailData& Param_DetailData, bool IsUnFollow);
	void AddBlackList__DelegateSignature(const struct FPlayerProfileMenuDetailData& ProfileData);
	void OnRequestDirectChat__DelegateSignature();
	void OnDestruct__DelegateSignature(const struct FPlayerProfileMenuDetailData& Data);
	void RequestTransitionMenu__DelegateSignature(const class FString& MenuType);
	void RemoveBlackList__DelegateSignature();
	void OnNotificationBlackListed__DelegateSignature();
	void OnDestructForPlayerList__DelegateSignature(const struct FPlayerProfileMenuDetailData& Data, bool AnyClose);
	void OnTravel__DelegateSignature();
	void OnSendLikeEvent__DelegateSignature();
	void OnUpdateBlackList__DelegateSignature();
	void OnSendAdventureCard__DelegateSignature();
	void OnClickedPhotoLikeBtn__DelegateSignature(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnbaleList);
	void ExecuteUbergraph_PlayerProfile(int32 EntryPoint);
	void BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_9_OnCliked_PhotoLikeBtn__DelegateSignature(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnableList);
	void ProductDetailMenuCloseEvent(class UUMG_ProductDetailMenu_C* Sender);
	void BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_3_OnClickedEquipList__DelegateSignature(int32 OutItemId, const class FString& OutUniqueId);
	void SetAdventureCardFrame(int32 InItemID);
	void SetBgPattern(int32 InItemID);
	void SetDecoFrame(int32 InItemID, class UImage* InWG);
	void OnCheckBlockStatus(const bool bCheckBlockStatus);
	void RemoveBlackListEvent(bool Condition);
	void AddBlackListEvent(bool Condition);
	void OnClosedFromPlayerReport();
	void CustomEvent_0();
	void BndEvt__BtnInviteGuild_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_GuildDetailsAnimOut_K2Node_WidgetAnimationEvent_0();
	void GuildDetailsClose();
	void PhotoViewerCloseCompleteEvent();
	void BndEvt__PlayerProfile_AdventureCardSwitchTab_K2Node_ComponentBoundEvent_8_OnClickedThumbnail__DelegateSignature();
	void BndEvt__PlayerProfile_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
	void SendLike();
	void Initialize_Guilds();
	void OnGetBlackListDataEvent(const bool bWasSuccessful, const TArray<struct FPlayerProfileSummaryData>& Param_CharacterName, const int32 TotalPageNum, const int32 CurrentPageNum);
	void BndEvt__BtnClose3_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SendFriend(const bool bWasSuccessful, const struct FSendAdventureCardResult& SendAdventureCardResult);
	void Teleport();
	void BndEvt__BtnReport_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
	void OnInvited(const int32 RetCode);
	void OnTeleport_Event(const EYesNoDialogResult Result);
	void OnNotifyBlocked_Event(const bool bWasSuccessful);
	void OnNotificationBlackListedDelegate_Event(const bool bBlackListed, const class FString& SenderId);
	void OnGuildDataArriverd(const int32 RetCode);
	void CloseByQuickAccess();
	void BndEvt__PlayerProfileFollowBtn_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature();
	void BndEvt__BtnDirectChat_K2Node_ComponentBoundEvent_10_EventOnClicked__DelegateSignature();
	void BndEvt__BtnInvite_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature();
	void BndEvt__BtnBlackList_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__BtnClose2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnCloseParentsMenu();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Matched_Cancel_Invite_Dialog_Event(const EYesNoDialogResult Result);
	void OnPress_Cancel();
	void PartyInvite_Dialog_Event(const EYesNoDialogResult Result);
	void OnRemoveBlackListPlayerDelegate_Event(const bool bWasSuccessful);
	void OnAddBlackListPlayerDelegate_Event(const bool bWasSuccessful);
	void BndEvt__BtnCheckGuild_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void BlackListDialogResult(const EYesNoDialogResult Result);
	void Destruct();
	void Construct();
	void OnPress_QuickAccess(ESBKeyConfigAction QuickAccess);
	void UnbindGuildDetailDelegate();
	void OnCompletedGuildEntry_Event(const int32 RetCode);
	void WidgetAnimationEvt_GuildDetailsAnimIn_K2Node_WidgetAnimationEvent_0();
	void OnGetedGuildDetailData_Event(const int32 RetCode, const struct FGuildData& InGuildData);
	void OnLoaded_BE02DCD94EFDE6E554F688BC1FAD60E4(class UObject* Loaded);
	void OnLoaded_43D4BE074FD0F5F77DAF339AD524CE67(class UObject* Loaded);
	void OnLoaded_112687964F2BE7FAB45CE180EB11CC13(class UObject* Loaded);
	void CloseMenu();
	void Init(const struct FPlayerProfileMenuDetailData& Param_DetailData, bool IsFavorite, bool IsMe, bool IsDungeon, bool IsSaveName, bool IsSearchMode);
	void Init_BlackList();
	void UpdateFollow();
	void SetLocationFollowerUIVisible();
	class FText Get_AddBlackListTextLabel_Text_0();
	class FText Get_BlackListButtonText_Text_0();
	ESlateVisibility Get_PartyInviteButton_Visibility_0();
	ESlateVisibility Get_DirectChatButton_Visibility_0();
	bool Get_PartyInviteButton_bIsEnabled_0();
	void SetActivePartyInviteButton();
	void SetActiveDirectChatButton();
	void AllDataButtonDisabled();
	void GetClassLevel(ESBClassType Type, int32 Exp, int32* Level);
	void UpdateClassData(const struct FPlayerProfileMenuDetailData& Data);
	void AddBlocker();
	void RemoveBlocker();
	bool CanSendPartyInvitation();
	void IsInvited(bool* bIsInvited);
	void InitReport();
	void Set_Equip_LIstData();
	void SetPlayerProfileMenuDetailData(const struct FPlayerProfileMenuDetailData& Param_DetailData);
	void InitComment();
	void InitProfileLikeInfo();
	void InitScreenshotInfo();
	void InitPlayerCharacterPositionInfo();
	void InitTensionInfo();
	void InitVisibilityForButtons();
	void InitProfilePartyInfo();
	void InitTeleportBtnInfo();
	void SetBG(class UImage* _____, float InScale, const struct FVector2D& InPosition, class UWidget* Widget, class UTexture2DDynamic* InTexture, class UWidgetSwitcher* InWidgetSwitcher);
	void IsCalledCommandGuildMenu(bool* bResult);
	void Show_Player_Profile_Error_Message(class FName InTextNameId, const int32 InTextID);
	bool Show_Send_Adventure_Card_Error(bool InWasSuccessful, const struct FSendAdventureCardResult& InSendAdventureResult);
	void SetRankingBtn();
	void SetCommunicateBtn(bool Param_IsComunicateMode);
	void BindBlackList();
	void UnbindBlackList();
	void SetActiveGuildInviteButton();
	void IsPlayingMission(bool* Result);
	void SetBtnGroup1Visibility(bool bInIsVisible);
	void IsAbleToTeleport(bool* bResult);
	void UpdatePlayerName();
	void Update_Player_Screenshot();
	void UpdatePlayerComment();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerProfile_C">();
	}
	static class UPlayerProfile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerProfile_C>();
	}
};
static_assert(alignof(UPlayerProfile_C) == 0x000008, "Wrong alignment on UPlayerProfile_C");
static_assert(sizeof(UPlayerProfile_C) == 0x000FD0, "Wrong size on UPlayerProfile_C");
static_assert(offsetof(UPlayerProfile_C, UberGraphFrame) == 0x0002B0, "Member 'UPlayerProfile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, GuildDetailsAnimOut) == 0x0002B8, "Member 'UPlayerProfile_C::GuildDetailsAnimOut' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, GuildDetailsAnimIn) == 0x0002C0, "Member 'UPlayerProfile_C::GuildDetailsAnimIn' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, AnimOut) == 0x0002C8, "Member 'UPlayerProfile_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, AnimIn) == 0x0002D0, "Member 'UPlayerProfile_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, AdventureCardFrame) == 0x0002D8, "Member 'UPlayerProfile_C::AdventureCardFrame' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, AdventureCardSwitchTab) == 0x0002E0, "Member 'UPlayerProfile_C::AdventureCardSwitchTab' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BackGroundColorFrameImg) == 0x0002E8, "Member 'UPlayerProfile_C::BackGroundColorFrameImg' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BgBlk) == 0x0002F0, "Member 'UPlayerProfile_C::BgBlk' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BgGroup) == 0x0002F8, "Member 'UPlayerProfile_C::BgGroup' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BgGroup2) == 0x000300, "Member 'UPlayerProfile_C::BgGroup2' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BgSdw) == 0x000308, "Member 'UPlayerProfile_C::BgSdw' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BtnBlackList) == 0x000310, "Member 'UPlayerProfile_C::BtnBlackList' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BtnCheckGuild) == 0x000318, "Member 'UPlayerProfile_C::BtnCheckGuild' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BtnClose2) == 0x000320, "Member 'UPlayerProfile_C::BtnClose2' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BtnClose3) == 0x000328, "Member 'UPlayerProfile_C::BtnClose3' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BtnDirectChat) == 0x000330, "Member 'UPlayerProfile_C::BtnDirectChat' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BtnFollow) == 0x000338, "Member 'UPlayerProfile_C::BtnFollow' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BtnGroup1) == 0x000340, "Member 'UPlayerProfile_C::BtnGroup1' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BtnInviteGuild) == 0x000348, "Member 'UPlayerProfile_C::BtnInviteGuild' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BtnPartyInvite) == 0x000350, "Member 'UPlayerProfile_C::BtnPartyInvite' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BtnReport) == 0x000358, "Member 'UPlayerProfile_C::BtnReport' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, CanvasPanel) == 0x000360, "Member 'UPlayerProfile_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, CmnClose02) == 0x000368, "Member 'UPlayerProfile_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Comenticon) == 0x000370, "Member 'UPlayerProfile_C::Comenticon' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, CommentGrp) == 0x000378, "Member 'UPlayerProfile_C::CommentGrp' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, CommentLabel) == 0x000380, "Member 'UPlayerProfile_C::CommentLabel' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, CommunicateSettingMenu_FaceBgData) == 0x000388, "Member 'UPlayerProfile_C::CommunicateSettingMenu_FaceBgData' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, CommunicateSettingMenu_HeaderBG) == 0x000390, "Member 'UPlayerProfile_C::CommunicateSettingMenu_HeaderBG' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, CommunicateSettingMenu_NameAndAchieve) == 0x000398, "Member 'UPlayerProfile_C::CommunicateSettingMenu_NameAndAchieve' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, CommunicateSettingMenu_ShortId) == 0x0003A0, "Member 'UPlayerProfile_C::CommunicateSettingMenu_ShortId' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, GuildDetailsPanel) == 0x0003A8, "Member 'UPlayerProfile_C::GuildDetailsPanel' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Image_4) == 0x0003B0, "Member 'UPlayerProfile_C::Image_4' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, MutualFollow) == 0x0003B8, "Member 'UPlayerProfile_C::MutualFollow' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, PartyLeader) == 0x0003C0, "Member 'UPlayerProfile_C::PartyLeader' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, PhotoViewer) == 0x0003C8, "Member 'UPlayerProfile_C::PhotoViewer' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, PhotoViewerPanel) == 0x0003D0, "Member 'UPlayerProfile_C::PhotoViewerPanel' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, PlayerProfileClassList) == 0x0003D8, "Member 'UPlayerProfile_C::PlayerProfileClassList' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, PlayerProfileLikeBtn) == 0x0003E0, "Member 'UPlayerProfile_C::PlayerProfileLikeBtn' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, PlayerReport) == 0x0003E8, "Member 'UPlayerProfile_C::PlayerReport' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, PosSetCanvas) == 0x0003F0, "Member 'UPlayerProfile_C::PosSetCanvas' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, PosSetCanvas_1) == 0x0003F8, "Member 'UPlayerProfile_C::PosSetCanvas_1' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, SizeBtnBlackList) == 0x000400, "Member 'UPlayerProfile_C::SizeBtnBlackList' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, SizeBtnCheckGuild) == 0x000408, "Member 'UPlayerProfile_C::SizeBtnCheckGuild' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, SizeBtnDirectChat) == 0x000410, "Member 'UPlayerProfile_C::SizeBtnDirectChat' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, SizeBtnInviteGuild) == 0x000418, "Member 'UPlayerProfile_C::SizeBtnInviteGuild' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, SizeBtnPartyInvite) == 0x000420, "Member 'UPlayerProfile_C::SizeBtnPartyInvite' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, SizeBtnReport) == 0x000428, "Member 'UPlayerProfile_C::SizeBtnReport' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, SwitchParty) == 0x000430, "Member 'UPlayerProfile_C::SwitchParty' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, TensionTagBg) == 0x000438, "Member 'UPlayerProfile_C::TensionTagBg' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, TensionTagIcon) == 0x000440, "Member 'UPlayerProfile_C::TensionTagIcon' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, TensionTagLabel) == 0x000448, "Member 'UPlayerProfile_C::TensionTagLabel' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, UI_CmnGlowLine1) == 0x000450, "Member 'UPlayerProfile_C::UI_CmnGlowLine1' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, UIBlocker) == 0x000458, "Member 'UPlayerProfile_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, UIBlocker_0) == 0x000460, "Member 'UPlayerProfile_C::UIBlocker_0' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsClosingMenu) == 0x000468, "Member 'UPlayerProfile_C::IsClosingMenu' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, OnClose) == 0x000470, "Member 'UPlayerProfile_C::OnClose' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, CharacterId) == 0x000480, "Member 'UPlayerProfile_C::CharacterId' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, UpdateFollowData) == 0x000490, "Member 'UPlayerProfile_C::UpdateFollowData' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, CharacterShortId) == 0x0004A0, "Member 'UPlayerProfile_C::CharacterShortId' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, DetailData) == 0x0004B0, "Member 'UPlayerProfile_C::DetailData' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsShowPlayerLocationUI) == 0x0008A8, "Member 'UPlayerProfile_C::IsShowPlayerLocationUI' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsBlackList) == 0x0008A9, "Member 'UPlayerProfile_C::IsBlackList' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, InitBlackList) == 0x0008AA, "Member 'UPlayerProfile_C::InitBlackList' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, AddBlackList) == 0x0008B0, "Member 'UPlayerProfile_C::AddBlackList' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, CharacterName) == 0x0008C0, "Member 'UPlayerProfile_C::CharacterName' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsJumpCommand) == 0x0008D0, "Member 'UPlayerProfile_C::IsJumpCommand' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, OnRequestDirectChat) == 0x0008D8, "Member 'UPlayerProfile_C::OnRequestDirectChat' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsActive) == 0x0008E8, "Member 'UPlayerProfile_C::IsActive' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsInviteParty) == 0x0008E9, "Member 'UPlayerProfile_C::IsInviteParty' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BackGroundVisivirity) == 0x0008EA, "Member 'UPlayerProfile_C::BackGroundVisivirity' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, OnDestruct) == 0x0008F0, "Member 'UPlayerProfile_C::OnDestruct' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsCanSendInvite) == 0x000900, "Member 'UPlayerProfile_C::IsCanSendInvite' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BgCaptureImageOffsetUV) == 0x000904, "Member 'UPlayerProfile_C::BgCaptureImageOffsetUV' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BgImage) == 0x00090C, "Member 'UPlayerProfile_C::BgImage' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, PositionPattern) == 0x000914, "Member 'UPlayerProfile_C::PositionPattern' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, TransitionMenu) == 0x000918, "Member 'UPlayerProfile_C::TransitionMenu' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, OnDestructForPlayerList) == 0x000928, "Member 'UPlayerProfile_C::OnDestructForPlayerList' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, RequestTransitionMenu) == 0x000938, "Member 'UPlayerProfile_C::RequestTransitionMenu' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, FollowWaitBlocker) == 0x000948, "Member 'UPlayerProfile_C::FollowWaitBlocker' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, RemoveBlackList) == 0x000950, "Member 'UPlayerProfile_C::RemoveBlackList' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, OnNotificationBlackListed) == 0x000960, "Member 'UPlayerProfile_C::OnNotificationBlackListed' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsOffNotice) == 0x000970, "Member 'UPlayerProfile_C::IsOffNotice' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsAnyClose) == 0x000971, "Member 'UPlayerProfile_C::IsAnyClose' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, OnTravel) == 0x000978, "Member 'UPlayerProfile_C::OnTravel' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, OwnerGameContentId) == 0x000988, "Member 'UPlayerProfile_C::OwnerGameContentId' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, OwnerSessionId) == 0x000998, "Member 'UPlayerProfile_C::OwnerSessionId' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, PlayerId) == 0x0009A8, "Member 'UPlayerProfile_C::PlayerId' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, GuildData) == 0x0009B8, "Member 'UPlayerProfile_C::GuildData' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, GuildName) == 0x000A70, "Member 'UPlayerProfile_C::GuildName' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, GuildId) == 0x000A80, "Member 'UPlayerProfile_C::GuildId' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, GuildDetailsWG) == 0x000A90, "Member 'UPlayerProfile_C::GuildDetailsWG' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, PhotoViewer_0) == 0x000A98, "Member 'UPlayerProfile_C::PhotoViewer_0' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, TensionTagIcon_320) == 0x000AA0, "Member 'UPlayerProfile_C::TensionTagIcon_320' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Location_Name) == 0x000AA8, "Member 'UPlayerProfile_C::Location_Name' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Zone_Id) == 0x000AB8, "Member 'UPlayerProfile_C::Zone_Id' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Content_Id) == 0x000AC8, "Member 'UPlayerProfile_C::Content_Id' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Achievement_Selected) == 0x000AD8, "Member 'UPlayerProfile_C::Achievement_Selected' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Online_Status) == 0x000ADC, "Member 'UPlayerProfile_C::Online_Status' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Adventurer_Rank) == 0x000AE0, "Member 'UPlayerProfile_C::Adventurer_Rank' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Total_Power) == 0x000AE4, "Member 'UPlayerProfile_C::Total_Power' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Comment) == 0x000AE8, "Member 'UPlayerProfile_C::Comment' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Class_Type) == 0x000AF8, "Member 'UPlayerProfile_C::Class_Type' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Tension_Tag) == 0x000AF9, "Member 'UPlayerProfile_C::Tension_Tag' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, PlayerProfileTrimmingInfo) == 0x000B00, "Member 'UPlayerProfile_C::PlayerProfileTrimmingInfo' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsActivedMap) == 0x000B10, "Member 'UPlayerProfile_C::IsActivedMap' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Is_Me) == 0x000B11, "Member 'UPlayerProfile_C::Is_Me' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Is_Dungeon) == 0x000B12, "Member 'UPlayerProfile_C::Is_Dungeon' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Is_Save_Name) == 0x000B13, "Member 'UPlayerProfile_C::Is_Save_Name' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Is_Search_Mode) == 0x000B14, "Member 'UPlayerProfile_C::Is_Search_Mode' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Session_Id) == 0x000B18, "Member 'UPlayerProfile_C::Session_Id' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Game_Content_Id) == 0x000B28, "Member 'UPlayerProfile_C::Game_Content_Id' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Is_Friend) == 0x000B38, "Member 'UPlayerProfile_C::Is_Friend' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Is_Done_Send_Adv_Card) == 0x000B39, "Member 'UPlayerProfile_C::Is_Done_Send_Adv_Card' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Is_Can_Send_Adv_Card) == 0x000B3A, "Member 'UPlayerProfile_C::Is_Can_Send_Adv_Card' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsCanSendLike) == 0x000B3B, "Member 'UPlayerProfile_C::IsCanSendLike' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, OnSendLikeEvent) == 0x000B40, "Member 'UPlayerProfile_C::OnSendLikeEvent' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Platform_Info) == 0x000B50, "Member 'UPlayerProfile_C::Platform_Info' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Detail_Data) == 0x000B70, "Member 'UPlayerProfile_C::Detail_Data' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, OnUpdateBlackList) == 0x000F68, "Member 'UPlayerProfile_C::OnUpdateBlackList' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsRankingMode) == 0x000F78, "Member 'UPlayerProfile_C::IsRankingMode' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, IsComunicateMode) == 0x000F79, "Member 'UPlayerProfile_C::IsComunicateMode' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Warning) == 0x000F7C, "Member 'UPlayerProfile_C::Warning' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, OnSendAdventureCard) == 0x000F80, "Member 'UPlayerProfile_C::OnSendAdventureCard' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, AwardIdList) == 0x000F90, "Member 'UPlayerProfile_C::AwardIdList' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, AdventureCardFrameId) == 0x000FA0, "Member 'UPlayerProfile_C::AdventureCardFrameId' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, CharacterCardFrameId) == 0x000FA4, "Member 'UPlayerProfile_C::CharacterCardFrameId' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, BackGroundColorId) == 0x000FA8, "Member 'UPlayerProfile_C::BackGroundColorId' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, ProductDetailMenuWG) == 0x000FB0, "Member 'UPlayerProfile_C::ProductDetailMenuWG' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, OnClickedPhotoLikeBtn) == 0x000FB8, "Member 'UPlayerProfile_C::OnClickedPhotoLikeBtn' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Is_UGC) == 0x000FC8, "Member 'UPlayerProfile_C::Is_UGC' has a wrong offset!");
static_assert(offsetof(UPlayerProfile_C, Is_Restrict) == 0x000FC9, "Member 'UPlayerProfile_C::Is_Restrict' has a wrong offset!");

}

