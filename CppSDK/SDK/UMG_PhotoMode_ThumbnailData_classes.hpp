#pragma once

 

// Package: UMG_PhotoMode_ThumbnailData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PhotoMode_ThumbnailData.UMG_PhotoMode_ThumbnailData_C
// 0x0068 (0x02F0 - 0x0288)
class UUMG_PhotoMode_ThumbnailData_C final : public USBPhotoModeThumbnailData
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                SelectFrameButton;                                 // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectFrameImage;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ThumbnailImage;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                ViewerBtn;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         ThumbnailNo;                                       // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_972E[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             ThumbnailBtnClickEvent;                            // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<uint8>                                 Image_PNGData;                                     // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             SelectFrameImageClickEvent;                        // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsUpload;                                          // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ThumbnailBtnClickEvent__DelegateSignature(int32 OutThumbnailNo);
	void SelectFrameImageClickEvent__DelegateSignature(int32 OutThumbnailNo);
	void ExecuteUbergraph_UMG_PhotoMode_ThumbnailData(int32 EntryPoint);
	void BndEvt__UMG_PhotoMode_ThumbnailData_SelectFrameButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_PhotoMode_ThumbnailData_ThumbnailBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SetIsEnableBtn(bool bInIsEnabled);
	void SetViewerBtn();
	void Init(int32 Param_ThumbnailNo);
	void Reset_Bp();
	void SetIsUpload_Bp(bool bIsUpload);
	void SetThumbnailTexture(class UTexture2DDynamic* Texture, const TArray<uint8>& InImage_PNGData, bool* OutIsTextureNone);
	void GetActiveWidgetIndex(int32* OutActiveWidgetIndex);
	void ResetFaild();
	void Reset();
	bool GetSlateBrush(struct FSlateBrush* Brush_Image);
	bool IsSelectFrame();
	void SetFrameImageVisibility(ESlateVisibility InVisibility);
	void SetThumbnailNo(int32 Param_ThumbnailNo);
	void SetIsUpload(bool Param_IsUpload);
	bool SetThumbnailTexture_Bp(class UTexture2DDynamic* Texture, const TArray<uint8>& InImagePNGData);

	void GetThumbnailTexture(class UTexture2DDynamic** OutThumbnailTexture) const;
	void GetImage_PNGData(TArray<uint8>* OutImage_PNGData) const;
	void GetIsUpload(bool* Param_IsUpload) const;
	class UTexture2DDynamic* GetThumbnailTexture_Bp() const;
	bool GetIsUpload_Bp() const;
	void GetImagePNGData_Bp(TArray<uint8>* OutImagePngData) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PhotoMode_ThumbnailData_C">();
	}
	static class UUMG_PhotoMode_ThumbnailData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PhotoMode_ThumbnailData_C>();
	}
};
static_assert(alignof(UUMG_PhotoMode_ThumbnailData_C) == 0x000008, "Wrong alignment on UUMG_PhotoMode_ThumbnailData_C");
static_assert(sizeof(UUMG_PhotoMode_ThumbnailData_C) == 0x0002F0, "Wrong size on UUMG_PhotoMode_ThumbnailData_C");
static_assert(offsetof(UUMG_PhotoMode_ThumbnailData_C, UberGraphFrame) == 0x000288, "Member 'UUMG_PhotoMode_ThumbnailData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_ThumbnailData_C, SelectFrameButton) == 0x000290, "Member 'UUMG_PhotoMode_ThumbnailData_C::SelectFrameButton' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_ThumbnailData_C, SelectFrameImage) == 0x000298, "Member 'UUMG_PhotoMode_ThumbnailData_C::SelectFrameImage' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_ThumbnailData_C, ThumbnailImage) == 0x0002A0, "Member 'UUMG_PhotoMode_ThumbnailData_C::ThumbnailImage' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_ThumbnailData_C, ViewerBtn) == 0x0002A8, "Member 'UUMG_PhotoMode_ThumbnailData_C::ViewerBtn' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_ThumbnailData_C, ThumbnailNo) == 0x0002B0, "Member 'UUMG_PhotoMode_ThumbnailData_C::ThumbnailNo' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_ThumbnailData_C, ThumbnailBtnClickEvent) == 0x0002B8, "Member 'UUMG_PhotoMode_ThumbnailData_C::ThumbnailBtnClickEvent' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_ThumbnailData_C, Image_PNGData) == 0x0002C8, "Member 'UUMG_PhotoMode_ThumbnailData_C::Image_PNGData' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_ThumbnailData_C, SelectFrameImageClickEvent) == 0x0002D8, "Member 'UUMG_PhotoMode_ThumbnailData_C::SelectFrameImageClickEvent' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoMode_ThumbnailData_C, IsUpload) == 0x0002E8, "Member 'UUMG_PhotoMode_ThumbnailData_C::IsUpload' has a wrong offset!");

}

