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
	 * WidgetBlueprintGeneratedClass KeyGuide_Mouse2_OfflineBattle.KeyGuide_Mouse2_OfflineBattle_C
	 * Size -> 0x0020 (FullSize[0x0298] - InheritedSize[0x0278])
	 */
	class UKeyGuide_Mouse2_OfflineBattle_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKeyGuide_Item_C*                                    KeyGuide_Item_Move;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UKeyGuide_Item_C*                                    KeyGuide_Item_Sheeth;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_3;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void KeyConfigActionToKey(struct FSBPlayerClassKeyConfigData* KeyConfigData, ESBKeyConfigAction KeyConfigAction, struct FKey* Key);
		void MakePare(TArray<class USBRuntimeTextBlock*>* Key, TArray<ESBKeyConfigAction>* Value, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* ReturnValue);
		class FString GetKeyToTextString(struct FSBPlayerClassKeyConfigData* KeyConfigData, ESBKeyConfigAction KeyConfigAction, bool IsDash, bool isAutoRun);
		class FString MakeMovesText(struct FSBPlayerClassKeyConfigData* KeyConfigData);
		void ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData);
		void ExecuteUbergraph_KeyGuide_Mouse2_OfflineBattle(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
