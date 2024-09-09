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
	 * Enum WebRemoteControl.ERemoteControlEvent
	 */
	enum class ERemoteControlEvent : uint8_t
	{
		PreObjectPropertyChanged = 0,
		ObjectPropertyChanged    = 1,
		EventCount               = 2,
		MAX                      = 3
	};

	/**
	 * Enum WebRemoteControl.ERemoteControlHttpVerbs
	 */
	enum class ERemoteControlHttpVerbs : uint8_t
	{
		None    = 0,
		Get     = 1,
		Post    = 2,
		Put     = 3,
		Patch   = 4,
		Delete  = 5,
		Options = 6,
		MAX     = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct WebRemoteControl.RCAssetFilter
	 * Size -> 0x0088
	 */
	struct FRCAssetFilter
	{
	public:
		TArray<class FName>                                        PackageNames;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        PackagePaths;                                            // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        ClassNames;                                              // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              RecursiveClassesExclusionSet[0x50];                      // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       RecursiveClasses;                                        // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RecursivePaths;                                          // 0x0081(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R63G[0x6];                                   // 0x0082(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPresetFieldRenamed
	 * Size -> 0x0010
	 */
	struct FRCPresetFieldRenamed
	{
	public:
		class FName                                                OldFieldLabel;                                           // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NewFieldLabel;                                           // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCAssetDescription
	 * Size -> 0x0068
	 */
	struct FRCAssetDescription
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Class;                                                   // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Path;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class FString>                           MetaData;                                                // 0x0018(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCShortPresetDescription
	 * Size -> 0x0020
	 */
	struct FRCShortPresetDescription
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Path;                                                    // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPropertyDescription
	 * Size -> 0x00A0
	 */
	struct FRCPropertyDescription
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Type;                                                    // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContainerType;                                           // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeyType;                                                 // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class FString>                           MetaData;                                                // 0x0050(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCObjectDescription
	 * Size -> 0x0030
	 */
	struct FRCObjectDescription
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Class;                                                   // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Path;                                                    // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCExposedPropertyDescription
	 * Size -> 0x0118
	 */
	struct FRCExposedPropertyDescription
	{
	public:
		class FName                                                DisplayName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRCPropertyDescription                              UnderlyingProperty;                                      // 0x0018(0x00A0) NativeAccessSpecifierPublic
		TMap<class FName, class FString>                           MetaData;                                                // 0x00B8(0x0050) NativeAccessSpecifierPublic
		TArray<struct FRCObjectDescription>                        OwnerObjects;                                            // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCFunctionDescription
	 * Size -> 0x0030
	 */
	struct FRCFunctionDescription
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRCPropertyDescription>                      Arguments;                                               // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCExposedFunctionDescription
	 * Size -> 0x0058
	 */
	struct FRCExposedFunctionDescription
	{
	public:
		class FName                                                DisplayName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRCFunctionDescription                              UnderlyingFunction;                                      // 0x0018(0x0030) NativeAccessSpecifierPublic
		TArray<struct FRCObjectDescription>                        OwnerObjects;                                            // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCExposedActorDescription
	 * Size -> 0x0048
	 */
	struct FRCExposedActorDescription
	{
	public:
		class FName                                                DisplayName;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRCObjectDescription                                UnderlyingActor;                                         // 0x0018(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPresetLayoutGroupDescription
	 * Size -> 0x0038
	 */
	struct FRCPresetLayoutGroupDescription
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRCExposedPropertyDescription>               ExposedProperties;                                       // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRCExposedFunctionDescription>               ExposedFunctions;                                        // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRCExposedActorDescription>                  ExposedActors;                                           // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPresetDescription
	 * Size -> 0x0040
	 */
	struct FRCPresetDescription
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Path;                                                    // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRCPresetLayoutGroupDescription>             Groups;                                                  // 0x0030(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPresetModifiedEntitiesDescription
	 * Size -> 0x0030
	 */
	struct FRCPresetModifiedEntitiesDescription
	{
	public:
		TArray<struct FRCExposedPropertyDescription>               ModifiedRCProperties;                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRCExposedFunctionDescription>               ModifiedRCFunctions;                                     // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRCExposedActorDescription>                  ModifiedRCActors;                                        // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCRequest
	 * Size -> 0x0068
	 */
	struct FRCRequest
	{
	public:
		unsigned char                                              UnknownData_IBC2[0x68];                                  // 0x0000(0x0068) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebRemoteControl.RCWebSocketPresetRegisterBody
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	struct FRCWebSocketPresetRegisterBody : public FRCRequest
	{
	public:
		class FString                                              PresetName;                                              // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreRemoteChanges;                                     // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NEXB[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebRemoteControl.RCWebSocketRequest
	 * Size -> 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
	 */
	struct FRCWebSocketRequest : public FRCRequest
	{
	public:
		class FString                                              MessageName;                                             // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VWCJ[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebRemoteControl.GetObjectThumbnailRequest
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	struct FGetObjectThumbnailRequest : public FRCRequest
	{
	public:
		class FString                                              ObjectPath;                                              // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.SetEntityLabelRequest
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	struct FSetEntityLabelRequest : public FRCRequest
	{
	public:
		class FString                                              NewLabel;                                                // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.SetEntityMetadataRequest
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	struct FSetEntityMetadataRequest : public FRCRequest
	{
	public:
		class FString                                              Value;                                                   // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.SetPresetMetadataRequest
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	struct FSetPresetMetadataRequest : public FRCRequest
	{
	public:
		class FString                                              Value;                                                   // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.SearchObjectRequest
	 * Size -> 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
	 */
	struct FSearchObjectRequest : public FRCRequest
	{
	public:
		class FString                                              Query;                                                   // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Class;                                                   // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Outer;                                                   // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Limit;                                                   // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8D5E[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebRemoteControl.SearchActorRequest
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	struct FSearchActorRequest : public FRCRequest
	{
	public:
		class FString                                              Query;                                                   // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Class;                                                   // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Limit;                                                   // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DH8M[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebRemoteControl.SearchAssetRequest
	 * Size -> 0x00A0 (FullSize[0x0108] - InheritedSize[0x0068])
	 */
	struct FSearchAssetRequest : public FRCRequest
	{
	public:
		class FString                                              Query;                                                   // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRCAssetFilter                                      Filter;                                                  // 0x0078(0x0088) NativeAccessSpecifierPublic
		int32_t                                                    Limit;                                                   // 0x0100(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9CO[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebRemoteControl.DescribeObjectRequest
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	struct FDescribeObjectRequest : public FRCRequest
	{
	public:
		class FString                                              ObjectPath;                                              // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPresetCallRequest
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	struct FRCPresetCallRequest : public FRCRequest
	{
	public:
		bool                                                       GenerateTransaction;                                     // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZ7V[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPresetSetPropertyRequest
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	struct FRCPresetSetPropertyRequest : public FRCRequest
	{
	public:
		bool                                                       GenerateTransaction;                                     // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ResetToDefault;                                          // 0x0069(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DN7[0x6];                                   // 0x006A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebRemoteControl.RCObjectRequest
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	struct FRCObjectRequest : public FRCRequest
	{
	public:
		class FString                                              ObjectPath;                                              // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PropertyName;                                            // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ResetToDefault;                                          // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GenerateTransaction;                                     // 0x0089(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERCAccess                                                  Access;                                                  // 0x008A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_G2ST[0x5];                                   // 0x008B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebRemoteControl.RCCallRequest
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	struct FRCCallRequest : public FRCRequest
	{
	public:
		class FString                                              ObjectPath;                                              // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0078(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GenerateTransaction;                                     // 0x0088(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MY1M[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebRemoteControl.RemoteControlObjectEventHookRequest
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	struct FRemoteControlObjectEventHookRequest : public FRCRequest
	{
	public:
		ERemoteControlEvent                                        EventType;                                               // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_11KA[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ObjectPath;                                              // 0x0070(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PropertyName;                                            // 0x0080(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCRequestWrapper
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	struct FRCRequestWrapper : public FRCRequest
	{
	public:
		class FString                                              URL;                                                     // 0x0068(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Verb;                                                    // 0x0078(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequestID;                                               // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YVR[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct WebRemoteControl.RCBatchRequest
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	struct FRCBatchRequest : public FRCRequest
	{
	public:
		TArray<struct FRCRequestWrapper>                           Requests;                                                // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPresetEntitiesModifiedEvent
	 * Size -> 0x0058
	 */
	struct FRCPresetEntitiesModifiedEvent
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PresetName;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PresetId;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRCPresetModifiedEntitiesDescription                ModifiedEntities;                                        // 0x0028(0x0030) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPresetFieldsAddedEvent
	 * Size -> 0x0068
	 */
	struct FRCPresetFieldsAddedEvent
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PresetName;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PresetId;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRCPresetDescription                                Description;                                             // 0x0028(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPresetFieldsRemovedEvent
	 * Size -> 0x0048
	 */
	struct FRCPresetFieldsRemovedEvent
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PresetName;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PresetId;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        RemovedFields;                                           // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      RemovedFieldIds;                                         // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPresetLayoutModified
	 * Size -> 0x0050
	 */
	struct FRCPresetLayoutModified
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRCPresetDescription                                Preset;                                                  // 0x0010(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPresetMetadataModified
	 * Size -> 0x0078
	 */
	struct FRCPresetMetadataModified
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PresetName;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PresetId;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class FString>                         MetaData;                                                // 0x0028(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RCPresetFieldsRenamedEvent
	 * Size -> 0x0038
	 */
	struct FRCPresetFieldsRenamedEvent
	{
	public:
		class FString                                              Type;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PresetName;                                              // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PresetId;                                                // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRCPresetFieldRenamed>                       RenamedFields;                                           // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.SetEntityLabelResponse
	 * Size -> 0x0010
	 */
	struct FSetEntityLabelResponse
	{
	public:
		class FString                                              AssignedLabel;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.GetMetadataResponse
	 * Size -> 0x0050
	 */
	struct FGetMetadataResponse
	{
	public:
		TMap<class FString, class FString>                         MetaData;                                                // 0x0000(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.GetMetadataFieldResponse
	 * Size -> 0x0010
	 */
	struct FGetMetadataFieldResponse
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.SearchActorResponse
	 * Size -> 0x0010
	 */
	struct FSearchActorResponse
	{
	public:
		TArray<struct FRCObjectDescription>                        Actors;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.SearchAssetResponse
	 * Size -> 0x0010
	 */
	struct FSearchAssetResponse
	{
	public:
		TArray<struct FRCAssetDescription>                         Assets;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.DescribeObjectResponse
	 * Size -> 0x0038
	 */
	struct FDescribeObjectResponse
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Class;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRCPropertyDescription>                      Properties;                                              // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRCFunctionDescription>                      Functions;                                               // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.GetPresetResponse
	 * Size -> 0x0040
	 */
	struct FGetPresetResponse
	{
	public:
		struct FRCPresetDescription                                Preset;                                                  // 0x0000(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.ListPresetsResponse
	 * Size -> 0x0010
	 */
	struct FListPresetsResponse
	{
	public:
		TArray<struct FRCShortPresetDescription>                   Presets;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.RemoteControlRouteDescription
	 * Size -> 0x0028
	 */
	struct FRemoteControlRouteDescription
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERemoteControlHttpVerbs                                    Verb;                                                    // 0x0010(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XA9D[0x1];                                   // 0x0011(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_VK56[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct WebRemoteControl.APIInfoResponse
	 * Size -> 0x0038
	 */
	struct FAPIInfoResponse
	{
	public:
		unsigned char                                              UnknownData_CRLQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRemoteControlRouteDescription>              HttpRoutes;                                              // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FRCShortPresetDescription                           ActivePreset;                                            // 0x0018(0x0020) NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
