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
	 * BlueprintGeneratedClass USBDebugBlueprintFunctionLibrary.USBDebugBlueprintFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUSBDebugBlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void OnChangedEffectDebugValue(ESBDebugMenuType MenuType, const class FName& RowName, class UObject* __WorldContext);
		void OnChangedCameraDebugValue(ESBDebugMenuType MenuType, const class FName& RowName, class UObject* __WorldContext);
		void OnChangedUIDebugValue(ESBDebugMenuType MenuType, const class FName& RowName, class UObject* __WorldContext);
		void OnChangedDebugValue(ESBDebugMenuType MenuType, const class FName& RowName, class UObject* __WorldContext);
		void Debug_SetUIVisibility(ESBUIType InUIType, bool bVisibility, class UObject* __WorldContext);
		void Debug_SetBattleHUDVisibility(bool bVisibility, class UObject* __WorldContext);
		void ApplyDebugUIVisibilitySetting(class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
