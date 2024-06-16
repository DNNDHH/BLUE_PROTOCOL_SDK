#pragma once

 

// Package: RemoteControl

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "RemoteControl_structs.hpp"


namespace SDK
{

// Class RemoteControl.RemoteControlBinding
// 0x0010 (0x0038 - 0x0028)
class URemoteControlBinding : public UObject
{
public:
	class FString                                 Name_RemoteControlBinding;                         // 0x0028(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemoteControlBinding">();
	}
	static class URemoteControlBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<URemoteControlBinding>();
	}
};
static_assert(alignof(URemoteControlBinding) == 0x000008, "Wrong alignment on URemoteControlBinding");
static_assert(sizeof(URemoteControlBinding) == 0x000038, "Wrong size on URemoteControlBinding");
static_assert(offsetof(URemoteControlBinding, Name_RemoteControlBinding) == 0x000028, "Member 'URemoteControlBinding::Name_RemoteControlBinding' has a wrong offset!");

// Class RemoteControl.RemoteControlLevelIndependantBinding
// 0x0028 (0x0060 - 0x0038)
class URemoteControlLevelIndependantBinding final : public URemoteControlBinding
{
public:
	TSoftObjectPtr<class UObject>                 BoundObject;                                       // 0x0038(0x0028)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemoteControlLevelIndependantBinding">();
	}
	static class URemoteControlLevelIndependantBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<URemoteControlLevelIndependantBinding>();
	}
};
static_assert(alignof(URemoteControlLevelIndependantBinding) == 0x000008, "Wrong alignment on URemoteControlLevelIndependantBinding");
static_assert(sizeof(URemoteControlLevelIndependantBinding) == 0x000060, "Wrong size on URemoteControlLevelIndependantBinding");
static_assert(offsetof(URemoteControlLevelIndependantBinding, BoundObject) == 0x000038, "Member 'URemoteControlLevelIndependantBinding::BoundObject' has a wrong offset!");

// Class RemoteControl.RemoteControlLevelDependantBinding
// 0x0078 (0x00B0 - 0x0038)
class URemoteControlLevelDependantBinding final : public URemoteControlBinding
{
public:
	TMap<TSoftObjectPtr<class ULevel>, TSoftObjectPtr<class UObject>> BoundObjectMap;                                    // 0x0038(0x0050)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class ULevel>                  LevelWithLastSuccessfulResolve;                    // 0x0088(0x0028)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemoteControlLevelDependantBinding">();
	}
	static class URemoteControlLevelDependantBinding* GetDefaultObj()
	{
		return GetDefaultObjImpl<URemoteControlLevelDependantBinding>();
	}
};
static_assert(alignof(URemoteControlLevelDependantBinding) == 0x000008, "Wrong alignment on URemoteControlLevelDependantBinding");
static_assert(sizeof(URemoteControlLevelDependantBinding) == 0x0000B0, "Wrong size on URemoteControlLevelDependantBinding");
static_assert(offsetof(URemoteControlLevelDependantBinding, BoundObjectMap) == 0x000038, "Member 'URemoteControlLevelDependantBinding::BoundObjectMap' has a wrong offset!");
static_assert(offsetof(URemoteControlLevelDependantBinding, LevelWithLastSuccessfulResolve) == 0x000088, "Member 'URemoteControlLevelDependantBinding::LevelWithLastSuccessfulResolve' has a wrong offset!");

// Class RemoteControl.RemoteControlExposeRegistry
// 0x00A0 (0x00C8 - 0x0028)
class URemoteControlExposeRegistry final : public UObject
{
public:
	TSet<struct FRCEntityWrapper>                 ExposedEntities;                                   // 0x0028(0x0050)(NativeAccessSpecifierPrivate)
	TMap<class FName, struct FGuid>               LabelToIdCache;                                    // 0x0078(0x0050)(Transient, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemoteControlExposeRegistry">();
	}
	static class URemoteControlExposeRegistry* GetDefaultObj()
	{
		return GetDefaultObjImpl<URemoteControlExposeRegistry>();
	}
};
static_assert(alignof(URemoteControlExposeRegistry) == 0x000008, "Wrong alignment on URemoteControlExposeRegistry");
static_assert(sizeof(URemoteControlExposeRegistry) == 0x0000C8, "Wrong size on URemoteControlExposeRegistry");
static_assert(offsetof(URemoteControlExposeRegistry, ExposedEntities) == 0x000028, "Member 'URemoteControlExposeRegistry::ExposedEntities' has a wrong offset!");
static_assert(offsetof(URemoteControlExposeRegistry, LabelToIdCache) == 0x000078, "Member 'URemoteControlExposeRegistry::LabelToIdCache' has a wrong offset!");

// Class RemoteControl.RemoteControlFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class URemoteControlFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool ExposeActor(class URemoteControlPreset* Preset, class AActor* Actor, const struct FRemoteControlOptionalExposeArgs& Args);
	static bool ExposeFunction(class URemoteControlPreset* Preset, class UObject* SourceObject, const class FString& Function, const struct FRemoteControlOptionalExposeArgs& Args);
	static bool ExposeProperty(class URemoteControlPreset* Preset, class UObject* SourceObject, const class FString& Property, const struct FRemoteControlOptionalExposeArgs& Args);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemoteControlFunctionLibrary">();
	}
	static class URemoteControlFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<URemoteControlFunctionLibrary>();
	}
};
static_assert(alignof(URemoteControlFunctionLibrary) == 0x000008, "Wrong alignment on URemoteControlFunctionLibrary");
static_assert(sizeof(URemoteControlFunctionLibrary) == 0x000028, "Wrong size on URemoteControlFunctionLibrary");

// Class RemoteControl.RemoteControlInterceptionTestObject
// 0x0030 (0x0058 - 0x0028)
class URemoteControlInterceptionTestObject final : public UObject
{
public:
	struct FRemoteControlInterceptionTestStruct   CustomStruct;                                      // 0x0028(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1464[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRemoteControlInterceptionFunctionParamStruct FunctionParamStruct;                               // 0x0030(0x0028)(Edit, NativeAccessSpecifierPublic)

public:
	struct FRemoteControlInterceptionFunctionParamStruct TestFunction(const struct FRemoteControlInterceptionFunctionParamStruct& InStruct, int32 InTestFactor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemoteControlInterceptionTestObject">();
	}
	static class URemoteControlInterceptionTestObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<URemoteControlInterceptionTestObject>();
	}
};
static_assert(alignof(URemoteControlInterceptionTestObject) == 0x000008, "Wrong alignment on URemoteControlInterceptionTestObject");
static_assert(sizeof(URemoteControlInterceptionTestObject) == 0x000058, "Wrong size on URemoteControlInterceptionTestObject");
static_assert(offsetof(URemoteControlInterceptionTestObject, CustomStruct) == 0x000028, "Member 'URemoteControlInterceptionTestObject::CustomStruct' has a wrong offset!");
static_assert(offsetof(URemoteControlInterceptionTestObject, FunctionParamStruct) == 0x000030, "Member 'URemoteControlInterceptionTestObject::FunctionParamStruct' has a wrong offset!");

// Class RemoteControl.RemoteControlPreset
// 0x04C0 (0x04E8 - 0x0028)
class URemoteControlPreset final : public UObject
{
public:
	struct FRemoteControlPresetLayout             Layout;                                            // 0x0028(0x00C0)(NativeAccessSpecifierPublic)
	TMap<class FString, class FString>            MetaData;                                          // 0x00E8(0x0050)(NativeAccessSpecifierPublic)
	TArray<class URemoteControlBinding*>          Bindings;                                          // 0x0138(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                  PresetId;                                          // 0x0148(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FRemoteControlTarget> RemoteControlTargets;                              // 0x0158(0x0050)(NativeAccessSpecifierPrivate)
	TMap<struct FGuid, struct FRCCachedFieldData> FieldCache;                                        // 0x01A8(0x0050)(Transient, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FGuid>               NameToGuidMap;                                     // 0x01F8(0x0050)(Transient, NativeAccessSpecifierPrivate)
	class URemoteControlExposeRegistry*           Registry;                                          // 0x0248(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1466[0x298];                                   // 0x0250(0x0298)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemoteControlPreset">();
	}
	static class URemoteControlPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<URemoteControlPreset>();
	}
};
static_assert(alignof(URemoteControlPreset) == 0x000008, "Wrong alignment on URemoteControlPreset");
static_assert(sizeof(URemoteControlPreset) == 0x0004E8, "Wrong size on URemoteControlPreset");
static_assert(offsetof(URemoteControlPreset, Layout) == 0x000028, "Member 'URemoteControlPreset::Layout' has a wrong offset!");
static_assert(offsetof(URemoteControlPreset, MetaData) == 0x0000E8, "Member 'URemoteControlPreset::MetaData' has a wrong offset!");
static_assert(offsetof(URemoteControlPreset, Bindings) == 0x000138, "Member 'URemoteControlPreset::Bindings' has a wrong offset!");
static_assert(offsetof(URemoteControlPreset, PresetId) == 0x000148, "Member 'URemoteControlPreset::PresetId' has a wrong offset!");
static_assert(offsetof(URemoteControlPreset, RemoteControlTargets) == 0x000158, "Member 'URemoteControlPreset::RemoteControlTargets' has a wrong offset!");
static_assert(offsetof(URemoteControlPreset, FieldCache) == 0x0001A8, "Member 'URemoteControlPreset::FieldCache' has a wrong offset!");
static_assert(offsetof(URemoteControlPreset, NameToGuidMap) == 0x0001F8, "Member 'URemoteControlPreset::NameToGuidMap' has a wrong offset!");
static_assert(offsetof(URemoteControlPreset, Registry) == 0x000248, "Member 'URemoteControlPreset::Registry' has a wrong offset!");

// Class RemoteControl.RemoteControlPresetActor
// 0x0010 (0x0238 - 0x0228)
class ARemoteControlPresetActor final : public AActor
{
public:
	class URemoteControlPreset*                   Preset;                                            // 0x0228(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1467[0x8];                                     // 0x0230(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemoteControlPresetActor">();
	}
	static class ARemoteControlPresetActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARemoteControlPresetActor>();
	}
};
static_assert(alignof(ARemoteControlPresetActor) == 0x000008, "Wrong alignment on ARemoteControlPresetActor");
static_assert(sizeof(ARemoteControlPresetActor) == 0x000238, "Wrong size on ARemoteControlPresetActor");
static_assert(offsetof(ARemoteControlPresetActor, Preset) == 0x000228, "Member 'ARemoteControlPresetActor::Preset' has a wrong offset!");

// Class RemoteControl.RemoteControlAPITestObject
// 0x0260 (0x0288 - 0x0028)
class URemoteControlAPITestObject final : public UObject
{
public:
	int32                                         CStyleIntArray[0x3];                               // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1468[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 IntArray;                                          // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRemoteControlTestStructOuter>  StructOuterArray;                                  // 0x0048(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<int32>                                   IntSet;                                            // 0x0058(0x0050)(Edit, NativeAccessSpecifierPublic)
	TMap<int32, int32>                            IntMap;                                            // 0x00A8(0x0050)(Edit, NativeAccessSpecifierPublic)
	TMap<int32, struct FRemoteControlTestStructOuter> StructOuterMap;                                    // 0x00F8(0x0050)(Edit, NativeAccessSpecifierPublic)
	TMap<class FString, struct FColor>            StringColorMap;                                    // 0x0148(0x0050)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        ArrayOfVectors;                                    // 0x0198(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int8                                          Int8Value;                                         // 0x01A8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1469[0x1];                                     // 0x01A9(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int16                                         Int16Value;                                        // 0x01AA(0x0002)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Int32Value;                                        // 0x01AC(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloatValue;                                        // 0x01B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_146A[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        DoubleValue;                                       // 0x01B8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRemoteControlTestStructOuter          RemoteControlTestStructOuter;                      // 0x01C0(0x0078)(Edit, NativeAccessSpecifierPublic)
	class FString                                 StringValue;                                       // 0x0238(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   NameValue;                                         // 0x0248(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   TextValue;                                         // 0x0250(0x0018)(Edit, NativeAccessSpecifierPublic)
	bool                                          bValue;                                            // 0x0268(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         ByteValue;                                         // 0x0269(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemoteControlEnum                            RemoteControlEnumByteValue;                        // 0x026A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERemoteControlEnumClass                       RemoteControlEnumValue;                            // 0x026B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                VectorValue;                                       // 0x026C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               RotatorValue;                                      // 0x0278(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_146B[0x4];                                     // 0x0284(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemoteControlAPITestObject">();
	}
	static class URemoteControlAPITestObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<URemoteControlAPITestObject>();
	}
};
static_assert(alignof(URemoteControlAPITestObject) == 0x000008, "Wrong alignment on URemoteControlAPITestObject");
static_assert(sizeof(URemoteControlAPITestObject) == 0x000288, "Wrong size on URemoteControlAPITestObject");
static_assert(offsetof(URemoteControlAPITestObject, CStyleIntArray) == 0x000028, "Member 'URemoteControlAPITestObject::CStyleIntArray' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, IntArray) == 0x000038, "Member 'URemoteControlAPITestObject::IntArray' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, StructOuterArray) == 0x000048, "Member 'URemoteControlAPITestObject::StructOuterArray' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, IntSet) == 0x000058, "Member 'URemoteControlAPITestObject::IntSet' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, IntMap) == 0x0000A8, "Member 'URemoteControlAPITestObject::IntMap' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, StructOuterMap) == 0x0000F8, "Member 'URemoteControlAPITestObject::StructOuterMap' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, StringColorMap) == 0x000148, "Member 'URemoteControlAPITestObject::StringColorMap' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, ArrayOfVectors) == 0x000198, "Member 'URemoteControlAPITestObject::ArrayOfVectors' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, Int8Value) == 0x0001A8, "Member 'URemoteControlAPITestObject::Int8Value' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, Int16Value) == 0x0001AA, "Member 'URemoteControlAPITestObject::Int16Value' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, Int32Value) == 0x0001AC, "Member 'URemoteControlAPITestObject::Int32Value' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, FloatValue) == 0x0001B0, "Member 'URemoteControlAPITestObject::FloatValue' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, DoubleValue) == 0x0001B8, "Member 'URemoteControlAPITestObject::DoubleValue' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, RemoteControlTestStructOuter) == 0x0001C0, "Member 'URemoteControlAPITestObject::RemoteControlTestStructOuter' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, StringValue) == 0x000238, "Member 'URemoteControlAPITestObject::StringValue' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, NameValue) == 0x000248, "Member 'URemoteControlAPITestObject::NameValue' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, TextValue) == 0x000250, "Member 'URemoteControlAPITestObject::TextValue' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, bValue) == 0x000268, "Member 'URemoteControlAPITestObject::bValue' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, ByteValue) == 0x000269, "Member 'URemoteControlAPITestObject::ByteValue' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, RemoteControlEnumByteValue) == 0x00026A, "Member 'URemoteControlAPITestObject::RemoteControlEnumByteValue' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, RemoteControlEnumValue) == 0x00026B, "Member 'URemoteControlAPITestObject::RemoteControlEnumValue' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, VectorValue) == 0x00026C, "Member 'URemoteControlAPITestObject::VectorValue' has a wrong offset!");
static_assert(offsetof(URemoteControlAPITestObject, RotatorValue) == 0x000278, "Member 'URemoteControlAPITestObject::RotatorValue' has a wrong offset!");

// Class RemoteControl.RemoteControlTestObject
// 0x0170 (0x0198 - 0x0028)
class URemoteControlTestObject final : public UObject
{
public:
	int32                                         CStyleIntArray[0x3];                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_146C[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 IntArray;                                          // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                 FloatArray;                                        // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<int32>                                   IntSet;                                            // 0x0058(0x0050)(NativeAccessSpecifierPublic)
	TMap<int32, int32>                            IntMap;                                            // 0x00A8(0x0050)(NativeAccessSpecifierPublic)
	TMap<int32, struct FRemoteControlTestInnerStruct> IntInnerStructMap;                                 // 0x00F8(0x0050)(NativeAccessSpecifierPublic)
	TMap<class FString, struct FColor>            StringColorMap;                                    // 0x0148(0x0050)(NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RemoteControlTestObject">();
	}
	static class URemoteControlTestObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<URemoteControlTestObject>();
	}
};
static_assert(alignof(URemoteControlTestObject) == 0x000008, "Wrong alignment on URemoteControlTestObject");
static_assert(sizeof(URemoteControlTestObject) == 0x000198, "Wrong size on URemoteControlTestObject");
static_assert(offsetof(URemoteControlTestObject, CStyleIntArray) == 0x000028, "Member 'URemoteControlTestObject::CStyleIntArray' has a wrong offset!");
static_assert(offsetof(URemoteControlTestObject, IntArray) == 0x000038, "Member 'URemoteControlTestObject::IntArray' has a wrong offset!");
static_assert(offsetof(URemoteControlTestObject, FloatArray) == 0x000048, "Member 'URemoteControlTestObject::FloatArray' has a wrong offset!");
static_assert(offsetof(URemoteControlTestObject, IntSet) == 0x000058, "Member 'URemoteControlTestObject::IntSet' has a wrong offset!");
static_assert(offsetof(URemoteControlTestObject, IntMap) == 0x0000A8, "Member 'URemoteControlTestObject::IntMap' has a wrong offset!");
static_assert(offsetof(URemoteControlTestObject, IntInnerStructMap) == 0x0000F8, "Member 'URemoteControlTestObject::IntInnerStructMap' has a wrong offset!");
static_assert(offsetof(URemoteControlTestObject, StringColorMap) == 0x000148, "Member 'URemoteControlTestObject::StringColorMap' has a wrong offset!");

}

