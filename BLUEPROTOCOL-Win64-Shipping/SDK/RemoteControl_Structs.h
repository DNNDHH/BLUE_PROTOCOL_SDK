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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum RemoteControl.ERCAccess
	 */
	enum class ERCAccess : uint8_t
	{
		NO_ACCESS                = 0,
		READ_ACCESS              = 1,
		WRITE_ACCESS             = 2,
		WRITE_TRANSACTION_ACCESS = 3,
		MAX                      = 4
	};

	/**
	 * Enum RemoteControl.EExposedFieldType
	 */
	enum class EExposedFieldType : uint8_t
	{
		Invalid  = 0,
		Property = 1,
		Function = 2,
		MAX      = 3
	};

	/**
	 * Enum RemoteControl.ERemoteControlEnum
	 */
	enum class ERemoteControlEnum : uint8_t
	{
		E_One   = 0,
		E_Two   = 1,
		E_Three = 2,
		E_MAX   = 3
	};

	/**
	 * Enum RemoteControl.ERemoteControlEnumClass
	 */
	enum class ERemoteControlEnumClass : uint8_t
	{
		E_One   = 0,
		E_Two   = 1,
		E_Three = 2,
		E_MAX   = 3
	};

	/**
	 * Enum RemoteControl.ERCBindingStatus
	 */
	enum class ERCBindingStatus : uint8_t
	{
		Unassigned = 0,
		Awaiting   = 1,
		Bound      = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct RemoteControl.RemoteControlInterceptionTestStruct
	 * Size -> 0x0004
	 */
	struct FRemoteControlInterceptionTestStruct
	{
	public:
		int32_t                                                    Int32Value;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlInterceptionFunctionParamStruct
	 * Size -> 0x0028
	 */
	struct FRemoteControlInterceptionFunctionParamStruct
	{
	public:
		int32_t                                                    Int32Value;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MQG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            IntArray;                                                // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              IntString;                                               // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlPresetGroup
	 * Size -> 0x0028
	 */
	struct FRemoteControlPresetGroup
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ID;                                                      // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGuid>                                       Fields;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlPresetLayout
	 * Size -> 0x00C0
	 */
	struct FRemoteControlPresetLayout
	{
	public:
		TArray<struct FRemoteControlPresetGroup>                   Groups;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class URemoteControlPreset>                 Owner;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J5R3[0xA8];                                  // 0x0018(0x00A8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlTarget
	 * Size -> 0x00C8
	 */
	struct FRemoteControlTarget
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ExposedFunctions[0x50];                                  // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              ExposedProperties[0x50];                                 // 0x0058(0x0050) UNKNOWN PROPERTY: SetProperty
		class FName                                                Alias;                                                   // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoftObjectPath>                             Bindings;                                                // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class URemoteControlPreset>                 Owner;                                                   // 0x00C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct RemoteControl.RCCachedFieldData
	 * Size -> 0x0018
	 */
	struct FRCCachedFieldData
	{
	public:
		struct FGuid                                               LayoutGroupId;                                           // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OwnerObjectAlias;                                        // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlTestStructInnerSimle
	 * Size -> 0x0004
	 */
	struct FRemoteControlTestStructInnerSimle
	{
	public:
		int32_t                                                    Int32Value;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlTestStructInner
	 * Size -> 0x001C
	 */
	struct FRemoteControlTestStructInner
	{
	public:
		int8_t                                                     Int8Value;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MZ8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRemoteControlTestStructInnerSimle                  InnerSimle;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Int32Value;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIHT[0x10];                                  // 0x000C(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlTestStructOuter
	 * Size -> 0x0078
	 */
	struct FRemoteControlTestStructOuter
	{
	public:
		int8_t                                                     Int8Value;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZQJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              StructInnerSet[0x50];                                    // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
		int32_t                                                    Int32Value;                                              // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRemoteControlTestStructInner                       RemoteControlTestStructInner;                            // 0x005C(0x001C) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlTestInnerStruct
	 * Size -> 0x0028
	 */
	struct FRemoteControlTestInnerStruct
	{
	public:
		struct FColor                                              Color;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FW8A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FloatArray;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     ArrayOfVectors;                                          // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlEntity
	 * Size -> 0x0098
	 */
	struct FRemoteControlEntity
	{
	public:
		unsigned char                                              UnknownData_041K[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, class FString>                           UserMetadata;                                            // 0x0008(0x0050) Protected, NativeAccessSpecifierProtected
		TArray<TWeakObjectPtr<class URemoteControlBinding>>        Bindings;                                                // 0x0058(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TWeakObjectPtr<class URemoteControlPreset>                 Owner;                                                   // 0x0068(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                Label;                                                   // 0x0070(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               ID;                                                      // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RF2P[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlActor
	 * Size -> 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
	 */
	struct FRemoteControlActor : public FRemoteControlEntity
	{
	public:
		struct FSoftObjectPath                                     Path;                                                    // 0x0098(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RCEntityWrapper
	 * Size -> 0x0018
	 */
	struct FRCEntityWrapper
	{
	public:
		unsigned char                                              UnknownData_OQXM[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RCFieldPathSegment
	 * Size -> 0x0050
	 */
	struct FRCFieldPathSegment
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ArrayIndex;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B8E9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ValuePropertyName;                                       // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapKey;                                                  // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKG4[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RCFieldPathInfo
	 * Size -> 0x0018
	 */
	struct FRCFieldPathInfo
	{
	public:
		TArray<struct FRCFieldPathSegment>                         Segments;                                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		uint32_t                                                   PathHash;                                                // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EU18[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlField
	 * Size -> 0x0098 (FullSize[0x0130] - InheritedSize[0x0098])
	 */
	struct FRemoteControlField : public FRemoteControlEntity
	{
	public:
		EExposedFieldType                                          FieldType;                                               // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYM7[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                FieldName;                                               // 0x009C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2DTL[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRCFieldPathInfo                                    FieldPathInfo;                                           // 0x00A8(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              ProtocolBindings[0x50];                                  // 0x00C0(0x0050) UNKNOWN PROPERTY: SetProperty
		struct FSoftClassPath                                      OwnerClass;                                              // 0x0110(0x0018) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsEditorOnly;                                           // 0x0128(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XJJA[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlProtocolBinding
	 * Size -> 0x0040
	 */
	struct FRemoteControlProtocolBinding
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                ProtocolName;                                            // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               PropertyId;                                              // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MappingPropertyName;                                     // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_59N8[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlFunction
	 * Size -> 0x0038 (FullSize[0x0168] - InheritedSize[0x0130])
	 */
	struct FRemoteControlFunction : public FRemoteControlField
	{
	public:
		unsigned char                                              UnknownData_RC4B[0x10];                                  // 0x0130(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsCallableInPackaged;                                   // 0x0140(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_22KV[0x7];                                   // 0x0141(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     FunctionPath;                                            // 0x0148(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CPCN[0x8];                                   // 0x0160(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlProperty
	 * Size -> 0x0008 (FullSize[0x0138] - InheritedSize[0x0130])
	 */
	struct FRemoteControlProperty : public FRemoteControlField
	{
	public:
		bool                                                       bIsEditableInPackaged;                                   // 0x0130(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S6QF[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RCFieldMetadata
	 * Size -> 0x0008
	 */
	struct FRCFieldMetadata
	{
	public:
		unsigned char                                              UnknownData_BOPX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_FVector
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_FVector : public FRCFieldMetadata
	{
	public:
		struct FVector                                             DefaultValue;                                            // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MinimumValue;                                            // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaximumValue;                                            // 0x0020(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U58G[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_bool
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_bool : public FRCFieldMetadata
	{
	public:
		bool                                                       DefaultValue;                                            // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E4C6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_UScriptStruct
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_UScriptStruct : public FRCFieldMetadata
	{
	public:
		unsigned char                                              DefaultValue[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_UClass
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_UClass : public FRCFieldMetadata
	{
	public:
		unsigned char                                              DefaultValue[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_UObject
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_UObject : public FRCFieldMetadata
	{
	public:
		unsigned char                                              DefaultValue[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_FName
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_FName : public FRCFieldMetadata
	{
	public:
		class FName                                                DefaultValue;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_FString
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_FString : public FRCFieldMetadata
	{
	public:
		class FString                                              DefaultValue;                                            // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_double
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_double : public FRCFieldMetadata
	{
	public:
		double                                                     Min;                                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Max;                                                     // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     DefaultValue;                                            // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_float
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_float : public FRCFieldMetadata
	{
	public:
		float                                                      Min;                                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultValue;                                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YP4H[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_int64
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_int64 : public FRCFieldMetadata
	{
	public:
		int64_t                                                    Min;                                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Max;                                                     // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    DefaultValue;                                            // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_int32
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_int32 : public FRCFieldMetadata
	{
	public:
		int32_t                                                    Min;                                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Max;                                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultValue;                                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J1ES[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_int16
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_int16 : public FRCFieldMetadata
	{
	public:
		int16_t                                                    Min;                                                     // 0x0008(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    Max;                                                     // 0x000A(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    DefaultValue;                                            // 0x000C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MUD[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_int8
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_int8 : public FRCFieldMetadata
	{
	public:
		int8_t                                                     Min;                                                     // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     Max;                                                     // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     DefaultValue;                                            // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVZF[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_uint64
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_uint64 : public FRCFieldMetadata
	{
	public:
		uint64_t                                                   Min;                                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   Max;                                                     // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   DefaultValue;                                            // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_uint32
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_uint32 : public FRCFieldMetadata
	{
	public:
		uint32_t                                                   Min;                                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Max;                                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DefaultValue;                                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5D7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_uint16
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_uint16 : public FRCFieldMetadata
	{
	public:
		uint16_t                                                   Min;                                                     // 0x0008(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Max;                                                     // 0x000A(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DefaultValue;                                            // 0x000C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YN6G[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RCMetadata_byte
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FRCMetadata_byte : public FRCFieldMetadata
	{
	public:
		unsigned char                                              Min;                                                     // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Max;                                                     // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DefaultValue;                                            // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3SH[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlOptionalExposeArgs
	 * Size -> 0x0020
	 */
	struct FRemoteControlOptionalExposeArgs
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlProtocolEntity
	 * Size -> 0x0080
	 */
	struct FRemoteControlProtocolEntity
	{
	public:
		unsigned char                                              UnknownData_JW3U[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class URemoteControlPreset>                 Owner;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               PropertyId;                                              // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_309L[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Mappings[0x50];                                          // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty
		ERCBindingStatus                                           BindingStatus;                                           // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0BF0[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlProtocolMapping
	 * Size -> 0x0078
	 */
	struct FRemoteControlProtocolMapping
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      InterpolationRangePropertyData;                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      InterpolationMappingPropertyData;                        // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      InterpolationRangePropertyDataCache;                     // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<unsigned char>                                      InterpolationMappingPropertyDataCache;                   // 0x0040(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		int32_t                                                    InterpolationMappingPropertyElementNum;                  // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QLVA[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BoundPropertyPath[0x20];                                 // 0x0058(0x0020) UNKNOWN PROPERTY: FieldPathProperty
	};

	/**
	 * ScriptStruct RemoteControl.RemoteControlTestStruct
	 * Size -> 0x002C
	 */
	struct FRemoteControlTestStruct
	{
	public:
		bool                                                       bSomeBool;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OM0B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   SomeUInt32;                                              // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SomeFloat;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SomeVector;                                              // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            SomeRotator;                                             // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    SomeClampedInt;                                          // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SomeClampedFloat;                                        // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
