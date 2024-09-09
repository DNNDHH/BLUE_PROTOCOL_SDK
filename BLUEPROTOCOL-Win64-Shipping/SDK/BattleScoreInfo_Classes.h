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
	 * WidgetBlueprintGeneratedClass BattleScoreInfo.BattleScoreInfo_C
	 * Size -> 0x0289 (FullSize[0x0501] - InheritedSize[0x0278])
	 */
	class UBattleScoreInfo_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    SetLv;                                                   // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    SetBS;                                                   // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    LVtoBS;                                                  // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    BStoLV;                                                  // 0x0298(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 BSHeadingTxt;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          BSValueTxt;                                              // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_BattleScore;                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalBox_Level;                                     // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 LevelHeadingTxt;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LevelValueTxt;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBattleScoreInfoSwitcher_C*                          Switcher;                                                // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BattleScoreUse;                                          // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       LevelUse;                                                // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YD2Y[0x6];                                   // 0x02DA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      InFontInfo_BattleScoreHeading;                           // 0x02E0(0x0088) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FSlateFontInfo                                      InFontInfo_BattleScoreValue;                             // 0x0368(0x0088) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FSlateFontInfo                                      InFontInfo_LevelHeading;                                 // 0x03F0(0x0088) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FSlateFontInfo                                      InFontInfo_LevelValue;                                   // 0x0478(0x0088) Edit, BlueprintVisible, HasGetValueTypeHash
		bool                                                       PlayedBS;                                                // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetFirstState();
		void SetBattleScore(int32_t InBattleScore);
		void SetImagineLevelSync(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType, bool InForceLevelSyncOff);
		void SetLevel(int32_t InLevel);
		void SetSwitcher(class UBattleScoreInfoSwitcher_C* InSwitcher);
		void SetUseText(bool UseBattleScore, bool UseLevel, class UBattleScoreInfoSwitcher_C* InSwitcher);
		void OnChange(bool ToBattleScore);
		void Destruct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BattleScoreInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
