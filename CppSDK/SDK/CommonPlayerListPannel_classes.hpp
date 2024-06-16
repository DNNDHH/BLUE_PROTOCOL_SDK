#pragma once

 

// Package: CommonPlayerListPannel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "PlayerPannelTypeEnum_structs.hpp"
#include "SendLikeErrorStruct_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonPlayerListPannel.CommonPlayerListPannel_C
// 0x1438 (0x16B0 - 0x0278)
class UCommonPlayerListPannel_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ApprovalRemainDayTextLabel;                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Pannel_Normal;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCaptureImageFace_C*                    CaptureImageFace;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIcon;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn20_C*                            CommandButton;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CommentTextLabel;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ConvocationText;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    FriendProgressText;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Manager;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Master;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Submaster;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerProfileLikeBtn_C*                LikeBtn;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOnlineStatusTag_C*                     OnlineStatusTag;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Pannel_Btn_Normal;                                 // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Pannel_Btn_Short;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PlayerNameTextLabel;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URelationshipIconSets_C*                RelationshipIconSets;                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_1;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_ClassLv;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTensionTagIcon_C*                      TensionTagIcon;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLv;                                             // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_CategoryInfo;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_RoleIcons;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WSLong;                                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WSPanel;                                           // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                           ButtonStyle_Long_Select;                           // 0x0348(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           ButtonStyle_Long;                                  // 0x05C0(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bSelected;                                         // 0x0838(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_549B[0x7];                                     // 0x0839(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRequestCancelInvite;                             // 0x0840(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EPlayerPannelTypeEnum                         PlayerPannelMode;                                  // 0x0850(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_549C[0x7];                                     // 0x0851(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileSummaryData              PlayerProfileSummaryData;                          // 0x0858(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FGuildMemberData                       GuildMemberData;                                   // 0x0970(0x00D8)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnRequestPartyMemberButtonClicked;                 // 0x0A48(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBPartyMemberState*                    PartyMemberState;                                  // 0x0A58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRequestFriendButtonClicked;                      // 0x0A60(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequestDirectChat;                               // 0x0A70(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             RequestTransitonMenu;                              // 0x0A80(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequestBlockButtonClicked;                       // 0x0A90(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequestSearchButtonClicked;                      // 0x0AA0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 Player_Id;                                         // 0x0AB0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Character_Id;                                      // 0x0AC0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Blocked;                                           // 0x0AD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_549D[0x7];                                     // 0x0AD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           ResponseWaitUIblocker;                             // 0x0AD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerProfile_C*                       PlayerProfile;                                     // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AdventureCardDoneSend;                             // 0x0AE8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AdventureCardCanBeSend;                            // 0x0AE9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_549E[0x6];                                     // 0x0AEA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FContactListData                       ContactListData;                                   // 0x0AF0(0x00C0)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnRequestConsentButtonClicked;                     // 0x0BB0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequestContactButtonClicked;                     // 0x0BC0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCompleteAdventureCardSend;                       // 0x0BD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequestMailInBoxButtonClicked;                   // 0x0BE0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBTransableCharacterData              TransableCharacterData;                            // 0x0BF0(0x00A8)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnRequestGuildMemberButtonClicked;                 // 0x0C98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ESBClassType                                  ClassType;                                         // 0x0CA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_549F[0x3];                                     // 0x0CA9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ClassLevel;                                        // 0x0CAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 PlayerName;                                        // 0x0CB0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Face_Icon_Url;                                     // 0x0CC0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         Online_Status;                                     // 0x0CD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Left_Day;                                          // 0x0CD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bActive;                                           // 0x0CD8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bFriend;                                           // 0x0CD9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBTensionTagType                             Tension_Tag;                                       // 0x0CDA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54A0[0x5];                                     // 0x0CDB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Comment;                                           // 0x0CE0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsSendLike;                                       // 0x0CF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54A1[0x7];                                     // 0x0CF1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRequestGuildMemberInviteCancel;                  // 0x0CF8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bShortVer;                                         // 0x0D08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_54A2[0x7];                                     // 0x0D09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRequestDungeonPartyMemberButtonClicked;          // 0x0D10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SendLikeEvent;                                     // 0x0D20(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bGuildMemberInviteList;                            // 0x0D30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54A3[0x7];                                     // 0x0D31(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Times_Left;                                        // 0x0D38(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Party_Member;                                      // 0x0D48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Party_Leader;                                      // 0x0D49(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54A4[0x6];                                     // 0x0D4A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FButtonStyle                           ButtonStyle_Short_Select;                          // 0x0D50(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                           ButtonStyle_Short;                                 // 0x0FC8(0x0278)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnPlayerProfileClose;                              // 0x1240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsBtnNormal_1_Hovered;                             // 0x1250(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54A5[0x7];                                     // 0x1251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnUpdateBlackList;                                 // 0x1258(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsAdventureCardSendRequest;                        // 0x1268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsPlayerProfileMode;                              // 0x1269(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_54A6[0x6];                                     // 0x126A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileMenuDetailData           Player_Profile_Detail_Menu_Data;                   // 0x1270(0x03F8)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSendLikeErrorStruct>           OpenAdventureCardError;                            // 0x1668(0x0010)(Edit, BlueprintVisible)
	bool                                          IsBlackList;                                       // 0x1678(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InitBlackList;                                     // 0x1679(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCallBlackList;                                    // 0x167A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsPSOnlyDiff;                                     // 0x167B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         NameOffset;                                        // 0x167C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultNameYPos;                                   // 0x1680(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMailTransFriend;                                 // 0x1684(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_54A7[0x3];                                     // 0x1685(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBPlatformInfo                        PlatformInformation;                               // 0x1688(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsUGC;                                             // 0x16A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Is_Restrict;                                       // 0x16A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnRequestCancelInvite__DelegateSignature(class USBPartyMemberState* MemberState);
	void OnRequestPartyMemberButtonClicked__DelegateSignature(class USBPartyMemberState* MemberState, const struct FPlayerProfileSummaryData& ProfileData);
	void OnRequestFriendButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel);
	void OnRequestDirectChat__DelegateSignature();
	void RequestTransitonMenu__DelegateSignature(const class FString& MenuType);
	void OnRequestBlockButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel);
	void OnRequestSearchButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel);
	void OnRequestConsentButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel);
	void OnRequestContactButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel);
	void OnCompleteAdventureCardSend__DelegateSignature();
	void OnRequestMailInBoxButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel);
	void OnRequestGuildMemberButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel);
	void OnRequestGuildMemberInviteCancel__DelegateSignature();
	void OnRequestDungeonPartyMemberButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel);
	void SendLikeEvent__DelegateSignature();
	void OnPlayerProfileClose__DelegateSignature();
	void OnUpdateBlackList__DelegateSignature();
	void ExecuteUbergraph_CommonPlayerListPannel(int32 EntryPoint);
	void UpdateInfoAll();
	void SetLikeSendPannelMode();
	void OnCheckBlockStatus(const bool bCheckBlockStatus);
	void OnSendAdvCard();
	void OnUpdateBlackListEvent();
	void BndEvt__CommonPlayerListPannel_LikeBtn_K2Node_ComponentBoundEvent_0_BtnEventComplete__DelegateSignature();
	void PlayerProfile_OnClose_Event();
	void OnRequestTransitonMenu(const class FString& MenuType);
	void OnRequestDirectChat_Event();
	void Complete_OpenPlayerProfile_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void OpenPlayerProfile();
	void SetCaptureImageFace(bool Download);
	void SendLike();
	void SetCommonProfileData();
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void Construct();
	void SelectProfileButtonStyle_Event();
	void ClearBlackListButtonStyle_Event();
	void ClearProfileButtonStyle_Event();
	void InitGuildMember();
	void SetGuildMemberPannelMode();
	void OnCharactersAdventurerCardSendDelegate_Event(const bool bWasSuccessful, const struct FSendAdventureCardResult& SendAdventureCardResult);
	void BndEvt__CommonPlayerListPannel_Pannel_Btn_Short_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void SendAdventureCard();
	void BndEvt__CommonPlayerListPannel_CardButton_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__CommonPlayerListPannel_PannelBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnCompleteChangeConvocationDelegate_Event(const bool bConvocation);
	void SetPartyMemberProfileData();
	void SetVisibleConvocation();
	void EnableInviteCommand(bool Enable);
	void SetPartyMemberPannelMode();
	void InitPartyMember();
	void UpdateFriend(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FPlayerProfileSummaryData& NewPlayerProfileSummaryData);
	void SetFriendMemberPannelMode();
	void InitFriend();
	void UpdateSearch(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FPlayerProfileSummaryData& NewPlayerProfileSummaryData);
	void SetGuildMemberData(const struct FGuildMemberData& Param_GuildMemberData, bool Param_bGuildMemberInviteList);
	void SetSearchPlayerPannelMode();
	void InitSearch();
	void UpdateBlock(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FPlayerProfileSummaryData& NewPlayerProfileSummaryData);
	void InitBlock();
	void SetBlockPannelMode();
	void UpdateConsent(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FContactListData& NewContactListData);
	void SetConsentPlayerPannelMode();
	void InitConsent();
	void UpdateContact(EPlayerPannelTypeEnum NewPlayerPannelMode, const struct FContactListData& NewContactListData);
	void SetContactPlayerPannelMode();
	void InitContact();
	void InitLikeSendPlayerList();
	void SetMailInBoxPlayerPannelMode();
	void InitMailInbox();
	void SetSendLikeInfo(bool Param_bIsSendLike);
	bool IsOwnPartyLeader();
	void SetEmpty();
	void SetEnableCommandModeButton(bool InEnable);
	void IsCommandMode(const class FString& InMyCharacterId, bool IsPromoteMember, bool* Result);
	void SetPlayerName();
	void SetFriendIcon();
	void SetFaceImage();
	void SetClassIcon();
	void SetClassLevel();
	void SetComment();
	void SetTensionTagIcon();
	void SetOnlineStateTagInfo();
	void PreSetParty();
	void PreSetFriend();
	void IsSelected(bool* Param_bSelected);
	void PreSetSearch();
	void Set_Profile_Variables();
	void PreSetBlock();
	void TurnOnCommonUI();
	void RefreshPannel();
	void CheckProfileEnable(ESBProfilePublicSettingType PublicSetting, bool IsFriend, bool* IsOk);
	void Set_Like_Btn(bool IsSendLIke, int32 OnlineStatus, bool IsPSOnlyDiff);
	void CreateResponseWaitUIblocker();
	void DeleteResponseWaitUIblocker();
	void PreSetMailInBox();
	void PreSetGuild();
	void SetGuildRoleIcon();
	void SetPannelVersion();
	void PreSetLikeSend();
	void InitLikeBtn();
	void SetPartyIcon();
	void PreSetContact();
	void PreSetConsent();
	void Show_Player_Profile_Error_Message(class FName InTextNameId, int32 InTextID);
	bool ShowSendAdventureCardError(bool InWasSuccessful, const struct FSendAdventureCardResult& InSendAdventureResult);
	void BindPlayerProfile();
	void UnbindPlayerProfile();
	void SetErrorType(int32 InWarning);
	void CheckOpenAdventureCard(int32 InWarning, bool* IsOpen);
	void UpdatePlayerName();
	void UpdatePlayerCommet();
	void UpdatePlayerIcon(bool* Download);
	void Set_Is_PSOnly_Diff(const struct FSBPlatformInfo& Platform_Info);
	void SetFriendProgressText(const struct FDateTime& InProgressDate, bool InExtraVisible);
	void UpdateCommandBtnStatus(bool bIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonPlayerListPannel_C">();
	}
	static class UCommonPlayerListPannel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonPlayerListPannel_C>();
	}
};
static_assert(alignof(UCommonPlayerListPannel_C) == 0x000008, "Wrong alignment on UCommonPlayerListPannel_C");
static_assert(sizeof(UCommonPlayerListPannel_C) == 0x0016B0, "Wrong size on UCommonPlayerListPannel_C");
static_assert(offsetof(UCommonPlayerListPannel_C, UberGraphFrame) == 0x000278, "Member 'UCommonPlayerListPannel_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ApprovalRemainDayTextLabel) == 0x000280, "Member 'UCommonPlayerListPannel_C::ApprovalRemainDayTextLabel' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Border_Pannel_Normal) == 0x000288, "Member 'UCommonPlayerListPannel_C::Border_Pannel_Normal' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, CaptureImageFace) == 0x000290, "Member 'UCommonPlayerListPannel_C::CaptureImageFace' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ClassIcon) == 0x000298, "Member 'UCommonPlayerListPannel_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, CommandButton) == 0x0002A0, "Member 'UCommonPlayerListPannel_C::CommandButton' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, CommentTextLabel) == 0x0002A8, "Member 'UCommonPlayerListPannel_C::CommentTextLabel' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ConvocationText) == 0x0002B0, "Member 'UCommonPlayerListPannel_C::ConvocationText' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, FriendProgressText) == 0x0002B8, "Member 'UCommonPlayerListPannel_C::FriendProgressText' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Img_Manager) == 0x0002C0, "Member 'UCommonPlayerListPannel_C::Img_Manager' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Img_Master) == 0x0002C8, "Member 'UCommonPlayerListPannel_C::Img_Master' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Img_Submaster) == 0x0002D0, "Member 'UCommonPlayerListPannel_C::Img_Submaster' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, LikeBtn) == 0x0002D8, "Member 'UCommonPlayerListPannel_C::LikeBtn' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnlineStatusTag) == 0x0002E0, "Member 'UCommonPlayerListPannel_C::OnlineStatusTag' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Pannel_Btn_Normal) == 0x0002E8, "Member 'UCommonPlayerListPannel_C::Pannel_Btn_Normal' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Pannel_Btn_Short) == 0x0002F0, "Member 'UCommonPlayerListPannel_C::Pannel_Btn_Short' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, PlayerNameTextLabel) == 0x0002F8, "Member 'UCommonPlayerListPannel_C::PlayerNameTextLabel' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, RelationshipIconSets) == 0x000300, "Member 'UCommonPlayerListPannel_C::RelationshipIconSets' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ScaleBox_1) == 0x000308, "Member 'UCommonPlayerListPannel_C::ScaleBox_1' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ScaleBox_ClassLv) == 0x000310, "Member 'UCommonPlayerListPannel_C::ScaleBox_ClassLv' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, TensionTagIcon) == 0x000318, "Member 'UCommonPlayerListPannel_C::TensionTagIcon' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, TxtLv) == 0x000320, "Member 'UCommonPlayerListPannel_C::TxtLv' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, WS_CategoryInfo) == 0x000328, "Member 'UCommonPlayerListPannel_C::WS_CategoryInfo' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, WS_RoleIcons) == 0x000330, "Member 'UCommonPlayerListPannel_C::WS_RoleIcons' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, WSLong) == 0x000338, "Member 'UCommonPlayerListPannel_C::WSLong' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, WSPanel) == 0x000340, "Member 'UCommonPlayerListPannel_C::WSPanel' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ButtonStyle_Long_Select) == 0x000348, "Member 'UCommonPlayerListPannel_C::ButtonStyle_Long_Select' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ButtonStyle_Long) == 0x0005C0, "Member 'UCommonPlayerListPannel_C::ButtonStyle_Long' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, bSelected) == 0x000838, "Member 'UCommonPlayerListPannel_C::bSelected' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnRequestCancelInvite) == 0x000840, "Member 'UCommonPlayerListPannel_C::OnRequestCancelInvite' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, PlayerPannelMode) == 0x000850, "Member 'UCommonPlayerListPannel_C::PlayerPannelMode' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, PlayerProfileSummaryData) == 0x000858, "Member 'UCommonPlayerListPannel_C::PlayerProfileSummaryData' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, GuildMemberData) == 0x000970, "Member 'UCommonPlayerListPannel_C::GuildMemberData' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnRequestPartyMemberButtonClicked) == 0x000A48, "Member 'UCommonPlayerListPannel_C::OnRequestPartyMemberButtonClicked' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, PartyMemberState) == 0x000A58, "Member 'UCommonPlayerListPannel_C::PartyMemberState' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnRequestFriendButtonClicked) == 0x000A60, "Member 'UCommonPlayerListPannel_C::OnRequestFriendButtonClicked' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnRequestDirectChat) == 0x000A70, "Member 'UCommonPlayerListPannel_C::OnRequestDirectChat' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, RequestTransitonMenu) == 0x000A80, "Member 'UCommonPlayerListPannel_C::RequestTransitonMenu' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnRequestBlockButtonClicked) == 0x000A90, "Member 'UCommonPlayerListPannel_C::OnRequestBlockButtonClicked' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnRequestSearchButtonClicked) == 0x000AA0, "Member 'UCommonPlayerListPannel_C::OnRequestSearchButtonClicked' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Player_Id) == 0x000AB0, "Member 'UCommonPlayerListPannel_C::Player_Id' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Character_Id) == 0x000AC0, "Member 'UCommonPlayerListPannel_C::Character_Id' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Blocked) == 0x000AD0, "Member 'UCommonPlayerListPannel_C::Blocked' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ResponseWaitUIblocker) == 0x000AD8, "Member 'UCommonPlayerListPannel_C::ResponseWaitUIblocker' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, PlayerProfile) == 0x000AE0, "Member 'UCommonPlayerListPannel_C::PlayerProfile' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, AdventureCardDoneSend) == 0x000AE8, "Member 'UCommonPlayerListPannel_C::AdventureCardDoneSend' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, AdventureCardCanBeSend) == 0x000AE9, "Member 'UCommonPlayerListPannel_C::AdventureCardCanBeSend' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ContactListData) == 0x000AF0, "Member 'UCommonPlayerListPannel_C::ContactListData' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnRequestConsentButtonClicked) == 0x000BB0, "Member 'UCommonPlayerListPannel_C::OnRequestConsentButtonClicked' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnRequestContactButtonClicked) == 0x000BC0, "Member 'UCommonPlayerListPannel_C::OnRequestContactButtonClicked' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnCompleteAdventureCardSend) == 0x000BD0, "Member 'UCommonPlayerListPannel_C::OnCompleteAdventureCardSend' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnRequestMailInBoxButtonClicked) == 0x000BE0, "Member 'UCommonPlayerListPannel_C::OnRequestMailInBoxButtonClicked' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, TransableCharacterData) == 0x000BF0, "Member 'UCommonPlayerListPannel_C::TransableCharacterData' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnRequestGuildMemberButtonClicked) == 0x000C98, "Member 'UCommonPlayerListPannel_C::OnRequestGuildMemberButtonClicked' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ClassType) == 0x000CA8, "Member 'UCommonPlayerListPannel_C::ClassType' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ClassLevel) == 0x000CAC, "Member 'UCommonPlayerListPannel_C::ClassLevel' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, PlayerName) == 0x000CB0, "Member 'UCommonPlayerListPannel_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Face_Icon_Url) == 0x000CC0, "Member 'UCommonPlayerListPannel_C::Face_Icon_Url' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Online_Status) == 0x000CD0, "Member 'UCommonPlayerListPannel_C::Online_Status' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Left_Day) == 0x000CD4, "Member 'UCommonPlayerListPannel_C::Left_Day' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, bActive) == 0x000CD8, "Member 'UCommonPlayerListPannel_C::bActive' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, bFriend) == 0x000CD9, "Member 'UCommonPlayerListPannel_C::bFriend' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Tension_Tag) == 0x000CDA, "Member 'UCommonPlayerListPannel_C::Tension_Tag' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Comment) == 0x000CE0, "Member 'UCommonPlayerListPannel_C::Comment' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, bIsSendLike) == 0x000CF0, "Member 'UCommonPlayerListPannel_C::bIsSendLike' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnRequestGuildMemberInviteCancel) == 0x000CF8, "Member 'UCommonPlayerListPannel_C::OnRequestGuildMemberInviteCancel' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, bShortVer) == 0x000D08, "Member 'UCommonPlayerListPannel_C::bShortVer' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnRequestDungeonPartyMemberButtonClicked) == 0x000D10, "Member 'UCommonPlayerListPannel_C::OnRequestDungeonPartyMemberButtonClicked' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, SendLikeEvent) == 0x000D20, "Member 'UCommonPlayerListPannel_C::SendLikeEvent' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, bGuildMemberInviteList) == 0x000D30, "Member 'UCommonPlayerListPannel_C::bGuildMemberInviteList' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Times_Left) == 0x000D38, "Member 'UCommonPlayerListPannel_C::Times_Left' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Party_Member) == 0x000D48, "Member 'UCommonPlayerListPannel_C::Party_Member' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Party_Leader) == 0x000D49, "Member 'UCommonPlayerListPannel_C::Party_Leader' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ButtonStyle_Short_Select) == 0x000D50, "Member 'UCommonPlayerListPannel_C::ButtonStyle_Short_Select' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, ButtonStyle_Short) == 0x000FC8, "Member 'UCommonPlayerListPannel_C::ButtonStyle_Short' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnPlayerProfileClose) == 0x001240, "Member 'UCommonPlayerListPannel_C::OnPlayerProfileClose' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, IsBtnNormal_1_Hovered) == 0x001250, "Member 'UCommonPlayerListPannel_C::IsBtnNormal_1_Hovered' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OnUpdateBlackList) == 0x001258, "Member 'UCommonPlayerListPannel_C::OnUpdateBlackList' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, IsAdventureCardSendRequest) == 0x001268, "Member 'UCommonPlayerListPannel_C::IsAdventureCardSendRequest' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, bIsPlayerProfileMode) == 0x001269, "Member 'UCommonPlayerListPannel_C::bIsPlayerProfileMode' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Player_Profile_Detail_Menu_Data) == 0x001270, "Member 'UCommonPlayerListPannel_C::Player_Profile_Detail_Menu_Data' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, OpenAdventureCardError) == 0x001668, "Member 'UCommonPlayerListPannel_C::OpenAdventureCardError' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, IsBlackList) == 0x001678, "Member 'UCommonPlayerListPannel_C::IsBlackList' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, InitBlackList) == 0x001679, "Member 'UCommonPlayerListPannel_C::InitBlackList' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, bCallBlackList) == 0x00167A, "Member 'UCommonPlayerListPannel_C::bCallBlackList' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, bIsPSOnlyDiff) == 0x00167B, "Member 'UCommonPlayerListPannel_C::bIsPSOnlyDiff' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, NameOffset) == 0x00167C, "Member 'UCommonPlayerListPannel_C::NameOffset' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, DefaultNameYPos) == 0x001680, "Member 'UCommonPlayerListPannel_C::DefaultNameYPos' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, IsMailTransFriend) == 0x001684, "Member 'UCommonPlayerListPannel_C::IsMailTransFriend' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, PlatformInformation) == 0x001688, "Member 'UCommonPlayerListPannel_C::PlatformInformation' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, IsUGC) == 0x0016A8, "Member 'UCommonPlayerListPannel_C::IsUGC' has a wrong offset!");
static_assert(offsetof(UCommonPlayerListPannel_C, Is_Restrict) == 0x0016A9, "Member 'UCommonPlayerListPannel_C::Is_Restrict' has a wrong offset!");

}

