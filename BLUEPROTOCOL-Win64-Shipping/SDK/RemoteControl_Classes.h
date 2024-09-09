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
	 * Class RemoteControl.RemoteControlBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class URemoteControlBinding : public UObject
	{
	public:
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RemoteControl.RemoteControlLevelIndependantBinding
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class URemoteControlLevelIndependantBinding : public URemoteControlBinding
	{
	public:
		unsigned char                                              BoundObject[0x28];                                       // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RemoteControl.RemoteControlLevelDependantBinding
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class URemoteControlLevelDependantBinding : public URemoteControlBinding
	{
	public:
		unsigned char                                              BoundObjectMap[0x50];                                    // 0x0038(0x0050) UNKNOWN PROPERTY: MapProperty
		unsigned char                                              LevelWithLastSuccessfulResolve[0x28];                    // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RemoteControl.RemoteControlExposeRegistry
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class URemoteControlExposeRegistry : public UObject
	{
	public:
		unsigned char                                              ExposedEntities[0x50];                                   // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<class FName, struct FGuid>                            LabelToIdCache;                                          // 0x0078(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RemoteControl.RemoteControlFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URemoteControlFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool ExposeProperty(class URemoteControlPreset* Preset, class UObject* SourceObject, const class FString& Property, const struct FRemoteControlOptionalExposeArgs& Args);
		bool ExposeFunction(class URemoteControlPreset* Preset, class UObject* SourceObject, const class FString& Function, const struct FRemoteControlOptionalExposeArgs& Args);
		bool ExposeActor(class URemoteControlPreset* Preset, class AActor* Actor, const struct FRemoteControlOptionalExposeArgs& Args);
		static UClass* StaticClass();
	};

	/**
	 * Class RemoteControl.RemoteControlInterceptionTestObject
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class URemoteControlInterceptionTestObject : public UObject
	{
	public:
		struct FRemoteControlInterceptionTestStruct                CustomStruct;                                            // 0x0028(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5YJ5[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRemoteControlInterceptionFunctionParamStruct       FunctionParamStruct;                                     // 0x0030(0x0028) Edit, NativeAccessSpecifierPublic

	public:
		struct FRemoteControlInterceptionFunctionParamStruct TestFunction(const struct FRemoteControlInterceptionFunctionParamStruct& InStruct, int32_t InTestFactor);
		static UClass* StaticClass();
	};

	/**
	 * Class RemoteControl.RemoteControlPreset
	 * Size -> 0x04C0 (FullSize[0x04E8] - InheritedSize[0x0028])
	 */
	class URemoteControlPreset : public UObject
	{
	public:
		struct FRemoteControlPresetLayout                          Layout;                                                  // 0x0028(0x00C0) NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         MetaData;                                                // 0x00E8(0x0050) NativeAccessSpecifierPublic
		TArray<class URemoteControlBinding*>                       Bindings;                                                // 0x0138(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FGuid                                               PresetId;                                                // 0x0148(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TMap<class FName, struct FRemoteControlTarget>             RemoteControlTargets;                                    // 0x0158(0x0050) NativeAccessSpecifierPrivate
		TMap<struct FGuid, struct FRCCachedFieldData>              FieldCache;                                              // 0x01A8(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<class FName, struct FGuid>                            NameToGuidMap;                                           // 0x01F8(0x0050) Transient, NativeAccessSpecifierPrivate
		class URemoteControlExposeRegistry*                        Registry;                                                // 0x0248(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7FFS[0x298];                                 // 0x0250(0x0298) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RemoteControl.RemoteControlPresetActor
	 * Size -> 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
	 */
	class ARemoteControlPresetActor : public AActor
	{
	public:
		class URemoteControlPreset*                                Preset;                                                  // 0x0228(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9AB[0x8];                                   // 0x0230(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RemoteControl.RemoteControlAPITestObject
	 * Size -> 0x0260 (FullSize[0x0288] - InheritedSize[0x0028])
	 */
	class URemoteControlAPITestObject : public UObject
	{
	public:
		int32_t                                                    CStyleIntArray[0x3];                                     // 0x0028(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVFD[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            IntArray;                                                // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRemoteControlTestStructOuter>               StructOuterArray;                                        // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              IntSet[0x50];                                            // 0x0058(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<int32_t, int32_t>                                     IntMap;                                                  // 0x00A8(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<int32_t, struct FRemoteControlTestStructOuter>        StructOuterMap;                                          // 0x00F8(0x0050) Edit, NativeAccessSpecifierPublic
		TMap<class FString, struct FColor>                         StringColorMap;                                          // 0x0148(0x0050) Edit, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     ArrayOfVectors;                                          // 0x0198(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int8_t                                                     Int8Value;                                               // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ZCN[0x1];                                   // 0x01A9(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int16_t                                                    Int16Value;                                              // 0x01AA(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Int32Value;                                              // 0x01AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x01B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZJ3[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DoubleValue;                                             // 0x01B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRemoteControlTestStructOuter                       RemoteControlTestStructOuter;                            // 0x01C0(0x0078) Edit, NativeAccessSpecifierPublic
		class FString                                              StringValue;                                             // 0x0238(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NameValue;                                               // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                TextValue;                                               // 0x0250(0x0018) Edit, NativeAccessSpecifierPublic
		bool                                                       bValue;                                                  // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ByteValue;                                               // 0x0269(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERemoteControlEnum                                         RemoteControlEnumByteValue;                              // 0x026A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERemoteControlEnumClass                                    RemoteControlEnumValue;                                  // 0x026B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             VectorValue;                                             // 0x026C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotatorValue;                                            // 0x0278(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7WXZ[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class RemoteControl.RemoteControlTestObject
	 * Size -> 0x0170 (FullSize[0x0198] - InheritedSize[0x0028])
	 */
	class URemoteControlTestObject : public UObject
	{
	public:
		int32_t                                                    CStyleIntArray[0x3];                                     // 0x0028(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N0WL[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            IntArray;                                                // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              FloatArray;                                              // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              IntSet[0x50];                                            // 0x0058(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<int32_t, int32_t>                                     IntMap;                                                  // 0x00A8(0x0050) NativeAccessSpecifierPublic
		TMap<int32_t, struct FRemoteControlTestInnerStruct>        IntInnerStructMap;                                       // 0x00F8(0x0050) NativeAccessSpecifierPublic
		TMap<class FString, struct FColor>                         StringColorMap;                                          // 0x0148(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
