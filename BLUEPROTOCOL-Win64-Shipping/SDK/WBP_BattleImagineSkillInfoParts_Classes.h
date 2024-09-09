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
	 * WidgetBlueprintGeneratedClass WBP_BattleImagineSkillInfoParts.WBP_BattleImagineSkillInfoParts_C
	 * Size -> 0x0278 (FullSize[0x04F0] - InheritedSize[0x0278])
	 */
	class UWBP_BattleImagineSkillInfoParts_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCommonPossessionInfoItem_C*                         BattleImaginePossessionInfoItem;                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonRecastTimeInfoItem_C*                         BattleImagineRecastTimeInfoItem;                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonSummonedInfoItem_C*                           BattleImagineSummonedInfoItem;                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommonPermanentInfoItem_C*                          CommonPermanentInfoItem;                                 // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBoxForBattleImagineUniqueStatus;                        // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              VLine05;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBImagineSkillInfo*                                 ImagineSkillInfo;                                        // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBMasterImagine                                    ImagineMasterData;                                       // 0x02B8(0x00B8) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        LineColor;                                               // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VlineVisibility;                                         // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8AIP[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UniqueId;                                                // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    StackBNum;                                               // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3F1J[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOwnItemInfo                                        OwnItemInfo;                                             // 0x03A0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetInfoMark(bool Visible);
		void SetSkillInfoIconActive(bool InIsActive);
		void SetMasterImagineData(const struct FSBMasterImagine& MasterImagine, const class FString& UniqueId);
		void SetTextColor(const struct FLinearColor& Color);
		void SetPossessionInfoVisibility(bool InIsVisible);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_WBP_BattleImagineSkillInfoParts(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
