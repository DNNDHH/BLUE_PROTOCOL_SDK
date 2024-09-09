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
	 * WidgetBlueprintGeneratedClass CmnWeaponSkinIcon.CmnWeaponSkinIcon_C
	 * Size -> 0x0090 (FullSize[0x0308] - InheritedSize[0x0278])
	 */
	class UCmnWeaponSkinIcon_C : public UUserWidget
	{
	public:
		class UImage*                                              LimitedMarkIcon;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WeaponSkinIcon;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSBWeaponItemData                                   WeaponItemData;                                          // 0x0288(0x0078) Edit, BlueprintVisible, DisableEditOnInstance
		class UUserWidget*                                         CachedToolTipWidget;                                     // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CreateTooltipWidget(bool InIsSkinAttached, int32_t InWeaponSkinId, bool InIsTermLimited, const struct FDateTime& InExpiryDateTime);
		void SetWeaponSkinInfo(const struct FSBWeaponItemData& InWeaponItemData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
