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
	 * WidgetBlueprintGeneratedClass KeyGuide_Mouse_OfflineBattle.KeyGuide_Mouse_OfflineBattle_C
	 * Size -> 0x0058 (FullSize[0x02D0] - InheritedSize[0x0278])
	 */
	class UKeyGuide_Mouse_OfflineBattle_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBRuntimeTextBlock*                                 DodgeAttack;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_136;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 JumpAttack;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line1;                                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 MainAction;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_DodgeAttack;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_JumpAttack;                                      // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_Skill1;                                          // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SkillA;                                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SubAction;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void InitializeVisibility();
		void SetTextVisible(ESkillActionPosition SkillActionPosition, bool IsVisible);
		void KeyConfigActionToKey(struct FSBPlayerClassKeyConfigData* KeyConfigData, ESBKeyConfigAction KeyConfigAction, struct FKey* Key);
		void MakePare(TArray<class USBRuntimeTextBlock*>* Key, TArray<ESBKeyConfigAction>* Value, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* ReturnValue);
		class FString GetKeyToTextString(struct FSBPlayerClassKeyConfigData* KeyConfigData, ESBKeyConfigAction KeyConfigAction, bool IsDash);
		class FString MakeJumpAttackText(const struct FSBPlayerClassKeyConfigData& KeyConfigData);
		class FString MakeDodgeAttackText(const struct FSBPlayerClassKeyConfigData& KeyConfigData);
		class FString MakeMovesText(struct FSBPlayerClassKeyConfigData* KeyConfigData);
		void ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData);
		void ExecuteUbergraph_KeyGuide_Mouse_OfflineBattle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
