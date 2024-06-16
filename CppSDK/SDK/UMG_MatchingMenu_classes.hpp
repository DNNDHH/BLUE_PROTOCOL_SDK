#pragma once

 

// Package: UMG_MatchingMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu.UMG_MatchingMenu_C
// 0x0078 (0x0328 - 0x02B0)
class UUMG_MatchingMenu_C final : public USBMatchingMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnmOut;                                            // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnmIn;                                             // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UContentsJingle_C*                      ContentsJingle;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Main_C*               MainWindow;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_AfterApplying_C*      UMG_MatchingMenu_AfterApplying;                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bFromMainMenu;                                     // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_7A01[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   InitDungeonId;                                     // 0x02FC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_7A02[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnMatchingStart_Success;                           // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUMG_ProductDetailMenu_C*               ProductDetailMenu;                                 // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ResetIsDone;                                       // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature(class UUMG_MatchingMenu_C* Sender);
	void OnMatchingStart_Success__DelegateSignature();
	void ExecuteUbergraph_UMG_MatchingMenu(int32 EntryPoint);
	void ForceExitMenu();
	void BndEvt__UMG_MatchingMenu_MainWindow_K2Node_ComponentBoundEvent_3_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
	void OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender);
	void BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_1_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
	void WidgetAnimationEvt_AnmOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_4_OnCancel__DelegateSignature();
	void BndEvt__UMG_MatchingMenu_UMG_MatchingMenu_AfterApplying_K2Node_ComponentBoundEvent_2_OnClose__DelegateSignature();
	void OnUICancel_Event();
	void OnMatchedGameCloseWindow_Event();
	void OnMatchedGame_Event(class USBMatchingGameState* MatchedGame);
	void ResetWindowState();
	void Destruct();
	void BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_46_OnStartMatchmaking__DelegateSignature(TArray<struct FSBMapInfo>& DungeonMapInfoArray, bool bUnlimit);
	void BndEvt__MatchingMenuMain_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
	void Construct();
	void SetWindowState();
	class UWidget* GetCurrentWidget();
	void OnClickSupplyIcon(const struct FSBDungeonSupply& DungeonSupply);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_C">();
	}
	static class UUMG_MatchingMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_C");
static_assert(sizeof(UUMG_MatchingMenu_C) == 0x000328, "Wrong size on UUMG_MatchingMenu_C");
static_assert(offsetof(UUMG_MatchingMenu_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_MatchingMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_C, AnmOut) == 0x0002B8, "Member 'UUMG_MatchingMenu_C::AnmOut' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_C, AnmIn) == 0x0002C0, "Member 'UUMG_MatchingMenu_C::AnmIn' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_C, CanvasPanel_0) == 0x0002C8, "Member 'UUMG_MatchingMenu_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_C, ContentsJingle) == 0x0002D0, "Member 'UUMG_MatchingMenu_C::ContentsJingle' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_C, MainWindow) == 0x0002D8, "Member 'UUMG_MatchingMenu_C::MainWindow' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_C, UMG_MatchingMenu_AfterApplying) == 0x0002E0, "Member 'UUMG_MatchingMenu_C::UMG_MatchingMenu_AfterApplying' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_C, OnClose) == 0x0002E8, "Member 'UUMG_MatchingMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_C, bFromMainMenu) == 0x0002F8, "Member 'UUMG_MatchingMenu_C::bFromMainMenu' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_C, InitDungeonId) == 0x0002FC, "Member 'UUMG_MatchingMenu_C::InitDungeonId' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_C, OnMatchingStart_Success) == 0x000308, "Member 'UUMG_MatchingMenu_C::OnMatchingStart_Success' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_C, ProductDetailMenu) == 0x000318, "Member 'UUMG_MatchingMenu_C::ProductDetailMenu' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_C, ResetIsDone) == 0x000320, "Member 'UUMG_MatchingMenu_C::ResetIsDone' has a wrong offset!");

}

