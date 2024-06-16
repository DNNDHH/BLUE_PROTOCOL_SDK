#pragma once

 

// Package: TutorialHelp_Bookmark

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TutorialHelp_Bookmark.TutorialHelp_Bookmark_C
// 0x0130 (0x03E0 - 0x02B0)
class UTutorialHelp_Bookmark_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            BackButton;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       BottomText;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanelWindow;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasTitle;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01_393;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HelpImage;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HelpImageGrp;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            NextButton;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NoDataOverlay;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           PageGrp;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PageText_1;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PageText_2;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchImage;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleText;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VideoImage;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           VideoImageGrp;                                     // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentPage;                                       // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxPage;                                           // 0x033C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTutorialHelpData                    Data;                                              // 0x0340(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBTextTableAsset*                      TextTableAsset;                                    // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SubMode;                                           // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ABE[0x3];                                     // 0x03B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WindowHeight;                                      // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 MovieParentPath;                                   // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UBinkMediaPlayer*                       BinkMediaPlayer;                                   // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsClose;                                           // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5ABF[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MediaSoundActor_C*                  SoundActor;                                        // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_TutorialHelp_Bookmark(int32 EntryPoint);
	void BndEvt__TutorialHelp_Bookmark_CmnClose01_393_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void OnForceClose_Event();
	void OnPress_Cancel();
	void OnClose_Event();
	void Destruct();
	void Construct();
	void OnNextPage();
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void UpdateUI();
	void Init(class FName InId, bool InSubMode);
	void SetHelpData2(int32 InPage, const struct FSBTutorialHelpData& InData);
	void OnLoaded_053AD1B74FF9010B3058FCA29708A05E(class UObject* Loaded);
	void FindTurotialHelpData(class FName InId, bool* bFind, struct FSBTutorialHelpData* Ret);
	void UpdatePageButton();
	void ISCurrentPageEnd(bool* NewParam);
	void SetErrorData(class FName HelpId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TutorialHelp_Bookmark_C">();
	}
	static class UTutorialHelp_Bookmark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTutorialHelp_Bookmark_C>();
	}
};
static_assert(alignof(UTutorialHelp_Bookmark_C) == 0x000008, "Wrong alignment on UTutorialHelp_Bookmark_C");
static_assert(sizeof(UTutorialHelp_Bookmark_C) == 0x0003E0, "Wrong size on UTutorialHelp_Bookmark_C");
static_assert(offsetof(UTutorialHelp_Bookmark_C, UberGraphFrame) == 0x0002B0, "Member 'UTutorialHelp_Bookmark_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, BackButton) == 0x0002B8, "Member 'UTutorialHelp_Bookmark_C::BackButton' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, BottomText) == 0x0002C0, "Member 'UTutorialHelp_Bookmark_C::BottomText' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, CanvasPanelWindow) == 0x0002C8, "Member 'UTutorialHelp_Bookmark_C::CanvasPanelWindow' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, CanvasTitle) == 0x0002D0, "Member 'UTutorialHelp_Bookmark_C::CanvasTitle' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, CmnClose01_393) == 0x0002D8, "Member 'UTutorialHelp_Bookmark_C::CmnClose01_393' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, HelpImage) == 0x0002E0, "Member 'UTutorialHelp_Bookmark_C::HelpImage' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, HelpImageGrp) == 0x0002E8, "Member 'UTutorialHelp_Bookmark_C::HelpImageGrp' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, NextButton) == 0x0002F0, "Member 'UTutorialHelp_Bookmark_C::NextButton' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, NoDataOverlay) == 0x0002F8, "Member 'UTutorialHelp_Bookmark_C::NoDataOverlay' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, PageGrp) == 0x000300, "Member 'UTutorialHelp_Bookmark_C::PageGrp' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, PageText_1) == 0x000308, "Member 'UTutorialHelp_Bookmark_C::PageText_1' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, PageText_2) == 0x000310, "Member 'UTutorialHelp_Bookmark_C::PageText_2' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, SwitchImage) == 0x000318, "Member 'UTutorialHelp_Bookmark_C::SwitchImage' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, TitleText) == 0x000320, "Member 'UTutorialHelp_Bookmark_C::TitleText' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, VideoImage) == 0x000328, "Member 'UTutorialHelp_Bookmark_C::VideoImage' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, VideoImageGrp) == 0x000330, "Member 'UTutorialHelp_Bookmark_C::VideoImageGrp' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, CurrentPage) == 0x000338, "Member 'UTutorialHelp_Bookmark_C::CurrentPage' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, MaxPage) == 0x00033C, "Member 'UTutorialHelp_Bookmark_C::MaxPage' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, Data) == 0x000340, "Member 'UTutorialHelp_Bookmark_C::Data' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, TextTableAsset) == 0x000398, "Member 'UTutorialHelp_Bookmark_C::TextTableAsset' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, OnClose) == 0x0003A0, "Member 'UTutorialHelp_Bookmark_C::OnClose' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, SubMode) == 0x0003B0, "Member 'UTutorialHelp_Bookmark_C::SubMode' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, WindowHeight) == 0x0003B4, "Member 'UTutorialHelp_Bookmark_C::WindowHeight' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, MovieParentPath) == 0x0003B8, "Member 'UTutorialHelp_Bookmark_C::MovieParentPath' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, BinkMediaPlayer) == 0x0003C8, "Member 'UTutorialHelp_Bookmark_C::BinkMediaPlayer' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, IsClose) == 0x0003D0, "Member 'UTutorialHelp_Bookmark_C::IsClose' has a wrong offset!");
static_assert(offsetof(UTutorialHelp_Bookmark_C, SoundActor) == 0x0003D8, "Member 'UTutorialHelp_Bookmark_C::SoundActor' has a wrong offset!");

}

