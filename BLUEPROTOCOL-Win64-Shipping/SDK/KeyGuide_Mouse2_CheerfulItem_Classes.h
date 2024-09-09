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
	 * WidgetBlueprintGeneratedClass KeyGuide_Mouse2_CheerfulItem.KeyGuide_Mouse2_CheerfulItem_C
	 * Size -> 0x0018 (FullSize[0x0290] - InheritedSize[0x0278])
	 */
	class UKeyGuide_Mouse2_CheerfulItem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UKeyGuide_Item_C*                                    KeyGuide_Item_Move;                                      // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_3;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		class FString MakeOrientToCameraText(struct FSBPlayerClassKeyConfigData* KeyConfigData);
		void KeyConfigActionToKey(struct FSBPlayerClassKeyConfigData* KeyConfigData, ESBKeyConfigAction KeyConfigAction, struct FKey* Key);
		void MakePare(TArray<class USBRuntimeTextBlock*>* Key, TArray<ESBKeyConfigAction>* Value, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* ReturnValue);
		class FString GetKeyToTextString(struct FSBPlayerClassKeyConfigData* KeyConfigData, ESBKeyConfigAction KeyConfigAction, bool IsWalk);
		class FString MakeMovesText(struct FSBPlayerClassKeyConfigData* KeyConfigData);
		void ApplyKeyConfigData(const struct FSBPlayerClassKeyConfigData& KeyConfigData);
		void ExecuteUbergraph_KeyGuide_Mouse2_CheerfulItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
