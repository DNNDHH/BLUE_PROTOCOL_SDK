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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_Ability.MyCharaMenu_Ability_C
	 * Size -> 0x0258 (FullSize[0x0508] - InheritedSize[0x02B0])
	 */
	class UMyCharaMenu_Ability_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEffect_Ability_C*                                   Effect_Ability_100;                                      // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEffect_Ability_C*                                   Effect_Ability_208;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_118;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_Ability;                                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<ESBCharaEquipType, class FString>                     Uids;                                                    // 0x02D8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    PerkId;                                                  // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AbilityValue1;                                           // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBAbilityMasterData                                AbilityMaster;                                           // 0x0330(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		ESBCharaEquipType                                          CharaEquipType;                                          // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7BXX[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AbilityText;                                             // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                ToolTipDesc;                                             // 0x0398(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    AbilityValue2;                                           // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V0GN[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOwnItemInfo                                        item;                                                    // 0x03B8(0x0150) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GenerateSpecialSub(const struct FOwnItemInfo& OwnItemInfo, ESBCharaEquipType EquipPosition);
		void GenerateSpecialMain(const struct FOwnItemInfo& WeaponData1);
		void Construct();
		void CollectUniqueIds();
		void GeneratePassiveSkill();
		void GenerateWeapons();
		void GenerateImagines();
		void GenerateBaseSkill();
		void ExecuteUbergraph_MyCharaMenu_Ability(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
