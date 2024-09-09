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
	 * WidgetBlueprintGeneratedClass DhcBattleTopWeaponInfo.DhcBattleTopWeaponInfo_C
	 * Size -> 0x0220 (FullSize[0x0498] - InheritedSize[0x0278])
	 */
	class UDhcBattleTopWeaponInfo_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCmnAlertIcon_C*                                     AlertIcon;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          AttackValueTxt;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UAttributeIcon_C*                                    AttributeIcon;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          AttributePowerValueTxt;                                  // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBattleScoreInfo_C*                                  BattleScoreInfo;                                         // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         BtnForPadCursorMove;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_SpecialMainSab_C*                               SPEffectMainSubInfo;                                     // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_StackB_M_C*                                     StackBIcon;                                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonIcon_C*                                       WeaponIcon;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          WeaponNameTxt;                                           // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsWeaponLost;                                           // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7YNC[0x7];                                   // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCommonIconToolTipContent_Weapon_C*                  CachedToolTipWidget;                                     // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x02E0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBDhcBattlePlayerEquipWeaponInfo                   EquipWeaponInfo;                                         // 0x0430(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		class UBattleScoreInfoSwitcher_C*                          LocalInfoSwitcher;                                       // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** OutSwitcher);
		class UWidget* Get_BtnForPadCursorMove_ToolTipWidget_1();
		void CreateToolTipWidgetifNeeded(class UCommonIconToolTipContent_Weapon_C** OutWidget);
		void SetStackBIcon(int32_t InStackBNum, int32_t InStackBMax);
		void GetIsWeaponLost(bool* OutIsLost);
		void SetAlertIconVisibility(bool InIsVisible, bool InIsLost);
		void Setup(const struct FSBDhcBattlePlayerEquipWeaponInfo& InEquipWeaponInfo, TArray<struct FSBDhcBattlePlayerEquipImagineInfo>* InEquipBImagineInfos);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_DhcBattleTopWeaponInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
