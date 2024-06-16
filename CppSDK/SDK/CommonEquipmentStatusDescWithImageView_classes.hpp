#pragma once

 

// Package: CommonEquipmentStatusDescWithImageView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C
// 0x00A0 (0x0318 - 0x0278)
class UCommonEquipmentStatusDescWithImageView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonEquipmentStatusDescBase_C*       Base;                                              // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BaseGrp;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_3DImage;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DescGrp;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentBasicStatusParts_C*     EquipmentBasicStatusParts;                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentImagePartsBase_C*       EquipmentImage;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   UMG_CaptureStudio;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Images;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBCharaEquipType                             EquipmentType;                                     // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsBaseBgNormalType;                               // 0x02C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsForStorage;                                     // 0x02CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsEquipmentImage3D;                               // 0x02CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsEquipmentModelCaptureStudioConstructed;         // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsEquipmentModelLoading;                          // 0x02CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C2A[0x2];                                     // 0x02CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EquipmentIdForRegisterModelLoad;                   // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StatusTypeId;                                      // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnRequestWeaponModelLoad;                          // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRequestBattleImagineModelLoad;                   // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector2D                              WindowSize;                                        // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 EquipmentUniqueId;                                 // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         EquipmentId;                                       // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnRequestWeaponModelLoad__DelegateSignature(const struct FInventoryItemData& InWeaponInventoryItemData);
	void OnRequestBattleImagineModelLoad__DelegateSignature(const struct FInventoryItemData& InBattleImagineInventoryItemData);
	void ExecuteUbergraph_CommonEquipmentStatusDescWithImageView(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetEquipmentType(ESBCharaEquipType InEquipType);
	void UpdateDescByOwnItemInfo(const class FString& InEquipmentUniqueId);
	void UpdateWeaponDescByOwnItemInfo(const class FString& InWeaponUniqueId);
	void UpdateImagineDescByOwnItemInfo(const class FString& InImagineUniqueId);
	void UpdateDescByMasterData(int32 InEquipmentItemId);
	void UpdateWeaponDescByMasterData(int32 InWeaponID, int32 MinLevel, int32 MaxLevel, int32 InRecipiId, bool bInitTagsByMaster);
	void UpdateImagineDescByMasterData(int32 InImagineId, bool bInitTagsByMaster);
	void SetUsingEquipmentImage2Dor3D(bool InUse3D);
	void SetEquipmentModelCaptureImageVisibility(bool InIsVisible);
	void SetDescToDefault(bool InIsDescDefault);
	void SwitchBaseBgType(bool InIsNormalType);
	void SetWeaponDescByOwnItemInfo(const struct FOwnItemInfo& InWeaponUniqueId);
	void Set_Weapon_Desc_By_Character_Craft_Recepi_Data(const struct FCharacterCraftRecepi& MasterData);
	void LoadWeaponAsset(int32 WeaponItemId);
	void UpdateDrawMode();
	void Set_Imagine_Desc_By_Character_Imagine_Recepi_Data(const struct FCharacterCraftRecepi& MasterData);
	void LoadImagineAsset(int32 WeaponItemId);
	void SetLevelSync(bool bIsLevelSync);
	void Set_SPEffect_Txt_Color(const struct FSlateColor& InColorAndOpacity);
	void SetImagineDescByOwnItemInfo(const struct FOwnItemInfo& OwnItemInfo);
	void HideBasicStatusPartsTags();
	void SetWeaponDescSPEffectByRecipi(int32 InRecipiId);
	void SetDescPosition(const struct FVector2D& InPosition);
	void SetPrevInfo(const struct FOwnItemInfo& Prev);
	void Show_Basic_Status_Parts_Tags();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonEquipmentStatusDescWithImageView_C">();
	}
	static class UCommonEquipmentStatusDescWithImageView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonEquipmentStatusDescWithImageView_C>();
	}
};
static_assert(alignof(UCommonEquipmentStatusDescWithImageView_C) == 0x000008, "Wrong alignment on UCommonEquipmentStatusDescWithImageView_C");
static_assert(sizeof(UCommonEquipmentStatusDescWithImageView_C) == 0x000318, "Wrong size on UCommonEquipmentStatusDescWithImageView_C");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, UberGraphFrame) == 0x000278, "Member 'UCommonEquipmentStatusDescWithImageView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, Base) == 0x000280, "Member 'UCommonEquipmentStatusDescWithImageView_C::Base' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, BaseGrp) == 0x000288, "Member 'UCommonEquipmentStatusDescWithImageView_C::BaseGrp' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, CmnOperationRotate) == 0x000290, "Member 'UCommonEquipmentStatusDescWithImageView_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, Cvs_3DImage) == 0x000298, "Member 'UCommonEquipmentStatusDescWithImageView_C::Cvs_3DImage' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, DescGrp) == 0x0002A0, "Member 'UCommonEquipmentStatusDescWithImageView_C::DescGrp' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, EquipmentBasicStatusParts) == 0x0002A8, "Member 'UCommonEquipmentStatusDescWithImageView_C::EquipmentBasicStatusParts' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, EquipmentImage) == 0x0002B0, "Member 'UCommonEquipmentStatusDescWithImageView_C::EquipmentImage' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, UMG_CaptureStudio) == 0x0002B8, "Member 'UCommonEquipmentStatusDescWithImageView_C::UMG_CaptureStudio' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, WS_Images) == 0x0002C0, "Member 'UCommonEquipmentStatusDescWithImageView_C::WS_Images' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, EquipmentType) == 0x0002C8, "Member 'UCommonEquipmentStatusDescWithImageView_C::EquipmentType' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, bIsBaseBgNormalType) == 0x0002C9, "Member 'UCommonEquipmentStatusDescWithImageView_C::bIsBaseBgNormalType' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, bIsForStorage) == 0x0002CA, "Member 'UCommonEquipmentStatusDescWithImageView_C::bIsForStorage' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, bIsEquipmentImage3D) == 0x0002CB, "Member 'UCommonEquipmentStatusDescWithImageView_C::bIsEquipmentImage3D' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, bIsEquipmentModelCaptureStudioConstructed) == 0x0002CC, "Member 'UCommonEquipmentStatusDescWithImageView_C::bIsEquipmentModelCaptureStudioConstructed' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, bIsEquipmentModelLoading) == 0x0002CD, "Member 'UCommonEquipmentStatusDescWithImageView_C::bIsEquipmentModelLoading' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, EquipmentIdForRegisterModelLoad) == 0x0002D0, "Member 'UCommonEquipmentStatusDescWithImageView_C::EquipmentIdForRegisterModelLoad' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, StatusTypeId) == 0x0002D4, "Member 'UCommonEquipmentStatusDescWithImageView_C::StatusTypeId' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, OnRequestWeaponModelLoad) == 0x0002D8, "Member 'UCommonEquipmentStatusDescWithImageView_C::OnRequestWeaponModelLoad' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, OnRequestBattleImagineModelLoad) == 0x0002E8, "Member 'UCommonEquipmentStatusDescWithImageView_C::OnRequestBattleImagineModelLoad' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, WindowSize) == 0x0002F8, "Member 'UCommonEquipmentStatusDescWithImageView_C::WindowSize' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, EquipmentUniqueId) == 0x000300, "Member 'UCommonEquipmentStatusDescWithImageView_C::EquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(UCommonEquipmentStatusDescWithImageView_C, EquipmentId) == 0x000310, "Member 'UCommonEquipmentStatusDescWithImageView_C::EquipmentId' has a wrong offset!");

}

