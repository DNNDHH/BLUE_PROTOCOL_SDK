﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C
	 * Size -> 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
	 */
	class UDhcBattleTopEnhanceImagineInfo_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HBoxForImagineInfoUnit;                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** OutSwitcher);
		void GetPassiveImagineIconUnit(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* IsValid, class UPassiveImagineInfoUnitForBattleSet_C** OutImagineIconUnit);
		void Setup(TArray<struct FSBDhcBattlePlayerEquipImagineInfo>* InEquipEnhanceImagineInfo, ESBClassType InClassType, int32_t InClassLevel);
		void CreatePassiveImagineIconUnitList();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_DhcBattleTopEnhanceImagineInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
