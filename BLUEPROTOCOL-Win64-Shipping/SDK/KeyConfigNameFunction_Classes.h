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
	 * BlueprintGeneratedClass KeyConfigNameFunction.KeyConfigNameFunction_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UKeyConfigNameFunction_C : public UBlueprintFunctionLibrary
	{
	public:
		void IsUnassignableMouseKey(EConfig_KeyconfigItems ConfigType, ESBKeyConfigMouseKey MouseKey, class UObject* __WorldContext, bool* IsUnassighnableKey);
		void IsUnassignablePadKey(EConfig_KeyconfigItems ConfigType, ESBKeyConfigGamepadKey PadKey, class UObject* __WorldContext, bool* IsUnassighnableKey);
		void IsUnassignableKeyboardKey(EConfig_KeyconfigItems ConfigType, ESBKeyConfigKeyboardKey KeyboardKey, class UObject* __WorldContext, bool* IsUnassighnableKey);
		void GetKeyNameText_Pad(ESBKeyConfigGamepadKey KeyType, class UObject* __WorldContext, class FString* DisplayText);
		void GetKeyNameText_Mouse(ESBKeyConfigMouseKey KeyType, class UObject* __WorldContext, class FString* DisplayText);
		void GetKeyNameText_KB(ESBKeyConfigKeyboardKey KeyType, class UObject* __WorldContext, class FString* DisplayText);
		void IsAssignedKeyType(const struct FSBPlayerClassKeyConfigData& KeyConfig, EConfig_KeyconfigItems ItemType, class UObject* __WorldContext, bool* IsAssign);
		class FString GetKeyNameAsOperationMode(ESBKeyConfigKeyboardKey KeyBoard, ESBKeyConfigGamepadKey Gamepad, bool UseSuffix, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
