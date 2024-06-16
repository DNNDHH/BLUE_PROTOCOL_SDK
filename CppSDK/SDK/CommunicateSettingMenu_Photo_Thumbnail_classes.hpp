#pragma once

 

// Package: CommunicateSettingMenu_Photo_Thumbnail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommunicateSettingMenu_Photo_Thumbnail.CommunicateSettingMenu_Photo_Thumbnail_C
// 0x00F0 (0x0368 - 0x0278)
class UCommunicateSettingMenu_Photo_Thumbnail_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Thumbnail;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnLike_1;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_53;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ErrorImagePhoto;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Photo;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Loding;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NoImagePhoto;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Offline;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtLikeCount;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_60;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 URL_Thumbnail;                                     // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked_CheckBox;                                // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClicked_Thumbnail;                               // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsClick;                                           // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMe;                                              // 0x0319(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5399[0x6];                                     // 0x031A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PlayerId;                                          // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 CharacterId;                                       // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 PhotoModeImageId;                                  // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         LikeCount;                                         // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_539A[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClicked_LikeBtn;                                 // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClicked_CheckBox__DelegateSignature(bool IsChecked);
	void OnClicked_Thumbnail__DelegateSignature();
	void OnClicked_LikeBtn__DelegateSignature(const class FString& OutPhotoModeImageId, int32 OutLikeCount);
	void ExecuteUbergraph_CommunicateSettingMenu_Photo_Thumbnail(int32 EntryPoint);
	void OnSendPhotoLikeDelegate_Event(const bool bWasSuccessful, const int32 RetCode, const struct FSendPhotoLike& OutSendPhotoLike);
	void BndEvt__CommunicateSettingMenu_Photo_Thumbnail_BtnLike_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__AdventureCardMenu_Thumbnail_Btn_Thumbnail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void DownLoadPhoto(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32 InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId);
	void Construct();
	void SetThumbnail(class UTexture2DDynamic* Texture, float InScale, const struct FVector2D& InPosition);
	void Reset();
	void SetURL(const class FString& URL);
	void GetUrl(class FString* Param_URL_Thumbnail);
	void SetBtnEnable(bool bInIsEnabled);
	void Init(bool InIsMe, const class FString& InPlayerId, const class FString& InCharacterId, bool Param_Index);
	bool GetBtnStatus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommunicateSettingMenu_Photo_Thumbnail_C">();
	}
	static class UCommunicateSettingMenu_Photo_Thumbnail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommunicateSettingMenu_Photo_Thumbnail_C>();
	}
};
static_assert(alignof(UCommunicateSettingMenu_Photo_Thumbnail_C) == 0x000008, "Wrong alignment on UCommunicateSettingMenu_Photo_Thumbnail_C");
static_assert(sizeof(UCommunicateSettingMenu_Photo_Thumbnail_C) == 0x000368, "Wrong size on UCommunicateSettingMenu_Photo_Thumbnail_C");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, UberGraphFrame) == 0x000278, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, Btn_Thumbnail) == 0x000280, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::Btn_Thumbnail' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, BtnLike_1) == 0x000288, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::BtnLike_1' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, CanvasPanel_53) == 0x000290, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::CanvasPanel_53' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, CmnImageThrobber) == 0x000298, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, ErrorImagePhoto) == 0x0002A0, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::ErrorImagePhoto' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, Image) == 0x0002A8, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::Image' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, Img_Photo) == 0x0002B0, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::Img_Photo' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, Loding) == 0x0002B8, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::Loding' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, NoImagePhoto) == 0x0002C0, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::NoImagePhoto' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, Offline) == 0x0002C8, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::Offline' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, TxtLikeCount) == 0x0002D0, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::TxtLikeCount' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, WidgetSwitcher_0) == 0x0002D8, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, WidgetSwitcher_60) == 0x0002E0, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::WidgetSwitcher_60' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, URL_Thumbnail) == 0x0002E8, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::URL_Thumbnail' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, OnClicked_CheckBox) == 0x0002F8, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::OnClicked_CheckBox' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, OnClicked_Thumbnail) == 0x000308, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::OnClicked_Thumbnail' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, IsClick) == 0x000318, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::IsClick' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, IsMe) == 0x000319, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::IsMe' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, PlayerId) == 0x000320, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::PlayerId' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, CharacterId) == 0x000330, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::CharacterId' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, PhotoModeImageId) == 0x000340, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::PhotoModeImageId' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, LikeCount) == 0x000350, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::LikeCount' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_Photo_Thumbnail_C, OnClicked_LikeBtn) == 0x000358, "Member 'UCommunicateSettingMenu_Photo_Thumbnail_C::OnClicked_LikeBtn' has a wrong offset!");

}

