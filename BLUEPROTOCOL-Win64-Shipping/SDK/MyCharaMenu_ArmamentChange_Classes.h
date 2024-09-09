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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_ArmamentChange.MyCharaMenu_ArmamentChange_C
	 * Size -> 0x0331 (FullSize[0x05E1] - InheritedSize[0x02B0])
	 */
	class UMyCharaMenu_ArmamentChange_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Bg01;                                                    // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CaptureStudioCanvas;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ImageForModelCapture2d;                                  // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_MountImagineList_C*                     MountImagineList;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              MountImagineLogoMark;                                    // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MountImagineModelGrp;                                    // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MoveAnim;                                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_MountImagine_C*                         MyCharaMenu_MountImagine;                                // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyWalletWidget_C*                                   MyWalletWidget;                                          // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnOperationRotate_C*                               OperationRotate;                                         // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_ForCandidateList;                              // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlockerForSystemMessage;                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnChangeEquipWeaponProc;                                 // 0x0328(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              SelectedEquipMountImagineUniqueId;                       // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnAnimFinishedMyCharaOut;                                // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              CurrEquipMountImagineUniqueId;                           // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       TickCheck;                                               // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1JJQ[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSubMenuChanged;                                        // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnAchievementChangeButtonClicked;                        // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnAcquiredAchievementLoaded;                             // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSelectAchievementSaved;                                // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              OpenBookMarkType;                                        // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      BookmarkTypeList;                                        // 0x03C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       TempIsEquippedWeaponUsingWeaponStickerExpired;           // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TempIsEquipmentExpired;                                  // 0x03D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I1E4[0x6];                                   // 0x03D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      TempExpiredWeaponStickerUsingWeaponUniqueIds;            // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TempCurrEquipWeaponId;                                   // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6N18[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBExpiredEquipmentData                             TempExpiredEquipmentData;                                // 0x03F0(0x0130) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              TempNewEquipWeaponUniqueId;                              // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FSBDecayedWeaponData>                        TempDecayedWeapons;                                      // 0x0530(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnChangeEquipCostumeProc;                                // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              TempNewEquipImagineUniqueId;                             // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       TempIsNewEquipImagineIsExpired;                          // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_T33L[0x7];                                   // 0x0561(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMG_CaptureStudio_C*                                CaptureStudioForMountImagineModel;                       // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        ModelAssetLoadTimeOutHandle;                             // 0x0570(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsMountImagineModelAssetLoading;                        // 0x0578(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XMZK[0x7];                                   // 0x0579(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInventoryItemData                                  MountImagineInventoryItemData;                           // 0x0580(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsCaptureStudioConstructed;                             // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetCaptureStudioVisibility(bool InIsVisible);
		void SetupMountImagineModel(const class FString& InMountImagineUniqueId);
		void CheckIfWeaponDecayed(const class FString& InWeaponUniqueId, TArray<struct FSBDecayedWeaponData>* InDecayedWeaponDatas, bool* OutIsDecayed);
		void SetupEquipMountImagine();
		void BookmarkUpdateRequest();
		void Construct_Imagine();
		void Destruct_Imagine();
		void BndEvt__MyCharaMenu_MountImagine_K2Node_ComponentBoundEvent_0_BtnMountImagineClicked__DelegateSignature();
		void GetEquipped_Mountmagine_UniqueId();
		void OnMountImagineChangeRequest(const class FString& UniqueId);
		void OnMountImagineChangeClick(const class FString& InEquip);
		void OnMountImagineHideWindowStart();
		void OnMountImagineHideWindowFin(bool IsChangeRequest);
		void OnSaveImagineEquipDelegate(int32_t RetCode, ESBCharaEquipType EquipType, const class FString& UniqueId, bool IsEquip, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
		void ForImagineEquipExpiredItemNoticeSystemMessageTimerEnd();
		void OnMountImagineSelectReleased();
		void LoadMountImagineModel(const class FString& InMountImagineUniqueId);
		void AssetLoadComplete();
		void AssetLoadTimeout();
		void OnCaptureStudioConstructed(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio);
		void Construct();
		void Init();
		void Destruct();
		void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_2();
		void OnOpenMenu();
		void ExecuteUbergraph_MyCharaMenu_ArmamentChange(int32_t EntryPoint);
		void OnChangeEquipCostumeProc__DelegateSignature();
		void OnSelectAchievementSaved__DelegateSignature(bool InResult);
		void OnAcquiredAchievementLoaded__DelegateSignature(bool InResult);
		void OnAchievementChangeButtonClicked__DelegateSignature(class UMyCharaMenu_AchievementList_C* InAchievementList);
		void OnSubMenuChanged__DelegateSignature(int32_t Index);
		void OnAnimFinishedMyCharaOut__DelegateSignature();
		void OnChangeEquipWeaponProc__DelegateSignature(bool ProcStart);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
