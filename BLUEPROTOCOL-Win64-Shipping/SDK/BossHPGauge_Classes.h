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
	 * WidgetBlueprintGeneratedClass BossHPGauge.BossHPGauge_C
	 * Size -> 0x0030 (FullSize[0x02C8] - InheritedSize[0x0298])
	 */
	class UBossHPGauge_C : public USBBossHPGauge
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              HPCur;                                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextLevel;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextName;                                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FLinearColor>                                TextColorList;                                           // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnSetBossCharacter(class ASBEnemyCharacter* InBoss);
		void SetColorName(const struct FSlateColor& InColorAndOpacity);
		void SetColorLV(const struct FSlateColor& InColorAndOpacity);
		void SetColorText(int32_t Level);
		void SetName(const class FString& Name);
		void SetLv(int32_t Lv);
		void SetDepth(float InDepth);
		void SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_BossHPGauge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
