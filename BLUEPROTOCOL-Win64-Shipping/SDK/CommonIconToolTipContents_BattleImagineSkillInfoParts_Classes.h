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
	 * WidgetBlueprintGeneratedClass CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C
	 * Size -> 0x00F0 (FullSize[0x0368] - InheritedSize[0x0278])
	 */
	class UCommonIconToolTipContents_BattleImagineSkillInfoParts_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCommonIconToolTipContents_PermanentSkillParts_C*    PermanentSkillParts;                                     // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonIconToolTipContents_PossessionSkillParts_C*   PossessionSkillParts;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonIconToolTipContents_RecastTimeParts_C*        RecastTimeParts;                                         // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonToolTipContents_SummonedSkillParts_C*         SummonedSkillParts;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              VLine01;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBImagineSkillInfo*                                 ImagineSkillInfo;                                        // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBMasterImagine                                    ImagineMasterData;                                       // 0x02B0(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void ResetAllInfo();
		void SetMasterImagineData(const struct FSBMasterImagine& MasterImagine, int32_t InStackBNum);
		void SetTextColor(const struct FLinearColor& Color);
		void ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
