#pragma once

 

// Package: UMG_PhotoMode_UploadWindowMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C
// 0x0158 (0x03D8 - 0x0280)
class UUMG_PhotoMode_UploadWindowMenu_C final : public USBPhotoModeUploadWindowMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimLoop;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ViewerPanelClose;                                  // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ViewerPanelOpen;                                   // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WindowCloseAnim;                                   // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WindowOpenAnim;                                    // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                CancelBtn;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_288;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                NextBtn;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                PrevBtn;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoMode_ThumbnailData_C*         UMG_PhotoMode_ThumbnailData;                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoMode_ThumbnailData_C*         UMG_PhotoMode_ThumbnailData_84;                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoMode_ThumbnailData_C*         UMG_PhotoMode_ThumbnailData_163;                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            UploadBtn;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          ViewerCloseBtn;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ViewerImage;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ViewerPanel;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_113;                                // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           WindowCanvasPanel;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          WindowCloseBtn;                                    // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ImageCount;                                        // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E51[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             WindowOpenFinishedEvent;                           // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             WindowCloseFinishedEvent;                          // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsViewerMode;                                      // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E52[0x3];                                     // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OpenTextureNum;                                    // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUMG_PhotoMode_ThumbnailData_C*> ThumbnailDataList;                                 // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ABP_SBPhotoModeController_C*            PhotoModeController;                               // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             WindowUploadFinishedEvent;                         // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   UploadStartId;                                     // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   UploadSuccessFinishId;                             // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   UploadFaildFinishId;                               // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             WindowUploadStartEvent;                            // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             WindowUploadFaildFinishedEvent;                    // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBTextTableAsset*                      In_Text_Table_Asset;                               // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPhotoModeImageComponent*             PhotoModeImageComponent;                           // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void WindowOpenFinishedEvent__DelegateSignature();
	void WindowCloseFinishedEvent__DelegateSignature();
	void WindowUploadFinishedEvent__DelegateSignature();
	void WindowUploadStartEvent__DelegateSignature();
	void WindowUploadFaildFinishedEvent__DelegateSignature();
	void ExecuteUbergraph_UMG_PhotoMode_UploadWindowMenu(int32 EntryPoint);
	void WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_4();
	void OnUploadPhotoModeImageDelegate(const bool bResult);
	void Destruct();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_UploadBtn_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_CancelBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_3();
	void WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_2();
	void CloseWindow();
	void WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_0();
	void OpenWindow();
	void Construct();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_PrevBtn_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_PrevBtn_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_PrevBtn_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_PrevBtn_K2Node_ComponentBoundEvent_15_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_NextBtn_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_NextBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_NextBtn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_NextBtn_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_1();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_ViewerCloseBtn_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_NextBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoMode_UploadWindowMenu_PrevBtn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void CloseViewer();
	void WidgetAnimationEvt_ViewerPanelOpen_K2Node_WidgetAnimationEvent_0();
	void StartViewer();
	void ViewerInit(class UTexture2DDynamic* InTexture, int32 InOpenTextureNum);
	void Reset_Bp();
	void SetThumbnailTexture2D_Bp();
	void SetThumbnailTexture2D();
	void GetThumbnailTexture2DDynamicList(TArray<class UTexture2DDynamic*>* OutThumbnailImage);
	void SetThumbnailBtn();
	void GetActiveWidgetCastImage(class UWidgetSwitcher* InWidgetSwitcher, class UImage** OutImage);
	void SetBtn();
	void SetNextBtn();
	void ChangeViewerTexture();
	void SetBtnVisibility(class UWidgetSwitcher* InWidgetSwitcher01, class UWidgetSwitcher* InWidgetSwitcher02, class UButton* InBtn);
	void InitThumbnailData(class USBPhotoModeImageComponent* Param_PhotoModeImageComponent);
	void SetEnableThumbnailBtn();
	void UpdateSelectFrameImage(int32 OutThumnnailNo);
	void ThumbnailClickEvent(int32 InThumbnailNo);
	void GetThumbnailImageList(TArray<struct FSlateBrush>* OutThumbnailImage, TArray<bool>* OutReturnValue);
	void GetImage_PNGData(TArray<uint8>* OutImage_PNGData);
	void SetPhotoModeController(class ABP_SBPhotoModeController_C* Param_PhotoModeController);
	void Reset();
	void ResetFaild();
	void IsThumbnailTexture(bool* OutIsThumbnailTexture);
	void IsClickCheck(bool* OutIsClickOk);
	void PhotoModeUploadMenuMessage(const class FName InTextID);
	void DebugTest(TArray<uint8>& NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PhotoMode_UploadWindowMenu_C">();
	}
	static class UUMG_PhotoMode_UploadWindowMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PhotoMode_UploadWindowMenu_C>();
	}
};
static_assert(alignof(UUMG_PhotoMode_UploadWindowMenu_C) == 0x000008, "Wrong alignment on UUMG_PhotoMode_UploadWindowMenu_C");
static_assert(sizeof(UUMG_PhotoMode_UploadWindowMenu_C) == 0x0003D8, "Wrong size on UUMG_PhotoMode_UploadWindowMenu_C");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, UberGraphFrame) == 0x000280, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, AnimLoop) == 0x000288, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::AnimLoop' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, ViewerPanelClose) == 0x000290, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::ViewerPanelClose' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, ViewerPanelOpen) == 0x000298, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::ViewerPanelOpen' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, WindowCloseAnim) == 0x0002A0, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::WindowCloseAnim' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, WindowOpenAnim) == 0x0002A8, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::WindowOpenAnim' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, CancelBtn) == 0x0002B0, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::CancelBtn' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, HorizontalBox_288) == 0x0002B8, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::HorizontalBox_288' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, Image) == 0x0002C0, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::Image' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, Image_1) == 0x0002C8, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::Image_1' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, NextBtn) == 0x0002D0, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::NextBtn' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, PrevBtn) == 0x0002D8, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::PrevBtn' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, UIBlocker) == 0x0002E0, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, UMG_PhotoMode_ThumbnailData) == 0x0002E8, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::UMG_PhotoMode_ThumbnailData' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, UMG_PhotoMode_ThumbnailData_84) == 0x0002F0, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::UMG_PhotoMode_ThumbnailData_84' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, UMG_PhotoMode_ThumbnailData_163) == 0x0002F8, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::UMG_PhotoMode_ThumbnailData_163' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, UploadBtn) == 0x000300, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::UploadBtn' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, ViewerCloseBtn) == 0x000308, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::ViewerCloseBtn' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, ViewerImage) == 0x000310, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::ViewerImage' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, ViewerPanel) == 0x000318, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::ViewerPanel' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, WidgetSwitcher_113) == 0x000320, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::WidgetSwitcher_113' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, WindowCanvasPanel) == 0x000328, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::WindowCanvasPanel' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, WindowCloseBtn) == 0x000330, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::WindowCloseBtn' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, ImageCount) == 0x000338, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::ImageCount' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, WindowOpenFinishedEvent) == 0x000340, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::WindowOpenFinishedEvent' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, WindowCloseFinishedEvent) == 0x000350, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::WindowCloseFinishedEvent' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, IsViewerMode) == 0x000360, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::IsViewerMode' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, OpenTextureNum) == 0x000364, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::OpenTextureNum' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, ThumbnailDataList) == 0x000368, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::ThumbnailDataList' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, PhotoModeController) == 0x000378, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::PhotoModeController' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, WindowUploadFinishedEvent) == 0x000380, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::WindowUploadFinishedEvent' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, UploadStartId) == 0x000390, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::UploadStartId' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, UploadSuccessFinishId) == 0x000398, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::UploadSuccessFinishId' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, UploadFaildFinishId) == 0x0003A0, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::UploadFaildFinishId' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, WindowUploadStartEvent) == 0x0003A8, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::WindowUploadStartEvent' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, WindowUploadFaildFinishedEvent) == 0x0003B8, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::WindowUploadFaildFinishedEvent' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, In_Text_Table_Asset) == 0x0003C8, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::In_Text_Table_Asset' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_UploadWindowMenu_C, PhotoModeImageComponent) == 0x0003D0, "Member 'UUMG_PhotoMode_UploadWindowMenu_C::PhotoModeImageComponent' has a wrong offset!");

}

