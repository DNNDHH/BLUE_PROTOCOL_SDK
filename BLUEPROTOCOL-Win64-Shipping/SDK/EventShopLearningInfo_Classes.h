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
	 * WidgetBlueprintGeneratedClass EventShopLearningInfo.EventShopLearningInfo_C
	 * Size -> 0x0071 (FullSize[0x02E9] - InheritedSize[0x0278])
	 */
	class UEventShopLearningInfo_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        Target;                                                  // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUserWidget*                                         ToolTip;                                                 // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SkillId;                                                 // 0x0290(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EEJ2[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ConditionsText01;                                        // 0x0298(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                ConditionsText02;                                        // 0x02B0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class USBMasterDataManager*                                MasterDataManager;                                       // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                ClassText;                                               // 0x02D0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		ESBClassType                                               ClassType;                                               // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetTextClassLevel(ESBClassType ClassType, int32_t ClassLevel, class FText* ClassText);
		void GetTextSkillConditions(int32_t ConditionSkillId, int32_t ConditionSkillLv, class FText* Skill);
		void SetSkillId(int32_t SkillId, bool* Exchangeable);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void Destruct();
		void ExecuteUbergraph_EventShopLearningInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
