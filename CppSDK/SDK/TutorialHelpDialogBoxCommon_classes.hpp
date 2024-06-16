#pragma once

 

// Package: TutorialHelpDialogBoxCommon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TutorialHelpDialogBoxCommon.TutorialHelpDialogBoxCommon_C
// 0x0150 (0x03D0 - 0x0280)
class UTutorialHelpDialogBoxCommon_C final : public USBTutorialHelpDialogBoxCommonWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn_Continue;                                   // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            BackButton;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_NextClose;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       DescText;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HelpImage;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_135;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_193;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       InfoText;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               MainSizeBox;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            NextButton;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               NoDataOverlay;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         PagerPanel;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PageText;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleText;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VideoImage;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentPage;                                       // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxPage;                                           // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTutorialHelpData                    Data;                                              // 0x0328(0x0058)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBTextTableAsset*                      TextTableAsset;                                    // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          SubMode;                                           // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80D0[0x3];                                     // 0x0399(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WindowHeight;                                      // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 MovieParentPath;                                   // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UBinkMediaPlayer*                       BinkMediaPlayer;                                   // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsClose;                                           // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsContinue;                                        // 0x03B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_80D1[0x6];                                     // 0x03BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MediaSoundActor_C*                  SoundActor;                                        // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpen;                                            // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsUsingClassTypeForTutorialHelp;                  // 0x03C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBClassType                                  ClassTypeForTutorialHelp;                          // 0x03CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_TutorialHelpDialogBoxCommon(int32 EntryPoint);
	void WidgetAnimationEvt_AnimIn_Continue_K2Node_WidgetAnimationEvent_4();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_3();
	void On_Open_Continue();
	void On_Open();
	void OnPress_Cancel_1();
	void BndEvt__TutorialHelpDialogBoxCommon_Btn_NextClose_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void BndEvt__TutorialHelpDialogBoxCommon_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void On_Colose();
	void OnForceClose_Event();
	void OnClose_Event();
	void Destruct();
	void Construct();
	void BndEvt__BackButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnNextPage();
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void UpdateUI();
	void Init(class FName InId, bool InSubMode, bool Param_IsContinue, bool bInIsUsingClassTypeForTutorialHelp, ESBClassType InClasTypeForTutorialHelp);
	void FindTurotialHelpData(class FName InId, bool bInIsUsingClassTypeForTutorialHelp, ESBClassType InClassTypeForTutorialHelp, bool* bFind, struct FSBTutorialHelpData* Ret);
	void SetHelpData(int32 InPage, const struct FSBTutorialHelpData& InData);
	void UpdatePageButton();
	void ISCurrentPageEnd(bool* NewParam);
	void SetErrorData(class FName HelpId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TutorialHelpDialogBoxCommon_C">();
	}
	static class UTutorialHelpDialogBoxCommon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTutorialHelpDialogBoxCommon_C>();
	}
};
static_assert(alignof(UTutorialHelpDialogBoxCommon_C) == 0x000008, "Wrong alignment on UTutorialHelpDialogBoxCommon_C");
static_assert(sizeof(UTutorialHelpDialogBoxCommon_C) == 0x0003D0, "Wrong size on UTutorialHelpDialogBoxCommon_C");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, UberGraphFrame) == 0x000280, "Member 'UTutorialHelpDialogBoxCommon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, AnimIn_Continue) == 0x000288, "Member 'UTutorialHelpDialogBoxCommon_C::AnimIn_Continue' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, AnimIn) == 0x000290, "Member 'UTutorialHelpDialogBoxCommon_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, BackButton) == 0x000298, "Member 'UTutorialHelpDialogBoxCommon_C::BackButton' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, Btn_NextClose) == 0x0002A0, "Member 'UTutorialHelpDialogBoxCommon_C::Btn_NextClose' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, CmnClose01) == 0x0002A8, "Member 'UTutorialHelpDialogBoxCommon_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, DescText) == 0x0002B0, "Member 'UTutorialHelpDialogBoxCommon_C::DescText' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, HelpImage) == 0x0002B8, "Member 'UTutorialHelpDialogBoxCommon_C::HelpImage' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, Image) == 0x0002C0, "Member 'UTutorialHelpDialogBoxCommon_C::Image' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, Image_3) == 0x0002C8, "Member 'UTutorialHelpDialogBoxCommon_C::Image_3' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, Image_135) == 0x0002D0, "Member 'UTutorialHelpDialogBoxCommon_C::Image_135' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, Image_193) == 0x0002D8, "Member 'UTutorialHelpDialogBoxCommon_C::Image_193' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, InfoText) == 0x0002E0, "Member 'UTutorialHelpDialogBoxCommon_C::InfoText' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, MainSizeBox) == 0x0002E8, "Member 'UTutorialHelpDialogBoxCommon_C::MainSizeBox' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, NextButton) == 0x0002F0, "Member 'UTutorialHelpDialogBoxCommon_C::NextButton' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, NoDataOverlay) == 0x0002F8, "Member 'UTutorialHelpDialogBoxCommon_C::NoDataOverlay' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, PagerPanel) == 0x000300, "Member 'UTutorialHelpDialogBoxCommon_C::PagerPanel' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, PageText) == 0x000308, "Member 'UTutorialHelpDialogBoxCommon_C::PageText' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, TitleText) == 0x000310, "Member 'UTutorialHelpDialogBoxCommon_C::TitleText' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, VideoImage) == 0x000318, "Member 'UTutorialHelpDialogBoxCommon_C::VideoImage' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, CurrentPage) == 0x000320, "Member 'UTutorialHelpDialogBoxCommon_C::CurrentPage' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, MaxPage) == 0x000324, "Member 'UTutorialHelpDialogBoxCommon_C::MaxPage' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, Data) == 0x000328, "Member 'UTutorialHelpDialogBoxCommon_C::Data' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, TextTableAsset) == 0x000380, "Member 'UTutorialHelpDialogBoxCommon_C::TextTableAsset' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, OnClose) == 0x000388, "Member 'UTutorialHelpDialogBoxCommon_C::OnClose' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, SubMode) == 0x000398, "Member 'UTutorialHelpDialogBoxCommon_C::SubMode' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, WindowHeight) == 0x00039C, "Member 'UTutorialHelpDialogBoxCommon_C::WindowHeight' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, MovieParentPath) == 0x0003A0, "Member 'UTutorialHelpDialogBoxCommon_C::MovieParentPath' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, BinkMediaPlayer) == 0x0003B0, "Member 'UTutorialHelpDialogBoxCommon_C::BinkMediaPlayer' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, IsClose) == 0x0003B8, "Member 'UTutorialHelpDialogBoxCommon_C::IsClose' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, IsContinue) == 0x0003B9, "Member 'UTutorialHelpDialogBoxCommon_C::IsContinue' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, SoundActor) == 0x0003C0, "Member 'UTutorialHelpDialogBoxCommon_C::SoundActor' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, IsOpen) == 0x0003C8, "Member 'UTutorialHelpDialogBoxCommon_C::IsOpen' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, bIsUsingClassTypeForTutorialHelp) == 0x0003C9, "Member 'UTutorialHelpDialogBoxCommon_C::bIsUsingClassTypeForTutorialHelp' has a wrong offset!");
static_assert(offsetof(UTutorialHelpDialogBoxCommon_C, ClassTypeForTutorialHelp) == 0x0003CA, "Member 'UTutorialHelpDialogBoxCommon_C::ClassTypeForTutorialHelp' has a wrong offset!");

}

