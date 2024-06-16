#pragma once

 

// Package: SBModelessDialog

#include "Basic.hpp"


namespace SDK::Params
{

// Function SBModelessDialog.SBOpenModelessDirectoryDialog.SBOpenModelessDirectoryDialog
// 0x0030 (0x0030 - 0x0000)
struct SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog final
{
public:
	class UObject*                                WorldContextObject;                                // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DialogTitle;                                       // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DefaultPath;                                       // 0x0018(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USBOpenModelessDirectoryDialog*         ReturnValue;                                       // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog) == 0x000008, "Wrong alignment on SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog");
static_assert(sizeof(SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog) == 0x000030, "Wrong size on SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog");
static_assert(offsetof(SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog, WorldContextObject) == 0x000000, "Member 'SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog::WorldContextObject' has a wrong offset!");
static_assert(offsetof(SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog, DialogTitle) == 0x000008, "Member 'SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog::DialogTitle' has a wrong offset!");
static_assert(offsetof(SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog, DefaultPath) == 0x000018, "Member 'SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog::DefaultPath' has a wrong offset!");
static_assert(offsetof(SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog, ReturnValue) == 0x000028, "Member 'SBOpenModelessDirectoryDialog_SBOpenModelessDirectoryDialog::ReturnValue' has a wrong offset!");

}

