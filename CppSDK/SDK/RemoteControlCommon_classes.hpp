#pragma once

 

// Package: RemoteControlCommon

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "RemoteControlCommon_structs.hpp"
#include "Engine_classes.hpp"
#include "DeveloperSettings_classes.hpp"


namespace SDK
{

// Class RemoteControlCommon.RCPropertyContainerBase
// 0x0028 (0x0050 - 0x0028)
class URCPropertyContainerBase final : public UObject
{
public:
	uint8                                         Pad_146D[0x28];                                    // 0x0028(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RCPropertyContainerBase">();
	}
	static class URCPropertyContainerBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<URCPropertyContainerBase>();
	}
};
static_assert(alignof(URCPropertyContainerBase) == 0x000008, "Wrong alignment on URCPropertyContainerBase");
static_assert(sizeof(URCPropertyContainerBase) == 0x000050, "Wrong size on URCPropertyContainerBase");

// Class RemoteControlCommon.RCPropertyContainerRegistry
// 0x0050 (0x0080 - 0x0030)
class URCPropertyContainerRegistry final : public UEngineSubsystem
{
public:
	TMap<struct FRCPropertyContainerKey, TSubclassOf<class URCPropertyContainerBase>> CachedContainerClasses;                            // 0x0030(0x0050)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RCPropertyContainerRegistry">();
	}
	static class URCPropertyContainerRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<URCPropertyContainerRegistry>();
	}
};
static_assert(alignof(URCPropertyContainerRegistry) == 0x000008, "Wrong alignment on URCPropertyContainerRegistry");
static_assert(sizeof(URCPropertyContainerRegistry) == 0x000080, "Wrong size on URCPropertyContainerRegistry");
static_assert(offsetof(URCPropertyContainerRegistry, CachedContainerClasses) == 0x000030, "Member 'URCPropertyContainerRegistry::CachedContainerClasses' has a wrong offset!");

// Class RemoteControlCommon.PropertyContainerTestObject
// 0x0078 (0x00A0 - 0x0028)
class UPropertyContainerTestObject final : public UObject
{
public:
	bool                                          bSomeBool;                                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_146E[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        SomeUInt32;                                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SomeFloat;                                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                SomeVector;                                        // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               SomeRotator;                                       // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         SomeClampedInt;                                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SomeClampedInt2;                                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SomeUIClampedInt;                                  // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SomeClampedFloat;                                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SomeUIClampedFloat;                                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SomeClampedFloat2;                                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_146F[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SomeString;                                        // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   SomeText;                                          // 0x0078(0x0018)(NativeAccessSpecifierPublic)
	TArray<float>                                 SomeFloatArray;                                    // 0x0090(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PropertyContainerTestObject">();
	}
	static class UPropertyContainerTestObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPropertyContainerTestObject>();
	}
};
static_assert(alignof(UPropertyContainerTestObject) == 0x000008, "Wrong alignment on UPropertyContainerTestObject");
static_assert(sizeof(UPropertyContainerTestObject) == 0x0000A0, "Wrong size on UPropertyContainerTestObject");
static_assert(offsetof(UPropertyContainerTestObject, bSomeBool) == 0x000028, "Member 'UPropertyContainerTestObject::bSomeBool' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeUInt32) == 0x00002C, "Member 'UPropertyContainerTestObject::SomeUInt32' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeFloat) == 0x000030, "Member 'UPropertyContainerTestObject::SomeFloat' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeVector) == 0x000034, "Member 'UPropertyContainerTestObject::SomeVector' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeRotator) == 0x000040, "Member 'UPropertyContainerTestObject::SomeRotator' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeClampedInt) == 0x00004C, "Member 'UPropertyContainerTestObject::SomeClampedInt' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeClampedInt2) == 0x000050, "Member 'UPropertyContainerTestObject::SomeClampedInt2' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeUIClampedInt) == 0x000054, "Member 'UPropertyContainerTestObject::SomeUIClampedInt' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeClampedFloat) == 0x000058, "Member 'UPropertyContainerTestObject::SomeClampedFloat' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeUIClampedFloat) == 0x00005C, "Member 'UPropertyContainerTestObject::SomeUIClampedFloat' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeClampedFloat2) == 0x000060, "Member 'UPropertyContainerTestObject::SomeClampedFloat2' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeString) == 0x000068, "Member 'UPropertyContainerTestObject::SomeString' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeText) == 0x000078, "Member 'UPropertyContainerTestObject::SomeText' has a wrong offset!");
static_assert(offsetof(UPropertyContainerTestObject, SomeFloatArray) == 0x000090, "Member 'UPropertyContainerTestObject::SomeFloatArray' has a wrong offset!");

// Class RemoteControlCommon.RemoteControlSettings
// 0x0020 (0x0058 - 0x0038)
class URemoteControlSettings final : public UDeveloperSettings
{
public:
	bool                                          bProtocolsGenerateTransactions;                    // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1470[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        RemoteControlWebInterfacePort;                     // 0x003C(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForceWebAppBuildAtStartup;                        // 0x0040(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoStartWebServer;                               // 0x0041(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAutoStartWebSocketServer;                         // 0x0042(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1471[0x1];                                     // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        RemoteControlHttpServerPort;                       // 0x0044(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        RemoteControlWebSocketServerPort;                  // 0x0048(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDisplayInEditorOnlyWarnings;                      // 0x004C(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1472[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TreeBindingSplitRatio;                             // 0x0050(0x0004)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1473[0x4];                                     // 0x0054(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemoteControlSettings">();
	}
	static class URemoteControlSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<URemoteControlSettings>();
	}
};
static_assert(alignof(URemoteControlSettings) == 0x000008, "Wrong alignment on URemoteControlSettings");
static_assert(sizeof(URemoteControlSettings) == 0x000058, "Wrong size on URemoteControlSettings");
static_assert(offsetof(URemoteControlSettings, bProtocolsGenerateTransactions) == 0x000038, "Member 'URemoteControlSettings::bProtocolsGenerateTransactions' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, RemoteControlWebInterfacePort) == 0x00003C, "Member 'URemoteControlSettings::RemoteControlWebInterfacePort' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bForceWebAppBuildAtStartup) == 0x000040, "Member 'URemoteControlSettings::bForceWebAppBuildAtStartup' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bAutoStartWebServer) == 0x000041, "Member 'URemoteControlSettings::bAutoStartWebServer' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bAutoStartWebSocketServer) == 0x000042, "Member 'URemoteControlSettings::bAutoStartWebSocketServer' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, RemoteControlHttpServerPort) == 0x000044, "Member 'URemoteControlSettings::RemoteControlHttpServerPort' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, RemoteControlWebSocketServerPort) == 0x000048, "Member 'URemoteControlSettings::RemoteControlWebSocketServerPort' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, bDisplayInEditorOnlyWarnings) == 0x00004C, "Member 'URemoteControlSettings::bDisplayInEditorOnlyWarnings' has a wrong offset!");
static_assert(offsetof(URemoteControlSettings, TreeBindingSplitRatio) == 0x000050, "Member 'URemoteControlSettings::TreeBindingSplitRatio' has a wrong offset!");

}

