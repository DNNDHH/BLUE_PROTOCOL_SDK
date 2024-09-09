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
	 * BlueprintGeneratedClass KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKeyGuideFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		class FText KeyGuide_Gamepad2_MakeChangeLockText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext);
		void KeyGuide_GetVerticalChildWidget(class UPanelWidget* , class UObject* __WorldContext, TArray<class UWidget*>* Out);
		void KeyGuide_GetPareItems(TArray<class UWidget*>* InAllChildren, class UObject* __WorldContext, TArray<class USBRuntimeTextBlock*>* outActionTextArray, TArray<ESBKeyConfigAction>* outActionConfigArray);
		void KeyGuideMouse2MakeOrientoCameraText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UTextBlock* InTextObject, class UObject* __WorldContext);
		void KeyGuide_Mouse2_MakeMovesText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UTextBlock* TextObject, class UObject* __WorldContext);
		class FString KeyGuide_Mouse2_GetKeytoTextString(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext);
		void KeyGuide_Mouse2_KeyConfigActiontoKey(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext, struct FKey* Key);
		void KeyGuide_MakePare(TArray<class USBRuntimeTextBlock*>* InKey, TArray<ESBKeyConfigAction>* InValue, class UObject* __WorldContext, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* ReturnValue);
		void KeyGuide_Mouse2_MakeMessage(TArray<class USBRuntimeTextBlock*>* InKey, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction> TargetMap, const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UTextBlock* InSheethTextObject, class UObject* __WorldContext);
		class FString KeyGuide_Gamepad_MakeString(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, bool IsDash, bool IsDodge, class UObject* __WorldContext);
		class FString KeyGuide_Gamepad_MakeJumpAttackText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext);
		class FString KeyGuide_Gamepad_MakeDodgeAttackText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext);
		void KeyGuide_Gamepad2_MakeString(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext, class FText* ReturnValue1);
		void KeyGuide_Gamepad2_KeyConfigActiontoKey(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext, struct FKey* Key);
		class FText KeyGuide_Gamepad2_MakeMovesText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
