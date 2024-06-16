#pragma once

 

// Package: UMG_PhotoModeControll_UploadList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EPhotoModeUploadList_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C
// 0x0090 (0x0310 - 0x0280)
class UUMG_PhotoModeControll_UploadList_C final : public USBPhotoModeUploadList
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_NowLoading_C*                       BP_NowLoading;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_UploadImage;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_UploadSelectWindowOpen;                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControll_UploadListSlot_C* UMG_PhotoModeControll_UploadListSlot;              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControll_UploadListSlot_C* UMG_PhotoModeControll_UploadListSlot_1;            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PhotoModeControll_UploadListSlot_C* UMG_PhotoModeControll_UploadListSlot_2;            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_80;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              UploadPhotoMergin_1;                               // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector2D>                      UploadPhotoMergin_2;                               // 0x02C8(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector2D>                      UploadPhotoMergin_3;                               // 0x02D8(0x0010)(Edit, BlueprintVisible)
	TArray<class UUMG_PhotoModeControll_UploadListSlot_C*> UploadThumbnailImages;                             // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             UploadSelectWindowClickEvent;                      // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBPhotoModeImageComponent*             PhotoModeImageComponent;                           // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UploadSelectWindowClickEvent__DelegateSignature();
	void ExecuteUbergraph_UMG_PhotoModeControll_UploadList(int32 EntryPoint);
	void BndEvt__UMG_PhotoModeControll_UploadList_SBButton_UploadSelectWindowOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void UploadFinish(const TArray<struct FSlateBrush>& InThumbnailImage, const TArray<bool>& InReturnValue, bool InIsClickCheck);
	void UploadWidgetSwitcher(EPhotoModeUploadList InMode);
	void UploadWidgetSwitcher_Bp(uint8 InMode);
	void SetUploadThumbnail_Bp(const TArray<class UTexture2DDynamic*>& InThumbnailImage);
	void ScreenshotCapturedEvent_Bp(const TArray<class UTexture2DDynamic*>& InThumbnailImage);
	void InitUploadPanel(class USBPhotoModeImageComponent* InPhotoModeImageComponent);
	void SetUploadThumbnail(TArray<class UTexture2DDynamic*>& InThumbnailImage);
	void Screenshot_Captured_Event(TArray<class UTexture2DDynamic*>& InThumbnailImage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PhotoModeControll_UploadList_C">();
	}
	static class UUMG_PhotoModeControll_UploadList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PhotoModeControll_UploadList_C>();
	}
};
static_assert(alignof(UUMG_PhotoModeControll_UploadList_C) == 0x000008, "Wrong alignment on UUMG_PhotoModeControll_UploadList_C");
static_assert(sizeof(UUMG_PhotoModeControll_UploadList_C) == 0x000310, "Wrong size on UUMG_PhotoModeControll_UploadList_C");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, UberGraphFrame) == 0x000280, "Member 'UUMG_PhotoModeControll_UploadList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, BP_NowLoading) == 0x000288, "Member 'UUMG_PhotoModeControll_UploadList_C::BP_NowLoading' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, CanvasPanel_UploadImage) == 0x000290, "Member 'UUMG_PhotoModeControll_UploadList_C::CanvasPanel_UploadImage' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, SBButton_UploadSelectWindowOpen) == 0x000298, "Member 'UUMG_PhotoModeControll_UploadList_C::SBButton_UploadSelectWindowOpen' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, UMG_PhotoModeControll_UploadListSlot) == 0x0002A0, "Member 'UUMG_PhotoModeControll_UploadList_C::UMG_PhotoModeControll_UploadListSlot' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, UMG_PhotoModeControll_UploadListSlot_1) == 0x0002A8, "Member 'UUMG_PhotoModeControll_UploadList_C::UMG_PhotoModeControll_UploadListSlot_1' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, UMG_PhotoModeControll_UploadListSlot_2) == 0x0002B0, "Member 'UUMG_PhotoModeControll_UploadList_C::UMG_PhotoModeControll_UploadListSlot_2' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, WidgetSwitcher_80) == 0x0002B8, "Member 'UUMG_PhotoModeControll_UploadList_C::WidgetSwitcher_80' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, UploadPhotoMergin_1) == 0x0002C0, "Member 'UUMG_PhotoModeControll_UploadList_C::UploadPhotoMergin_1' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, UploadPhotoMergin_2) == 0x0002C8, "Member 'UUMG_PhotoModeControll_UploadList_C::UploadPhotoMergin_2' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, UploadPhotoMergin_3) == 0x0002D8, "Member 'UUMG_PhotoModeControll_UploadList_C::UploadPhotoMergin_3' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, UploadThumbnailImages) == 0x0002E8, "Member 'UUMG_PhotoModeControll_UploadList_C::UploadThumbnailImages' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, UploadSelectWindowClickEvent) == 0x0002F8, "Member 'UUMG_PhotoModeControll_UploadList_C::UploadSelectWindowClickEvent' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControll_UploadList_C, PhotoModeImageComponent) == 0x000308, "Member 'UUMG_PhotoModeControll_UploadList_C::PhotoModeImageComponent' has a wrong offset!");

}

