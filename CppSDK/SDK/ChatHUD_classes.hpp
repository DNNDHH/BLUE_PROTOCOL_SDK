#pragma once

 

// Package: ChatHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Slate_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "E_ChatWindowChatType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatHUD.ChatHUD_C
// 0x0198 (0x0410 - 0x0278)
class UChatHUD_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BtnChatSetting;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  ButtonFullScreen_OtherPClist;                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  ButtonFullScreen_UnreadNotifySettingWindow;        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_1;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_ChatSettingWindow;                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   ChatLog01;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   ChatLog02;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ChatLogWindow_C*                   ChatLog03;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ChatWindow_C*                      ChatWindow;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                DropHitBG;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEmotionMenu_C*                         EmotionMenu;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_54;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_1;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMouseCursorModeIcon_C*                 MouseCursorModeIcon;                               // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOtherPCList_C*                         OtherPCList;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ResetLayoutButton;                                 // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 ShowTutorialHelpBtn;                               // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBg;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           TitleGrp;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUMG_ChatLogWindow_C*>           ChatLogs;                                          // 0x0328(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FAnchors>                       InitChatLogsAnchors;                               // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector2D>                      InitChatLogsPos;                                   // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 ChatLogsZOder;                                     // 0x0358(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bCurVisible;                                       // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F70[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector2D>                      InitChatLogsWindowSize;                            // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                              InitStampEmotWindowPos;                            // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               InitStampEmotWindowAnchors;                        // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         InitStampEmotWindowZOder;                          // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                               InitChatWindowAnchors;                             // 0x039C(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FVector2D                              InitChatWindowPos;                                 // 0x03AC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InitChatWindowZOder;                               // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULayoutableHUD_C*                       LayoutableHUD;                                     // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FName>                           TutorialHelpIds;                                   // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTutorialHelpDialogBox_C*               TutorialHelpWidget;                                // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Work;                                              // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMenuMode;                                        // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F71[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_AdminGotoBookmarkWindow_C*         AdminGotoBookmarkWindow;                           // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTutorialHelpDialogBox_C*               TutorialHelpDialogWidget;                          // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFishingHUD_C*                          FishingHUD;                                        // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatSettingWindow_C*                   ChatSettingWindow;                                 // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMouseCursorAcion;                                // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ChatHUD(int32 EntryPoint);
	void ResultClose(class UObject* Sender, class UObject* Param);
	void OnClose_Event_0();
	void OnClosePCList_Event_0();
	void CameraCtrl_Right_Rel();
	void CameraCtrl_Right();
	void CameraCtrl_Left_Rel();
	void CameraCtrl_Left();
	void CameraCtrl_Down_Rel();
	void CameraCtrl_Down();
	void CameraCtrl_Up_Rel();
	void CameraCtrl_Up();
	void OnRequestTutorialHelp(bool CheckUnlock);
	void MouseInteractionRelease();
	void MouseInteraction();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature();
	void OnGameOverDelegate_Event_0();
	void Destruct();
	void OnReceivedMessage(const class USBChatMessage* Message, const struct FSBChatUIMessage& Mess);
	void BndEvt__ResetLayoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnChangeVisibility(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void Init();
	void Construct();
	void OnLogDispTime_event();
	void OnRefreshChatLogs_event();
	void ChatSettingWindow_OnClose_Event();
	void EndChatSettingWindow();
	void BndEvt__ChatHUD_ButtonFullScreen_UnreadNotifySettingWindow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ChatHUD_BtnChatUnreadNotify_ON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void UpdateCursorMode(bool Flag);
	void DelayUpdateMouseCursorIcon();
	void RequestTabClose(ESBChatLogWindowSlot RequestSlot, int32 InFilterType, int32 InDetailFilterType);
	void RequestTabAdd(ESBChatLogWindowSlot RequestSlot);
	void ChatTempLogs_Init();
	void OnClickedClose();
	void RequestDirectChat(const class FString& PlayerId, const class FText& Param_Name, const class FString& CharacterId, ESBPrivilegeType PrivilegeType);
	void OnChatRoomMessageReceived(class USBChatMessage* Message);
	void CloseRequestChatLogs(ESBChatLogWindowSlot SlotType);
	void RequestChatLogAdd(ESBChatLogWindowSlot RequestSlot);
	void OnClosedChatWindow();
	void Construct_Chat();
	void OnChang_ChatMode_Event();
	void Emite_Construct();
	void UnbindAdminCommandCallbeck();
	void Hide_Admin();
	void OpenGotoBookmarkWindow();
	void OnAdminCommandRequest(ESBAdminCommandCallbackRequest Request);
	void Construct_Admin();
	void OnMouseButtonDownByAdminMode();
	void OnCloseAdminWindow();
	void BndEvt__ChatHUD_OtherPCList_K2Node_ComponentBoundEvent_2_OnAllClose__DelegateSignature();
	void OpenCursorModeToOtherPCMenu(class ASBPlayerCharacter* InOtherPC);
	void BndEvt__OtherPCList_K2Node_ComponentBoundEvent_1_EventButtonClicked__DelegateSignature();
	void InputPadButton();
	void BndEvt__ButtonFullScreen_OtherPClist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void KeyShortcut_TabChange();
	void KeyShortcut_PlayerList();
	void KeyShortcut_ChatTypeList();
	void KeyShortcut_Stamp();
	void KeyShortcut_FixedPhrase();
	void KeyShortcut_TextMode();
	void Show();
	void Hide();
	void IsFullChildLogWindows(bool* Ret);
	void AddChatLogWindow(ESBChatLogWindowSlot RequestSlot);
	void AddTab(ESBChatLogWindowSlot RequestSlot);
	void InitChatLogsHUDLayout();
	void LoadHudLayout();
	void SaveLayoutData(class UUserWidget* InWidget);
	void SaveHudLayout();
	void InitChatLogSlots();
	void SetChatLogsWindow(bool InWindow);
	void Refresh_Chat_Logs();
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void SaveLayoutWindowSizeData(class UUserWidget* InWidget);
	void InitStampEmoteHUDLayout();
	void InitChatHUDLayout();
	void LoadStampHisoryData();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ResetAllLayout();
	class UWidget* On_TextSizeComboBox_GenerateWidget_0(const class FString& Item);
	void IsActive(bool* Param_IsActive);
	void ForceClose();
	void UpdateMouseCursorIcon();
	void CheckReceivedMessageSound(ESBChatLogType LogType, bool IsCloseArea, bool* Result);
	void CheckLogWindowFilter(ESBChatLogType LogType, ESBChatLogWindowSlot NewParam, bool* Result);
	void UpdateUnread();
	void Get_Log_Window_Visible_Status_List(TArray<bool>* IsVisibleStatusList);
	void SetFishHUD(class UFishingHUD_C* HUD);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatHUD_C">();
	}
	static class UChatHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatHUD_C>();
	}
};
static_assert(alignof(UChatHUD_C) == 0x000008, "Wrong alignment on UChatHUD_C");
static_assert(sizeof(UChatHUD_C) == 0x000410, "Wrong size on UChatHUD_C");
static_assert(offsetof(UChatHUD_C, UberGraphFrame) == 0x000278, "Member 'UChatHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, BtnChatSetting) == 0x000280, "Member 'UChatHUD_C::BtnChatSetting' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, ButtonFullScreen_OtherPClist) == 0x000288, "Member 'UChatHUD_C::ButtonFullScreen_OtherPClist' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, ButtonFullScreen_UnreadNotifySettingWindow) == 0x000290, "Member 'UChatHUD_C::ButtonFullScreen_UnreadNotifySettingWindow' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, CanvasPanel_1) == 0x000298, "Member 'UChatHUD_C::CanvasPanel_1' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, CanvasPanel_ChatSettingWindow) == 0x0002A0, "Member 'UChatHUD_C::CanvasPanel_ChatSettingWindow' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, ChatLog01) == 0x0002A8, "Member 'UChatHUD_C::ChatLog01' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, ChatLog02) == 0x0002B0, "Member 'UChatHUD_C::ChatLog02' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, ChatLog03) == 0x0002B8, "Member 'UChatHUD_C::ChatLog03' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, ChatWindow) == 0x0002C0, "Member 'UChatHUD_C::ChatWindow' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, CmnBack01) == 0x0002C8, "Member 'UChatHUD_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, DropHitBG) == 0x0002D0, "Member 'UChatHUD_C::DropHitBG' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, EmotionMenu) == 0x0002D8, "Member 'UChatHUD_C::EmotionMenu' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, Image_54) == 0x0002E0, "Member 'UChatHUD_C::Image_54' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, Label) == 0x0002E8, "Member 'UChatHUD_C::Label' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, Label_1) == 0x0002F0, "Member 'UChatHUD_C::Label_1' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, MouseCursorModeIcon) == 0x0002F8, "Member 'UChatHUD_C::MouseCursorModeIcon' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, OtherPCList) == 0x000300, "Member 'UChatHUD_C::OtherPCList' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, ResetLayoutButton) == 0x000308, "Member 'UChatHUD_C::ResetLayoutButton' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, ShowTutorialHelpBtn) == 0x000310, "Member 'UChatHUD_C::ShowTutorialHelpBtn' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, TitleBg) == 0x000318, "Member 'UChatHUD_C::TitleBg' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, TitleGrp) == 0x000320, "Member 'UChatHUD_C::TitleGrp' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, ChatLogs) == 0x000328, "Member 'UChatHUD_C::ChatLogs' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, InitChatLogsAnchors) == 0x000338, "Member 'UChatHUD_C::InitChatLogsAnchors' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, InitChatLogsPos) == 0x000348, "Member 'UChatHUD_C::InitChatLogsPos' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, ChatLogsZOder) == 0x000358, "Member 'UChatHUD_C::ChatLogsZOder' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, bCurVisible) == 0x000368, "Member 'UChatHUD_C::bCurVisible' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, InitChatLogsWindowSize) == 0x000370, "Member 'UChatHUD_C::InitChatLogsWindowSize' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, InitStampEmotWindowPos) == 0x000380, "Member 'UChatHUD_C::InitStampEmotWindowPos' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, InitStampEmotWindowAnchors) == 0x000388, "Member 'UChatHUD_C::InitStampEmotWindowAnchors' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, InitStampEmotWindowZOder) == 0x000398, "Member 'UChatHUD_C::InitStampEmotWindowZOder' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, InitChatWindowAnchors) == 0x00039C, "Member 'UChatHUD_C::InitChatWindowAnchors' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, InitChatWindowPos) == 0x0003AC, "Member 'UChatHUD_C::InitChatWindowPos' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, InitChatWindowZOder) == 0x0003B4, "Member 'UChatHUD_C::InitChatWindowZOder' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, LayoutableHUD) == 0x0003B8, "Member 'UChatHUD_C::LayoutableHUD' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, TutorialHelpIds) == 0x0003C0, "Member 'UChatHUD_C::TutorialHelpIds' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, TutorialHelpWidget) == 0x0003D0, "Member 'UChatHUD_C::TutorialHelpWidget' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, Work) == 0x0003D8, "Member 'UChatHUD_C::Work' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, IsMenuMode) == 0x0003E0, "Member 'UChatHUD_C::IsMenuMode' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, AdminGotoBookmarkWindow) == 0x0003E8, "Member 'UChatHUD_C::AdminGotoBookmarkWindow' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, TutorialHelpDialogWidget) == 0x0003F0, "Member 'UChatHUD_C::TutorialHelpDialogWidget' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, FishingHUD) == 0x0003F8, "Member 'UChatHUD_C::FishingHUD' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, ChatSettingWindow) == 0x000400, "Member 'UChatHUD_C::ChatSettingWindow' has a wrong offset!");
static_assert(offsetof(UChatHUD_C, IsMouseCursorAcion) == 0x000408, "Member 'UChatHUD_C::IsMouseCursorAcion' has a wrong offset!");

}

