#pragma once

 

// Package: UMG_CaptureStudio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_CaptureStudio.UMG_CaptureStudio_C
// 0x00A0 (0x0318 - 0x0278)
class UUMG_CaptureStudio_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Captured_Imagine;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Captured_Mannequin;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Captured_MountImagine;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Captured_Weapon;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_CaptureStudioBase_C*                CaptureStudio;                                     // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     ItemType;                                          // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_9B8A[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeaponItemId;                                      // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ActiveRotate;                                      // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B8B[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CostumeItemId;                                     // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CostumeStorageNumber;                              // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9B8C[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CostumeUniqueID;                                   // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          ActiveMove;                                        // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	EProtectorCategory                            MannequinCategory;                                 // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              MannequinGender;                                   // 0x02D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ActiveZoom;                                        // 0x02D3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         ImaginItemId;                                      // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCaptureStudioConstructed;                        // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnLoadAssetComplete;                               // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bImageVisible;                                     // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B8D[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               ExternalDirectionalLightRotation;                  // 0x02FC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHasExternalDirectionalLightRotation;              // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9B8E[0x3];                                     // 0x0309(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MountImagineId;                                    // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CapturePriority;                                   // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnCaptureStudioConstructed__DelegateSignature(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio);
	void OnLoadAssetComplete__DelegateSignature();
	void ExecuteUbergraph_UMG_CaptureStudio(int32 EntryPoint);
	void ApplyExternalDirectionalLightRotation();
	void SetExternalDirectionalLightRotation(const struct FRotator& Rotation);
	void OnMountImagineLoaded();
	void LoadMountImagineAsset();
	void OnImagineLoaded();
	void OnCostumeLoaded();
	void DoEnableCaptureStudio();
	void SetEnableCaptureStudio(bool Enable);
	void DoDisableCaptureStudio();
	void OnWeaponLoaded();
	void LoadImagineAsset();
	void Construct();
	void Destruct();
	void Destruct_Capture_Studio();
	void LoadMannequinAsset();
	void LoadWeaponAsset();
	void LoadAsset();
	void Construct_Capture_Studio();
	void SetCaptureMoveActive(bool Param_ActiveMove);
	void SetCaptureRotateActive(bool Param_ActiveRotate);
	void SetDrawMode(EItemType Param_ItemType);
	void SetWeaponId(int32 Param_WeaponItemId, bool* IsExist);
	void SetCostumeItemID(int32 Param_CostumeItemId, const class FString& Param_CostumeUniqueID, int32 Param_CostumeStorageNumber);
	void SetCaptureZoomActive(bool Param_ActiveZoom);
	void IsCostumeValid(bool* IsValid);
	void SetImagineId(int32 ImaginetemId, bool* IsExist);
	void SetStudioVisibility(bool InIsVisible);
	void Load_Costume_Asset(class ABP_MannequinForCapture_Studio_C* MannequiCaptionStudio, const TDelegate<void()>& Event, bool* Result);
	void SetupAndLoadAsset(const TDelegate<void()>& LoadCompleteEvent, const struct FInventoryItemData& InInventoryItemData);
	void SetStudioHidden(bool InIsHidden);
	void DebugPrintObjectPath();
	void SetMountImagineId(int32 ImaginetemId, bool* IsExist);
	void ResetWeaponMeshAndCameraTransform();
	void ResetMountImagineMeshAndCameraTransform();
	void SetLightEnable(bool bIsEnable);
	void SetOwnItem(const struct FOwnItemInfo& InOwnItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_CaptureStudio_C">();
	}
	static class UUMG_CaptureStudio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_CaptureStudio_C>();
	}
};
static_assert(alignof(UUMG_CaptureStudio_C) == 0x000008, "Wrong alignment on UUMG_CaptureStudio_C");
static_assert(sizeof(UUMG_CaptureStudio_C) == 0x000318, "Wrong size on UUMG_CaptureStudio_C");
static_assert(offsetof(UUMG_CaptureStudio_C, UberGraphFrame) == 0x000278, "Member 'UUMG_CaptureStudio_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, Captured_Imagine) == 0x000280, "Member 'UUMG_CaptureStudio_C::Captured_Imagine' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, Captured_Mannequin) == 0x000288, "Member 'UUMG_CaptureStudio_C::Captured_Mannequin' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, Captured_MountImagine) == 0x000290, "Member 'UUMG_CaptureStudio_C::Captured_MountImagine' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, Captured_Weapon) == 0x000298, "Member 'UUMG_CaptureStudio_C::Captured_Weapon' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, CaptureStudio) == 0x0002A0, "Member 'UUMG_CaptureStudio_C::CaptureStudio' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, ItemType) == 0x0002A8, "Member 'UUMG_CaptureStudio_C::ItemType' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, WeaponItemId) == 0x0002AC, "Member 'UUMG_CaptureStudio_C::WeaponItemId' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, ActiveRotate) == 0x0002B0, "Member 'UUMG_CaptureStudio_C::ActiveRotate' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, CostumeItemId) == 0x0002B4, "Member 'UUMG_CaptureStudio_C::CostumeItemId' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, CostumeStorageNumber) == 0x0002B8, "Member 'UUMG_CaptureStudio_C::CostumeStorageNumber' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, CostumeUniqueID) == 0x0002C0, "Member 'UUMG_CaptureStudio_C::CostumeUniqueID' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, ActiveMove) == 0x0002D0, "Member 'UUMG_CaptureStudio_C::ActiveMove' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, MannequinCategory) == 0x0002D1, "Member 'UUMG_CaptureStudio_C::MannequinCategory' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, MannequinGender) == 0x0002D2, "Member 'UUMG_CaptureStudio_C::MannequinGender' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, ActiveZoom) == 0x0002D3, "Member 'UUMG_CaptureStudio_C::ActiveZoom' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, ImaginItemId) == 0x0002D4, "Member 'UUMG_CaptureStudio_C::ImaginItemId' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, OnCaptureStudioConstructed) == 0x0002D8, "Member 'UUMG_CaptureStudio_C::OnCaptureStudioConstructed' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, OnLoadAssetComplete) == 0x0002E8, "Member 'UUMG_CaptureStudio_C::OnLoadAssetComplete' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, bImageVisible) == 0x0002F8, "Member 'UUMG_CaptureStudio_C::bImageVisible' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, ExternalDirectionalLightRotation) == 0x0002FC, "Member 'UUMG_CaptureStudio_C::ExternalDirectionalLightRotation' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, bHasExternalDirectionalLightRotation) == 0x000308, "Member 'UUMG_CaptureStudio_C::bHasExternalDirectionalLightRotation' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, MountImagineId) == 0x00030C, "Member 'UUMG_CaptureStudio_C::MountImagineId' has a wrong offset!");
static_assert(offsetof(UUMG_CaptureStudio_C, CapturePriority) == 0x000310, "Member 'UUMG_CaptureStudio_C::CapturePriority' has a wrong offset!");

}

