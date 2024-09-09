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
	 * WidgetBlueprintGeneratedClass UMG_LiquidMemoryBottleStatus.UMG_LiquidMemoryBottleStatus_C
	 * Size -> 0x0071 (FullSize[0x02E9] - InheritedSize[0x0278])
	 */
	class UUMG_LiquidMemoryBottleStatus_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HorizontalBox_BottleIcons;                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_LiquidMemoryUnfilledIcon_C*                     TestBottleIcon_2;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_LiquidMemoryUnfilledIcon_C*                     TestBottleIcon_3;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_LiquidMemoryUnfilledIcon_C*                     TestBottleIcon_4;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_LiquidMemoryUnfilledIcon_C*                     TestBottleIcon_5;                                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_LiquidMemoryUnfilledIcon_C*                     TestBottleIcon_6;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSBLiquidMemoryInfo                                 LiquidMemoryInfo;                                        // 0x02B0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		TArray<struct FMargin>                                     TestBottleIconPaddings;                                  // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsFullCharge;                                            // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetBottleLiquidMemory_One(int32_t InBottleId, int32_t InLiquidMemoryId, float InAccumulatedRate);
		void SetBottleAccumulatedRate_One(int32_t InBottleId, float AccumlatedRate);
		void SetBottleStatus(const struct FSBLiquidMemoryInfo& InLiquidMemoryInfo);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UMG_LiquidMemoryBottleStatus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
