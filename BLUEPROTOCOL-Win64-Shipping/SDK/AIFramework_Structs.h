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
	 * Enum AIFramework.EAIFwBTParamType
	 */
	enum class EAIFwBTParamType : uint8_t
	{
		Bool    = 0,
		Int     = 1,
		Float   = 2,
		String  = 3,
		Unknown = 4,
		MAX     = 5
	};

	/**
	 * Enum AIFramework.EAIFwFocusPriority
	 */
	enum class EAIFwFocusPriority : uint8_t
	{
		Default  = 0,
		Gameplay = 1,
		MAX      = 2
	};

	/**
	 * Enum AIFramework.EAIFwBTStatus
	 */
	enum class EAIFwBTStatus : uint8_t
	{
		Invalid = 0,
		Success = 1,
		Failure = 2,
		Running = 3,
		MAX     = 4
	};

	/**
	 * Enum AIFramework.EAIFwPTRunMode
	 */
	enum class EAIFwPTRunMode : uint8_t
	{
		Best   = 0,
		Random = 1,
		All    = 2,
		MAX    = 3
	};

	/**
	 * Enum AIFramework.EPTCriterionSlot
	 */
	enum class EPTCriterionSlot : uint8_t
	{
		Slot1 = 0,
		Slot2 = 1,
		Slot3 = 2,
		Slot4 = 3,
		MAX   = 4
	};

	/**
	 * Enum AIFramework.EPTEvalScoreType
	 */
	enum class EPTEvalScoreType : uint8_t
	{
		Min     = 0,
		Max     = 1,
		Average = 2
	};

	/**
	 * Enum AIFramework.EPTEvalOperation
	 */
	enum class EPTEvalOperation : uint8_t
	{
		Constant      = 0,
		Linear        = 1,
		InverseLinear = 2,
		MAX           = 3
	};

	/**
	 * Enum AIFramework.EAIFwPTEvalPathfindingMode
	 */
	enum class EAIFwPTEvalPathfindingMode : uint8_t
	{
		Exist  = 0,
		Cost   = 1,
		Length = 2,
		MAX    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AIFramework.AIFwBTNodeProperty
	 * Size -> 0x0010
	 */
	struct FAIFwBTNodeProperty
	{
	public:
		unsigned char                                              UnknownData_0W3S[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIFramework.AIFwBTNodePropertyString
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FAIFwBTNodePropertyString : public FAIFwBTNodeProperty
	{
	public:
		class FString                                              DefaultValue;                                            // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIFramework.AIFwBTNodePropertyFloat
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FAIFwBTNodePropertyFloat : public FAIFwBTNodeProperty
	{
	public:
		float                                                      DefaultValue;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5M2A[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIFramework.AIFwBTNodePropertyBool
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FAIFwBTNodePropertyBool : public FAIFwBTNodeProperty
	{
	public:
		bool                                                       DefaultValue;                                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZL4Q[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIFramework.AIFwBTNodePropertyInt
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FAIFwBTNodePropertyInt : public FAIFwBTNodeProperty
	{
	public:
		int32_t                                                    DefaultValue;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RDOE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIFramework.AIFwIMapLayoutCell
	 * Size -> 0x0028
	 */
	struct FAIFwIMapLayoutCell
	{
	public:
		uint64_t                                                   NavNode;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    X;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Height;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Neighbors[0x4];                                          // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WCL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIFramework.AIFwBTArgument
	 * Size -> 0x0040
	 */
	struct FAIFwBTArgument
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIFwBTParamType                                           Type;                                                    // 0x0010(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61YG[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseValue : 1;                                           // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBBKey : 1;                                           // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolValue : 1;                                           // 0x0014(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NM7[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IntValue;                                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StringValue;                                             // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BlackboardKey;                                           // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIFramework.AIFwParameterizedBTRequest
	 * Size -> 0x0018
	 */
	struct FAIFwParameterizedBTRequest
	{
	public:
		class UAIFwBehaviorTree*                                   Template;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIFwBTArgument>                             Arguments;                                               // 0x0008(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIFramework.AIFwFactionRelationSettings
	 * Size -> 0x000C
	 */
	struct FAIFwFactionRelationSettings
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIFramework.AIFwFactionSettings
	 * Size -> 0x0018
	 */
	struct FAIFwFactionSettings
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIFwFactionRelationSettings>                Relations;                                               // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIFramework.AIFwSmartObjectUserSettings
	 * Size -> 0x0008
	 */
	struct FAIFwSmartObjectUserSettings
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIFramework.AIFwSmartObjectUserSelector
	 * Size -> 0x0004
	 */
	struct FAIFwSmartObjectUserSelector
	{
	public:
		bool                                                       bSupportsUser0 : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser1 : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser2 : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser3 : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser4 : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser5 : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser6 : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser7 : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser8 : 1;                                      // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser9 : 1;                                      // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser10 : 1;                                     // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser11 : 1;                                     // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser12 : 1;                                     // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser13 : 1;                                     // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser14 : 1;                                     // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSupportsUser15 : 1;                                     // 0x0001(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHPC[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIFramework.AIFwSmartObjectEvent
	 * Size -> 0x0030
	 */
	struct FAIFwSmartObjectEvent
	{
	public:
		struct FAIFwSmartObjectUserSelector                        SupportedUsers;                                          // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTSJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Usage;                                                   // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFactionNeutral : 1;                                     // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFactionFriendly : 1;                                    // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFactionHostile : 1;                                     // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O322[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIFwSmartObjectCondition*                           Condition;                                               // 0x0020(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIFwSmartObjectAction*                              Action;                                                  // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIFramework.AIFwBlackboard
	 * Size -> 0x0018
	 */
	struct FAIFwBlackboard
	{
	public:
		unsigned char                                              UnknownData_3SJF[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIFramework.AIFwBTNodePropertyEnumBase
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FAIFwBTNodePropertyEnumBase : public FAIFwBTNodeProperty
	{	};

	/**
	 * ScriptStruct AIFramework.AIFwClothoidCurve
	 * Size -> 0x000C
	 */
	struct FAIFwClothoidCurve
	{
	public:
		float                                                      InitialDirection;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialCurvature;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurvatureChangeRate;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIFramework.AIFwMultipleClothoidSegment
	 * Size -> 0x0038
	 */
	struct FAIFwMultipleClothoidSegment
	{
	public:
		struct FVector2D                                           StartPosition;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIFwClothoidCurve                                  Curve1;                                                  // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAIFwClothoidCurve                                  Curve2;                                                  // 0x0014(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAIFwClothoidCurve                                  Curve3;                                                  // 0x0020(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      S1;                                                      // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      S2;                                                      // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIFramework.AIFwClothoidSegment
	 * Size -> 0x0018
	 */
	struct FAIFwClothoidSegment
	{
	public:
		struct FVector2D                                           StartPosition;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIFwClothoidCurve                                  Curve;                                                   // 0x0008(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIFramework.AIFwHTNTask
	 * Size -> 0x0008
	 */
	struct FAIFwHTNTask
	{
	public:
		unsigned char                                              UnknownData_DNZC[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIFramework.AIFwHTNMethod
	 * Size -> 0x0010
	 */
	struct FAIFwHTNMethod
	{
	public:
		unsigned char                                              UnknownData_KBIY[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIFramework.AIFwParameterizedHTNDomain
	 * Size -> 0x0018
	 */
	struct FAIFwParameterizedHTNDomain
	{
	public:
		class UAIFwHTNDomain*                                      Domain;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIFwBTArgument>                             Arguments;                                               // 0x0008(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AIFramework.AIFwPerceivedItemActor
	 * Size -> 0x0008
	 */
	struct FAIFwPerceivedItemActor
	{
	public:
		unsigned char                                              UnknownData_7FZ9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIFramework.AIFwPerceivedItemPoint
	 * Size -> 0x000C
	 */
	struct FAIFwPerceivedItemPoint
	{
	public:
		unsigned char                                              UnknownData_FT7J[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AIFramework.AIFwTupleSpaceRef
	 * Size -> 0x0010
	 */
	struct FAIFwTupleSpaceRef
	{
	public:
		unsigned char                                              UnknownData_WKWS[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
