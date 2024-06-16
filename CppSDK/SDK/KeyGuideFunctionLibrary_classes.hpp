#pragma once

 

// Package: KeyGuideFunctionLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass KeyGuideFunctionLibrary.KeyGuideFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UKeyGuideFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static class FText KeyGuide_Gamepad2_MakeMovesText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext);
	static void KeyGuide_Gamepad2_KeyConfigActiontoKey(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext, struct FKey* Key);
	static void KeyGuide_Gamepad2_MakeString(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext, class FText* ReturnValue1);
	static class FString KeyGuide_Gamepad_MakeDodgeAttackText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext);
	static class FString KeyGuide_Gamepad_MakeJumpAttackText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext);
	static class FString KeyGuide_Gamepad_MakeString(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, bool IsDash, bool IsDodge, class UObject* __WorldContext);
	static void KeyGuide_Mouse2_MakeMessage(TArray<class USBRuntimeTextBlock*>& InKey, const TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>& TargetMap, const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UTextBlock* InSheethTextObject, class UObject* __WorldContext);
	static void KeyGuide_MakePare(TArray<class USBRuntimeTextBlock*>& InKey, TArray<ESBKeyConfigAction>& InValue, class UObject* __WorldContext, TMap<class USBRuntimeTextBlock*, ESBKeyConfigAction>* Return_Value);
	static void KeyGuide_Mouse2_KeyConfigActiontoKey(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext, struct FKey* Key);
	static class FString KeyGuide_Mouse2_GetKeytoTextString(const struct FSBPlayerClassKeyConfigData& KeyConfigData, ESBKeyConfigAction KeyConfigAction, class UObject* __WorldContext);
	static void KeyGuide_Mouse2_MakeMovesText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UTextBlock* TextObject, class UObject* __WorldContext);
	static void Key_Guide_Mouse_2_Make_Oriento_Camera_Text(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UTextBlock* InTextObject, class UObject* __WorldContext);
	static void KeyGuide_GetPareItems(TArray<class UWidget*>& InAllChildren, class UObject* __WorldContext, TArray<class USBRuntimeTextBlock*>* OutActionTextArray, TArray<ESBKeyConfigAction>* OutActionConfigArray);
	static void KeyGuide_GetVerticalChildWidget(class UPanelWidget* _____, class UObject* __WorldContext, TArray<class UWidget*>* Out);
	static class FText KeyGuide_Gamepad2_MakeChangeLockText(const struct FSBPlayerClassKeyConfigData& KeyConfigData, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"KeyGuideFunctionLibrary_C">();
	}
	static class UKeyGuideFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKeyGuideFunctionLibrary_C>();
	}
};
static_assert(alignof(UKeyGuideFunctionLibrary_C) == 0x000008, "Wrong alignment on UKeyGuideFunctionLibrary_C");
static_assert(sizeof(UKeyGuideFunctionLibrary_C) == 0x000028, "Wrong size on UKeyGuideFunctionLibrary_C");

}

