#pragma once

 

// Package: FishingHUD

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FishingHUD.FishingHUD_C
// 0x00D8 (0x0350 - 0x0278)
class UFishingHUD_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HiddenWidgeds;                                     // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                        BackgroundBlur_129;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PlayerName_Layoutable_C*            BP_PlayerName_Layoutable;                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_Objs;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cast;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogWindowTempList_C*               ChatLogWindowTempList;                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFishing_Cast_C*                        Fishing_Cast;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFishing_Result_C*                      Fishing_Result;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFishing_Wait_C*                        Fishing_Wait;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonFullScreen_C_98;                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PartyMemberList_C*                 UMG_PartyMemberList;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Waiting;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   DialogMessage;                                     // 0x02E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_Dialog_C*                           BP_Dialog;                                         // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ExitFishing;                                       // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             Continue;                                          // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   Tutorial_Help_Id;                                  // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FlagFishingGameStopInput;                          // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A16[0x3];                                     // 0x0331(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCursorStateHandle                   CursorHundle;                                      // 0x0334(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsFirst;                                           // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4A17[0x3];                                     // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DebugCounter;                                      // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatHUD_C*                             Chat_HUD;                                          // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BackPackWarning;                                   // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExitFishing__DelegateSignature();
	void Continue__DelegateSignature();
	void ExecuteUbergraph_FishingHUD(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void EscExit();
	void ReceiveMessageDelegate(const class USBChatMessage* Message, const struct FSBChatUIMessage& Mess);
	void BndEvt__FishingHUD_SBButtonFullScreen_C_98_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void Destruct();
	void DialogEnd(EDialogResult Result);
	void ContinueFishing(class UUserWidget* InButtonWidget);
	void ExitEvent(class UUserWidget* InButtonWidget);
	void DebugFunc();
	void Set_State(EPlayerFishingState Param_Index);
	void CheckBackPack(bool* Ret);
	void HookSuccess();
	void Reset();
	void WarningBackPackIsFull();
	void ResetMenu();
	void ResultVisibility(bool On);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FishingHUD_C">();
	}
	static class UFishingHUD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFishingHUD_C>();
	}
};
static_assert(alignof(UFishingHUD_C) == 0x000008, "Wrong alignment on UFishingHUD_C");
static_assert(sizeof(UFishingHUD_C) == 0x000350, "Wrong size on UFishingHUD_C");
static_assert(offsetof(UFishingHUD_C, UberGraphFrame) == 0x000278, "Member 'UFishingHUD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, HiddenWidgeds) == 0x000280, "Member 'UFishingHUD_C::HiddenWidgeds' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, BackgroundBlur_129) == 0x000288, "Member 'UFishingHUD_C::BackgroundBlur_129' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, BP_PlayerName_Layoutable) == 0x000290, "Member 'UFishingHUD_C::BP_PlayerName_Layoutable' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, CanvasPanel_Objs) == 0x000298, "Member 'UFishingHUD_C::CanvasPanel_Objs' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, Cast) == 0x0002A0, "Member 'UFishingHUD_C::Cast' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, ChatLogWindowTempList) == 0x0002A8, "Member 'UFishingHUD_C::ChatLogWindowTempList' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, Fishing_Cast) == 0x0002B0, "Member 'UFishingHUD_C::Fishing_Cast' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, Fishing_Result) == 0x0002B8, "Member 'UFishingHUD_C::Fishing_Result' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, Fishing_Wait) == 0x0002C0, "Member 'UFishingHUD_C::Fishing_Wait' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, SBButtonFullScreen_C_98) == 0x0002C8, "Member 'UFishingHUD_C::SBButtonFullScreen_C_98' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, Switcher) == 0x0002D0, "Member 'UFishingHUD_C::Switcher' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, UMG_PartyMemberList) == 0x0002D8, "Member 'UFishingHUD_C::UMG_PartyMemberList' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, Waiting) == 0x0002E0, "Member 'UFishingHUD_C::Waiting' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, DialogMessage) == 0x0002E8, "Member 'UFishingHUD_C::DialogMessage' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, BP_Dialog) == 0x000300, "Member 'UFishingHUD_C::BP_Dialog' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, ExitFishing) == 0x000308, "Member 'UFishingHUD_C::ExitFishing' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, Continue) == 0x000318, "Member 'UFishingHUD_C::Continue' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, Tutorial_Help_Id) == 0x000328, "Member 'UFishingHUD_C::Tutorial_Help_Id' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, FlagFishingGameStopInput) == 0x000330, "Member 'UFishingHUD_C::FlagFishingGameStopInput' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, CursorHundle) == 0x000334, "Member 'UFishingHUD_C::CursorHundle' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, IsFirst) == 0x000338, "Member 'UFishingHUD_C::IsFirst' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, DebugCounter) == 0x00033C, "Member 'UFishingHUD_C::DebugCounter' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, Chat_HUD) == 0x000340, "Member 'UFishingHUD_C::Chat_HUD' has a wrong offset!");
static_assert(offsetof(UFishingHUD_C, BackPackWarning) == 0x000348, "Member 'UFishingHUD_C::BackPackWarning' has a wrong offset!");

}

