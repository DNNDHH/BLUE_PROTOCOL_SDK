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
	 * WidgetBlueprintGeneratedClass CmnWeaponSpecialMainRare.CmnWeaponSpecialMainRare_C
	 * Size -> 0x0009 (FullSize[0x0281] - InheritedSize[0x0278])
	 */
	class UCmnWeaponSpecialMainRare_C : public UUserWidget
	{
	public:
		class UWidgetSwitcher*                                     Widget_RareMark;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ESBWeaponPerkRarity                                        Rarity;                                                  // 0x0280(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetRarity(ESBWeaponPerkRarity* Rarity);
		void SetData(ESBWeaponPerkRarity Selection);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
