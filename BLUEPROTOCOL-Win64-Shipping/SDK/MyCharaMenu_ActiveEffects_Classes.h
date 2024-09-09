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
	 * WidgetBlueprintGeneratedClass MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C
	 * Size -> 0x01F8 (FullSize[0x0470] - InheritedSize[0x0278])
	 */
	class UMyCharaMenu_ActiveEffects_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMyCharaMenu_EffectListItemHead_C*                   Head_Liquid;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_EffectListItemHead_C*                   Head_Other;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_EffectListItemHead_C*                   HeadEffects;                                             // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_EffectListItemHead_C*                   HeadPioneer;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_Effect;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_Liquid;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_Other;                                                // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VB_Pioneer;                                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<ESBCharaEquipType, class FString>                     EquipUniqueIds;                                          // 0x02C0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBPlayerTag>                                TagList;                                                 // 0x0310(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FOwnItemInfo                                        item;                                                    // 0x0320(0x0150) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetFreeBuffText(ESBFreeBuffPointType Type, class FString* Text);
		void AddListsByDateTime(class UVerticalBox* Target, const class FString& Name, const struct FDateTime& Value, bool bHideYear, bool ValueVisible);
		void AddListsByFloatValue(class UVerticalBox* Target, const class FString& Name, float Value, bool ValueVisible);
		void AddLists(class UVerticalBox* Target, bool IsShowTooltip, const class FString& Name, int32_t Value, const class FString& ToolTipText, bool ValueVisible);
		void CollectUniqueIds();
		void CollectPassiveEffects();
		void CollectWeaponEffects();
		void CollectImaginePerks();
		void CollectAbility();
		void CollectBaseEffects();
		void Construct();
		void InitHead();
		void GenerateLists();
		void CollectLiquidMemory();
		void CollectOther();
		void CollectPioneerAbility();
		void ExecuteUbergraph_MyCharaMenu_ActiveEffects(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
