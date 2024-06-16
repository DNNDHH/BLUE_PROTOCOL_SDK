#pragma once

 

// Package: SBModelessDialog

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class SBModelessDialog.SBOpenModelessDirectoryDialog
// 0x0058 (0x0088 - 0x0030)
class USBOpenModelessDirectoryDialog : public UBlueprintAsyncActionBase
{
public:
	uint8                                         Pad_3ED5[0x18];                                    // 0x0030(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0048(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_3ED6[0x30];                                    // 0x0058(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class USBOpenModelessDirectoryDialog* SBOpenModelessDirectoryDialog(class UObject* WorldContextObject, const class FString& DialogTitle, const class FString& DefaultPath);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SBOpenModelessDirectoryDialog">();
	}
	static class USBOpenModelessDirectoryDialog* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBOpenModelessDirectoryDialog>();
	}
};
static_assert(alignof(USBOpenModelessDirectoryDialog) == 0x000008, "Wrong alignment on USBOpenModelessDirectoryDialog");
static_assert(sizeof(USBOpenModelessDirectoryDialog) == 0x000088, "Wrong size on USBOpenModelessDirectoryDialog");
static_assert(offsetof(USBOpenModelessDirectoryDialog, Completed) == 0x000048, "Member 'USBOpenModelessDirectoryDialog::Completed' has a wrong offset!");

}

