#pragma once

 

// Package: WebRemoteControl

#include "Basic.hpp"

#include "RemoteControl_structs.hpp"


namespace SDK
{

// Enum WebRemoteControl.ERemoteControlEvent
// NumValues: 0x0004
enum class ERemoteControlEvent : uint8
{
	PreObjectPropertyChanged                 = 0,
	ObjectPropertyChanged                    = 1,
	EventCount                               = 2,
	ERemoteControlEvent_MAX                  = 3,
};

// Enum WebRemoteControl.ERemoteControlHttpVerbs
// NumValues: 0x0008
enum class ERemoteControlHttpVerbs : uint16
{
	None                                     = 0,
	Get                                      = 1,
	Post                                     = 2,
	Put                                      = 4,
	Patch                                    = 8,
	Delete                                   = 16,
	Options                                  = 32,
	ERemoteControlHttpVerbs_MAX              = 33,
};

// ScriptStruct WebRemoteControl.RCAssetFilter
// 0x0088 (0x0088 - 0x0000)
struct FRCAssetFilter final
{
public:
	TArray<class FName>                           PackageNames;                                      // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           PackagePaths;                                      // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                           ClassNames;                                        // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<class FName>                             RecursiveClassesExclusionSet;                      // 0x0030(0x0050)(NativeAccessSpecifierPublic)
	bool                                          RecursiveClasses;                                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          RecursivePaths;                                    // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43BB[0x6];                                     // 0x0082(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCAssetFilter) == 0x000008, "Wrong alignment on FRCAssetFilter");
static_assert(sizeof(FRCAssetFilter) == 0x000088, "Wrong size on FRCAssetFilter");
static_assert(offsetof(FRCAssetFilter, PackageNames) == 0x000000, "Member 'FRCAssetFilter::PackageNames' has a wrong offset!");
static_assert(offsetof(FRCAssetFilter, PackagePaths) == 0x000010, "Member 'FRCAssetFilter::PackagePaths' has a wrong offset!");
static_assert(offsetof(FRCAssetFilter, ClassNames) == 0x000020, "Member 'FRCAssetFilter::ClassNames' has a wrong offset!");
static_assert(offsetof(FRCAssetFilter, RecursiveClassesExclusionSet) == 0x000030, "Member 'FRCAssetFilter::RecursiveClassesExclusionSet' has a wrong offset!");
static_assert(offsetof(FRCAssetFilter, RecursiveClasses) == 0x000080, "Member 'FRCAssetFilter::RecursiveClasses' has a wrong offset!");
static_assert(offsetof(FRCAssetFilter, RecursivePaths) == 0x000081, "Member 'FRCAssetFilter::RecursivePaths' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPresetFieldRenamed
// 0x0010 (0x0010 - 0x0000)
struct FRCPresetFieldRenamed final
{
public:
	class FName                                   OldFieldLabel;                                     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   NewFieldLabel;                                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCPresetFieldRenamed) == 0x000004, "Wrong alignment on FRCPresetFieldRenamed");
static_assert(sizeof(FRCPresetFieldRenamed) == 0x000010, "Wrong size on FRCPresetFieldRenamed");
static_assert(offsetof(FRCPresetFieldRenamed, OldFieldLabel) == 0x000000, "Member 'FRCPresetFieldRenamed::OldFieldLabel' has a wrong offset!");
static_assert(offsetof(FRCPresetFieldRenamed, NewFieldLabel) == 0x000008, "Member 'FRCPresetFieldRenamed::NewFieldLabel' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCAssetDescription
// 0x0068 (0x0068 - 0x0000)
struct FRCAssetDescription final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Class;                                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Path;                                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FString>              MetaData;                                          // 0x0018(0x0050)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCAssetDescription) == 0x000008, "Wrong alignment on FRCAssetDescription");
static_assert(sizeof(FRCAssetDescription) == 0x000068, "Wrong size on FRCAssetDescription");
static_assert(offsetof(FRCAssetDescription, Name) == 0x000000, "Member 'FRCAssetDescription::Name' has a wrong offset!");
static_assert(offsetof(FRCAssetDescription, Class) == 0x000008, "Member 'FRCAssetDescription::Class' has a wrong offset!");
static_assert(offsetof(FRCAssetDescription, Path) == 0x000010, "Member 'FRCAssetDescription::Path' has a wrong offset!");
static_assert(offsetof(FRCAssetDescription, MetaData) == 0x000018, "Member 'FRCAssetDescription::MetaData' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCShortPresetDescription
// 0x0020 (0x0020 - 0x0000)
struct FRCShortPresetDescription final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ID;                                                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Path;                                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCShortPresetDescription) == 0x000008, "Wrong alignment on FRCShortPresetDescription");
static_assert(sizeof(FRCShortPresetDescription) == 0x000020, "Wrong size on FRCShortPresetDescription");
static_assert(offsetof(FRCShortPresetDescription, Name) == 0x000000, "Member 'FRCShortPresetDescription::Name' has a wrong offset!");
static_assert(offsetof(FRCShortPresetDescription, ID) == 0x000008, "Member 'FRCShortPresetDescription::ID' has a wrong offset!");
static_assert(offsetof(FRCShortPresetDescription, Path) == 0x000018, "Member 'FRCShortPresetDescription::Path' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPropertyDescription
// 0x00A0 (0x00A0 - 0x0000)
struct FRCPropertyDescription final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Description;                                       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Type;                                              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ContainerType;                                     // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 KeyType;                                           // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FString>              MetaData;                                          // 0x0050(0x0050)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCPropertyDescription) == 0x000008, "Wrong alignment on FRCPropertyDescription");
static_assert(sizeof(FRCPropertyDescription) == 0x0000A0, "Wrong size on FRCPropertyDescription");
static_assert(offsetof(FRCPropertyDescription, Name) == 0x000000, "Member 'FRCPropertyDescription::Name' has a wrong offset!");
static_assert(offsetof(FRCPropertyDescription, Description) == 0x000010, "Member 'FRCPropertyDescription::Description' has a wrong offset!");
static_assert(offsetof(FRCPropertyDescription, Type) == 0x000020, "Member 'FRCPropertyDescription::Type' has a wrong offset!");
static_assert(offsetof(FRCPropertyDescription, ContainerType) == 0x000030, "Member 'FRCPropertyDescription::ContainerType' has a wrong offset!");
static_assert(offsetof(FRCPropertyDescription, KeyType) == 0x000040, "Member 'FRCPropertyDescription::KeyType' has a wrong offset!");
static_assert(offsetof(FRCPropertyDescription, MetaData) == 0x000050, "Member 'FRCPropertyDescription::MetaData' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCObjectDescription
// 0x0030 (0x0030 - 0x0000)
struct FRCObjectDescription final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Class;                                             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Path;                                              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCObjectDescription) == 0x000008, "Wrong alignment on FRCObjectDescription");
static_assert(sizeof(FRCObjectDescription) == 0x000030, "Wrong size on FRCObjectDescription");
static_assert(offsetof(FRCObjectDescription, Name) == 0x000000, "Member 'FRCObjectDescription::Name' has a wrong offset!");
static_assert(offsetof(FRCObjectDescription, Class) == 0x000010, "Member 'FRCObjectDescription::Class' has a wrong offset!");
static_assert(offsetof(FRCObjectDescription, Path) == 0x000020, "Member 'FRCObjectDescription::Path' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCExposedPropertyDescription
// 0x0118 (0x0118 - 0x0000)
struct FRCExposedPropertyDescription final
{
public:
	class FName                                   DisplayName;                                       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ID;                                                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRCPropertyDescription                 UnderlyingProperty;                                // 0x0018(0x00A0)(NativeAccessSpecifierPublic)
	TMap<class FName, class FString>              MetaData;                                          // 0x00B8(0x0050)(NativeAccessSpecifierPublic)
	TArray<struct FRCObjectDescription>           OwnerObjects;                                      // 0x0108(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCExposedPropertyDescription) == 0x000008, "Wrong alignment on FRCExposedPropertyDescription");
static_assert(sizeof(FRCExposedPropertyDescription) == 0x000118, "Wrong size on FRCExposedPropertyDescription");
static_assert(offsetof(FRCExposedPropertyDescription, DisplayName) == 0x000000, "Member 'FRCExposedPropertyDescription::DisplayName' has a wrong offset!");
static_assert(offsetof(FRCExposedPropertyDescription, ID) == 0x000008, "Member 'FRCExposedPropertyDescription::ID' has a wrong offset!");
static_assert(offsetof(FRCExposedPropertyDescription, UnderlyingProperty) == 0x000018, "Member 'FRCExposedPropertyDescription::UnderlyingProperty' has a wrong offset!");
static_assert(offsetof(FRCExposedPropertyDescription, MetaData) == 0x0000B8, "Member 'FRCExposedPropertyDescription::MetaData' has a wrong offset!");
static_assert(offsetof(FRCExposedPropertyDescription, OwnerObjects) == 0x000108, "Member 'FRCExposedPropertyDescription::OwnerObjects' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCFunctionDescription
// 0x0030 (0x0030 - 0x0000)
struct FRCFunctionDescription final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Description;                                       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRCPropertyDescription>         Arguments;                                         // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCFunctionDescription) == 0x000008, "Wrong alignment on FRCFunctionDescription");
static_assert(sizeof(FRCFunctionDescription) == 0x000030, "Wrong size on FRCFunctionDescription");
static_assert(offsetof(FRCFunctionDescription, Name) == 0x000000, "Member 'FRCFunctionDescription::Name' has a wrong offset!");
static_assert(offsetof(FRCFunctionDescription, Description) == 0x000010, "Member 'FRCFunctionDescription::Description' has a wrong offset!");
static_assert(offsetof(FRCFunctionDescription, Arguments) == 0x000020, "Member 'FRCFunctionDescription::Arguments' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCExposedFunctionDescription
// 0x0058 (0x0058 - 0x0000)
struct FRCExposedFunctionDescription final
{
public:
	class FName                                   DisplayName;                                       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ID;                                                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRCFunctionDescription                 UnderlyingFunction;                                // 0x0018(0x0030)(NativeAccessSpecifierPublic)
	TArray<struct FRCObjectDescription>           OwnerObjects;                                      // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCExposedFunctionDescription) == 0x000008, "Wrong alignment on FRCExposedFunctionDescription");
static_assert(sizeof(FRCExposedFunctionDescription) == 0x000058, "Wrong size on FRCExposedFunctionDescription");
static_assert(offsetof(FRCExposedFunctionDescription, DisplayName) == 0x000000, "Member 'FRCExposedFunctionDescription::DisplayName' has a wrong offset!");
static_assert(offsetof(FRCExposedFunctionDescription, ID) == 0x000008, "Member 'FRCExposedFunctionDescription::ID' has a wrong offset!");
static_assert(offsetof(FRCExposedFunctionDescription, UnderlyingFunction) == 0x000018, "Member 'FRCExposedFunctionDescription::UnderlyingFunction' has a wrong offset!");
static_assert(offsetof(FRCExposedFunctionDescription, OwnerObjects) == 0x000048, "Member 'FRCExposedFunctionDescription::OwnerObjects' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCExposedActorDescription
// 0x0048 (0x0048 - 0x0000)
struct FRCExposedActorDescription final
{
public:
	class FName                                   DisplayName;                                       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ID;                                                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRCObjectDescription                   UnderlyingActor;                                   // 0x0018(0x0030)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCExposedActorDescription) == 0x000008, "Wrong alignment on FRCExposedActorDescription");
static_assert(sizeof(FRCExposedActorDescription) == 0x000048, "Wrong size on FRCExposedActorDescription");
static_assert(offsetof(FRCExposedActorDescription, DisplayName) == 0x000000, "Member 'FRCExposedActorDescription::DisplayName' has a wrong offset!");
static_assert(offsetof(FRCExposedActorDescription, ID) == 0x000008, "Member 'FRCExposedActorDescription::ID' has a wrong offset!");
static_assert(offsetof(FRCExposedActorDescription, UnderlyingActor) == 0x000018, "Member 'FRCExposedActorDescription::UnderlyingActor' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPresetLayoutGroupDescription
// 0x0038 (0x0038 - 0x0000)
struct FRCPresetLayoutGroupDescription final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRCExposedPropertyDescription>  ExposedProperties;                                 // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRCExposedFunctionDescription>  ExposedFunctions;                                  // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRCExposedActorDescription>     ExposedActors;                                     // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCPresetLayoutGroupDescription) == 0x000008, "Wrong alignment on FRCPresetLayoutGroupDescription");
static_assert(sizeof(FRCPresetLayoutGroupDescription) == 0x000038, "Wrong size on FRCPresetLayoutGroupDescription");
static_assert(offsetof(FRCPresetLayoutGroupDescription, Name) == 0x000000, "Member 'FRCPresetLayoutGroupDescription::Name' has a wrong offset!");
static_assert(offsetof(FRCPresetLayoutGroupDescription, ExposedProperties) == 0x000008, "Member 'FRCPresetLayoutGroupDescription::ExposedProperties' has a wrong offset!");
static_assert(offsetof(FRCPresetLayoutGroupDescription, ExposedFunctions) == 0x000018, "Member 'FRCPresetLayoutGroupDescription::ExposedFunctions' has a wrong offset!");
static_assert(offsetof(FRCPresetLayoutGroupDescription, ExposedActors) == 0x000028, "Member 'FRCPresetLayoutGroupDescription::ExposedActors' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPresetDescription
// 0x0040 (0x0040 - 0x0000)
struct FRCPresetDescription final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Path;                                              // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ID;                                                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRCPresetLayoutGroupDescription> Groups;                                            // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCPresetDescription) == 0x000008, "Wrong alignment on FRCPresetDescription");
static_assert(sizeof(FRCPresetDescription) == 0x000040, "Wrong size on FRCPresetDescription");
static_assert(offsetof(FRCPresetDescription, Name) == 0x000000, "Member 'FRCPresetDescription::Name' has a wrong offset!");
static_assert(offsetof(FRCPresetDescription, Path) == 0x000010, "Member 'FRCPresetDescription::Path' has a wrong offset!");
static_assert(offsetof(FRCPresetDescription, ID) == 0x000020, "Member 'FRCPresetDescription::ID' has a wrong offset!");
static_assert(offsetof(FRCPresetDescription, Groups) == 0x000030, "Member 'FRCPresetDescription::Groups' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPresetModifiedEntitiesDescription
// 0x0030 (0x0030 - 0x0000)
struct FRCPresetModifiedEntitiesDescription final
{
public:
	TArray<struct FRCExposedPropertyDescription>  ModifiedRCProperties;                              // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRCExposedFunctionDescription>  ModifiedRCFunctions;                               // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRCExposedActorDescription>     ModifiedRCActors;                                  // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCPresetModifiedEntitiesDescription) == 0x000008, "Wrong alignment on FRCPresetModifiedEntitiesDescription");
static_assert(sizeof(FRCPresetModifiedEntitiesDescription) == 0x000030, "Wrong size on FRCPresetModifiedEntitiesDescription");
static_assert(offsetof(FRCPresetModifiedEntitiesDescription, ModifiedRCProperties) == 0x000000, "Member 'FRCPresetModifiedEntitiesDescription::ModifiedRCProperties' has a wrong offset!");
static_assert(offsetof(FRCPresetModifiedEntitiesDescription, ModifiedRCFunctions) == 0x000010, "Member 'FRCPresetModifiedEntitiesDescription::ModifiedRCFunctions' has a wrong offset!");
static_assert(offsetof(FRCPresetModifiedEntitiesDescription, ModifiedRCActors) == 0x000020, "Member 'FRCPresetModifiedEntitiesDescription::ModifiedRCActors' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCRequest
// 0x0068 (0x0068 - 0x0000)
struct alignas(0x08) FRCRequest
{
public:
	uint8                                         Pad_43BC[0x68];                                    // 0x0000(0x0068)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCRequest) == 0x000008, "Wrong alignment on FRCRequest");
static_assert(sizeof(FRCRequest) == 0x000068, "Wrong size on FRCRequest");

// ScriptStruct WebRemoteControl.RCWebSocketPresetRegisterBody
// 0x0018 (0x0080 - 0x0068)
struct FRCWebSocketPresetRegisterBody final : public FRCRequest
{
public:
	class FString                                 PresetName;                                        // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IgnoreRemoteChanges;                               // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43BD[0x7];                                     // 0x0079(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCWebSocketPresetRegisterBody) == 0x000008, "Wrong alignment on FRCWebSocketPresetRegisterBody");
static_assert(sizeof(FRCWebSocketPresetRegisterBody) == 0x000080, "Wrong size on FRCWebSocketPresetRegisterBody");
static_assert(offsetof(FRCWebSocketPresetRegisterBody, PresetName) == 0x000068, "Member 'FRCWebSocketPresetRegisterBody::PresetName' has a wrong offset!");
static_assert(offsetof(FRCWebSocketPresetRegisterBody, IgnoreRemoteChanges) == 0x000078, "Member 'FRCWebSocketPresetRegisterBody::IgnoreRemoteChanges' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCWebSocketRequest
// 0x0018 (0x0080 - 0x0068)
struct FRCWebSocketRequest final : public FRCRequest
{
public:
	class FString                                 MessageName;                                       // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ID;                                                // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43BE[0x4];                                     // 0x007C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCWebSocketRequest) == 0x000008, "Wrong alignment on FRCWebSocketRequest");
static_assert(sizeof(FRCWebSocketRequest) == 0x000080, "Wrong size on FRCWebSocketRequest");
static_assert(offsetof(FRCWebSocketRequest, MessageName) == 0x000068, "Member 'FRCWebSocketRequest::MessageName' has a wrong offset!");
static_assert(offsetof(FRCWebSocketRequest, ID) == 0x000078, "Member 'FRCWebSocketRequest::ID' has a wrong offset!");

// ScriptStruct WebRemoteControl.GetObjectThumbnailRequest
// 0x0010 (0x0078 - 0x0068)
struct FGetObjectThumbnailRequest final : public FRCRequest
{
public:
	class FString                                 ObjectPath;                                        // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGetObjectThumbnailRequest) == 0x000008, "Wrong alignment on FGetObjectThumbnailRequest");
static_assert(sizeof(FGetObjectThumbnailRequest) == 0x000078, "Wrong size on FGetObjectThumbnailRequest");
static_assert(offsetof(FGetObjectThumbnailRequest, ObjectPath) == 0x000068, "Member 'FGetObjectThumbnailRequest::ObjectPath' has a wrong offset!");

// ScriptStruct WebRemoteControl.SetEntityLabelRequest
// 0x0010 (0x0078 - 0x0068)
struct FSetEntityLabelRequest final : public FRCRequest
{
public:
	class FString                                 NewLabel;                                          // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSetEntityLabelRequest) == 0x000008, "Wrong alignment on FSetEntityLabelRequest");
static_assert(sizeof(FSetEntityLabelRequest) == 0x000078, "Wrong size on FSetEntityLabelRequest");
static_assert(offsetof(FSetEntityLabelRequest, NewLabel) == 0x000068, "Member 'FSetEntityLabelRequest::NewLabel' has a wrong offset!");

// ScriptStruct WebRemoteControl.SetEntityMetadataRequest
// 0x0010 (0x0078 - 0x0068)
struct FSetEntityMetadataRequest final : public FRCRequest
{
public:
	class FString                                 Value;                                             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSetEntityMetadataRequest) == 0x000008, "Wrong alignment on FSetEntityMetadataRequest");
static_assert(sizeof(FSetEntityMetadataRequest) == 0x000078, "Wrong size on FSetEntityMetadataRequest");
static_assert(offsetof(FSetEntityMetadataRequest, Value) == 0x000068, "Member 'FSetEntityMetadataRequest::Value' has a wrong offset!");

// ScriptStruct WebRemoteControl.SetPresetMetadataRequest
// 0x0010 (0x0078 - 0x0068)
struct FSetPresetMetadataRequest final : public FRCRequest
{
public:
	class FString                                 Value;                                             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSetPresetMetadataRequest) == 0x000008, "Wrong alignment on FSetPresetMetadataRequest");
static_assert(sizeof(FSetPresetMetadataRequest) == 0x000078, "Wrong size on FSetPresetMetadataRequest");
static_assert(offsetof(FSetPresetMetadataRequest, Value) == 0x000068, "Member 'FSetPresetMetadataRequest::Value' has a wrong offset!");

// ScriptStruct WebRemoteControl.SearchObjectRequest
// 0x0038 (0x00A0 - 0x0068)
struct FSearchObjectRequest final : public FRCRequest
{
public:
	class FString                                 Query;                                             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Class;                                             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Outer;                                             // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Limit;                                             // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43BF[0x4];                                     // 0x009C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSearchObjectRequest) == 0x000008, "Wrong alignment on FSearchObjectRequest");
static_assert(sizeof(FSearchObjectRequest) == 0x0000A0, "Wrong size on FSearchObjectRequest");
static_assert(offsetof(FSearchObjectRequest, Query) == 0x000068, "Member 'FSearchObjectRequest::Query' has a wrong offset!");
static_assert(offsetof(FSearchObjectRequest, Class) == 0x000078, "Member 'FSearchObjectRequest::Class' has a wrong offset!");
static_assert(offsetof(FSearchObjectRequest, Outer) == 0x000088, "Member 'FSearchObjectRequest::Outer' has a wrong offset!");
static_assert(offsetof(FSearchObjectRequest, Limit) == 0x000098, "Member 'FSearchObjectRequest::Limit' has a wrong offset!");

// ScriptStruct WebRemoteControl.SearchActorRequest
// 0x0028 (0x0090 - 0x0068)
struct FSearchActorRequest final : public FRCRequest
{
public:
	class FString                                 Query;                                             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Class;                                             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Limit;                                             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43C0[0x4];                                     // 0x008C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSearchActorRequest) == 0x000008, "Wrong alignment on FSearchActorRequest");
static_assert(sizeof(FSearchActorRequest) == 0x000090, "Wrong size on FSearchActorRequest");
static_assert(offsetof(FSearchActorRequest, Query) == 0x000068, "Member 'FSearchActorRequest::Query' has a wrong offset!");
static_assert(offsetof(FSearchActorRequest, Class) == 0x000078, "Member 'FSearchActorRequest::Class' has a wrong offset!");
static_assert(offsetof(FSearchActorRequest, Limit) == 0x000088, "Member 'FSearchActorRequest::Limit' has a wrong offset!");

// ScriptStruct WebRemoteControl.SearchAssetRequest
// 0x00A0 (0x0108 - 0x0068)
struct FSearchAssetRequest final : public FRCRequest
{
public:
	class FString                                 Query;                                             // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRCAssetFilter                         Filter;                                            // 0x0078(0x0088)(NativeAccessSpecifierPublic)
	int32                                         Limit;                                             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43C1[0x4];                                     // 0x0104(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSearchAssetRequest) == 0x000008, "Wrong alignment on FSearchAssetRequest");
static_assert(sizeof(FSearchAssetRequest) == 0x000108, "Wrong size on FSearchAssetRequest");
static_assert(offsetof(FSearchAssetRequest, Query) == 0x000068, "Member 'FSearchAssetRequest::Query' has a wrong offset!");
static_assert(offsetof(FSearchAssetRequest, Filter) == 0x000078, "Member 'FSearchAssetRequest::Filter' has a wrong offset!");
static_assert(offsetof(FSearchAssetRequest, Limit) == 0x000100, "Member 'FSearchAssetRequest::Limit' has a wrong offset!");

// ScriptStruct WebRemoteControl.DescribeObjectRequest
// 0x0010 (0x0078 - 0x0068)
struct FDescribeObjectRequest final : public FRCRequest
{
public:
	class FString                                 ObjectPath;                                        // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDescribeObjectRequest) == 0x000008, "Wrong alignment on FDescribeObjectRequest");
static_assert(sizeof(FDescribeObjectRequest) == 0x000078, "Wrong size on FDescribeObjectRequest");
static_assert(offsetof(FDescribeObjectRequest, ObjectPath) == 0x000068, "Member 'FDescribeObjectRequest::ObjectPath' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPresetCallRequest
// 0x0008 (0x0070 - 0x0068)
struct FRCPresetCallRequest final : public FRCRequest
{
public:
	bool                                          GenerateTransaction;                               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43C2[0x7];                                     // 0x0069(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCPresetCallRequest) == 0x000008, "Wrong alignment on FRCPresetCallRequest");
static_assert(sizeof(FRCPresetCallRequest) == 0x000070, "Wrong size on FRCPresetCallRequest");
static_assert(offsetof(FRCPresetCallRequest, GenerateTransaction) == 0x000068, "Member 'FRCPresetCallRequest::GenerateTransaction' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPresetSetPropertyRequest
// 0x0008 (0x0070 - 0x0068)
struct FRCPresetSetPropertyRequest final : public FRCRequest
{
public:
	bool                                          GenerateTransaction;                               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ResetToDefault;                                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43C3[0x6];                                     // 0x006A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCPresetSetPropertyRequest) == 0x000008, "Wrong alignment on FRCPresetSetPropertyRequest");
static_assert(sizeof(FRCPresetSetPropertyRequest) == 0x000070, "Wrong size on FRCPresetSetPropertyRequest");
static_assert(offsetof(FRCPresetSetPropertyRequest, GenerateTransaction) == 0x000068, "Member 'FRCPresetSetPropertyRequest::GenerateTransaction' has a wrong offset!");
static_assert(offsetof(FRCPresetSetPropertyRequest, ResetToDefault) == 0x000069, "Member 'FRCPresetSetPropertyRequest::ResetToDefault' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCObjectRequest
// 0x0028 (0x0090 - 0x0068)
struct FRCObjectRequest final : public FRCRequest
{
public:
	class FString                                 ObjectPath;                                        // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PropertyName;                                      // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ResetToDefault;                                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          GenerateTransaction;                               // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERCAccess                                     Access;                                            // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_43C4[0x5];                                     // 0x008B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCObjectRequest) == 0x000008, "Wrong alignment on FRCObjectRequest");
static_assert(sizeof(FRCObjectRequest) == 0x000090, "Wrong size on FRCObjectRequest");
static_assert(offsetof(FRCObjectRequest, ObjectPath) == 0x000068, "Member 'FRCObjectRequest::ObjectPath' has a wrong offset!");
static_assert(offsetof(FRCObjectRequest, PropertyName) == 0x000078, "Member 'FRCObjectRequest::PropertyName' has a wrong offset!");
static_assert(offsetof(FRCObjectRequest, ResetToDefault) == 0x000088, "Member 'FRCObjectRequest::ResetToDefault' has a wrong offset!");
static_assert(offsetof(FRCObjectRequest, GenerateTransaction) == 0x000089, "Member 'FRCObjectRequest::GenerateTransaction' has a wrong offset!");
static_assert(offsetof(FRCObjectRequest, Access) == 0x00008A, "Member 'FRCObjectRequest::Access' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCCallRequest
// 0x0028 (0x0090 - 0x0068)
struct FRCCallRequest final : public FRCRequest
{
public:
	class FString                                 ObjectPath;                                        // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FunctionName;                                      // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          GenerateTransaction;                               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43C5[0x7];                                     // 0x0089(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCCallRequest) == 0x000008, "Wrong alignment on FRCCallRequest");
static_assert(sizeof(FRCCallRequest) == 0x000090, "Wrong size on FRCCallRequest");
static_assert(offsetof(FRCCallRequest, ObjectPath) == 0x000068, "Member 'FRCCallRequest::ObjectPath' has a wrong offset!");
static_assert(offsetof(FRCCallRequest, FunctionName) == 0x000078, "Member 'FRCCallRequest::FunctionName' has a wrong offset!");
static_assert(offsetof(FRCCallRequest, GenerateTransaction) == 0x000088, "Member 'FRCCallRequest::GenerateTransaction' has a wrong offset!");

// ScriptStruct WebRemoteControl.RemoteControlObjectEventHookRequest
// 0x0028 (0x0090 - 0x0068)
struct FRemoteControlObjectEventHookRequest final : public FRCRequest
{
public:
	ERemoteControlEvent                           EventType;                                         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43C6[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ObjectPath;                                        // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PropertyName;                                      // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRemoteControlObjectEventHookRequest) == 0x000008, "Wrong alignment on FRemoteControlObjectEventHookRequest");
static_assert(sizeof(FRemoteControlObjectEventHookRequest) == 0x000090, "Wrong size on FRemoteControlObjectEventHookRequest");
static_assert(offsetof(FRemoteControlObjectEventHookRequest, EventType) == 0x000068, "Member 'FRemoteControlObjectEventHookRequest::EventType' has a wrong offset!");
static_assert(offsetof(FRemoteControlObjectEventHookRequest, ObjectPath) == 0x000070, "Member 'FRemoteControlObjectEventHookRequest::ObjectPath' has a wrong offset!");
static_assert(offsetof(FRemoteControlObjectEventHookRequest, PropertyName) == 0x000080, "Member 'FRemoteControlObjectEventHookRequest::PropertyName' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCRequestWrapper
// 0x0020 (0x0088 - 0x0068)
struct FRCRequestWrapper final : public FRCRequest
{
public:
	class FString                                 URL;                                               // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   Verb;                                              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RequestID;                                         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43C7[0x4];                                     // 0x0084(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCRequestWrapper) == 0x000008, "Wrong alignment on FRCRequestWrapper");
static_assert(sizeof(FRCRequestWrapper) == 0x000088, "Wrong size on FRCRequestWrapper");
static_assert(offsetof(FRCRequestWrapper, URL) == 0x000068, "Member 'FRCRequestWrapper::URL' has a wrong offset!");
static_assert(offsetof(FRCRequestWrapper, Verb) == 0x000078, "Member 'FRCRequestWrapper::Verb' has a wrong offset!");
static_assert(offsetof(FRCRequestWrapper, RequestID) == 0x000080, "Member 'FRCRequestWrapper::RequestID' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCBatchRequest
// 0x0010 (0x0078 - 0x0068)
struct FRCBatchRequest final : public FRCRequest
{
public:
	TArray<struct FRCRequestWrapper>              Requests;                                          // 0x0068(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCBatchRequest) == 0x000008, "Wrong alignment on FRCBatchRequest");
static_assert(sizeof(FRCBatchRequest) == 0x000078, "Wrong size on FRCBatchRequest");
static_assert(offsetof(FRCBatchRequest, Requests) == 0x000068, "Member 'FRCBatchRequest::Requests' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPresetEntitiesModifiedEvent
// 0x0058 (0x0058 - 0x0000)
struct FRCPresetEntitiesModifiedEvent final
{
public:
	class FString                                 Type;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PresetName;                                        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PresetId;                                          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRCPresetModifiedEntitiesDescription   ModifiedEntities;                                  // 0x0028(0x0030)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCPresetEntitiesModifiedEvent) == 0x000008, "Wrong alignment on FRCPresetEntitiesModifiedEvent");
static_assert(sizeof(FRCPresetEntitiesModifiedEvent) == 0x000058, "Wrong size on FRCPresetEntitiesModifiedEvent");
static_assert(offsetof(FRCPresetEntitiesModifiedEvent, Type) == 0x000000, "Member 'FRCPresetEntitiesModifiedEvent::Type' has a wrong offset!");
static_assert(offsetof(FRCPresetEntitiesModifiedEvent, PresetName) == 0x000010, "Member 'FRCPresetEntitiesModifiedEvent::PresetName' has a wrong offset!");
static_assert(offsetof(FRCPresetEntitiesModifiedEvent, PresetId) == 0x000018, "Member 'FRCPresetEntitiesModifiedEvent::PresetId' has a wrong offset!");
static_assert(offsetof(FRCPresetEntitiesModifiedEvent, ModifiedEntities) == 0x000028, "Member 'FRCPresetEntitiesModifiedEvent::ModifiedEntities' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPresetFieldsAddedEvent
// 0x0068 (0x0068 - 0x0000)
struct FRCPresetFieldsAddedEvent final
{
public:
	class FString                                 Type;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PresetName;                                        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PresetId;                                          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRCPresetDescription                   Description;                                       // 0x0028(0x0040)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCPresetFieldsAddedEvent) == 0x000008, "Wrong alignment on FRCPresetFieldsAddedEvent");
static_assert(sizeof(FRCPresetFieldsAddedEvent) == 0x000068, "Wrong size on FRCPresetFieldsAddedEvent");
static_assert(offsetof(FRCPresetFieldsAddedEvent, Type) == 0x000000, "Member 'FRCPresetFieldsAddedEvent::Type' has a wrong offset!");
static_assert(offsetof(FRCPresetFieldsAddedEvent, PresetName) == 0x000010, "Member 'FRCPresetFieldsAddedEvent::PresetName' has a wrong offset!");
static_assert(offsetof(FRCPresetFieldsAddedEvent, PresetId) == 0x000018, "Member 'FRCPresetFieldsAddedEvent::PresetId' has a wrong offset!");
static_assert(offsetof(FRCPresetFieldsAddedEvent, Description) == 0x000028, "Member 'FRCPresetFieldsAddedEvent::Description' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPresetFieldsRemovedEvent
// 0x0048 (0x0048 - 0x0000)
struct FRCPresetFieldsRemovedEvent final
{
public:
	class FString                                 Type;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PresetName;                                        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PresetId;                                          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           RemovedFields;                                     // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                         RemovedFieldIds;                                   // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCPresetFieldsRemovedEvent) == 0x000008, "Wrong alignment on FRCPresetFieldsRemovedEvent");
static_assert(sizeof(FRCPresetFieldsRemovedEvent) == 0x000048, "Wrong size on FRCPresetFieldsRemovedEvent");
static_assert(offsetof(FRCPresetFieldsRemovedEvent, Type) == 0x000000, "Member 'FRCPresetFieldsRemovedEvent::Type' has a wrong offset!");
static_assert(offsetof(FRCPresetFieldsRemovedEvent, PresetName) == 0x000010, "Member 'FRCPresetFieldsRemovedEvent::PresetName' has a wrong offset!");
static_assert(offsetof(FRCPresetFieldsRemovedEvent, PresetId) == 0x000018, "Member 'FRCPresetFieldsRemovedEvent::PresetId' has a wrong offset!");
static_assert(offsetof(FRCPresetFieldsRemovedEvent, RemovedFields) == 0x000028, "Member 'FRCPresetFieldsRemovedEvent::RemovedFields' has a wrong offset!");
static_assert(offsetof(FRCPresetFieldsRemovedEvent, RemovedFieldIds) == 0x000038, "Member 'FRCPresetFieldsRemovedEvent::RemovedFieldIds' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPresetLayoutModified
// 0x0050 (0x0050 - 0x0000)
struct FRCPresetLayoutModified final
{
public:
	class FString                                 Type;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRCPresetDescription                   Preset;                                            // 0x0010(0x0040)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCPresetLayoutModified) == 0x000008, "Wrong alignment on FRCPresetLayoutModified");
static_assert(sizeof(FRCPresetLayoutModified) == 0x000050, "Wrong size on FRCPresetLayoutModified");
static_assert(offsetof(FRCPresetLayoutModified, Type) == 0x000000, "Member 'FRCPresetLayoutModified::Type' has a wrong offset!");
static_assert(offsetof(FRCPresetLayoutModified, Preset) == 0x000010, "Member 'FRCPresetLayoutModified::Preset' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPresetMetadataModified
// 0x0078 (0x0078 - 0x0000)
struct FRCPresetMetadataModified final
{
public:
	class FString                                 Type;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PresetName;                                        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PresetId;                                          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>            MetaData;                                          // 0x0028(0x0050)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCPresetMetadataModified) == 0x000008, "Wrong alignment on FRCPresetMetadataModified");
static_assert(sizeof(FRCPresetMetadataModified) == 0x000078, "Wrong size on FRCPresetMetadataModified");
static_assert(offsetof(FRCPresetMetadataModified, Type) == 0x000000, "Member 'FRCPresetMetadataModified::Type' has a wrong offset!");
static_assert(offsetof(FRCPresetMetadataModified, PresetName) == 0x000010, "Member 'FRCPresetMetadataModified::PresetName' has a wrong offset!");
static_assert(offsetof(FRCPresetMetadataModified, PresetId) == 0x000018, "Member 'FRCPresetMetadataModified::PresetId' has a wrong offset!");
static_assert(offsetof(FRCPresetMetadataModified, MetaData) == 0x000028, "Member 'FRCPresetMetadataModified::MetaData' has a wrong offset!");

// ScriptStruct WebRemoteControl.RCPresetFieldsRenamedEvent
// 0x0038 (0x0038 - 0x0000)
struct FRCPresetFieldsRenamedEvent final
{
public:
	class FString                                 Type;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   PresetName;                                        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PresetId;                                          // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRCPresetFieldRenamed>          RenamedFields;                                     // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCPresetFieldsRenamedEvent) == 0x000008, "Wrong alignment on FRCPresetFieldsRenamedEvent");
static_assert(sizeof(FRCPresetFieldsRenamedEvent) == 0x000038, "Wrong size on FRCPresetFieldsRenamedEvent");
static_assert(offsetof(FRCPresetFieldsRenamedEvent, Type) == 0x000000, "Member 'FRCPresetFieldsRenamedEvent::Type' has a wrong offset!");
static_assert(offsetof(FRCPresetFieldsRenamedEvent, PresetName) == 0x000010, "Member 'FRCPresetFieldsRenamedEvent::PresetName' has a wrong offset!");
static_assert(offsetof(FRCPresetFieldsRenamedEvent, PresetId) == 0x000018, "Member 'FRCPresetFieldsRenamedEvent::PresetId' has a wrong offset!");
static_assert(offsetof(FRCPresetFieldsRenamedEvent, RenamedFields) == 0x000028, "Member 'FRCPresetFieldsRenamedEvent::RenamedFields' has a wrong offset!");

// ScriptStruct WebRemoteControl.SetEntityLabelResponse
// 0x0010 (0x0010 - 0x0000)
struct FSetEntityLabelResponse final
{
public:
	class FString                                 AssignedLabel;                                     // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSetEntityLabelResponse) == 0x000008, "Wrong alignment on FSetEntityLabelResponse");
static_assert(sizeof(FSetEntityLabelResponse) == 0x000010, "Wrong size on FSetEntityLabelResponse");
static_assert(offsetof(FSetEntityLabelResponse, AssignedLabel) == 0x000000, "Member 'FSetEntityLabelResponse::AssignedLabel' has a wrong offset!");

// ScriptStruct WebRemoteControl.GetMetadataResponse
// 0x0050 (0x0050 - 0x0000)
struct FGetMetadataResponse final
{
public:
	TMap<class FString, class FString>            MetaData;                                          // 0x0000(0x0050)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FGetMetadataResponse) == 0x000008, "Wrong alignment on FGetMetadataResponse");
static_assert(sizeof(FGetMetadataResponse) == 0x000050, "Wrong size on FGetMetadataResponse");
static_assert(offsetof(FGetMetadataResponse, MetaData) == 0x000000, "Member 'FGetMetadataResponse::MetaData' has a wrong offset!");

// ScriptStruct WebRemoteControl.GetMetadataFieldResponse
// 0x0010 (0x0010 - 0x0000)
struct FGetMetadataFieldResponse final
{
public:
	class FString                                 Value;                                             // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGetMetadataFieldResponse) == 0x000008, "Wrong alignment on FGetMetadataFieldResponse");
static_assert(sizeof(FGetMetadataFieldResponse) == 0x000010, "Wrong size on FGetMetadataFieldResponse");
static_assert(offsetof(FGetMetadataFieldResponse, Value) == 0x000000, "Member 'FGetMetadataFieldResponse::Value' has a wrong offset!");

// ScriptStruct WebRemoteControl.SearchActorResponse
// 0x0010 (0x0010 - 0x0000)
struct FSearchActorResponse final
{
public:
	TArray<struct FRCObjectDescription>           Actors;                                            // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSearchActorResponse) == 0x000008, "Wrong alignment on FSearchActorResponse");
static_assert(sizeof(FSearchActorResponse) == 0x000010, "Wrong size on FSearchActorResponse");
static_assert(offsetof(FSearchActorResponse, Actors) == 0x000000, "Member 'FSearchActorResponse::Actors' has a wrong offset!");

// ScriptStruct WebRemoteControl.SearchAssetResponse
// 0x0010 (0x0010 - 0x0000)
struct FSearchAssetResponse final
{
public:
	TArray<struct FRCAssetDescription>            Assets;                                            // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSearchAssetResponse) == 0x000008, "Wrong alignment on FSearchAssetResponse");
static_assert(sizeof(FSearchAssetResponse) == 0x000010, "Wrong size on FSearchAssetResponse");
static_assert(offsetof(FSearchAssetResponse, Assets) == 0x000000, "Member 'FSearchAssetResponse::Assets' has a wrong offset!");

// ScriptStruct WebRemoteControl.DescribeObjectResponse
// 0x0038 (0x0038 - 0x0000)
struct FDescribeObjectResponse final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                 Class;                                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRCPropertyDescription>         Properties;                                        // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRCFunctionDescription>         Functions;                                         // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDescribeObjectResponse) == 0x000008, "Wrong alignment on FDescribeObjectResponse");
static_assert(sizeof(FDescribeObjectResponse) == 0x000038, "Wrong size on FDescribeObjectResponse");
static_assert(offsetof(FDescribeObjectResponse, Name) == 0x000000, "Member 'FDescribeObjectResponse::Name' has a wrong offset!");
static_assert(offsetof(FDescribeObjectResponse, Class) == 0x000010, "Member 'FDescribeObjectResponse::Class' has a wrong offset!");
static_assert(offsetof(FDescribeObjectResponse, Properties) == 0x000018, "Member 'FDescribeObjectResponse::Properties' has a wrong offset!");
static_assert(offsetof(FDescribeObjectResponse, Functions) == 0x000028, "Member 'FDescribeObjectResponse::Functions' has a wrong offset!");

// ScriptStruct WebRemoteControl.GetPresetResponse
// 0x0040 (0x0040 - 0x0000)
struct FGetPresetResponse final
{
public:
	struct FRCPresetDescription                   Preset;                                            // 0x0000(0x0040)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FGetPresetResponse) == 0x000008, "Wrong alignment on FGetPresetResponse");
static_assert(sizeof(FGetPresetResponse) == 0x000040, "Wrong size on FGetPresetResponse");
static_assert(offsetof(FGetPresetResponse, Preset) == 0x000000, "Member 'FGetPresetResponse::Preset' has a wrong offset!");

// ScriptStruct WebRemoteControl.ListPresetsResponse
// 0x0010 (0x0010 - 0x0000)
struct FListPresetsResponse final
{
public:
	TArray<struct FRCShortPresetDescription>      Presets;                                           // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FListPresetsResponse) == 0x000008, "Wrong alignment on FListPresetsResponse");
static_assert(sizeof(FListPresetsResponse) == 0x000010, "Wrong size on FListPresetsResponse");
static_assert(offsetof(FListPresetsResponse, Presets) == 0x000000, "Member 'FListPresetsResponse::Presets' has a wrong offset!");

// ScriptStruct WebRemoteControl.RemoteControlRouteDescription
// 0x0028 (0x0028 - 0x0000)
struct FRemoteControlRouteDescription final
{
public:
	class FString                                 Path;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemoteControlHttpVerbs                       Verb;                                              // 0x0010(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_43C8[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Description;                                       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRemoteControlRouteDescription) == 0x000008, "Wrong alignment on FRemoteControlRouteDescription");
static_assert(sizeof(FRemoteControlRouteDescription) == 0x000028, "Wrong size on FRemoteControlRouteDescription");
static_assert(offsetof(FRemoteControlRouteDescription, Path) == 0x000000, "Member 'FRemoteControlRouteDescription::Path' has a wrong offset!");
static_assert(offsetof(FRemoteControlRouteDescription, Verb) == 0x000010, "Member 'FRemoteControlRouteDescription::Verb' has a wrong offset!");
static_assert(offsetof(FRemoteControlRouteDescription, Description) == 0x000018, "Member 'FRemoteControlRouteDescription::Description' has a wrong offset!");

// ScriptStruct WebRemoteControl.APIInfoResponse
// 0x0038 (0x0038 - 0x0000)
struct FAPIInfoResponse final
{
public:
	uint8                                         Pad_43C9[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FRemoteControlRouteDescription> HttpRoutes;                                        // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FRCShortPresetDescription              ActivePreset;                                      // 0x0018(0x0020)(NativeAccessSpecifierPrivate)
};
static_assert(alignof(FAPIInfoResponse) == 0x000008, "Wrong alignment on FAPIInfoResponse");
static_assert(sizeof(FAPIInfoResponse) == 0x000038, "Wrong size on FAPIInfoResponse");
static_assert(offsetof(FAPIInfoResponse, HttpRoutes) == 0x000008, "Member 'FAPIInfoResponse::HttpRoutes' has a wrong offset!");
static_assert(offsetof(FAPIInfoResponse, ActivePreset) == 0x000018, "Member 'FAPIInfoResponse::ActivePreset' has a wrong offset!");

}

