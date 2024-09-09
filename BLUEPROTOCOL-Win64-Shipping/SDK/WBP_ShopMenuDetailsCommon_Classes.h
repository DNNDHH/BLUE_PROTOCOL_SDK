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
	 * WidgetBlueprintGeneratedClass WBP_ShopMenuDetailsCommon.WBP_ShopMenuDetailsCommon_C
	 * Size -> 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
	 */
	class UWBP_ShopMenuDetailsCommon_C : public UUserWidget
	{
	public:
		class UWBP_ShopMenuDetailsNameParts_C*                     _NameParts;                                              // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWBP_ShopMenuDetailsTags_C*                          _TagsParts;                                              // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetLotteryGroupsId(int32_t LotteryGroupsId);
		void SetLotteryAbility(bool bLotteryAbility);
		void SetBppExchange(bool bCanBppExchange);
		void SetBonus(bool bBonus);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
