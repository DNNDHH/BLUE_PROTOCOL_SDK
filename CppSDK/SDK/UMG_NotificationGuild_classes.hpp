#pragma once

 

// Package: UMG_NotificationGuild

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_NotificationGuild.UMG_NotificationGuild_C
// 0x0090 (0x0308 - 0x0278)
class UUMG_NotificationGuild_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1_3;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg2;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNotificatin_BrightAnim_C*              Notificatin_BrightAnim;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchGuild;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtInviteReceived;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtInviteReceivedCount;                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNotification_DotAnim_C*                UMG_Notification_DotAnim;                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsShowIn;                                          // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4CD7[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WaitTime;                                          // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WaitCount;                                         // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD8[0x4];                                     // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           TimerHandle;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    SBPlayerController;                                // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_MultipleSelectDialog_C*            MultiDialog;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   InviteGuildText;                                   // 0x02F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_UMG_NotificationGuild(int32 EntryPoint);
	void OnGuildInviteResponse(bool IsAccept);
	void CloseDialog(ENotificationDialogStatus DialogStatus);
	void OnBtnCancel();
	void OnBtnReserve();
	void OnBtnAccept();
	void GetResultMultipleDialog(int32 Result);
	void OpenNotificationDialog();
	void OnTimer();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Disappear();
	void AppearIn();
	void OnInviteArrived_Event();
	void Init();
	void Construct();
	void GetInviteGuildName();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_NotificationGuild_C">();
	}
	static class UUMG_NotificationGuild_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_NotificationGuild_C>();
	}
};
static_assert(alignof(UUMG_NotificationGuild_C) == 0x000008, "Wrong alignment on UUMG_NotificationGuild_C");
static_assert(sizeof(UUMG_NotificationGuild_C) == 0x000308, "Wrong size on UUMG_NotificationGuild_C");
static_assert(offsetof(UUMG_NotificationGuild_C, UberGraphFrame) == 0x000278, "Member 'UUMG_NotificationGuild_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, AnimIn) == 0x000280, "Member 'UUMG_NotificationGuild_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, Bg1_3) == 0x000288, "Member 'UUMG_NotificationGuild_C::Bg1_3' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, Bg2) == 0x000290, "Member 'UUMG_NotificationGuild_C::Bg2' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, Image) == 0x000298, "Member 'UUMG_NotificationGuild_C::Image' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, Notificatin_BrightAnim) == 0x0002A0, "Member 'UUMG_NotificationGuild_C::Notificatin_BrightAnim' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, SwitchGuild) == 0x0002A8, "Member 'UUMG_NotificationGuild_C::SwitchGuild' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, TxtInviteReceived) == 0x0002B0, "Member 'UUMG_NotificationGuild_C::TxtInviteReceived' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, TxtInviteReceivedCount) == 0x0002B8, "Member 'UUMG_NotificationGuild_C::TxtInviteReceivedCount' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, UMG_Notification_DotAnim) == 0x0002C0, "Member 'UUMG_NotificationGuild_C::UMG_Notification_DotAnim' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, IsShowIn) == 0x0002C8, "Member 'UUMG_NotificationGuild_C::IsShowIn' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, WaitTime) == 0x0002CC, "Member 'UUMG_NotificationGuild_C::WaitTime' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, WaitCount) == 0x0002D0, "Member 'UUMG_NotificationGuild_C::WaitCount' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, TimerHandle) == 0x0002D8, "Member 'UUMG_NotificationGuild_C::TimerHandle' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, SBPlayerController) == 0x0002E0, "Member 'UUMG_NotificationGuild_C::SBPlayerController' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, MultiDialog) == 0x0002E8, "Member 'UUMG_NotificationGuild_C::MultiDialog' has a wrong offset!");
static_assert(offsetof(UUMG_NotificationGuild_C, InviteGuildText) == 0x0002F0, "Member 'UUMG_NotificationGuild_C::InviteGuildText' has a wrong offset!");

}

