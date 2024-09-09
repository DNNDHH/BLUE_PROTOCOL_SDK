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
	 * Class SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USBUIExtendRendererBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void RemoveFromParentPrePostProcess(class UUserWidget* UserWidget);
		void AddToViewportPrePostProcess(class UUserWidget* UserWidget, int32_t Priority);
		static UClass* StaticClass();
	};

	/**
	 * Class SBUIExtendRenderer.SBUIExtendRendererSubsystem
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class USBUIExtendRendererSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_GWMS[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		void RemoveFromParentPrePostProcess(class UUserWidget* UserWidget);
		void AddToViewportPrePostProcess(class UUserWidget* UserWidget, int32_t Priority);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
