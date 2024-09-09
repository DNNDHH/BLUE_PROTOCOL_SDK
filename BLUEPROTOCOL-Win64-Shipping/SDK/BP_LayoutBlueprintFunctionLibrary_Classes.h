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
	 * BlueprintGeneratedClass BP_LayoutBlueprintFunctionLibrary.BP_LayoutBlueprintFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_LayoutBlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void RemoveLayoutFromHUD(const class FString& Name, class UObject* __WorldContext, bool* IsRegisted);
		void ApplyClassHUD(class UUserWidget* Widget, const class FString& Name, class UObject* __WorldContext);
		void ApplyLayout(const class FString& Key, class UUserWidget** Widget, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
