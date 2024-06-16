#pragma once

 

// Package: MyCharaMenu_ArmamentChange

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C
// 0x0338 (0x05E8 - 0x02B0)
class UMyCharaMenu_ArmamentChange_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg01;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CaptureStudioCanvas;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageForModelCapture2d;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_MountImagineList_C*        MountImagineList;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MountImagineLogoMark;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MountImagineModelGrp;                              // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MoveAnim;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_MountImagine_C*            MyCharaMenu_MountImagine;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  OperationRotate;                                   // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_ForCandidateList;                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerForSystemMessage;                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeEquipWeaponProc;                           // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 SelectedEquipMountImagineUniqueId;                 // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAnimFinishedMyCharaOut;                          // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 CurrEquipMountImagineUniqueId;                     // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          TickCheck;                                         // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6720[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSubMenuChanged;                                  // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAchievementChangeButtonClicked;                  // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAcquiredAchievementLoaded;                       // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectAchievementSaved;                          // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 OpenBookMarkType;                                  // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         BookmarkTypeList;                                  // 0x03C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          TempIsEquippedWeaponUsingWeaponStickerExpired;     // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          TempIsEquipmentExpired;                            // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6721[0x6];                                     // 0x03D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         TempExpiredWeaponStickerUsingWeaponUniqueIds;      // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TempCurrEquipWeaponId;                             // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6722[0x4];                                     // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBExpiredEquipmentData                TempExpiredEquipmentData;                          // 0x03F0(0x0130)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 TempNewEquipWeaponUniqueId;                        // 0x0520(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FSBDecayedWeaponData>           TempDecayedWeapons;                                // 0x0530(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnChangeEquipCostumeProc;                          // 0x0540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 TempNewEquipImagineUniqueId;                       // 0x0550(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          TempIsNewEquipImagineIsExpired;                    // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6723[0x7];                                     // 0x0561(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_CaptureStudio_C*                   CaptureStudioForMountImagineModel;                 // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           ModelAssetLoadTimeOutHandle;                       // 0x0570(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsMountImagineModelAssetLoading;                  // 0x0578(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6724[0x7];                                     // 0x0579(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     MountImagineInventoryItemData;                     // 0x0580(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsCaptureStudioConstructed;                       // 0x05E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnChangeEquipWeaponProc__DelegateSignature(bool ProcStart);
	void OnAnimFinishedMyCharaOut__DelegateSignature();
	void OnSubMenuChanged__DelegateSignature(int32 Param_Index);
	void OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList);
	void OnAcquiredAchievementLoaded__DelegateSignature(bool InResult);
	void OnSelectAchievementSaved__DelegateSignature(bool InResult);
	void OnChangeEquipCostumeProc__DelegateSignature();
	void ExecuteUbergraph_MyCharaMenu_ArmamentChange(int32 EntryPoint);
	void OnOpenMenu();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_1();
	void Destruct();
	void Init();
	void Construct();
	void OnCaptureStudioConstructed(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio);
	void AssetLoadTimeout();
	void AssetLoadComplete();
	void LoadMountImagineModel(const class FString& InMountImagineUniqueId);
	void OnMountImagineSelectReleased();
	void ForImagineEquipExpiredItemNoticeSystemMessageTimerEnd();
	void OnSaveImagineEquipDelegate(int32 RetCode, const ESBCharaEquipType EquipType, const class FString& UniqueId, const bool IsEquip, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
	void OnMountImagineHideWindowFin(bool IsChangeRequest);
	void OnMountImagineHideWindowStart();
	void OnMountImagineChangeClick(const class FString& InEquip);
	void OnMountImagineChangeRequest(const class FString& UniqueId);
	void GetEquipped_Mountmagine_UniqueId();
	void BndEvt__MyCharaMenu_MountImagine_K2Node_ComponentBoundEvent_0_BtnMountImagineClicked__DelegateSignature();
	void Destruct_Imagine();
	void Construct_Imagine();
	void BookmarkUpdateRequest();
	void SetupEquipMountImagine();
	void CheckIfWeaponDecayed(const class FString& InWeaponUniqueId, TArray<struct FSBDecayedWeaponData>& InDecayedWeaponDatas, bool* OutIsDecayed);
	void SetupMountImagineModel(const class FString& InMountImagineUniqueId);
	void SetCaptureStudioVisibility(bool InIsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MyCharaMenu_ArmamentChange_C">();
	}
	static class UMyCharaMenu_ArmamentChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMyCharaMenu_ArmamentChange_C>();
	}
};
static_assert(alignof(UMyCharaMenu_ArmamentChange_C) == 0x000008, "Wrong alignment on UMyCharaMenu_ArmamentChange_C");
static_assert(sizeof(UMyCharaMenu_ArmamentChange_C) == 0x0005E8, "Wrong size on UMyCharaMenu_ArmamentChange_C");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, UberGraphFrame) == 0x0002B0, "Member 'UMyCharaMenu_ArmamentChange_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, AnimIn) == 0x0002B8, "Member 'UMyCharaMenu_ArmamentChange_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, Bg01) == 0x0002C0, "Member 'UMyCharaMenu_ArmamentChange_C::Bg01' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, CaptureStudioCanvas) == 0x0002C8, "Member 'UMyCharaMenu_ArmamentChange_C::CaptureStudioCanvas' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, ImageForModelCapture2d) == 0x0002D0, "Member 'UMyCharaMenu_ArmamentChange_C::ImageForModelCapture2d' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, MountImagineList) == 0x0002D8, "Member 'UMyCharaMenu_ArmamentChange_C::MountImagineList' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, MountImagineLogoMark) == 0x0002E0, "Member 'UMyCharaMenu_ArmamentChange_C::MountImagineLogoMark' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, MountImagineModelGrp) == 0x0002E8, "Member 'UMyCharaMenu_ArmamentChange_C::MountImagineModelGrp' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, MoveAnim) == 0x0002F0, "Member 'UMyCharaMenu_ArmamentChange_C::MoveAnim' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, MyCharaMenu_MountImagine) == 0x0002F8, "Member 'UMyCharaMenu_ArmamentChange_C::MyCharaMenu_MountImagine' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, MyWalletWidget) == 0x000300, "Member 'UMyCharaMenu_ArmamentChange_C::MyWalletWidget' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, OperationRotate) == 0x000308, "Member 'UMyCharaMenu_ArmamentChange_C::OperationRotate' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, UIBlocker) == 0x000310, "Member 'UMyCharaMenu_ArmamentChange_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, UIBlocker_ForCandidateList) == 0x000318, "Member 'UMyCharaMenu_ArmamentChange_C::UIBlocker_ForCandidateList' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, UIBlockerForSystemMessage) == 0x000320, "Member 'UMyCharaMenu_ArmamentChange_C::UIBlockerForSystemMessage' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, OnChangeEquipWeaponProc) == 0x000328, "Member 'UMyCharaMenu_ArmamentChange_C::OnChangeEquipWeaponProc' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, SelectedEquipMountImagineUniqueId) == 0x000338, "Member 'UMyCharaMenu_ArmamentChange_C::SelectedEquipMountImagineUniqueId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, OnAnimFinishedMyCharaOut) == 0x000348, "Member 'UMyCharaMenu_ArmamentChange_C::OnAnimFinishedMyCharaOut' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, CurrEquipMountImagineUniqueId) == 0x000358, "Member 'UMyCharaMenu_ArmamentChange_C::CurrEquipMountImagineUniqueId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, TickCheck) == 0x000368, "Member 'UMyCharaMenu_ArmamentChange_C::TickCheck' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, OnSubMenuChanged) == 0x000370, "Member 'UMyCharaMenu_ArmamentChange_C::OnSubMenuChanged' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, OnAchievementChangeButtonClicked) == 0x000380, "Member 'UMyCharaMenu_ArmamentChange_C::OnAchievementChangeButtonClicked' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, OnAcquiredAchievementLoaded) == 0x000390, "Member 'UMyCharaMenu_ArmamentChange_C::OnAcquiredAchievementLoaded' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, OnSelectAchievementSaved) == 0x0003A0, "Member 'UMyCharaMenu_ArmamentChange_C::OnSelectAchievementSaved' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, OpenBookMarkType) == 0x0003B0, "Member 'UMyCharaMenu_ArmamentChange_C::OpenBookMarkType' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, BookmarkTypeList) == 0x0003C0, "Member 'UMyCharaMenu_ArmamentChange_C::BookmarkTypeList' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, TempIsEquippedWeaponUsingWeaponStickerExpired) == 0x0003D0, "Member 'UMyCharaMenu_ArmamentChange_C::TempIsEquippedWeaponUsingWeaponStickerExpired' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, TempIsEquipmentExpired) == 0x0003D1, "Member 'UMyCharaMenu_ArmamentChange_C::TempIsEquipmentExpired' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, TempExpiredWeaponStickerUsingWeaponUniqueIds) == 0x0003D8, "Member 'UMyCharaMenu_ArmamentChange_C::TempExpiredWeaponStickerUsingWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, TempCurrEquipWeaponId) == 0x0003E8, "Member 'UMyCharaMenu_ArmamentChange_C::TempCurrEquipWeaponId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, TempExpiredEquipmentData) == 0x0003F0, "Member 'UMyCharaMenu_ArmamentChange_C::TempExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, TempNewEquipWeaponUniqueId) == 0x000520, "Member 'UMyCharaMenu_ArmamentChange_C::TempNewEquipWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, TempDecayedWeapons) == 0x000530, "Member 'UMyCharaMenu_ArmamentChange_C::TempDecayedWeapons' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, OnChangeEquipCostumeProc) == 0x000540, "Member 'UMyCharaMenu_ArmamentChange_C::OnChangeEquipCostumeProc' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, TempNewEquipImagineUniqueId) == 0x000550, "Member 'UMyCharaMenu_ArmamentChange_C::TempNewEquipImagineUniqueId' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, TempIsNewEquipImagineIsExpired) == 0x000560, "Member 'UMyCharaMenu_ArmamentChange_C::TempIsNewEquipImagineIsExpired' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, CaptureStudioForMountImagineModel) == 0x000568, "Member 'UMyCharaMenu_ArmamentChange_C::CaptureStudioForMountImagineModel' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, ModelAssetLoadTimeOutHandle) == 0x000570, "Member 'UMyCharaMenu_ArmamentChange_C::ModelAssetLoadTimeOutHandle' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, bIsMountImagineModelAssetLoading) == 0x000578, "Member 'UMyCharaMenu_ArmamentChange_C::bIsMountImagineModelAssetLoading' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, MountImagineInventoryItemData) == 0x000580, "Member 'UMyCharaMenu_ArmamentChange_C::MountImagineInventoryItemData' has a wrong offset!");
static_assert(offsetof(UMyCharaMenu_ArmamentChange_C, bIsCaptureStudioConstructed) == 0x0005E0, "Member 'UMyCharaMenu_ArmamentChange_C::bIsCaptureStudioConstructed' has a wrong offset!");

}

