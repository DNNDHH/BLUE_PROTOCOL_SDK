#pragma once

 

// Package: RemoteControl

#include "Basic.hpp"

#include "RemoteControl_structs.hpp"


namespace SDK::Params
{

// Function RemoteControl.RemoteControlFunctionLibrary.ExposeActor
// 0x0038 (0x0038 - 0x0000)
struct RemoteControlFunctionLibrary_ExposeActor final
{
public:
	class URemoteControlPreset*                   Preset;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 Actor;                                             // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRemoteControlOptionalExposeArgs       Args;                                              // 0x0010(0x0020)(Parm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1461[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(RemoteControlFunctionLibrary_ExposeActor) == 0x000008, "Wrong alignment on RemoteControlFunctionLibrary_ExposeActor");
static_assert(sizeof(RemoteControlFunctionLibrary_ExposeActor) == 0x000038, "Wrong size on RemoteControlFunctionLibrary_ExposeActor");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeActor, Preset) == 0x000000, "Member 'RemoteControlFunctionLibrary_ExposeActor::Preset' has a wrong offset!");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeActor, Actor) == 0x000008, "Member 'RemoteControlFunctionLibrary_ExposeActor::Actor' has a wrong offset!");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeActor, Args) == 0x000010, "Member 'RemoteControlFunctionLibrary_ExposeActor::Args' has a wrong offset!");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeActor, ReturnValue) == 0x000030, "Member 'RemoteControlFunctionLibrary_ExposeActor::ReturnValue' has a wrong offset!");

// Function RemoteControl.RemoteControlFunctionLibrary.ExposeFunction
// 0x0048 (0x0048 - 0x0000)
struct RemoteControlFunctionLibrary_ExposeFunction final
{
public:
	class URemoteControlPreset*                   Preset;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                SourceObject;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Function;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRemoteControlOptionalExposeArgs       Args;                                              // 0x0020(0x0020)(Parm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1462[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(RemoteControlFunctionLibrary_ExposeFunction) == 0x000008, "Wrong alignment on RemoteControlFunctionLibrary_ExposeFunction");
static_assert(sizeof(RemoteControlFunctionLibrary_ExposeFunction) == 0x000048, "Wrong size on RemoteControlFunctionLibrary_ExposeFunction");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeFunction, Preset) == 0x000000, "Member 'RemoteControlFunctionLibrary_ExposeFunction::Preset' has a wrong offset!");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeFunction, SourceObject) == 0x000008, "Member 'RemoteControlFunctionLibrary_ExposeFunction::SourceObject' has a wrong offset!");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeFunction, Function) == 0x000010, "Member 'RemoteControlFunctionLibrary_ExposeFunction::Function' has a wrong offset!");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeFunction, Args) == 0x000020, "Member 'RemoteControlFunctionLibrary_ExposeFunction::Args' has a wrong offset!");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeFunction, ReturnValue) == 0x000040, "Member 'RemoteControlFunctionLibrary_ExposeFunction::ReturnValue' has a wrong offset!");

// Function RemoteControl.RemoteControlFunctionLibrary.ExposeProperty
// 0x0048 (0x0048 - 0x0000)
struct RemoteControlFunctionLibrary_ExposeProperty final
{
public:
	class URemoteControlPreset*                   Preset;                                            // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                SourceObject;                                      // 0x0008(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Property;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRemoteControlOptionalExposeArgs       Args;                                              // 0x0020(0x0020)(Parm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0040(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1463[0x7];                                     // 0x0041(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(RemoteControlFunctionLibrary_ExposeProperty) == 0x000008, "Wrong alignment on RemoteControlFunctionLibrary_ExposeProperty");
static_assert(sizeof(RemoteControlFunctionLibrary_ExposeProperty) == 0x000048, "Wrong size on RemoteControlFunctionLibrary_ExposeProperty");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeProperty, Preset) == 0x000000, "Member 'RemoteControlFunctionLibrary_ExposeProperty::Preset' has a wrong offset!");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeProperty, SourceObject) == 0x000008, "Member 'RemoteControlFunctionLibrary_ExposeProperty::SourceObject' has a wrong offset!");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeProperty, Property) == 0x000010, "Member 'RemoteControlFunctionLibrary_ExposeProperty::Property' has a wrong offset!");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeProperty, Args) == 0x000020, "Member 'RemoteControlFunctionLibrary_ExposeProperty::Args' has a wrong offset!");
static_assert(offsetof(RemoteControlFunctionLibrary_ExposeProperty, ReturnValue) == 0x000040, "Member 'RemoteControlFunctionLibrary_ExposeProperty::ReturnValue' has a wrong offset!");

// Function RemoteControl.RemoteControlInterceptionTestObject.TestFunction
// 0x0058 (0x0058 - 0x0000)
struct RemoteControlInterceptionTestObject_TestFunction final
{
public:
	struct FRemoteControlInterceptionFunctionParamStruct InStruct;                                          // 0x0000(0x0028)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                         InTestFactor;                                      // 0x0028(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1465[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRemoteControlInterceptionFunctionParamStruct ReturnValue;                                       // 0x0030(0x0028)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(RemoteControlInterceptionTestObject_TestFunction) == 0x000008, "Wrong alignment on RemoteControlInterceptionTestObject_TestFunction");
static_assert(sizeof(RemoteControlInterceptionTestObject_TestFunction) == 0x000058, "Wrong size on RemoteControlInterceptionTestObject_TestFunction");
static_assert(offsetof(RemoteControlInterceptionTestObject_TestFunction, InStruct) == 0x000000, "Member 'RemoteControlInterceptionTestObject_TestFunction::InStruct' has a wrong offset!");
static_assert(offsetof(RemoteControlInterceptionTestObject_TestFunction, InTestFactor) == 0x000028, "Member 'RemoteControlInterceptionTestObject_TestFunction::InTestFactor' has a wrong offset!");
static_assert(offsetof(RemoteControlInterceptionTestObject_TestFunction, ReturnValue) == 0x000030, "Member 'RemoteControlInterceptionTestObject_TestFunction::ReturnValue' has a wrong offset!");

}

