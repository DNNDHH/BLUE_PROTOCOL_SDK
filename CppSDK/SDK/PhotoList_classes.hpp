#pragma once

 

// Package: PhotoList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PhotoList.PhotoList_C
// 0x0098 (0x0310 - 0x0278)
class UPhotoList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommunicateSettingMenu_Photo_Thumbnail_C* AdventureCardMenu_Thumbnail_01;                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommunicateSettingMenu_Photo_Thumbnail_C* AdventureCardMenu_Thumbnail_02;                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommunicateSettingMenu_Photo_Thumbnail_C* AdventureCardMenu_Thumbnail_03;                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             PhotoButtonClickEvent;                             // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             PhotoButtonCloseEvent;                             // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture*                               ThumbnailTexture;                                  // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedThumbnail;                                // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsClick_Thumbnail1;                                // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsClick_Thumbnail2;                                // 0x02D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsClick_Thumbnail3;                                // 0x02DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3ED7[0x5];                                     // 0x02DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         PhotoModeImageIdList;                              // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 LikeCountList;                                     // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnClicked_PhotoLikeBtn;                            // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void PhotoButtonClickEvent__DelegateSignature();
	void PhotoButtonCloseEvent__DelegateSignature();
	void OnClickedThumbnail__DelegateSignature();
	void OnClicked_PhotoLikeBtn__DelegateSignature(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnableList);
	void ExecuteUbergraph_PhotoList(int32 EntryPoint);
	void BndEvt__PhotoList_AdventureCardMenu_Thumbnail_03_K2Node_ComponentBoundEvent_2_OnClicked_LikeBtn__DelegateSignature(const class FString& OutPhotoModeImageId, int32 OutLikeCount);
	void BndEvt__PhotoList_AdventureCardMenu_Thumbnail_02_K2Node_ComponentBoundEvent_1_OnClicked_LikeBtn__DelegateSignature(const class FString& OutPhotoModeImageId, int32 OutLikeCount);
	void BndEvt__PhotoList_AdventureCardMenu_Thumbnail_01_K2Node_ComponentBoundEvent_0_OnClicked_LikeBtn__DelegateSignature(const class FString& OutPhotoModeImageId, int32 OutLikeCount);
	void OnClickedThumbnail_3();
	void OnClickedThumbnail_2();
	void OnClickedThumbnail_1();
	void Construct();
	void CloseEvent();
	void DownloadThumbnail1(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32 InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId);
	void DownloadThumbnail2(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32 InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId);
	void DownloadThumbnail3(const class FString& URL, float InScale, const struct FVector2D& InPosition, int32 InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId);
	void GetThumbnail1URL(class FString* URL_Thumbnail);
	void GetThumbnail2URL(class FString* URL_Thumbnail);
	void GetThumbnail3URL(class FString* URL_Thumbnail);
	class FString GetThumbnailURL();
	void ResetFlag();
	void SetThumbnail(bool Param_IsClick_Thumbnail1, bool Param_IsClick_Thumbnail2, bool Param_IsClick_Thumbnail3);
	void Reset(bool Thumbnail1, bool Thumbnail2, bool Thumbnail3);
	void SetBtnEnable(bool bInIsEnabled);
	void Init(bool InIsMe, const class FString& InPlayerId, const class FString& InCharacterId);
	void LikeCounterChange(const class FString& InPhotoModeImageId, int32 InLikeCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PhotoList_C">();
	}
	static class UPhotoList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPhotoList_C>();
	}
};
static_assert(alignof(UPhotoList_C) == 0x000008, "Wrong alignment on UPhotoList_C");
static_assert(sizeof(UPhotoList_C) == 0x000310, "Wrong size on UPhotoList_C");
static_assert(offsetof(UPhotoList_C, UberGraphFrame) == 0x000278, "Member 'UPhotoList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, AdventureCardMenu_Thumbnail_01) == 0x000280, "Member 'UPhotoList_C::AdventureCardMenu_Thumbnail_01' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, AdventureCardMenu_Thumbnail_02) == 0x000288, "Member 'UPhotoList_C::AdventureCardMenu_Thumbnail_02' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, AdventureCardMenu_Thumbnail_03) == 0x000290, "Member 'UPhotoList_C::AdventureCardMenu_Thumbnail_03' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, CanvasPanel_0) == 0x000298, "Member 'UPhotoList_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, PhotoButtonClickEvent) == 0x0002A0, "Member 'UPhotoList_C::PhotoButtonClickEvent' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, PhotoButtonCloseEvent) == 0x0002B0, "Member 'UPhotoList_C::PhotoButtonCloseEvent' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, ThumbnailTexture) == 0x0002C0, "Member 'UPhotoList_C::ThumbnailTexture' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, OnClickedThumbnail) == 0x0002C8, "Member 'UPhotoList_C::OnClickedThumbnail' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, IsClick_Thumbnail1) == 0x0002D8, "Member 'UPhotoList_C::IsClick_Thumbnail1' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, IsClick_Thumbnail2) == 0x0002D9, "Member 'UPhotoList_C::IsClick_Thumbnail2' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, IsClick_Thumbnail3) == 0x0002DA, "Member 'UPhotoList_C::IsClick_Thumbnail3' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, PhotoModeImageIdList) == 0x0002E0, "Member 'UPhotoList_C::PhotoModeImageIdList' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, LikeCountList) == 0x0002F0, "Member 'UPhotoList_C::LikeCountList' has a wrong offset!");
static_assert(offsetof(UPhotoList_C, OnClicked_PhotoLikeBtn) == 0x000300, "Member 'UPhotoList_C::OnClicked_PhotoLikeBtn' has a wrong offset!");

}

