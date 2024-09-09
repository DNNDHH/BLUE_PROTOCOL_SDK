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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C
	 * Size -> 0x0070 (FullSize[0x02E8] - InheritedSize[0x0278])
	 */
	class UMyCharaMenu_EquippedCostumeInfo_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMyCharaMenu_CommonCostumeTypeHeading_C*             CostumeHeading;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBoxForCostumeInfo;                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    HeadingTitleTextId;                                      // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_9R9P[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<E_MyCharaMenu_EquippedCostumeType, int32_t>           EquippedCostumeInfoListItemMaxNumMap;                    // 0x0298(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetRingEquippedHand(ESBCharaEquipType InRingEquipType, bool* OutIsLeftFinger);
		void UpdateEquippedCostumeInfo(E_MyCharaMenu_EquippedCostumeType InEquippedCostumeType, const struct FCharaEquipInfo& InCharaEquipInfo, TArray<ECharaPartsLocation>* InGrayOutCharaPartsLocations);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
