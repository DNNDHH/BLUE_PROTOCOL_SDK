#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UMG_PhotoMode_UploadWindowMenu.UMG_PhotoMode_UploadWindowMenu_C
	 * Size -> 0x0128 (FullSize[0x03A8] - InheritedSize[0x0280])
	 */
	class UUMG_PhotoMode_UploadWindowMenu_C : public USBPhotoModeUploadWindowMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimLoop;                                                // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ViewerPanelClose;                                        // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ViewerPanelOpen;                                         // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    WindowCloseAnim;                                         // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    WindowOpenAnim;                                          // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UButton*                                             CancelBtn;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox;                                           // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         NextBtn;                                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             PrevBtn;                                                 // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         UploadBtn;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose02_C*                                       ViewerCloseBtn;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ViewerImage;                                             // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ViewerPanel;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        WindowCanvasPanel;                                       // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose02_C*                                       WindowCloseBtn;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    ImageCount;                                              // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7CC5[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             WindowOpenFinishedEvent;                                 // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             WindowCloseFinishedEvent;                                // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsViewerMode;                                            // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_423S[0x3];                                   // 0x0339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OpenTextureNum;                                          // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UUMG_PhotoMode_ThumbnailData_C*>              ThumbnailDataList;                                       // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             WindowUploadFinishedEvent;                               // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FName                                                UploadStartId;                                           // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                UploadSuccessFinishId;                                   // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                UploadFaildFinishId;                                     // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             WindowUploadStartEvent;                                  // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             WindowUploadFaildFinishedEvent;                          // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class USBTextTableAsset*                                   InTextTableAsset;                                        // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBPhotoModeImageComponent*                          PhotoModeImageComponent;                                 // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ShowMessage(const class FName& InTextId);
		void IsClickCheck(bool* outIsClickOk);
		void ResetFaild();
		void Reset();
		void GetSelectedImagePngData(TArray<unsigned char>* outImage_PNGData);
		void GetThumbnailImageList(TArray<struct FSlateBrush>* outThumbnailImage, TArray<bool>* outReturnValue);
		void OnClickedViewerButton(int32_t inThumbnailNo);
		void OnClickedFrameButton(int32_t outThumnnailNo);
		void DisableThumbnailButton();
		void SetBtn();
		void ResetThumbnailButton();
		void SetThumbnailTexture2D();
		void InitThumbnailData(class USBPhotoModeImageComponent* PhotoModeImageComponent);
		void SetThumbnailTexture2D_Bp();
		void Reset_Bp();
		void ViewerInit(class UTexture2DDynamic* InTexture, int32_t inOpenTextureNum);
		void StartViewer();
		void WidgetAnimationEvt_ViewerPanelOpen_K2Node_WidgetAnimationEvent_1();
		void CloseViewer();
		void BndEvt__UMG_PhotoMode_UploadWindowMenu_PrevBtn_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoMode_UploadWindowMenu_NextBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoMode_UploadWindowMenu_ViewerCloseBtn_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
		void WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_2();
		void WidgetAnimationEvt_ViewerPanelClose_K2Node_WidgetAnimationEvent_3();
		void Construct();
		void OpenWindow();
		void WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_1();
		void CloseWindow();
		void WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_3();
		void WidgetAnimationEvt_WindowCloseAnim_K2Node_WidgetAnimationEvent_4();
		void BndEvt__UMG_PhotoMode_UploadWindowMenu_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
		void BndEvt__UMG_PhotoMode_UploadWindowMenu_CancelBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoMode_UploadWindowMenu_UploadBtn_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
		void Destruct();
		void OnUploadPhotoModeImageDelegate(bool bResult);
		void WidgetAnimationEvt_WindowOpenAnim_K2Node_WidgetAnimationEvent_5();
		void ExecuteUbergraph_UMG_PhotoMode_UploadWindowMenu(int32_t EntryPoint);
		void WindowUploadFaildFinishedEvent__DelegateSignature();
		void WindowUploadStartEvent__DelegateSignature();
		void WindowUploadFinishedEvent__DelegateSignature();
		void WindowCloseFinishedEvent__DelegateSignature();
		void WindowOpenFinishedEvent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
