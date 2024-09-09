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
	 * WidgetBlueprintGeneratedClass UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C
	 * Size -> 0x0070 (FullSize[0x02F0] - InheritedSize[0x0280])
	 */
	class UUMG_PhotoModeControll_UploadList_C : public USBPhotoModeUploadList
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_NowLoading_C*                                    BP_NowLoading;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_UploadImage;                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         SBButton_UploadSelectWindowOpen;                         // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FVector2D                                           UploadPhotoMergin_2;                                     // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FVector2D>                                   UploadPhotoMergin_3;                                     // 0x02B0(0x0010) Edit, BlueprintVisible
		TArray<struct FVector2D>                                   UploadPhotoMergin_4;                                     // 0x02C0(0x0010) Edit, BlueprintVisible
		TArray<class UUMG_PhotoModeControll_UploadListSlot_C*>     UploadThumbnailImages;                                   // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             UploadSelectWindowClickEvent;                            // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void ScreenShotCapturedEvent(TArray<class UTexture2DDynamic*>* InThumbnailImage);
		void SetUploadThumbnail(TArray<class UTexture2DDynamic*>* InThumbnailImage);
		void InitUploadPanel();
		void ScreenshotCapturedEvent_Bp(TArray<class UTexture2DDynamic*> InThumbnailImage);
		void SetUploadThumbnail_Bp(TArray<class UTexture2DDynamic*> InThumbnailImage);
		void UploadWidgetSwitcher_Bp(unsigned char InMode);
		void UploadWidgetSwitcher(EPhotoModeUploadList InMode);
		void UploadFinish(TArray<struct FSlateBrush> InThumbnailImage, TArray<bool> InReturnValue, bool InIsClickCheck);
		void BndEvt__UMG_PhotoModeControll_UploadList_SBButton_UploadSelectWindowOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UMG_PhotoModeControll_UploadList(int32_t EntryPoint);
		void UploadSelectWindowClickEvent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
