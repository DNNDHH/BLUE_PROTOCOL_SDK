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
	 * WidgetBlueprintGeneratedClass CommonEquipment2DImageParts.CommonEquipment2DImageParts_C
	 * Size -> 0x0048 (FullSize[0x02C0] - InheritedSize[0x0278])
	 */
	class UCommonEquipment2DImageParts_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              EquipmentImage;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsLoadingImage;                                         // 0x0288(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_M7A4[0x3];                                   // 0x0289(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TempEquipmentId;                                         // 0x028C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EItemType                                                  TempItemType;                                            // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBImagineCategoryType                                     TempImagineType;                                         // 0x0291(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PYTI[0x6];                                   // 0x0292(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TempEquipment2DTexture[0x28];                            // 0x0298(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void SetImageSize(const struct FVector2D& InSize, bool bInSetDefaultSize);
		void SetItem2DImage(int32_t ItemId);
		void SetImagine2DImage(int32_t InImagineId);
		void SetWeapon2DImage(int32_t InWeaponID);
		void OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1(class UObject* Loaded);
		void PreConstruct(bool IsDesignTime);
		void RequestEquipment2DImageLoad(int32_t InEquipmentId, EItemType InEquipmentItemType, ESBImagineCategoryType InImagineType);
		void ExecuteUbergraph_CommonEquipment2DImageParts(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
