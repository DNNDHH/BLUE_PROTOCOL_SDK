#pragma once

 

// Package: KeyConfigNameFunction

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "Config_KeyconfigItems_structs.hpp"
#include "NeedInputType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass KeyConfigNameFunction.KeyConfigNameFunction_C
// 0x0000 (0x0028 - 0x0028)
class UKeyConfigNameFunction_C final : public UBlueprintFunctionLibrary
{
public:
	static class FString GetKeyNameAsOperationMode(ESBKeyConfigKeyboardKey KeyBoard, ESBKeyConfigGamepadKey Gamepad, bool UseSuffix, class UObject* __WorldContext);
	static void GetKeyNameText_KB(ESBKeyConfigKeyboardKey KeyType, class UObject* __WorldContext, class FString* DisplayText);
	static void GetKeyNameText_Mouse(ESBKeyConfigMouseKey KeyType, class UObject* __WorldContext, class FString* DisplayText);
	static void GetKeyNameText_Pad(ESBKeyConfigGamepadKey KeyType, class UObject* __WorldContext, class FString* DisplayText);

	static void IsAssignedKeyType(const struct FSBPlayerClassKeyConfigData& KeyConfig, EConfig_KeyconfigItems ItemType, class UObject* __WorldContext, bool* IsAssign);
	static void IsUnassignableKeyboardKey(EConfig_KeyconfigItems ConfigType, ESBKeyConfigKeyboardKey KeyboardKey, class UObject* __WorldContext, bool* IsUnassighnableKey);
	static void IsUnassignablePadKey(EConfig_KeyconfigItems ConfigType, ESBKeyConfigGamepadKey PadKey, class UObject* __WorldContext, bool* IsUnassighnableKey);
	static void IsUnassignableMouseKey(EConfig_KeyconfigItems ConfigType, ESBKeyConfigMouseKey MouseKey, class UObject* __WorldContext, bool* IsUnassighnableKey);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyConfigNameFunction_C">();
	}
	static class UKeyConfigNameFunction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyConfigNameFunction_C>();
	}
};
static_assert(alignof(UKeyConfigNameFunction_C) == 0x000008, "Wrong alignment on UKeyConfigNameFunction_C");
static_assert(sizeof(UKeyConfigNameFunction_C) == 0x000028, "Wrong size on UKeyConfigNameFunction_C");

}

