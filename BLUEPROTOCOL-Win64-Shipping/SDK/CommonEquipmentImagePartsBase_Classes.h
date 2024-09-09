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
	 * WidgetBlueprintGeneratedClass CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C
	 * Size -> 0x0019 (FullSize[0x0291] - InheritedSize[0x0278])
	 */
	class UCommonEquipmentImagePartsBase_C : public UUserWidget
	{
	public:
		class UCommonEquipment2DImageParts_C*                      Equipment2DImageParts;                                   // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonEquipmentModelCaptureImageParts_C*            EquipmentModelCaptureImageParts;                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitcherForEquipmentImage;                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsImageType2D;                                          // 0x0290(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetItem2DImage(int32_t ItemId);
		void SetModelCaptureImageVisibility(bool InIsVisible);
		void SetImagine2DImage(int32_t InImagineId);
		void SetWeapon2DImage(int32_t InWeaponID);
		void SwitchModelTypeWeaponOrImagine(bool InIsWeapon);
		void SwitchImageType(bool InIs2DImage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
