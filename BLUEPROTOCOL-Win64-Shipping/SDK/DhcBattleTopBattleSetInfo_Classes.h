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
	 * WidgetBlueprintGeneratedClass DhcBattleTopBattleSetInfo.DhcBattleTopBattleSetInfo_C
	 * Size -> 0x0028 (FullSize[0x02A0] - InheritedSize[0x0278])
	 */
	class UDhcBattleTopBattleSetInfo_C : public UUserWidget
	{
	public:
		class UBattleScoreInfoSwitcher_C*                          BattleScoreInfoSwitcher;                                 // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDhcBattleTopClassAbilityInfo_C*                     ClassAbilityInfo;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDhcBattleTopEnhanceImagineInfo_C*                   EnhanceImagineInfo;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDhcBattleTopSkillInfo_C*                            SkillInfo;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDhcBattleTopWeaponInfo_C*                           WeaponInfo;                                              // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** OutSwitcher);
		void ResetSkillInfoSubPalette(bool bInIsSubPaletteReleased);
		void GetClassTypeFromWeaponId(int32_t InWeaponID, ESBClassType* OutClassType);
		void GetRegularAndULTSkillIdByClassType(ESBClassType InClassType, int32_t* OutRegularMainSkillId, int32_t* OutRegularSubSkillId, int32_t* OutULTSkillId);
		void GetIsWeaponLost(bool* OutIsWeaponLost);
		void GetClassAbilitySlotCnt(int32_t* OutSlotCnt);
		void GetTacticalSkillSlotCnt(int32_t* OutSlotCnt);
		void GetRegularSkillSlotCnt(int32_t* OutSlotCnt);
		void GetInnerImagineSlotCnt(int32_t* OutSlotCnt);
		void GetBattleImagineSlotCnt(int32_t* OutSlotCnt);
		void SetupInfo(const struct FSBDhcBattleHighScoreInfo& InScoreInfo);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
