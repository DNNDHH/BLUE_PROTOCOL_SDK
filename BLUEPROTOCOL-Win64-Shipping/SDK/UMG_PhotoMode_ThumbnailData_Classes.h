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
	 * WidgetBlueprintGeneratedClass UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C
	 * Size -> 0x0061 (FullSize[0x02E9] - InheritedSize[0x0288])
	 */
	class UUMG_PhotoMode_ThumbnailData_C : public USBPhotoModeThumbnailData
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             SelectFrameButton;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SelectFrameImage;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ThumbnailImage;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ViewerBtn;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    ThumbnailNo;                                             // 0x02B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0M6K[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClickedViewerButton;                                   // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<unsigned char>                                      image_PNGData;                                           // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnClickedFrameButton;                                    // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsUpload;                                                // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetImagePNGData_Bp(TArray<unsigned char>* OutImagePngData);
		bool GetIsUpload_Bp();
		bool SetThumbnailTexture_Bp(class UTexture2DDynamic* Texture, TArray<unsigned char> InImagePNGData);
		class UTexture2DDynamic* GetThumbnailTexture_Bp();
		void SetIsUpload(bool IsUpload);
		void GetIsUpload(bool* IsUpload);
		void SetSelect(bool bSelect);
		bool IsSelect();
		bool GetSlateBrush(struct FSlateBrush* BrushImage);
		void Reset();
		void ResetFaild();
		void GetImage_PNGData(TArray<unsigned char>* outImage_PNGData);
		void GetThumbnailTexture(class UTexture2DDynamic** outThumbnailTexture);
		void SetThumbnailTexture(class UTexture2DDynamic* Texture, TArray<unsigned char> inImage_PNGData, bool* outIsTextureNone);
		void IsValidThumbnail(bool* bIsValid);
		void SetIsUpload_Bp(bool bIsUpload);
		void Reset_Bp();
		void Init(int32_t ThumbnailNo);
		void ResetButton();
		void SetIsEnableButton(bool bInIsEnabled);
		void BndEvt__UMG_PhotoMode_ThumbnailData_ThumbnailBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UMG_PhotoMode_ThumbnailData_SelectFrameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_UMG_PhotoMode_ThumbnailData(int32_t EntryPoint);
		void OnClickedFrameButton__DelegateSignature(int32_t outThumbnailNo);
		void OnClickedViewerButton__DelegateSignature(int32_t outThumbnailNo);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
