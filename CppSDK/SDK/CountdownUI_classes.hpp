#pragma once

 

// Package: CountdownUI

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CountdownUI.CountdownUI_C
// 0x00D0 (0x03A0 - 0x02D0)
class UCountdownUI_C final : public USBCountdownUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           BattleAreaGrp;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    BattleAreaMessage;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnNumber1_0to99_C*                    CmnNumber1_0to99;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CountdownGrp;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CountdownMessage;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DownPanel;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Gauge;                                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NoCountdownGauge;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NoCountdownGrp;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    NoCountdownMessage;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         CurrCountdownRemainTime;                           // 0x0340(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CountdownRemainTimeMax;                            // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCountdownEnd;                                    // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         OldRemainTime;                                     // 0x0358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewRemainTime;                                     // 0x035C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCountdownCancel;                                 // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsChatMode;                                        // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsInteractionWait;                                 // 0x0371(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56C0[0x2];                                     // 0x0372(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CurrInteractionWaitTime;                           // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InteractionWaitTimeMax;                            // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NoCountdown;                                       // 0x037C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56C1[0x3];                                     // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         InteractionGaugeWidthMax;                          // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrInteractionGaugeWidth;                         // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               GaugeMat;                                          // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               NoCountdownGaugeMat;                               // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsClosingCountdownUI;                              // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnCountdownEnd__DelegateSignature();
	void OnCountdownCancel__DelegateSignature();
	void ExecuteUbergraph_CountdownUI(int32 EntryPoint);
	void UIVisibleSettingChangeDelegate_Event(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void UnbindCountdownCancelDelegate();
	void StartNoCountdown_BattleAreaMessage();
	void Destruct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnCountdownInteractionDelegate_____(bool bPress);
	void OnCountdownCancelDelegate_____();
	void StartNoCountdown_ECountdownType(const ECountdownType InCountdownType);
	void StartNoCountdown(const class FText& InMessage);
	void OnReleaseInteraction();
	void OnPressInteraction();
	void StartCountdown_ECountdownType(const ECountdownType InCountdownType, const int32 InCountdownTime);
	void Hide(ECountdownResult Result);
	void StartCountdown(const class FText& InMessage, const int32 InCountdownTime);
	void BeginInteractionWait();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetMessageText(const class FText& InText, bool IsCountdown);
	void SetCountdownTimeValueText(int32 InValue);
	void SetCountdownTime(int32 InTime);
	void SetMessageTextId(int32 InTextID, bool IsCountdown);
	void IsChatModeActive(bool* IsActive);
	void UpdateInteractionGauge();
	void SetBlockInputForCountdownUI(bool InBlockInput);
	void CheckCountCancel(bool* NotCancel);
	void SetYPosition(float Y);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CountdownUI_C">();
	}
	static class UCountdownUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCountdownUI_C>();
	}
};
static_assert(alignof(UCountdownUI_C) == 0x000008, "Wrong alignment on UCountdownUI_C");
static_assert(sizeof(UCountdownUI_C) == 0x0003A0, "Wrong size on UCountdownUI_C");
static_assert(offsetof(UCountdownUI_C, UberGraphFrame) == 0x0002D0, "Member 'UCountdownUI_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, AnimOut) == 0x0002D8, "Member 'UCountdownUI_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, AnimIn) == 0x0002E0, "Member 'UCountdownUI_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, BattleAreaGrp) == 0x0002E8, "Member 'UCountdownUI_C::BattleAreaGrp' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, BattleAreaMessage) == 0x0002F0, "Member 'UCountdownUI_C::BattleAreaMessage' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, CmnNumber1_0to99) == 0x0002F8, "Member 'UCountdownUI_C::CmnNumber1_0to99' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, CountdownGrp) == 0x000300, "Member 'UCountdownUI_C::CountdownGrp' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, CountdownMessage) == 0x000308, "Member 'UCountdownUI_C::CountdownMessage' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, DownPanel) == 0x000310, "Member 'UCountdownUI_C::DownPanel' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, Gauge) == 0x000318, "Member 'UCountdownUI_C::Gauge' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, Icon) == 0x000320, "Member 'UCountdownUI_C::Icon' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, NoCountdownGauge) == 0x000328, "Member 'UCountdownUI_C::NoCountdownGauge' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, NoCountdownGrp) == 0x000330, "Member 'UCountdownUI_C::NoCountdownGrp' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, NoCountdownMessage) == 0x000338, "Member 'UCountdownUI_C::NoCountdownMessage' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, CurrCountdownRemainTime) == 0x000340, "Member 'UCountdownUI_C::CurrCountdownRemainTime' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, CountdownRemainTimeMax) == 0x000344, "Member 'UCountdownUI_C::CountdownRemainTimeMax' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, OnCountdownEnd) == 0x000348, "Member 'UCountdownUI_C::OnCountdownEnd' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, OldRemainTime) == 0x000358, "Member 'UCountdownUI_C::OldRemainTime' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, NewRemainTime) == 0x00035C, "Member 'UCountdownUI_C::NewRemainTime' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, OnCountdownCancel) == 0x000360, "Member 'UCountdownUI_C::OnCountdownCancel' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, IsChatMode) == 0x000370, "Member 'UCountdownUI_C::IsChatMode' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, IsInteractionWait) == 0x000371, "Member 'UCountdownUI_C::IsInteractionWait' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, CurrInteractionWaitTime) == 0x000374, "Member 'UCountdownUI_C::CurrInteractionWaitTime' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, InteractionWaitTimeMax) == 0x000378, "Member 'UCountdownUI_C::InteractionWaitTimeMax' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, NoCountdown) == 0x00037C, "Member 'UCountdownUI_C::NoCountdown' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, InteractionGaugeWidthMax) == 0x000380, "Member 'UCountdownUI_C::InteractionGaugeWidthMax' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, CurrInteractionGaugeWidth) == 0x000384, "Member 'UCountdownUI_C::CurrInteractionGaugeWidth' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, GaugeMat) == 0x000388, "Member 'UCountdownUI_C::GaugeMat' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, NoCountdownGaugeMat) == 0x000390, "Member 'UCountdownUI_C::NoCountdownGaugeMat' has a wrong offset!");
static_assert(offsetof(UCountdownUI_C, IsClosingCountdownUI) == 0x000398, "Member 'UCountdownUI_C::IsClosingCountdownUI' has a wrong offset!");

}

