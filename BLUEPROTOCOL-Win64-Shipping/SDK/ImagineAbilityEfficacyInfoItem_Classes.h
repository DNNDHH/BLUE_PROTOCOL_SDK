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
	 * WidgetBlueprintGeneratedClass ImagineAbilityEfficacyInfoItem.ImagineAbilityEfficacyInfoItem_C
	 * Size -> 0x0050 (FullSize[0x02C8] - InheritedSize[0x0278])
	 */
	class UImagineAbilityEfficacyInfoItem_C : public UUserWidget
	{
	public:
		class UTextBlock*                                          DescTxt;                                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              UnderLine;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ValueTxt;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSBAbilityConfig                                    AbilityConfig;                                           // 0x0290(0x0038) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetValueText(ESBAbilityUIAttribute InUIAttribute, int32_t InValue);
		void ConvertValueToPercentageNotation(int32_t InValue, class FString* OutConvertedValue);
		void SetUnderlineVisibility(bool InIsVisible);
		void SetAbilityEfficacyInfo(const struct FSBAbilityConfig& InAbilityConfig, const class FText& InEfficacyDesc, int32_t InEfficacyValue);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
