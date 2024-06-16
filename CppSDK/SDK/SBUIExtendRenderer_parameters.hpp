#pragma once

 

// Package: SBUIExtendRenderer

#include "Basic.hpp"


namespace SDK::Params
{

// Function SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary.AddToViewportPrePostProcess
// 0x0010 (0x0010 - 0x0000)
struct SBUIExtendRendererBlueprintFunctionLibrary_AddToViewportPrePostProcess final
{
public:
	class UUserWidget*                            UserWidget;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Priority;                                          // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D05[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SBUIExtendRendererBlueprintFunctionLibrary_AddToViewportPrePostProcess) == 0x000008, "Wrong alignment on SBUIExtendRendererBlueprintFunctionLibrary_AddToViewportPrePostProcess");
static_assert(sizeof(SBUIExtendRendererBlueprintFunctionLibrary_AddToViewportPrePostProcess) == 0x000010, "Wrong size on SBUIExtendRendererBlueprintFunctionLibrary_AddToViewportPrePostProcess");
static_assert(offsetof(SBUIExtendRendererBlueprintFunctionLibrary_AddToViewportPrePostProcess, UserWidget) == 0x000000, "Member 'SBUIExtendRendererBlueprintFunctionLibrary_AddToViewportPrePostProcess::UserWidget' has a wrong offset!");
static_assert(offsetof(SBUIExtendRendererBlueprintFunctionLibrary_AddToViewportPrePostProcess, Priority) == 0x000008, "Member 'SBUIExtendRendererBlueprintFunctionLibrary_AddToViewportPrePostProcess::Priority' has a wrong offset!");

// Function SBUIExtendRenderer.SBUIExtendRendererBlueprintFunctionLibrary.RemoveFromParentPrePostProcess
// 0x0008 (0x0008 - 0x0000)
struct SBUIExtendRendererBlueprintFunctionLibrary_RemoveFromParentPrePostProcess final
{
public:
	class UUserWidget*                            UserWidget;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SBUIExtendRendererBlueprintFunctionLibrary_RemoveFromParentPrePostProcess) == 0x000008, "Wrong alignment on SBUIExtendRendererBlueprintFunctionLibrary_RemoveFromParentPrePostProcess");
static_assert(sizeof(SBUIExtendRendererBlueprintFunctionLibrary_RemoveFromParentPrePostProcess) == 0x000008, "Wrong size on SBUIExtendRendererBlueprintFunctionLibrary_RemoveFromParentPrePostProcess");
static_assert(offsetof(SBUIExtendRendererBlueprintFunctionLibrary_RemoveFromParentPrePostProcess, UserWidget) == 0x000000, "Member 'SBUIExtendRendererBlueprintFunctionLibrary_RemoveFromParentPrePostProcess::UserWidget' has a wrong offset!");

// Function SBUIExtendRenderer.SBUIExtendRendererSubsystem.AddToViewportPrePostProcess
// 0x0010 (0x0010 - 0x0000)
struct SBUIExtendRendererSubsystem_AddToViewportPrePostProcess final
{
public:
	class UUserWidget*                            UserWidget;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Priority;                                          // 0x0008(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D07[0x4];                                     // 0x000C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SBUIExtendRendererSubsystem_AddToViewportPrePostProcess) == 0x000008, "Wrong alignment on SBUIExtendRendererSubsystem_AddToViewportPrePostProcess");
static_assert(sizeof(SBUIExtendRendererSubsystem_AddToViewportPrePostProcess) == 0x000010, "Wrong size on SBUIExtendRendererSubsystem_AddToViewportPrePostProcess");
static_assert(offsetof(SBUIExtendRendererSubsystem_AddToViewportPrePostProcess, UserWidget) == 0x000000, "Member 'SBUIExtendRendererSubsystem_AddToViewportPrePostProcess::UserWidget' has a wrong offset!");
static_assert(offsetof(SBUIExtendRendererSubsystem_AddToViewportPrePostProcess, Priority) == 0x000008, "Member 'SBUIExtendRendererSubsystem_AddToViewportPrePostProcess::Priority' has a wrong offset!");

// Function SBUIExtendRenderer.SBUIExtendRendererSubsystem.RemoveFromParentPrePostProcess
// 0x0008 (0x0008 - 0x0000)
struct SBUIExtendRendererSubsystem_RemoveFromParentPrePostProcess final
{
public:
	class UUserWidget*                            UserWidget;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SBUIExtendRendererSubsystem_RemoveFromParentPrePostProcess) == 0x000008, "Wrong alignment on SBUIExtendRendererSubsystem_RemoveFromParentPrePostProcess");
static_assert(sizeof(SBUIExtendRendererSubsystem_RemoveFromParentPrePostProcess) == 0x000008, "Wrong size on SBUIExtendRendererSubsystem_RemoveFromParentPrePostProcess");
static_assert(offsetof(SBUIExtendRendererSubsystem_RemoveFromParentPrePostProcess, UserWidget) == 0x000000, "Member 'SBUIExtendRendererSubsystem_RemoveFromParentPrePostProcess::UserWidget' has a wrong offset!");

}

