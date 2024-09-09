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
	 * WidgetBlueprintGeneratedClass CommonEquipmentStatusDescWithImageView.CommonEquipmentStatusDescWithImageView_C
	 * Size -> 0x009E (FullSize[0x0316] - InheritedSize[0x0278])
	 */
	class UCommonEquipmentStatusDescWithImageView_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCommonEquipmentStatusDescBase_C*                    Base;                                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        BaseGrp;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnOperationRotate_C*                               CmnOperationRotate;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        Cvs_3DImage;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        DescGrp;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonEquipmentBasicStatusParts_C*                  EquipmentBasicStatusParts;                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonEquipmentImagePartsBase_C*                    EquipmentImage;                                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_CaptureStudio_C*                                UMG_CaptureStudio;                                       // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WS_Images;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ESBCharaEquipType                                          EquipmentType;                                           // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsBaseBgNormalType;                                     // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bIsForStorage;                                           // 0x02CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsEquipmentImage3D;                                     // 0x02CB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       bIsEquipmentModelCaptureStudioConstructed;               // 0x02CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsEquipmentModelLoading;                                // 0x02CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LJ69[0x2];                                   // 0x02CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EquipmentIdForRegisterModelLoad;                         // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    StatusTypeId;                                            // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnRequestWeaponModelLoad;                                // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRequestBattleImagineModelLoad;                         // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector2D                                           WindowSize;                                              // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              EquipmentUniqueId;                                       // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    EquipmentId;                                             // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bForWishList;                                            // 0x0314(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BgVisible;                                               // 0x0315(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetVisibleInventoryTagInfoIcon(bool IsVisible);
		void SetVisibleSPEffectBonusInfo(bool IsVisible);
		void SetBattleScoreTextColor(const struct FOwnItemInfo& InBeforeItem, const struct FOwnItemInfo& InAfterItem);
		void SetStackBToolTipStatus(bool bIsIconOff);
		void SetWishListMode(bool bWishList);
		void ShowBasicStatusPartsTags();
		void SetPrevInfo(const struct FOwnItemInfo& Prev);
		void SetDescPosition(const struct FVector2D& InPosition);
		void SetWeaponDescSPEffectByRecipi(int32_t InRecipiId);
		void HideBasicStatusPartsTags();
		void SetImagineDescByOwnItemInfo(const struct FOwnItemInfo& OwnItemInfo);
		void SetSPEffectTxtColor(const struct FSlateColor& InColorAndOpacity);
		void SetLevelSync(bool bIsLevelSync);
		void LoadImagineAsset(int32_t WeaponItemId);
		void SetImagineDescByCharacterImagineRecepiData(const struct FCharacterCraftRecepi& MasterData);
		void UpdateDrawMode();
		void LoadWeaponAsset(int32_t WeaponItemId);
		void SetWeaponDescByCharacterCraftRecepiData(const struct FCharacterCraftRecepi& MasterData);
		void SetWeaponDescByOwnItemInfo(const struct FOwnItemInfo& InWeaponUniqueId);
		void SwitchBaseBgType(bool InIsNormalType);
		void SetDescToDefault(bool InIsDescDefault);
		void SetEquipmentModelCaptureImageVisibility(bool InIsVisible);
		void SetUsingEquipmentImage2Dor3D(bool InUse3D);
		void UpdateImagineDescByMasterData(int32_t InImagineId, bool bInitTagsByMaster);
		void UpdateWeaponDescByMasterData(int32_t InWeaponID, int32_t MinLevel, int32_t MaxLevel, int32_t InRecipiId, bool bInitTagsByMaster);
		void UpdateDescByMasterData(int32_t InEquipmentItemId);
		void UpdateImagineDescByOwnItemInfo(const class FString& inImagineUniqueId);
		void UpdateWeaponDescByOwnItemInfo(const class FString& InWeaponUniqueId);
		void UpdateDescByOwnItemInfo(const class FString& InEquipmentUniqueId);
		void SetEquipmentType(ESBCharaEquipType InEquipType);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_CommonEquipmentStatusDescWithImageView(int32_t EntryPoint);
		void OnRequestBattleImagineModelLoad__DelegateSignature(const struct FInventoryItemData& InBattleImagineInventoryItemData);
		void OnRequestWeaponModelLoad__DelegateSignature(const struct FInventoryItemData& InWeaponInventoryItemData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
