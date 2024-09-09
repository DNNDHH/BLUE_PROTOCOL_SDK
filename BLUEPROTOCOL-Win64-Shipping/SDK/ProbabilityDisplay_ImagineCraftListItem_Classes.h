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
	 * WidgetBlueprintGeneratedClass ProbabilityDisplay_ImagineCraftListItem.ProbabilityDisplay_ImagineCraftListItem_C
	 * Size -> 0x0048 (FullSize[0x02C0] - InheritedSize[0x0278])
	 */
	class UProbabilityDisplay_ImagineCraftListItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          AbilityNameText;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Base1;                                                   // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Base2;                                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_36;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProbabilityDisplay_ImagineCraftEffectItem_C*        ProbabilityDisplay_ImagineCraftEffectItem;               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProbabilityDisplay_ImagineCraftEffectItem_C*        ProbabilityDisplay_ImagineCraftEffectItem_63;            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          RateText;                                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_160;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetSubAbilityInfoCraft(int32_t InEffectValue, int32_t InPickId, const struct FMasterImaginePerkPickTable& InImaginePerkPick, ESBStatusAilmentIconType InIconType, bool* bIsExist, int32_t* Min, int32_t* Max);
		void GetMainAbilityInfoCraft(int32_t InEffectValue, int32_t InPickId, const struct FMasterImaginePerkPickTable& InImaginePerkPick, ESBStatusAilmentIconType InIconType, bool* bIsExist, int32_t* Min, int32_t* Max);
		void GetSubAbilityInfoAll(int32_t InEffectValue, int32_t InPickId, const struct FMasterImaginePerkPickTable& InImaginePerkPick, ESBStatusAilmentIconType InIconType, bool* bIsExist, int32_t* Min, int32_t* Max);
		void GetMainAbilityInfoAll(int32_t InEffectValue, int32_t InPickId, const struct FMasterImaginePerkPickTable& InImaginePerkPick, ESBStatusAilmentIconType InIconType, bool* bIsExist, int32_t* Min, int32_t* Max);
		void SetupDrop(int32_t PickId, float Rate, int32_t Index, const class FName& InPerkPickId, int32_t* Num);
		void Setup(int32_t PickId, float Rate, int32_t Index, const struct FMasterImaginePerkPickTable& ImaginePerkPick, int32_t* Num);
		void SetupA(int32_t PerkId, float Rate);
		void ExecuteUbergraph_ProbabilityDisplay_ImagineCraftListItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
