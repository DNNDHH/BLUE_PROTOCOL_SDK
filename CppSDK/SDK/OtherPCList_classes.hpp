#pragma once

 

// Package: OtherPCList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OtherPCList.OtherPCList_C
// 0x00C8 (0x0378 - 0x02B0)
class UOtherPCList_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimAllClose_5;                                    // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimSlideTabToMenu_4_4B;                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimTabAndMenu_3_3B;                               // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimSlideListToMenu_2_2B;                          // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimSlideTabToList_1_1B;                           // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            BtnPlayerList;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_List;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CursorPoint;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOtherPCListMain_C*                     OtherPCListMain;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PCMenu;                                            // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           RootCanvasPanel;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtKey;                                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsClosingMenu;                                     // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOtherPCMenuOpen;                                 // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E86[0x6];                                     // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             EventButtonClicked;                                // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bListVisible;                                      // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bMenuVisible;                                      // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bAnimeForward;                                     // 0x035A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bMouseCorsorMode;                                  // 0x035B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAllClose;                                        // 0x035C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsDirectChatClose;                                // 0x035D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4E87[0x2];                                     // 0x035E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           MouseCorsorPlayerState;                            // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAllClose;                                        // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();
	void EventButtonClicked__DelegateSignature();
	void OnAllClose__DelegateSignature();
	void ExecuteUbergraph_OtherPCList(int32 EntryPoint);
	void Destruct();
	void OnPress_Cancel();
	void OnDirectChatEvent();
	void Close();
	void BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_8_OnListUpdated__DelegateSignature();
	void BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_6_OnClickUpdateButton__DelegateSignature();
	void BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature(class ASBPlayerState* PlayerState, class FName CharacterId);
	void BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void InputPadButton();
	void BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnCloseOtherPCMenu();
	void Open();
	void CloseMenu();
	void SetRootVisibility(bool InVisible);
	void IsRootVisibility(bool* OutVisible);
	void Anime_Tab();
	void Anime_Tab_List();
	void Anime_AllOpen();
	void Anime_Tab_Menu();
	void AllClose();
	void UpdateTabKey();
	void UpdateMouseCursorIcon();
	void OpenCursorModeToOtherPCMenu(class ASBPlayerCharacter* InOtherPC, bool bListUpdate);
	void ClearPCMenu();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OtherPCList_C">();
	}
	static class UOtherPCList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOtherPCList_C>();
	}
};
static_assert(alignof(UOtherPCList_C) == 0x000008, "Wrong alignment on UOtherPCList_C");
static_assert(sizeof(UOtherPCList_C) == 0x000378, "Wrong size on UOtherPCList_C");
static_assert(offsetof(UOtherPCList_C, UberGraphFrame) == 0x0002B0, "Member 'UOtherPCList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, AnimAllClose_5) == 0x0002B8, "Member 'UOtherPCList_C::AnimAllClose_5' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, AnimSlideTabToMenu_4_4B) == 0x0002C0, "Member 'UOtherPCList_C::AnimSlideTabToMenu_4_4B' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, AnimTabAndMenu_3_3B) == 0x0002C8, "Member 'UOtherPCList_C::AnimTabAndMenu_3_3B' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, AnimSlideListToMenu_2_2B) == 0x0002D0, "Member 'UOtherPCList_C::AnimSlideListToMenu_2_2B' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, AnimSlideTabToList_1_1B) == 0x0002D8, "Member 'UOtherPCList_C::AnimSlideTabToList_1_1B' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, AnimOut) == 0x0002E0, "Member 'UOtherPCList_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, AnimIn) == 0x0002E8, "Member 'UOtherPCList_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, BtnPlayerList) == 0x0002F0, "Member 'UOtherPCList_C::BtnPlayerList' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, CanvasPanel_List) == 0x0002F8, "Member 'UOtherPCList_C::CanvasPanel_List' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, CursorPoint) == 0x000300, "Member 'UOtherPCList_C::CursorPoint' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, OtherPCListMain) == 0x000308, "Member 'UOtherPCList_C::OtherPCListMain' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, PCMenu) == 0x000310, "Member 'UOtherPCList_C::PCMenu' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, RootCanvasPanel) == 0x000318, "Member 'UOtherPCList_C::RootCanvasPanel' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, TxtKey) == 0x000320, "Member 'UOtherPCList_C::TxtKey' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, UIBlocker) == 0x000328, "Member 'UOtherPCList_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, OnClose) == 0x000330, "Member 'UOtherPCList_C::OnClose' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, IsClosingMenu) == 0x000340, "Member 'UOtherPCList_C::IsClosingMenu' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, IsOtherPCMenuOpen) == 0x000341, "Member 'UOtherPCList_C::IsOtherPCMenuOpen' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, EventButtonClicked) == 0x000348, "Member 'UOtherPCList_C::EventButtonClicked' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, bListVisible) == 0x000358, "Member 'UOtherPCList_C::bListVisible' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, bMenuVisible) == 0x000359, "Member 'UOtherPCList_C::bMenuVisible' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, bAnimeForward) == 0x00035A, "Member 'UOtherPCList_C::bAnimeForward' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, bMouseCorsorMode) == 0x00035B, "Member 'UOtherPCList_C::bMouseCorsorMode' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, IsAllClose) == 0x00035C, "Member 'UOtherPCList_C::IsAllClose' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, bIsDirectChatClose) == 0x00035D, "Member 'UOtherPCList_C::bIsDirectChatClose' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, MouseCorsorPlayerState) == 0x000360, "Member 'UOtherPCList_C::MouseCorsorPlayerState' has a wrong offset!");
static_assert(offsetof(UOtherPCList_C, OnAllClose) == 0x000368, "Member 'UOtherPCList_C::OnAllClose' has a wrong offset!");

}

