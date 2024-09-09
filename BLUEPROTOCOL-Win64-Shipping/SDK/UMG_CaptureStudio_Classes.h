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
	 * WidgetBlueprintGeneratedClass UMG_CaptureStudio.UMG_CaptureStudio_C
	 * Size -> 0x00F0 (FullSize[0x0368] - InheritedSize[0x0278])
	 */
	class UUMG_CaptureStudio_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Captured_Imagine;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Captured_Mannequin;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Captured_MountImagine;                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Captured_Ornament;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Captured_Weapon;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_CaptureStudioBase_C*                             CaptureStudio;                                           // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemType                                                  ItemType;                                                // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_D8DF[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WeaponItemId;                                            // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ActiveRotate;                                            // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SETA[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CostumeItemId;                                           // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CostumeStorageNumber;                                    // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KNI0[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CostumeUniqueID;                                         // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       ActiveMove;                                              // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EProtectorCategory                                         MannequinCategory;                                       // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEquipableGender                                           MannequinGender;                                         // 0x02DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ActiveZoom;                                              // 0x02DB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    ImaginItemId;                                            // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnCaptureStudioConstructed;                              // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnLoadAssetComplete;                                     // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bImageVisible;                                           // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KOBC[0x3];                                   // 0x0301(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            ExternalDirectionalLightRotation;                        // 0x0304(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHasExternalDirectionalLightRotation;                    // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OSCN[0x3];                                   // 0x0311(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MountImagineId;                                          // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CapturePriority;                                         // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HJSF[0x4];                                   // 0x031C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TempTransform;                                           // 0x0320(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    OrnamentId;                                              // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CQ94[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OrnamentUniqueId;                                        // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void SetOrnamentUniqueId(const class FString& InUniqueId);
		void SetOrnamentId(int32_t InId, bool* IsExist);
		void SetOwnItem(const struct FOwnItemInfo& InOwnItem);
		void SetLightEnable(bool bIsEnable);
		void ResetMountImagineMeshAndCameraTransform();
		void ResetWeaponMeshAndCameraTransform();
		void SetMountImagineId(int32_t ImaginetemId, bool* IsExist);
		void DebugPrintObjectPath();
		void SetStudioHidden(bool InIsHidden);
		void SetupAndLoadAsset(const class FScriptDelegate& LoadCompleteEvent, const struct FInventoryItemData& InInventoryItemData);
		void LoadCostumeAsset(class ABP_MannequinForCapture_Studio_C* MannequiCaptionStudio, const class FScriptDelegate& Event, bool* Result);
		void SetStudioVisibility(bool InIsVisible);
		void SetImagineId(int32_t ImaginetemId, bool* IsExist);
		void IsCostumeValid(bool* IsValid);
		void SetCaptureZoomActive(bool ActiveZoom);
		void SetCostumeItemID(int32_t CostumeItemId, const class FString& CostumeUniqueID, int32_t CostumeStorageNumber);
		void SetWeaponId(int32_t WeaponItemId, bool* IsExist);
		void SetDrawMode(EItemType ItemType);
		void SetCaptureRotateActive(bool ActiveRotate);
		void SetCaptureMoveActive(bool ActiveMove);
		void Construct();
		void Construct_Capture_Studio();
		void LoadAsset();
		void LoadWeaponAsset();
		void LoadMannequinAsset();
		void DestructCaptureStudio();
		void Destruct();
		void LoadImagineAsset();
		void OnWeaponLoaded();
		void DoDisableCaptureStudio();
		void SetEnableCaptureStudio(bool enable);
		void DoEnableCaptureStudio();
		void OnCostumeLoaded();
		void OnImagineLoaded();
		void LoadMountImagineAsset();
		void OnMountImagineLoaded();
		void SetExternalDirectionalLightRotation(const struct FRotator& Rotation);
		void ApplyExternalDirectionalLightRotation();
		void OnOrnamentLoaded();
		void LoadOrnamentAsset(int32_t InOrnamentId, const class FString& InUniqueId);
		void ExecuteUbergraph_UMG_CaptureStudio(int32_t EntryPoint);
		void OnLoadAssetComplete__DelegateSignature();
		void OnCaptureStudioConstructed__DelegateSignature(class ABP_CaptureStudioBase_C* InConstructedCaptureStudio);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
