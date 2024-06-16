#pragma once

 

// Package: PhotoViewer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PhotoViewer.PhotoViewer_C
// 0x0090 (0x0340 - 0x02B0)
class UPhotoViewer_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CloseAnim;                                         // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OpenAnim;                                          // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                                BGCloseBtn;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BgGroup;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ErrorImagePhoto;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_116;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Loding;                                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Thumbnail;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsInit;                                           // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_901D[0x7];                                     // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose_Complete;                                  // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose_Complete__DelegateSignature();
	void ExecuteUbergraph_PhotoViewer(int32 EntryPoint);
	void OnPress_Cancel();
	void BndEvt__BigThumbnail_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
	void WidgetAnimationEvt_CloseAnim_K2Node_WidgetAnimationEvent_1();
	void BndEvt__BigThumbnail_BGCloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void WidgetAnimationEvt_OpenAnim_K2Node_WidgetAnimationEvent_0();
	void SetData(const class FString& URL);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PhotoViewer_C">();
	}
	static class UPhotoViewer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhotoViewer_C>();
	}
};
static_assert(alignof(UPhotoViewer_C) == 0x000008, "Wrong alignment on UPhotoViewer_C");
static_assert(sizeof(UPhotoViewer_C) == 0x000340, "Wrong size on UPhotoViewer_C");
static_assert(offsetof(UPhotoViewer_C, UberGraphFrame) == 0x0002B0, "Member 'UPhotoViewer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, CloseAnim) == 0x0002B8, "Member 'UPhotoViewer_C::CloseAnim' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, OpenAnim) == 0x0002C0, "Member 'UPhotoViewer_C::OpenAnim' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, BGCloseBtn) == 0x0002C8, "Member 'UPhotoViewer_C::BGCloseBtn' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, BgGroup) == 0x0002D0, "Member 'UPhotoViewer_C::BgGroup' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, CmnClose01) == 0x0002D8, "Member 'UPhotoViewer_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, CmnImageThrobber) == 0x0002E0, "Member 'UPhotoViewer_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, ErrorImagePhoto) == 0x0002E8, "Member 'UPhotoViewer_C::ErrorImagePhoto' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, Image) == 0x0002F0, "Member 'UPhotoViewer_C::Image' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, Image_1) == 0x0002F8, "Member 'UPhotoViewer_C::Image_1' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, Image_116) == 0x000300, "Member 'UPhotoViewer_C::Image_116' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, Loding) == 0x000308, "Member 'UPhotoViewer_C::Loding' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, Thumbnail) == 0x000310, "Member 'UPhotoViewer_C::Thumbnail' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, UIBlocker) == 0x000318, "Member 'UPhotoViewer_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, WidgetSwitcher_0) == 0x000320, "Member 'UPhotoViewer_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, bIsInit) == 0x000328, "Member 'UPhotoViewer_C::bIsInit' has a wrong offset!");
static_assert(offsetof(UPhotoViewer_C, OnClose_Complete) == 0x000330, "Member 'UPhotoViewer_C::OnClose_Complete' has a wrong offset!");

}

