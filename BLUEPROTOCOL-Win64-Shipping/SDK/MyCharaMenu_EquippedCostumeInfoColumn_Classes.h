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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C
	 * Size -> 0x0020 (FullSize[0x0298] - InheritedSize[0x0278])
	 */
	class UMyCharaMenu_EquippedCostumeInfoColumn_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        VerticalBoxForEquippedCostumeInfos;                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UMyCharaMenu_EquippedCostumeInfo_C*>          EquippedCostumeInfos;                                    // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void UpdateEquippedCostumeInfos(const struct FCharaEquipInfo& InCharaEquipInfo, ESBCharacterGender InCharacterGender);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
