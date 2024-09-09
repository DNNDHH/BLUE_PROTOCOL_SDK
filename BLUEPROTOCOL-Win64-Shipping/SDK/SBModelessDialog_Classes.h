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
	 * Class SBModelessDialog.SBOpenModelessDirectoryDialog
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class USBOpenModelessDirectoryDialog : public UBlueprintAsyncActionBase
	{
	public:
		unsigned char                                              UnknownData_V61Q[0x18];                                  // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Completed;                                               // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14C2[0x30];                                  // 0x0058(0x0030) MISSED OFFSET (PADDING)

	public:
		class USBOpenModelessDirectoryDialog* SBOpenModelessDirectoryDialog(class UObject* WorldContextObject, const class FString& DialogTitle, const class FString& DefaultPath);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
