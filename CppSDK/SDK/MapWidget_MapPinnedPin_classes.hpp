#pragma once

 

// Package: MapWidget_MapPinnedPin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapWidget_MapPinnedPin.MapWidget_MapPinnedPin_C
// 0x00B8 (0x0330 - 0x0278)
class UMapWidget_MapPinnedPin_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_0;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBMultiLineEditableTextBox*            MultiLineTextBox;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               TextInputGrp;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMapWidget_IconTooltip3_C*              ToolTip;                                           // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapPinInfo                            PinInfo;                                           // 0x02A8(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnTextCommitted;                                   // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         MaxWordCountPerLine;                               // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxLineCount;                                      // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Comment;                                           // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsToolTipEnable;                                   // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7FC7[0x7];                                     // 0x0311(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPinBtnClicked;                                   // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsShiftKeyPressed;                                 // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnTextCommitted__DelegateSignature(class UMapWidget_MapPinnedPin_C* InPinnedPin);
	void OnPinBtnClicked__DelegateSignature(class UMapWidget_MapPinnedPin_C* InPinnedPin);
	void ExecuteUbergraph_MapWidget_MapPinnedPin(int32 EntryPoint);
	void DoFormatText(const class FText& InText);
	void HasNgWords();
	void ForceTextCommit(const class FText& InText);
	void BndEvt__MultiLineEditableTextBox_0_K2Node_ComponentBoundEvent_79_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_213_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetTextBoxVisibility(bool Param_IsVisible);
	void SetPinInfo(const struct FMapPinInfo& InPinInfo);
	class UWidget* GetToolTipWidget_0();
	void SetTooltipEnable(bool IsEnable);
	void SetTextToTextBox(const class FText& InText);
	void SetInputToTextBox();
	void FormatStringBySpecifiedLineCntAndWordNum(const class FString& InString, int32 InLineNumMax, int32 InWordNumMaxPerLine, class FString* OutFormatedString);
	void SplitStringsByWordNumber(const class FString& InString, int32 InWordNumber, TArray<class FString>* OutSplitedStrings);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);

	void GetPinInfo(struct FMapPinInfo* OutPinInfo) const;
	void GetPinIconSize(struct FVector2D* OutSize) const;
	void GetComment(class FString* Param_Comment) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapWidget_MapPinnedPin_C">();
	}
	static class UMapWidget_MapPinnedPin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapWidget_MapPinnedPin_C>();
	}
};
static_assert(alignof(UMapWidget_MapPinnedPin_C) == 0x000008, "Wrong alignment on UMapWidget_MapPinnedPin_C");
static_assert(sizeof(UMapWidget_MapPinnedPin_C) == 0x000330, "Wrong size on UMapWidget_MapPinnedPin_C");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, UberGraphFrame) == 0x000278, "Member 'UMapWidget_MapPinnedPin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, Button_0) == 0x000280, "Member 'UMapWidget_MapPinnedPin_C::Button_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, Image_0) == 0x000288, "Member 'UMapWidget_MapPinnedPin_C::Image_0' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, MultiLineTextBox) == 0x000290, "Member 'UMapWidget_MapPinnedPin_C::MultiLineTextBox' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, TextInputGrp) == 0x000298, "Member 'UMapWidget_MapPinnedPin_C::TextInputGrp' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, ToolTip) == 0x0002A0, "Member 'UMapWidget_MapPinnedPin_C::ToolTip' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, PinInfo) == 0x0002A8, "Member 'UMapWidget_MapPinnedPin_C::PinInfo' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, OnTextCommitted) == 0x0002E8, "Member 'UMapWidget_MapPinnedPin_C::OnTextCommitted' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, MaxWordCountPerLine) == 0x0002F8, "Member 'UMapWidget_MapPinnedPin_C::MaxWordCountPerLine' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, MaxLineCount) == 0x0002FC, "Member 'UMapWidget_MapPinnedPin_C::MaxLineCount' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, Comment) == 0x000300, "Member 'UMapWidget_MapPinnedPin_C::Comment' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, IsToolTipEnable) == 0x000310, "Member 'UMapWidget_MapPinnedPin_C::IsToolTipEnable' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, OnPinBtnClicked) == 0x000318, "Member 'UMapWidget_MapPinnedPin_C::OnPinBtnClicked' has a wrong offset!");
static_assert(offsetof(UMapWidget_MapPinnedPin_C, IsShiftKeyPressed) == 0x000328, "Member 'UMapWidget_MapPinnedPin_C::IsShiftKeyPressed' has a wrong offset!");

}

