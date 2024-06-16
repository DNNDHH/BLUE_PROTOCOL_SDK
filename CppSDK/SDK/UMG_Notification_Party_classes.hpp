#pragma once

 

// Package: UMG_Notification_Party

#include "Basic.hpp"

#include "E_NotificationPartyStatus_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_Notification_Party.UMG_Notification_Party_C
// 0x05E0 (0x0858 - 0x0278)
class UUMG_Notification_Party_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimPush;                                          // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg1_2;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg2_ChannelMigrationCount;                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg2_InviteCount;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CircleGauge_LeaveParty;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CircleGauge_Off;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CircleGauge_Push;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GaugeBg_LeaveParty;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GaugeBg_Off;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GaugeBg_Push;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_84;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Simplycity;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNotificatin_BrightAnim_C*              Notificatin_BrightAnim;                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchParty;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtChannelMigration;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtChannelMigrationAnswerCount;                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtInvitation;                                     // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtInviteReceivedCount;                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtSimplycityOn;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtSimplycityOn_LeaveParty;                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtSimplycityOn_Push;                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNotification_DotAnim_C*                UMG_Notification_DotAnim;                          // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_197;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Bg;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CE8[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   KeyConfigText;                                     // 0x0360(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsMouseMode;                                       // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CE9[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   KeyConfigTextBlank;                                // 0x0380(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   TxtConvocationCopy;                                // 0x0398(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   TxtInvitationCopy;                                 // 0x03B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBPartyGameStateGeneral*               CurrentPartyGameStateGeneral;                      // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    SBPlayerController;                                // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   InvitePlayerName;                                  // 0x03D8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUMG_MultipleSelectDialog_C*            MultiDialog;                                       // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPlayerProfileMenuDetailData           InvitePlayerProfile;                               // 0x03F8(0x03F8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsFavoritePlayer;                                  // 0x07F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CEA[0x7];                                     // 0x07F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayerProfile_C*                       PlayerProfileWidget;                               // 0x07F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ChannelMigrationAnswerRemainTime;                  // 0x0800(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EickDeltaTime;                                     // 0x0804(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           PartyMigrationAnswerDialog;                        // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Migration_Response_Code;                           // 0x0810(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CEB[0x4];                                     // 0x0814(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         PlayerState;                                       // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_NotificationPartyStatus                     StatusData;                                        // 0x0820(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CEC[0x7];                                     // 0x0821(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               GaugeMatOn;                                        // 0x0828(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMatOff;                                       // 0x0830(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPush;                                            // 0x0838(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CED[0x7];                                     // 0x0839(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               GaugeMatLeave;                                     // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StopPush;                                          // 0x0848(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CEE[0x7];                                     // 0x0849(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBDialog*                              YesNoDialog;                                       // 0x0850(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_Notification_Party(int32 EntryPoint);
	void OnPartyMemberUpdate_Event();
	void GetResultSimplycityPartyStateChangeDialog(const EYesNoDialogResult Result);
	void CloseSimplycityPartyStateChangeDialog();
	void SimplycityPartyStateChange_OnMatching();
	void PartyUpdate(E_NotificationPartyStatus Status);
	void OnJoinInviteParty_Event();
	void OnPartyInviteReceived_Event();
	void OnChangeInvitePartyConvocationDelagateDialogResult(EDialogResult Result);
	void DialogEndCheck();
	void Construct();
	void Destruct();
	void OnChangeInvitePartyConvocationDelegate_Event(bool bCanceled, int32 MigrationResponseCode);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CloseMigrationAnswerDialog();
	void PartyMigrationAnswer_Event(EDialogResult Result);
	void OpenMigrationAnswerDialog();
	void OpenProfile();
	void OpenNotificationDialog();
	void CloseDialog();
	void OnResponsedGetPlayerProfile(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void OnDestruct_Event(const struct FPlayerProfileMenuDetailData& RetData);
	void OnPartyInviteResponse_Event(bool IsAccept);
	void OnCancelMatching_Dialog_Event(const EYesNoDialogResult Result);
	void OnBtnReserve();
	void OnBtnProfile();
	void OnBtnAccept();
	void OnBtnCancel();
	void GetResultMultipleDialog(int32 Result);
	void ChangeKeyGuide();
	void OnUpdateKeyConfig();
	void Init();
	ESlateVisibility Get_InviteReceived_Visibility_0();
	ESlateVisibility Get_JumpConvocation_Visibility_0();
	class FText Get_InviteReceived_CountText_Text_0();
	void GetQuickAccessKeyText();
	void GetOperateMode();
	void SetPartyText(class UTextBlock* OutText, const class FText& BaseText);
	void CanAcceptInvite(bool* bResult);
	void CanCreateInviteMessage(bool* bResult);
	void PartyMigrationAnswerRemainTimeCounter();
	void GetCurrentPartyMemberStateGeneral(class USBPartyMemberStateGeneral** CurrentPartyMemberStateGeneral);
	bool IsOwningPlayerPartyLeader();
	void HideNotification();
	void Can_Open_Party_Member_Migration_Dialog(bool* Result);
	void ResetPartyDialogState();
	void NotificationConvocationMessage();
	float Get_Status_Time();
	void Get_Change_Time(float* Tiem);
	void IsPress(bool* Press);
	void IsPressStatus(bool* Press);
	void MatchStateObserver();
	void IsSimplycityPartyStateChangeBase(bool* bResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_Notification_Party_C">();
	}
	static class UUMG_Notification_Party_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_Notification_Party_C>();
	}
};
static_assert(alignof(UUMG_Notification_Party_C) == 0x000008, "Wrong alignment on UUMG_Notification_Party_C");
static_assert(sizeof(UUMG_Notification_Party_C) == 0x000858, "Wrong size on UUMG_Notification_Party_C");
static_assert(offsetof(UUMG_Notification_Party_C, UberGraphFrame) == 0x000278, "Member 'UUMG_Notification_Party_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, AnimPush) == 0x000280, "Member 'UUMG_Notification_Party_C::AnimPush' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, AnimIn) == 0x000288, "Member 'UUMG_Notification_Party_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, Bg1) == 0x000290, "Member 'UUMG_Notification_Party_C::Bg1' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, Bg1_2) == 0x000298, "Member 'UUMG_Notification_Party_C::Bg1_2' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, Bg2_ChannelMigrationCount) == 0x0002A0, "Member 'UUMG_Notification_Party_C::Bg2_ChannelMigrationCount' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, Bg2_InviteCount) == 0x0002A8, "Member 'UUMG_Notification_Party_C::Bg2_InviteCount' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, CircleGauge_LeaveParty) == 0x0002B0, "Member 'UUMG_Notification_Party_C::CircleGauge_LeaveParty' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, CircleGauge_Off) == 0x0002B8, "Member 'UUMG_Notification_Party_C::CircleGauge_Off' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, CircleGauge_Push) == 0x0002C0, "Member 'UUMG_Notification_Party_C::CircleGauge_Push' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, GaugeBg_LeaveParty) == 0x0002C8, "Member 'UUMG_Notification_Party_C::GaugeBg_LeaveParty' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, GaugeBg_Off) == 0x0002D0, "Member 'UUMG_Notification_Party_C::GaugeBg_Off' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, GaugeBg_Push) == 0x0002D8, "Member 'UUMG_Notification_Party_C::GaugeBg_Push' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, Image) == 0x0002E0, "Member 'UUMG_Notification_Party_C::Image' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, Image_84) == 0x0002E8, "Member 'UUMG_Notification_Party_C::Image_84' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, Image_Simplycity) == 0x0002F0, "Member 'UUMG_Notification_Party_C::Image_Simplycity' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, Notificatin_BrightAnim) == 0x0002F8, "Member 'UUMG_Notification_Party_C::Notificatin_BrightAnim' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, SwitchParty) == 0x000300, "Member 'UUMG_Notification_Party_C::SwitchParty' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, TxtChannelMigration) == 0x000308, "Member 'UUMG_Notification_Party_C::TxtChannelMigration' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, TxtChannelMigrationAnswerCount) == 0x000310, "Member 'UUMG_Notification_Party_C::TxtChannelMigrationAnswerCount' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, TxtInvitation) == 0x000318, "Member 'UUMG_Notification_Party_C::TxtInvitation' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, TxtInviteReceivedCount) == 0x000320, "Member 'UUMG_Notification_Party_C::TxtInviteReceivedCount' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, TxtSimplycityOn) == 0x000328, "Member 'UUMG_Notification_Party_C::TxtSimplycityOn' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, TxtSimplycityOn_LeaveParty) == 0x000330, "Member 'UUMG_Notification_Party_C::TxtSimplycityOn_LeaveParty' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, TxtSimplycityOn_Push) == 0x000338, "Member 'UUMG_Notification_Party_C::TxtSimplycityOn_Push' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, UMG_Notification_DotAnim) == 0x000340, "Member 'UUMG_Notification_Party_C::UMG_Notification_DotAnim' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, WidgetSwitcher_197) == 0x000348, "Member 'UUMG_Notification_Party_C::WidgetSwitcher_197' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, WidgetSwitcher_Bg) == 0x000350, "Member 'UUMG_Notification_Party_C::WidgetSwitcher_Bg' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, bVisible) == 0x000358, "Member 'UUMG_Notification_Party_C::bVisible' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, KeyConfigText) == 0x000360, "Member 'UUMG_Notification_Party_C::KeyConfigText' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, IsMouseMode) == 0x000378, "Member 'UUMG_Notification_Party_C::IsMouseMode' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, KeyConfigTextBlank) == 0x000380, "Member 'UUMG_Notification_Party_C::KeyConfigTextBlank' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, TxtConvocationCopy) == 0x000398, "Member 'UUMG_Notification_Party_C::TxtConvocationCopy' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, TxtInvitationCopy) == 0x0003B0, "Member 'UUMG_Notification_Party_C::TxtInvitationCopy' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, CurrentPartyGameStateGeneral) == 0x0003C8, "Member 'UUMG_Notification_Party_C::CurrentPartyGameStateGeneral' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, SBPlayerController) == 0x0003D0, "Member 'UUMG_Notification_Party_C::SBPlayerController' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, InvitePlayerName) == 0x0003D8, "Member 'UUMG_Notification_Party_C::InvitePlayerName' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, MultiDialog) == 0x0003F0, "Member 'UUMG_Notification_Party_C::MultiDialog' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, InvitePlayerProfile) == 0x0003F8, "Member 'UUMG_Notification_Party_C::InvitePlayerProfile' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, IsFavoritePlayer) == 0x0007F0, "Member 'UUMG_Notification_Party_C::IsFavoritePlayer' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, PlayerProfileWidget) == 0x0007F8, "Member 'UUMG_Notification_Party_C::PlayerProfileWidget' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, ChannelMigrationAnswerRemainTime) == 0x000800, "Member 'UUMG_Notification_Party_C::ChannelMigrationAnswerRemainTime' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, EickDeltaTime) == 0x000804, "Member 'UUMG_Notification_Party_C::EickDeltaTime' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, PartyMigrationAnswerDialog) == 0x000808, "Member 'UUMG_Notification_Party_C::PartyMigrationAnswerDialog' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, Migration_Response_Code) == 0x000810, "Member 'UUMG_Notification_Party_C::Migration_Response_Code' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, PlayerState) == 0x000818, "Member 'UUMG_Notification_Party_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, StatusData) == 0x000820, "Member 'UUMG_Notification_Party_C::StatusData' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, GaugeMatOn) == 0x000828, "Member 'UUMG_Notification_Party_C::GaugeMatOn' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, GaugeMatOff) == 0x000830, "Member 'UUMG_Notification_Party_C::GaugeMatOff' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, IsPush) == 0x000838, "Member 'UUMG_Notification_Party_C::IsPush' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, GaugeMatLeave) == 0x000840, "Member 'UUMG_Notification_Party_C::GaugeMatLeave' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, StopPush) == 0x000848, "Member 'UUMG_Notification_Party_C::StopPush' has a wrong offset!");
static_assert(offsetof(UUMG_Notification_Party_C, YesNoDialog) == 0x000850, "Member 'UUMG_Notification_Party_C::YesNoDialog' has a wrong offset!");

}

