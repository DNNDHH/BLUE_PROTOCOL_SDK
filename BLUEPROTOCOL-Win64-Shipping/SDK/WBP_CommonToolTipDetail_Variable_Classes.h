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
	 * WidgetBlueprintGeneratedClass WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C
	 * Size -> 0x0030 (FullSize[0x02A8] - InheritedSize[0x0278])
	 */
	class UWBP_CommonToolTipDetail_Variable_C : public UUserWidget
	{
	public:
		class UCanvasPanel*                                        CanvasPanel_Desc;                                        // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_line;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtDesc;                                                 // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtName;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtType;                                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_ToolTipDetailsDateTime_C*                       WBP_ToolTipDetailsDateTime_158;                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetNameOnlyText(const class FText& InName);
		void SetExpOverflowRewardIconMode(bool bInIsClassLevelCounterStop, bool bInIsClassLevelLimit, bool bInIsClassLevelLimitSmallerThanCounterStop);
		void SetNameAndDescAndTermId(const class FText& Name, const class FText& Desc, const class FString& TermId, bool bHideIfMinValue);
		void SetNameAndDescAndDateTime(const class FText& Name, const class FText& Desc, const struct FDateTime& DateTime, bool bHideIfMinValue);
		void SetType(const class FText& InTypeText);
		void SetNameAndTypeAndDescText(const class FText& InName, const class FText& InType, const class FText& InDesc);
		void SetNameAndDescText(const class FText& InName, const class FText& InDesc);
		void SetNameAndTypeText(const class FText& InName, const class FText& InType);
		void SetWeaponPerkData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData);
		void SetAbilityPerkID(int32_t PerkId);
		void SetAbilityDescText(const class FText& InText);
		void SetAbilityNameText(const class FText& InText);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
