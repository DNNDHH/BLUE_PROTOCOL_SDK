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
	 * WidgetBlueprintGeneratedClass BossHPGaugeList.BossHPGaugeList_C
	 * Size -> 0x0008 (FullSize[0x02D8] - InheritedSize[0x02D0])
	 */
	class UBossHPGaugeList_C : public USBBossHPGaugeList
	{
	public:
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02D0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash

	public:
		void OnInAnimationCall();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
