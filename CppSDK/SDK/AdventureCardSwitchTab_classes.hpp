#pragma once

 

// Package: AdventureCardSwitchTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AdventureCardSwitchTab.AdventureCardSwitchTab_C
// 0x00E0 (0x0358 - 0x0278)
class UAdventureCardSwitchTab_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Camera;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Costume;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem3_C*               CostumeButton;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipList_C*                           EquipList;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MilitaryRecord;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem3_C*               MilitaryRecordButton;                              // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMilitaryRecordList_C*                  MilitaryRecordList;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem3_C*               PhotoButton;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPhotoList_C*                           PhotoList;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Weapon;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem3_C*               WeaponButton;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponList_C*                          WeaponList_112;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_64;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_126;                                // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPhotoButtonClickEvent;                           // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPhotoButtonCloseEvent;                           // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickedThumbnail;                                // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickSubButtonEvent;                             // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsMyProfile;                                       // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_9036[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClickedEquipList;                                // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCliked_PhotoLikeBtn;                             // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPhotoButtonClickEvent__DelegateSignature();
	void OnPhotoButtonCloseEvent__DelegateSignature();
	void OnClickedThumbnail__DelegateSignature();
	void OnClickSubButtonEvent__DelegateSignature();
	void OnClickedEquipList__DelegateSignature(int32 OutItemId, const class FString& OutUniqueId);
	void OnCliked_PhotoLikeBtn__DelegateSignature(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnableList);
	void ExecuteUbergraph_AdventureCardSwitchTab(int32 EntryPoint);
	void BndEvt__AdventureCardSwitchTab_PhotoList_K2Node_ComponentBoundEvent_3_OnClicked_PhotoLikeBtn__DelegateSignature(TArray<int32>& OutLikeCountList, TArray<bool>& OutLikeBtnEnableList);
	void BndEvt__AdventureCardSwitchTab_MilitalyRecordButton_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature();
	void BndEvt__AdventureCardSwitchTab_EquipList_K2Node_ComponentBoundEvent_4_OnClickedEquipList__DelegateSignature(int32 OutItemId, const class FString& OutUniqueId);
	void BndEvt__AdventureCardSwitchTab_WeaponButton_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature();
	void BndEvt__AdventureCardSwitchTab_CostumeButton_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature();
	void BndEvt__AdventureCardSwitchTab_PhotoButton_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void OnClickedThumbnail_Event();
	void PhotoButtonClose_Event();
	void PhotoButtonClick_Event();
	void Construct();
	void GetThumbnailTexture(class FString* URL_Thumbnail);
	void SetEquipListData(bool InToolTipsEnable, const struct FOwnItemInfo& InMountImagine);
	void SetPhotoListData(TArray<struct FPlayerProfilePhotoTrimmingInfo>& PhotoTrimmingInfoList);
	void ResetFlag();
	bool IsActivePhoto();
	void Set_Button_Selected(bool OnPhotoButton, bool OnCostumeButton, bool OnWeaponButton, bool OnMilitaryRecordButton);
	void Reset(bool Thumbnail1, bool Thumbnail2, bool Thumbnail3);
	void SetUserPhoto1(float InScale, const struct FVector2D& InPosition, const class FString& URL, int32 InLikeCount, bool InIsEnableLikeCount, const class FString& InPhotoModeImageId);
	void SetUserPhoto2(float InScale, const struct FVector2D& InPosition, const class FString& URL, int32 InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId);
	void SetUserPhoto3(float InScale, const struct FVector2D& InPosition, const class FString& URL, int32 InLikeCount, bool InIsLikeEnableCount, const class FString& InPhotoModeImageId);
	void SetPhotoBtnEnable(bool bInIsEnabled);
	void Init(bool InIsMe, const class FString& InPlayerId, const class FString& InCharacterId);
	void Set_Military_Record_List(TArray<struct FMilitaryRecordData>& InMilitaryRecordList, const bool InIsMilitalyRecordOpen);
	void SetOtherPCEquipData(const struct FPlayerProfileMenuDetailData& InData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AdventureCardSwitchTab_C">();
	}
	static class UAdventureCardSwitchTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdventureCardSwitchTab_C>();
	}
};
static_assert(alignof(UAdventureCardSwitchTab_C) == 0x000008, "Wrong alignment on UAdventureCardSwitchTab_C");
static_assert(sizeof(UAdventureCardSwitchTab_C) == 0x000358, "Wrong size on UAdventureCardSwitchTab_C");
static_assert(offsetof(UAdventureCardSwitchTab_C, UberGraphFrame) == 0x000278, "Member 'UAdventureCardSwitchTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, Camera) == 0x000280, "Member 'UAdventureCardSwitchTab_C::Camera' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, Costume) == 0x000288, "Member 'UAdventureCardSwitchTab_C::Costume' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, CostumeButton) == 0x000290, "Member 'UAdventureCardSwitchTab_C::CostumeButton' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, EquipList) == 0x000298, "Member 'UAdventureCardSwitchTab_C::EquipList' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, MilitaryRecord) == 0x0002A0, "Member 'UAdventureCardSwitchTab_C::MilitaryRecord' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, MilitaryRecordButton) == 0x0002A8, "Member 'UAdventureCardSwitchTab_C::MilitaryRecordButton' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, MilitaryRecordList) == 0x0002B0, "Member 'UAdventureCardSwitchTab_C::MilitaryRecordList' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, PhotoButton) == 0x0002B8, "Member 'UAdventureCardSwitchTab_C::PhotoButton' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, PhotoList) == 0x0002C0, "Member 'UAdventureCardSwitchTab_C::PhotoList' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, Weapon) == 0x0002C8, "Member 'UAdventureCardSwitchTab_C::Weapon' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, WeaponButton) == 0x0002D0, "Member 'UAdventureCardSwitchTab_C::WeaponButton' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, WeaponList_112) == 0x0002D8, "Member 'UAdventureCardSwitchTab_C::WeaponList_112' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, WidgetSwitcher_64) == 0x0002E0, "Member 'UAdventureCardSwitchTab_C::WidgetSwitcher_64' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, WidgetSwitcher_126) == 0x0002E8, "Member 'UAdventureCardSwitchTab_C::WidgetSwitcher_126' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, OnPhotoButtonClickEvent) == 0x0002F0, "Member 'UAdventureCardSwitchTab_C::OnPhotoButtonClickEvent' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, OnPhotoButtonCloseEvent) == 0x000300, "Member 'UAdventureCardSwitchTab_C::OnPhotoButtonCloseEvent' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, OnClickedThumbnail) == 0x000310, "Member 'UAdventureCardSwitchTab_C::OnClickedThumbnail' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, OnClickSubButtonEvent) == 0x000320, "Member 'UAdventureCardSwitchTab_C::OnClickSubButtonEvent' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, IsMyProfile) == 0x000330, "Member 'UAdventureCardSwitchTab_C::IsMyProfile' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, OnClickedEquipList) == 0x000338, "Member 'UAdventureCardSwitchTab_C::OnClickedEquipList' has a wrong offset!");
static_assert(offsetof(UAdventureCardSwitchTab_C, OnCliked_PhotoLikeBtn) == 0x000348, "Member 'UAdventureCardSwitchTab_C::OnCliked_PhotoLikeBtn' has a wrong offset!");

}

