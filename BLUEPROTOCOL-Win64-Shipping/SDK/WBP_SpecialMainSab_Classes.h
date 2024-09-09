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
	 * WidgetBlueprintGeneratedClass WBP_SpecialMainSab.WBP_SpecialMainSab_C
	 * Size -> 0x0360 (FullSize[0x05D8] - InheritedSize[0x0278])
	 */
	class UWBP_SpecialMainSab_C : public UUserWidget
	{
	public:
		class UHorizontalBox*                                      Bonus_info;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnWeaponSpecialMainRare_C*                         CmnWeaponSpecialMainRare;                                // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizontalSub;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_info;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_SpecialMainNum_2;                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Icon_SpecialMainNum_3;                                   // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtBonus_num;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtSpecialMainName;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtSpecialMainNum_2;                                     // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtSpecialMainNum_3;                                     // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtSpecialSubName;                                       // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TxtSpecialSubNum;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSBWeaponItemData                                   WeaponItemData;                                          // 0x02D8(0x0078) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBWeaponMasterData                                 WeaponMaster;                                            // 0x0350(0x00C8) Edit, BlueprintVisible, DisableEditOnInstance
		class UWBP_HyouiAbilityParamToolTip_C*                     ToolTip;                                                 // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x0420(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SubEnableColorDefaultMode;                               // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ME1T[0x7];                                   // 0x0571(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         ColorNomal;                                              // 0x0578(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         ColorMax;                                                // 0x05A0(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FMargin                                             DefaultLinePadding;                                      // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetBaseInfoChangeColor(const struct FOwnItemInfo& Prev);
		void SetVisibleBonusInfo(bool IsVisible);
		void SetLinePadding(const struct FMargin& PaddingOffset);
		void Setup(const struct FOwnItemInfo& OwnItemInfo);
		void SetupSubAbilityInfoTypeStackB();
		void SetOffSubInfoTypeStackB(bool bIsExist);
		void SetOffMainInfoTypeStackB(bool bIsExist);
		void InitVisibleSetUpTypeStackB(bool bIsExist, ESBWeaponPerkRarity InWeaponPerkRarity);
		void SetSpecialDataTypeStackB(bool bIsStackBMax, int32_t InItemID, int32_t InRecepiId, int32_t InLotteryGroupsId);
		void TryGetToolTip(class UWBP_HyouiAbilityParamToolTip_C** ToolTip);
		class UWidget* Get_Icon_info_ToolTipWidget_1();
		void SetHyouiImagineData(int32_t InId, int32_t stackb_num);
		void SetSpecialData(const class FString& UniqueId, int32_t StorageNumber, int32_t WeaponID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
