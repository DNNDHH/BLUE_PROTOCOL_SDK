#pragma once

 

// Package: RemoteControl

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum RemoteControl.ERCAccess
// NumValues: 0x0005
enum class ERCAccess : uint8
{
	NO_ACCESS                                = 0,
	READ_ACCESS                              = 1,
	WRITE_ACCESS                             = 2,
	WRITE_TRANSACTION_ACCESS                 = 3,
	ERCAccess_MAX                            = 4,
};

// Enum RemoteControl.EExposedFieldType
// NumValues: 0x0004
enum class EExposedFieldType : uint8
{
	Invalid                                  = 0,
	Property                                 = 1,
	Function                                 = 2,
	EExposedFieldType_MAX                    = 3,
};

// Enum RemoteControl.ERemoteControlEnum
// NumValues: 0x0004
enum class ERemoteControlEnum : uint8
{
	E_One                                    = 0,
	E_Two                                    = 1,
	E_Three                                  = 2,
	E_MAX                                    = 3,
};

// Enum RemoteControl.ERemoteControlEnumClass
// NumValues: 0x0004
enum class ERemoteControlEnumClass : uint8
{
	E_One                                    = 0,
	E_Two                                    = 1,
	E_Three                                  = 2,
	E_MAX                                    = 3,
};

// Enum RemoteControl.ERCBindingStatus
// NumValues: 0x0004
enum class ERCBindingStatus : uint8
{
	Unassigned                               = 0,
	Awaiting                                 = 1,
	Bound                                    = 2,
	ERCBindingStatus_MAX                     = 3,
};

// ScriptStruct RemoteControl.RemoteControlEntity
// 0x0098 (0x0098 - 0x0000)
struct FRemoteControlEntity
{
public:
	uint8                                         Pad_143E[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class FString>              UserMetadata;                                      // 0x0008(0x0050)(Protected, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class URemoteControlBinding>> Bindings;                                          // 0x0058(0x0010)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class URemoteControlPreset>    Owner;                                             // 0x0068(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   Label;                                             // 0x0070(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                  ID;                                                // 0x0078(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_143F[0x10];                                    // 0x0088(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRemoteControlEntity) == 0x000008, "Wrong alignment on FRemoteControlEntity");
static_assert(sizeof(FRemoteControlEntity) == 0x000098, "Wrong size on FRemoteControlEntity");
static_assert(offsetof(FRemoteControlEntity, UserMetadata) == 0x000008, "Member 'FRemoteControlEntity::UserMetadata' has a wrong offset!");
static_assert(offsetof(FRemoteControlEntity, Bindings) == 0x000058, "Member 'FRemoteControlEntity::Bindings' has a wrong offset!");
static_assert(offsetof(FRemoteControlEntity, Owner) == 0x000068, "Member 'FRemoteControlEntity::Owner' has a wrong offset!");
static_assert(offsetof(FRemoteControlEntity, Label) == 0x000070, "Member 'FRemoteControlEntity::Label' has a wrong offset!");
static_assert(offsetof(FRemoteControlEntity, ID) == 0x000078, "Member 'FRemoteControlEntity::ID' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlActor
// 0x0018 (0x00B0 - 0x0098)
struct FRemoteControlActor final : public FRemoteControlEntity
{
public:
	struct FSoftObjectPath                        Path;                                              // 0x0098(0x0018)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRemoteControlActor) == 0x000008, "Wrong alignment on FRemoteControlActor");
static_assert(sizeof(FRemoteControlActor) == 0x0000B0, "Wrong size on FRemoteControlActor");
static_assert(offsetof(FRemoteControlActor, Path) == 0x000098, "Member 'FRemoteControlActor::Path' has a wrong offset!");

// ScriptStruct RemoteControl.RCEntityWrapper
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FRCEntityWrapper final
{
public:
	uint8                                         Pad_1440[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCEntityWrapper) == 0x000008, "Wrong alignment on FRCEntityWrapper");
static_assert(sizeof(FRCEntityWrapper) == 0x000018, "Wrong size on FRCEntityWrapper");

// ScriptStruct RemoteControl.RemoteControlProtocolBinding
// 0x0040 (0x0040 - 0x0000)
struct alignas(0x08) FRemoteControlProtocolBinding final
{
public:
	struct FGuid                                  ID;                                                // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   ProtocolName;                                      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                  PropertyId;                                        // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   MappingPropertyName;                               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1441[0x10];                                    // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRemoteControlProtocolBinding) == 0x000008, "Wrong alignment on FRemoteControlProtocolBinding");
static_assert(sizeof(FRemoteControlProtocolBinding) == 0x000040, "Wrong size on FRemoteControlProtocolBinding");
static_assert(offsetof(FRemoteControlProtocolBinding, ID) == 0x000000, "Member 'FRemoteControlProtocolBinding::ID' has a wrong offset!");
static_assert(offsetof(FRemoteControlProtocolBinding, ProtocolName) == 0x000010, "Member 'FRemoteControlProtocolBinding::ProtocolName' has a wrong offset!");
static_assert(offsetof(FRemoteControlProtocolBinding, PropertyId) == 0x000018, "Member 'FRemoteControlProtocolBinding::PropertyId' has a wrong offset!");
static_assert(offsetof(FRemoteControlProtocolBinding, MappingPropertyName) == 0x000028, "Member 'FRemoteControlProtocolBinding::MappingPropertyName' has a wrong offset!");

// ScriptStruct RemoteControl.RCFieldPathSegment
// 0x0050 (0x0050 - 0x0000)
struct FRCFieldPathSegment final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ArrayIndex;                                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1442[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ValuePropertyName;                                 // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MapKey;                                            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1443[0x20];                                    // 0x0030(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCFieldPathSegment) == 0x000008, "Wrong alignment on FRCFieldPathSegment");
static_assert(sizeof(FRCFieldPathSegment) == 0x000050, "Wrong size on FRCFieldPathSegment");
static_assert(offsetof(FRCFieldPathSegment, Name) == 0x000000, "Member 'FRCFieldPathSegment::Name' has a wrong offset!");
static_assert(offsetof(FRCFieldPathSegment, ArrayIndex) == 0x000008, "Member 'FRCFieldPathSegment::ArrayIndex' has a wrong offset!");
static_assert(offsetof(FRCFieldPathSegment, ValuePropertyName) == 0x000010, "Member 'FRCFieldPathSegment::ValuePropertyName' has a wrong offset!");
static_assert(offsetof(FRCFieldPathSegment, MapKey) == 0x000020, "Member 'FRCFieldPathSegment::MapKey' has a wrong offset!");

// ScriptStruct RemoteControl.RCFieldPathInfo
// 0x0018 (0x0018 - 0x0000)
struct FRCFieldPathInfo final
{
public:
	TArray<struct FRCFieldPathSegment>            Segments;                                          // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint32                                        PathHash;                                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1444[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCFieldPathInfo) == 0x000008, "Wrong alignment on FRCFieldPathInfo");
static_assert(sizeof(FRCFieldPathInfo) == 0x000018, "Wrong size on FRCFieldPathInfo");
static_assert(offsetof(FRCFieldPathInfo, Segments) == 0x000000, "Member 'FRCFieldPathInfo::Segments' has a wrong offset!");
static_assert(offsetof(FRCFieldPathInfo, PathHash) == 0x000010, "Member 'FRCFieldPathInfo::PathHash' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlField
// 0x0098 (0x0130 - 0x0098)
struct FRemoteControlField : public FRemoteControlEntity
{
public:
	EExposedFieldType                             FieldType;                                         // 0x0098(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1445[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   FieldName;                                         // 0x009C(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1446[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRCFieldPathInfo                       FieldPathInfo;                                     // 0x00A8(0x0018)(NativeAccessSpecifierPublic)
	TSet<struct FRemoteControlProtocolBinding>    ProtocolBindings;                                  // 0x00C0(0x0050)(NativeAccessSpecifierPublic)
	struct FSoftClassPath                         OwnerClass;                                        // 0x0110(0x0018)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bIsEditorOnly;                                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1447[0x7];                                     // 0x0129(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRemoteControlField) == 0x000008, "Wrong alignment on FRemoteControlField");
static_assert(sizeof(FRemoteControlField) == 0x000130, "Wrong size on FRemoteControlField");
static_assert(offsetof(FRemoteControlField, FieldType) == 0x000098, "Member 'FRemoteControlField::FieldType' has a wrong offset!");
static_assert(offsetof(FRemoteControlField, FieldName) == 0x00009C, "Member 'FRemoteControlField::FieldName' has a wrong offset!");
static_assert(offsetof(FRemoteControlField, FieldPathInfo) == 0x0000A8, "Member 'FRemoteControlField::FieldPathInfo' has a wrong offset!");
static_assert(offsetof(FRemoteControlField, ProtocolBindings) == 0x0000C0, "Member 'FRemoteControlField::ProtocolBindings' has a wrong offset!");
static_assert(offsetof(FRemoteControlField, OwnerClass) == 0x000110, "Member 'FRemoteControlField::OwnerClass' has a wrong offset!");
static_assert(offsetof(FRemoteControlField, bIsEditorOnly) == 0x000128, "Member 'FRemoteControlField::bIsEditorOnly' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlFunction
// 0x0038 (0x0168 - 0x0130)
struct FRemoteControlFunction final : public FRemoteControlField
{
public:
	uint8                                         Pad_1448[0x10];                                    // 0x0130(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bIsCallableInPackaged;                             // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1449[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        FunctionPath;                                      // 0x0148(0x0018)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_144A[0x8];                                     // 0x0160(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRemoteControlFunction) == 0x000008, "Wrong alignment on FRemoteControlFunction");
static_assert(sizeof(FRemoteControlFunction) == 0x000168, "Wrong size on FRemoteControlFunction");
static_assert(offsetof(FRemoteControlFunction, bIsCallableInPackaged) == 0x000140, "Member 'FRemoteControlFunction::bIsCallableInPackaged' has a wrong offset!");
static_assert(offsetof(FRemoteControlFunction, FunctionPath) == 0x000148, "Member 'FRemoteControlFunction::FunctionPath' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlProperty
// 0x0008 (0x0138 - 0x0130)
struct FRemoteControlProperty final : public FRemoteControlField
{
public:
	bool                                          bIsEditableInPackaged;                             // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_144B[0x7];                                     // 0x0131(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRemoteControlProperty) == 0x000008, "Wrong alignment on FRemoteControlProperty");
static_assert(sizeof(FRemoteControlProperty) == 0x000138, "Wrong size on FRemoteControlProperty");
static_assert(offsetof(FRemoteControlProperty, bIsEditableInPackaged) == 0x000130, "Member 'FRemoteControlProperty::bIsEditableInPackaged' has a wrong offset!");

// ScriptStruct RemoteControl.RCFieldMetadata
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FRCFieldMetadata
{
public:
	uint8                                         Pad_144C[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCFieldMetadata) == 0x000008, "Wrong alignment on FRCFieldMetadata");
static_assert(sizeof(FRCFieldMetadata) == 0x000008, "Wrong size on FRCFieldMetadata");

// ScriptStruct RemoteControl.RCMetadata_FVector
// 0x0028 (0x0030 - 0x0008)
struct FRCMetadata_FVector final : public FRCFieldMetadata
{
public:
	struct FVector                                DefaultValue;                                      // 0x0008(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                MinimumValue;                                      // 0x0014(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                MaximumValue;                                      // 0x0020(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144D[0x4];                                     // 0x002C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCMetadata_FVector) == 0x000008, "Wrong alignment on FRCMetadata_FVector");
static_assert(sizeof(FRCMetadata_FVector) == 0x000030, "Wrong size on FRCMetadata_FVector");
static_assert(offsetof(FRCMetadata_FVector, DefaultValue) == 0x000008, "Member 'FRCMetadata_FVector::DefaultValue' has a wrong offset!");
static_assert(offsetof(FRCMetadata_FVector, MinimumValue) == 0x000014, "Member 'FRCMetadata_FVector::MinimumValue' has a wrong offset!");
static_assert(offsetof(FRCMetadata_FVector, MaximumValue) == 0x000020, "Member 'FRCMetadata_FVector::MaximumValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_bool
// 0x0008 (0x0010 - 0x0008)
struct FRCMetadata_bool final : public FRCFieldMetadata
{
public:
	bool                                          DefaultValue;                                      // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144E[0x7];                                     // 0x0009(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCMetadata_bool) == 0x000008, "Wrong alignment on FRCMetadata_bool");
static_assert(sizeof(FRCMetadata_bool) == 0x000010, "Wrong size on FRCMetadata_bool");
static_assert(offsetof(FRCMetadata_bool, DefaultValue) == 0x000008, "Member 'FRCMetadata_bool::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_UScriptStruct
// 0x0028 (0x0030 - 0x0008)
struct FRCMetadata_UScriptStruct final : public FRCFieldMetadata
{
public:
	TSoftObjectPtr<class UScriptStruct>           DefaultValue;                                      // 0x0008(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCMetadata_UScriptStruct) == 0x000008, "Wrong alignment on FRCMetadata_UScriptStruct");
static_assert(sizeof(FRCMetadata_UScriptStruct) == 0x000030, "Wrong size on FRCMetadata_UScriptStruct");
static_assert(offsetof(FRCMetadata_UScriptStruct, DefaultValue) == 0x000008, "Member 'FRCMetadata_UScriptStruct::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_UClass
// 0x0028 (0x0030 - 0x0008)
struct FRCMetadata_UClass final : public FRCFieldMetadata
{
public:
	TSoftClassPtr<class UClass>                   DefaultValue;                                      // 0x0008(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCMetadata_UClass) == 0x000008, "Wrong alignment on FRCMetadata_UClass");
static_assert(sizeof(FRCMetadata_UClass) == 0x000030, "Wrong size on FRCMetadata_UClass");
static_assert(offsetof(FRCMetadata_UClass, DefaultValue) == 0x000008, "Member 'FRCMetadata_UClass::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_UObject
// 0x0028 (0x0030 - 0x0008)
struct FRCMetadata_UObject final : public FRCFieldMetadata
{
public:
	TSoftObjectPtr<class UObject>                 DefaultValue;                                      // 0x0008(0x0028)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCMetadata_UObject) == 0x000008, "Wrong alignment on FRCMetadata_UObject");
static_assert(sizeof(FRCMetadata_UObject) == 0x000030, "Wrong size on FRCMetadata_UObject");
static_assert(offsetof(FRCMetadata_UObject, DefaultValue) == 0x000008, "Member 'FRCMetadata_UObject::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_FName
// 0x0008 (0x0010 - 0x0008)
struct FRCMetadata_FName final : public FRCFieldMetadata
{
public:
	class FName                                   DefaultValue;                                      // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCMetadata_FName) == 0x000008, "Wrong alignment on FRCMetadata_FName");
static_assert(sizeof(FRCMetadata_FName) == 0x000010, "Wrong size on FRCMetadata_FName");
static_assert(offsetof(FRCMetadata_FName, DefaultValue) == 0x000008, "Member 'FRCMetadata_FName::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_FString
// 0x0010 (0x0018 - 0x0008)
struct FRCMetadata_FString final : public FRCFieldMetadata
{
public:
	class FString                                 DefaultValue;                                      // 0x0008(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCMetadata_FString) == 0x000008, "Wrong alignment on FRCMetadata_FString");
static_assert(sizeof(FRCMetadata_FString) == 0x000018, "Wrong size on FRCMetadata_FString");
static_assert(offsetof(FRCMetadata_FString, DefaultValue) == 0x000008, "Member 'FRCMetadata_FString::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_double
// 0x0018 (0x0020 - 0x0008)
struct FRCMetadata_double final : public FRCFieldMetadata
{
public:
	double                                        Min;                                               // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        Max;                                               // 0x0010(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        DefaultValue;                                      // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCMetadata_double) == 0x000008, "Wrong alignment on FRCMetadata_double");
static_assert(sizeof(FRCMetadata_double) == 0x000020, "Wrong size on FRCMetadata_double");
static_assert(offsetof(FRCMetadata_double, Min) == 0x000008, "Member 'FRCMetadata_double::Min' has a wrong offset!");
static_assert(offsetof(FRCMetadata_double, Max) == 0x000010, "Member 'FRCMetadata_double::Max' has a wrong offset!");
static_assert(offsetof(FRCMetadata_double, DefaultValue) == 0x000018, "Member 'FRCMetadata_double::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_float
// 0x0010 (0x0018 - 0x0008)
struct FRCMetadata_float final : public FRCFieldMetadata
{
public:
	float                                         Min;                                               // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Max;                                               // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         DefaultValue;                                      // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_144F[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCMetadata_float) == 0x000008, "Wrong alignment on FRCMetadata_float");
static_assert(sizeof(FRCMetadata_float) == 0x000018, "Wrong size on FRCMetadata_float");
static_assert(offsetof(FRCMetadata_float, Min) == 0x000008, "Member 'FRCMetadata_float::Min' has a wrong offset!");
static_assert(offsetof(FRCMetadata_float, Max) == 0x00000C, "Member 'FRCMetadata_float::Max' has a wrong offset!");
static_assert(offsetof(FRCMetadata_float, DefaultValue) == 0x000010, "Member 'FRCMetadata_float::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_int64
// 0x0018 (0x0020 - 0x0008)
struct FRCMetadata_int64 final : public FRCFieldMetadata
{
public:
	int64                                         Min;                                               // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         Max;                                               // 0x0010(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         DefaultValue;                                      // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCMetadata_int64) == 0x000008, "Wrong alignment on FRCMetadata_int64");
static_assert(sizeof(FRCMetadata_int64) == 0x000020, "Wrong size on FRCMetadata_int64");
static_assert(offsetof(FRCMetadata_int64, Min) == 0x000008, "Member 'FRCMetadata_int64::Min' has a wrong offset!");
static_assert(offsetof(FRCMetadata_int64, Max) == 0x000010, "Member 'FRCMetadata_int64::Max' has a wrong offset!");
static_assert(offsetof(FRCMetadata_int64, DefaultValue) == 0x000018, "Member 'FRCMetadata_int64::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_int32
// 0x0010 (0x0018 - 0x0008)
struct FRCMetadata_int32 final : public FRCFieldMetadata
{
public:
	int32                                         Min;                                               // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Max;                                               // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DefaultValue;                                      // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1450[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCMetadata_int32) == 0x000008, "Wrong alignment on FRCMetadata_int32");
static_assert(sizeof(FRCMetadata_int32) == 0x000018, "Wrong size on FRCMetadata_int32");
static_assert(offsetof(FRCMetadata_int32, Min) == 0x000008, "Member 'FRCMetadata_int32::Min' has a wrong offset!");
static_assert(offsetof(FRCMetadata_int32, Max) == 0x00000C, "Member 'FRCMetadata_int32::Max' has a wrong offset!");
static_assert(offsetof(FRCMetadata_int32, DefaultValue) == 0x000010, "Member 'FRCMetadata_int32::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_int16
// 0x0008 (0x0010 - 0x0008)
struct FRCMetadata_int16 final : public FRCFieldMetadata
{
public:
	int16                                         Min;                                               // 0x0008(0x0002)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                         Max;                                               // 0x000A(0x0002)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                         DefaultValue;                                      // 0x000C(0x0002)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1451[0x2];                                     // 0x000E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCMetadata_int16) == 0x000008, "Wrong alignment on FRCMetadata_int16");
static_assert(sizeof(FRCMetadata_int16) == 0x000010, "Wrong size on FRCMetadata_int16");
static_assert(offsetof(FRCMetadata_int16, Min) == 0x000008, "Member 'FRCMetadata_int16::Min' has a wrong offset!");
static_assert(offsetof(FRCMetadata_int16, Max) == 0x00000A, "Member 'FRCMetadata_int16::Max' has a wrong offset!");
static_assert(offsetof(FRCMetadata_int16, DefaultValue) == 0x00000C, "Member 'FRCMetadata_int16::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_int8
// 0x0008 (0x0010 - 0x0008)
struct FRCMetadata_int8 final : public FRCFieldMetadata
{
public:
	int8                                          Min;                                               // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                          Max;                                               // 0x0009(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                          DefaultValue;                                      // 0x000A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1452[0x5];                                     // 0x000B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCMetadata_int8) == 0x000008, "Wrong alignment on FRCMetadata_int8");
static_assert(sizeof(FRCMetadata_int8) == 0x000010, "Wrong size on FRCMetadata_int8");
static_assert(offsetof(FRCMetadata_int8, Min) == 0x000008, "Member 'FRCMetadata_int8::Min' has a wrong offset!");
static_assert(offsetof(FRCMetadata_int8, Max) == 0x000009, "Member 'FRCMetadata_int8::Max' has a wrong offset!");
static_assert(offsetof(FRCMetadata_int8, DefaultValue) == 0x00000A, "Member 'FRCMetadata_int8::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_uint64
// 0x0018 (0x0020 - 0x0008)
struct FRCMetadata_uint64 final : public FRCFieldMetadata
{
public:
	uint64                                        Min;                                               // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                        Max;                                               // 0x0010(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                        DefaultValue;                                      // 0x0018(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCMetadata_uint64) == 0x000008, "Wrong alignment on FRCMetadata_uint64");
static_assert(sizeof(FRCMetadata_uint64) == 0x000020, "Wrong size on FRCMetadata_uint64");
static_assert(offsetof(FRCMetadata_uint64, Min) == 0x000008, "Member 'FRCMetadata_uint64::Min' has a wrong offset!");
static_assert(offsetof(FRCMetadata_uint64, Max) == 0x000010, "Member 'FRCMetadata_uint64::Max' has a wrong offset!");
static_assert(offsetof(FRCMetadata_uint64, DefaultValue) == 0x000018, "Member 'FRCMetadata_uint64::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_uint32
// 0x0010 (0x0018 - 0x0008)
struct FRCMetadata_uint32 final : public FRCFieldMetadata
{
public:
	uint32                                        Min;                                               // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        Max;                                               // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        DefaultValue;                                      // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1453[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCMetadata_uint32) == 0x000008, "Wrong alignment on FRCMetadata_uint32");
static_assert(sizeof(FRCMetadata_uint32) == 0x000018, "Wrong size on FRCMetadata_uint32");
static_assert(offsetof(FRCMetadata_uint32, Min) == 0x000008, "Member 'FRCMetadata_uint32::Min' has a wrong offset!");
static_assert(offsetof(FRCMetadata_uint32, Max) == 0x00000C, "Member 'FRCMetadata_uint32::Max' has a wrong offset!");
static_assert(offsetof(FRCMetadata_uint32, DefaultValue) == 0x000010, "Member 'FRCMetadata_uint32::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_uint16
// 0x0008 (0x0010 - 0x0008)
struct FRCMetadata_uint16 final : public FRCFieldMetadata
{
public:
	uint16                                        Min;                                               // 0x0008(0x0002)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        Max;                                               // 0x000A(0x0002)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                        DefaultValue;                                      // 0x000C(0x0002)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1454[0x2];                                     // 0x000E(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCMetadata_uint16) == 0x000008, "Wrong alignment on FRCMetadata_uint16");
static_assert(sizeof(FRCMetadata_uint16) == 0x000010, "Wrong size on FRCMetadata_uint16");
static_assert(offsetof(FRCMetadata_uint16, Min) == 0x000008, "Member 'FRCMetadata_uint16::Min' has a wrong offset!");
static_assert(offsetof(FRCMetadata_uint16, Max) == 0x00000A, "Member 'FRCMetadata_uint16::Max' has a wrong offset!");
static_assert(offsetof(FRCMetadata_uint16, DefaultValue) == 0x00000C, "Member 'FRCMetadata_uint16::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RCMetadata_byte
// 0x0008 (0x0010 - 0x0008)
struct FRCMetadata_byte final : public FRCFieldMetadata
{
public:
	uint8                                         Min;                                               // 0x0008(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Max;                                               // 0x0009(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         DefaultValue;                                      // 0x000A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1455[0x5];                                     // 0x000B(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRCMetadata_byte) == 0x000008, "Wrong alignment on FRCMetadata_byte");
static_assert(sizeof(FRCMetadata_byte) == 0x000010, "Wrong size on FRCMetadata_byte");
static_assert(offsetof(FRCMetadata_byte, Min) == 0x000008, "Member 'FRCMetadata_byte::Min' has a wrong offset!");
static_assert(offsetof(FRCMetadata_byte, Max) == 0x000009, "Member 'FRCMetadata_byte::Max' has a wrong offset!");
static_assert(offsetof(FRCMetadata_byte, DefaultValue) == 0x00000A, "Member 'FRCMetadata_byte::DefaultValue' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlOptionalExposeArgs
// 0x0020 (0x0020 - 0x0000)
struct FRemoteControlOptionalExposeArgs final
{
public:
	class FString                                 DisplayName;                                       // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GroupName;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRemoteControlOptionalExposeArgs) == 0x000008, "Wrong alignment on FRemoteControlOptionalExposeArgs");
static_assert(sizeof(FRemoteControlOptionalExposeArgs) == 0x000020, "Wrong size on FRemoteControlOptionalExposeArgs");
static_assert(offsetof(FRemoteControlOptionalExposeArgs, DisplayName) == 0x000000, "Member 'FRemoteControlOptionalExposeArgs::DisplayName' has a wrong offset!");
static_assert(offsetof(FRemoteControlOptionalExposeArgs, GroupName) == 0x000010, "Member 'FRemoteControlOptionalExposeArgs::GroupName' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlInterceptionFunctionParamStruct
// 0x0028 (0x0028 - 0x0000)
struct FRemoteControlInterceptionFunctionParamStruct final
{
public:
	int32                                         Int32Value;                                        // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1456[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 IntArray;                                          // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 IntString;                                         // 0x0018(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRemoteControlInterceptionFunctionParamStruct) == 0x000008, "Wrong alignment on FRemoteControlInterceptionFunctionParamStruct");
static_assert(sizeof(FRemoteControlInterceptionFunctionParamStruct) == 0x000028, "Wrong size on FRemoteControlInterceptionFunctionParamStruct");
static_assert(offsetof(FRemoteControlInterceptionFunctionParamStruct, Int32Value) == 0x000000, "Member 'FRemoteControlInterceptionFunctionParamStruct::Int32Value' has a wrong offset!");
static_assert(offsetof(FRemoteControlInterceptionFunctionParamStruct, IntArray) == 0x000008, "Member 'FRemoteControlInterceptionFunctionParamStruct::IntArray' has a wrong offset!");
static_assert(offsetof(FRemoteControlInterceptionFunctionParamStruct, IntString) == 0x000018, "Member 'FRemoteControlInterceptionFunctionParamStruct::IntString' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlInterceptionTestStruct
// 0x0004 (0x0004 - 0x0000)
struct FRemoteControlInterceptionTestStruct final
{
public:
	int32                                         Int32Value;                                        // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRemoteControlInterceptionTestStruct) == 0x000004, "Wrong alignment on FRemoteControlInterceptionTestStruct");
static_assert(sizeof(FRemoteControlInterceptionTestStruct) == 0x000004, "Wrong size on FRemoteControlInterceptionTestStruct");
static_assert(offsetof(FRemoteControlInterceptionTestStruct, Int32Value) == 0x000000, "Member 'FRemoteControlInterceptionTestStruct::Int32Value' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlTarget
// 0x00C8 (0x00C8 - 0x0000)
struct FRemoteControlTarget final
{
public:
	class UClass*                                 Class;                                             // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<struct FRemoteControlFunction>           ExposedFunctions;                                  // 0x0008(0x0050)(NativeAccessSpecifierPublic)
	TSet<struct FRemoteControlProperty>           ExposedProperties;                                 // 0x0058(0x0050)(NativeAccessSpecifierPublic)
	class FName                                   Alias;                                             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>                Bindings;                                          // 0x00B0(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class URemoteControlPreset>    Owner;                                             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FRemoteControlTarget) == 0x000008, "Wrong alignment on FRemoteControlTarget");
static_assert(sizeof(FRemoteControlTarget) == 0x0000C8, "Wrong size on FRemoteControlTarget");
static_assert(offsetof(FRemoteControlTarget, Class) == 0x000000, "Member 'FRemoteControlTarget::Class' has a wrong offset!");
static_assert(offsetof(FRemoteControlTarget, ExposedFunctions) == 0x000008, "Member 'FRemoteControlTarget::ExposedFunctions' has a wrong offset!");
static_assert(offsetof(FRemoteControlTarget, ExposedProperties) == 0x000058, "Member 'FRemoteControlTarget::ExposedProperties' has a wrong offset!");
static_assert(offsetof(FRemoteControlTarget, Alias) == 0x0000A8, "Member 'FRemoteControlTarget::Alias' has a wrong offset!");
static_assert(offsetof(FRemoteControlTarget, Bindings) == 0x0000B0, "Member 'FRemoteControlTarget::Bindings' has a wrong offset!");
static_assert(offsetof(FRemoteControlTarget, Owner) == 0x0000C0, "Member 'FRemoteControlTarget::Owner' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlPresetGroup
// 0x0028 (0x0028 - 0x0000)
struct FRemoteControlPresetGroup final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  ID;                                                // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                          Fields;                                            // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FRemoteControlPresetGroup) == 0x000008, "Wrong alignment on FRemoteControlPresetGroup");
static_assert(sizeof(FRemoteControlPresetGroup) == 0x000028, "Wrong size on FRemoteControlPresetGroup");
static_assert(offsetof(FRemoteControlPresetGroup, Name) == 0x000000, "Member 'FRemoteControlPresetGroup::Name' has a wrong offset!");
static_assert(offsetof(FRemoteControlPresetGroup, ID) == 0x000008, "Member 'FRemoteControlPresetGroup::ID' has a wrong offset!");
static_assert(offsetof(FRemoteControlPresetGroup, Fields) == 0x000018, "Member 'FRemoteControlPresetGroup::Fields' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlPresetLayout
// 0x00C0 (0x00C0 - 0x0000)
struct FRemoteControlPresetLayout final
{
public:
	TArray<struct FRemoteControlPresetGroup>      Groups;                                            // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class URemoteControlPreset>    Owner;                                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1457[0xA8];                                    // 0x0018(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRemoteControlPresetLayout) == 0x000008, "Wrong alignment on FRemoteControlPresetLayout");
static_assert(sizeof(FRemoteControlPresetLayout) == 0x0000C0, "Wrong size on FRemoteControlPresetLayout");
static_assert(offsetof(FRemoteControlPresetLayout, Groups) == 0x000000, "Member 'FRemoteControlPresetLayout::Groups' has a wrong offset!");
static_assert(offsetof(FRemoteControlPresetLayout, Owner) == 0x000010, "Member 'FRemoteControlPresetLayout::Owner' has a wrong offset!");

// ScriptStruct RemoteControl.RCCachedFieldData
// 0x0018 (0x0018 - 0x0000)
struct FRCCachedFieldData final
{
public:
	struct FGuid                                  LayoutGroupId;                                     // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   OwnerObjectAlias;                                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRCCachedFieldData) == 0x000004, "Wrong alignment on FRCCachedFieldData");
static_assert(sizeof(FRCCachedFieldData) == 0x000018, "Wrong size on FRCCachedFieldData");
static_assert(offsetof(FRCCachedFieldData, LayoutGroupId) == 0x000000, "Member 'FRCCachedFieldData::LayoutGroupId' has a wrong offset!");
static_assert(offsetof(FRCCachedFieldData, OwnerObjectAlias) == 0x000010, "Member 'FRCCachedFieldData::OwnerObjectAlias' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlTestStructInnerSimle
// 0x0004 (0x0004 - 0x0000)
struct FRemoteControlTestStructInnerSimle final
{
public:
	int32                                         Int32Value;                                        // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRemoteControlTestStructInnerSimle) == 0x000004, "Wrong alignment on FRemoteControlTestStructInnerSimle");
static_assert(sizeof(FRemoteControlTestStructInnerSimle) == 0x000004, "Wrong size on FRemoteControlTestStructInnerSimle");
static_assert(offsetof(FRemoteControlTestStructInnerSimle, Int32Value) == 0x000000, "Member 'FRemoteControlTestStructInnerSimle::Int32Value' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlTestStructInner
// 0x001C (0x001C - 0x0000)
struct FRemoteControlTestStructInner final
{
public:
	int8                                          Int8Value;                                         // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1458[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRemoteControlTestStructInnerSimle     InnerSimle;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         Int32Value;                                        // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1459[0x10];                                    // 0x000C(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRemoteControlTestStructInner) == 0x000004, "Wrong alignment on FRemoteControlTestStructInner");
static_assert(sizeof(FRemoteControlTestStructInner) == 0x00001C, "Wrong size on FRemoteControlTestStructInner");
static_assert(offsetof(FRemoteControlTestStructInner, Int8Value) == 0x000000, "Member 'FRemoteControlTestStructInner::Int8Value' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestStructInner, InnerSimle) == 0x000004, "Member 'FRemoteControlTestStructInner::InnerSimle' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestStructInner, Int32Value) == 0x000008, "Member 'FRemoteControlTestStructInner::Int32Value' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlTestStructOuter
// 0x0078 (0x0078 - 0x0000)
struct FRemoteControlTestStructOuter final
{
public:
	int8                                          Int8Value;                                         // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_145A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<struct FRemoteControlTestStructInner>    StructInnerSet;                                    // 0x0008(0x0050)(Edit, NativeAccessSpecifierPublic)
	int32                                         Int32Value;                                        // 0x0058(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRemoteControlTestStructInner          RemoteControlTestStructInner;                      // 0x005C(0x001C)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRemoteControlTestStructOuter) == 0x000008, "Wrong alignment on FRemoteControlTestStructOuter");
static_assert(sizeof(FRemoteControlTestStructOuter) == 0x000078, "Wrong size on FRemoteControlTestStructOuter");
static_assert(offsetof(FRemoteControlTestStructOuter, Int8Value) == 0x000000, "Member 'FRemoteControlTestStructOuter::Int8Value' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestStructOuter, StructInnerSet) == 0x000008, "Member 'FRemoteControlTestStructOuter::StructInnerSet' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestStructOuter, Int32Value) == 0x000058, "Member 'FRemoteControlTestStructOuter::Int32Value' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestStructOuter, RemoteControlTestStructInner) == 0x00005C, "Member 'FRemoteControlTestStructOuter::RemoteControlTestStructInner' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlProtocolMapping
// 0x0078 (0x0078 - 0x0000)
struct FRemoteControlProtocolMapping final
{
public:
	struct FGuid                                  ID;                                                // 0x0000(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<uint8>                                 InterpolationRangePropertyData;                    // 0x0010(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint8>                                 InterpolationMappingPropertyData;                  // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint8>                                 InterpolationRangePropertyDataCache;               // 0x0030(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<uint8>                                 InterpolationMappingPropertyDataCache;             // 0x0040(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	int32                                         InterpolationMappingPropertyElementNum;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_145B[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TFieldPath<struct FProperty>                  BoundPropertyPath;                                 // 0x0058(0x0020)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FRemoteControlProtocolMapping) == 0x000008, "Wrong alignment on FRemoteControlProtocolMapping");
static_assert(sizeof(FRemoteControlProtocolMapping) == 0x000078, "Wrong size on FRemoteControlProtocolMapping");
static_assert(offsetof(FRemoteControlProtocolMapping, ID) == 0x000000, "Member 'FRemoteControlProtocolMapping::ID' has a wrong offset!");
static_assert(offsetof(FRemoteControlProtocolMapping, InterpolationRangePropertyData) == 0x000010, "Member 'FRemoteControlProtocolMapping::InterpolationRangePropertyData' has a wrong offset!");
static_assert(offsetof(FRemoteControlProtocolMapping, InterpolationMappingPropertyData) == 0x000020, "Member 'FRemoteControlProtocolMapping::InterpolationMappingPropertyData' has a wrong offset!");
static_assert(offsetof(FRemoteControlProtocolMapping, InterpolationRangePropertyDataCache) == 0x000030, "Member 'FRemoteControlProtocolMapping::InterpolationRangePropertyDataCache' has a wrong offset!");
static_assert(offsetof(FRemoteControlProtocolMapping, InterpolationMappingPropertyDataCache) == 0x000040, "Member 'FRemoteControlProtocolMapping::InterpolationMappingPropertyDataCache' has a wrong offset!");
static_assert(offsetof(FRemoteControlProtocolMapping, InterpolationMappingPropertyElementNum) == 0x000050, "Member 'FRemoteControlProtocolMapping::InterpolationMappingPropertyElementNum' has a wrong offset!");
static_assert(offsetof(FRemoteControlProtocolMapping, BoundPropertyPath) == 0x000058, "Member 'FRemoteControlProtocolMapping::BoundPropertyPath' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlProtocolEntity
// 0x0080 (0x0080 - 0x0000)
struct FRemoteControlProtocolEntity final
{
public:
	uint8                                         Pad_145C[0x8];                                     // 0x0000(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TWeakObjectPtr<class URemoteControlPreset>    Owner;                                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                  PropertyId;                                        // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_145D[0x8];                                     // 0x0020(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<struct FRemoteControlProtocolMapping>    Mappings;                                          // 0x0028(0x0050)(Protected, NativeAccessSpecifierProtected)
	ERCBindingStatus                              BindingStatus;                                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_145E[0x7];                                     // 0x0079(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FRemoteControlProtocolEntity) == 0x000008, "Wrong alignment on FRemoteControlProtocolEntity");
static_assert(sizeof(FRemoteControlProtocolEntity) == 0x000080, "Wrong size on FRemoteControlProtocolEntity");
static_assert(offsetof(FRemoteControlProtocolEntity, Owner) == 0x000008, "Member 'FRemoteControlProtocolEntity::Owner' has a wrong offset!");
static_assert(offsetof(FRemoteControlProtocolEntity, PropertyId) == 0x000010, "Member 'FRemoteControlProtocolEntity::PropertyId' has a wrong offset!");
static_assert(offsetof(FRemoteControlProtocolEntity, Mappings) == 0x000028, "Member 'FRemoteControlProtocolEntity::Mappings' has a wrong offset!");
static_assert(offsetof(FRemoteControlProtocolEntity, BindingStatus) == 0x000078, "Member 'FRemoteControlProtocolEntity::BindingStatus' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlTestInnerStruct
// 0x0028 (0x0028 - 0x0000)
struct FRemoteControlTestInnerStruct final
{
public:
	struct FColor                                 Color;                                             // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_145F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 FloatArray;                                        // 0x0008(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                        ArrayOfVectors;                                    // 0x0018(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRemoteControlTestInnerStruct) == 0x000008, "Wrong alignment on FRemoteControlTestInnerStruct");
static_assert(sizeof(FRemoteControlTestInnerStruct) == 0x000028, "Wrong size on FRemoteControlTestInnerStruct");
static_assert(offsetof(FRemoteControlTestInnerStruct, Color) == 0x000000, "Member 'FRemoteControlTestInnerStruct::Color' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestInnerStruct, FloatArray) == 0x000008, "Member 'FRemoteControlTestInnerStruct::FloatArray' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestInnerStruct, ArrayOfVectors) == 0x000018, "Member 'FRemoteControlTestInnerStruct::ArrayOfVectors' has a wrong offset!");

// ScriptStruct RemoteControl.RemoteControlTestStruct
// 0x002C (0x002C - 0x0000)
struct FRemoteControlTestStruct final
{
public:
	bool                                          bSomeBool;                                         // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1460[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint32                                        SomeUInt32;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SomeFloat;                                         // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                SomeVector;                                        // 0x000C(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               SomeRotator;                                       // 0x0018(0x000C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         SomeClampedInt;                                    // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SomeClampedFloat;                                  // 0x0028(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FRemoteControlTestStruct) == 0x000004, "Wrong alignment on FRemoteControlTestStruct");
static_assert(sizeof(FRemoteControlTestStruct) == 0x00002C, "Wrong size on FRemoteControlTestStruct");
static_assert(offsetof(FRemoteControlTestStruct, bSomeBool) == 0x000000, "Member 'FRemoteControlTestStruct::bSomeBool' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestStruct, SomeUInt32) == 0x000004, "Member 'FRemoteControlTestStruct::SomeUInt32' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestStruct, SomeFloat) == 0x000008, "Member 'FRemoteControlTestStruct::SomeFloat' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestStruct, SomeVector) == 0x00000C, "Member 'FRemoteControlTestStruct::SomeVector' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestStruct, SomeRotator) == 0x000018, "Member 'FRemoteControlTestStruct::SomeRotator' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestStruct, SomeClampedInt) == 0x000024, "Member 'FRemoteControlTestStruct::SomeClampedInt' has a wrong offset!");
static_assert(offsetof(FRemoteControlTestStruct, SomeClampedFloat) == 0x000028, "Member 'FRemoteControlTestStruct::SomeClampedFloat' has a wrong offset!");

}

