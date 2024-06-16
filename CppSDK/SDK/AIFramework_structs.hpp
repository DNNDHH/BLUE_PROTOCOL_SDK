#pragma once

 

// Package: AIFramework

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum AIFramework.EAIFwBTParamType
// NumValues: 0x0006
enum class EAIFwBTParamType : uint8
{
	Bool                                     = 0,
	Int                                      = 1,
	Float                                    = 2,
	String                                   = 3,
	Unknown                                  = 255,
	EAIFwBTParamType_MAX                     = 256,
};

// Enum AIFramework.EAIFwFocusPriority
// NumValues: 0x0003
enum class EAIFwFocusPriority : uint8
{
	Default                                  = 0,
	Gameplay                                 = 1,
	EAIFwFocusPriority_MAX                   = 2,
};

// Enum AIFramework.EAIFwBTStatus
// NumValues: 0x0005
enum class EAIFwBTStatus : uint8
{
	Invalid                                  = 0,
	Success                                  = 1,
	Failure                                  = 2,
	Running                                  = 3,
	EAIFwBTStatus_MAX                        = 4,
};

// Enum AIFramework.EAIFwPTRunMode
// NumValues: 0x0004
enum class EAIFwPTRunMode : uint8
{
	Best                                     = 0,
	Random                                   = 1,
	All                                      = 2,
	EAIFwPTRunMode_MAX                       = 3,
};

// Enum AIFramework.EPTCriterionSlot
// NumValues: 0x0005
enum class EPTCriterionSlot : uint8
{
	Slot1                                    = 0,
	Slot2                                    = 1,
	Slot3                                    = 2,
	Slot4                                    = 3,
	EPTCriterionSlot_MAX                     = 4,
};

// Enum AIFramework.EPTEvalScoreType
// NumValues: 0x0003
enum class EPTEvalScoreType : uint8
{
	Min                                      = 0,
	Max                                      = 1,
	Average                                  = 2,
};

// Enum AIFramework.EPTEvalOperation
// NumValues: 0x0004
enum class EPTEvalOperation : uint8
{
	Constant                                 = 0,
	Linear                                   = 1,
	InverseLinear                            = 2,
	EPTEvalOperation_MAX                     = 3,
};

// Enum AIFramework.EAIFwPTEvalPathfindingMode
// NumValues: 0x0004
enum class EAIFwPTEvalPathfindingMode : uint8
{
	Exist                                    = 0,
	Cost                                     = 1,
	Length                                   = 2,
	EAIFwPTEvalPathfindingMode_MAX           = 3,
};

// ScriptStruct AIFramework.AIFwBTNodeProperty
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FAIFwBTNodeProperty
{
public:
	uint8                                         Pad_1A3D[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAIFwBTNodeProperty) == 0x000008, "Wrong alignment on FAIFwBTNodeProperty");
static_assert(sizeof(FAIFwBTNodeProperty) == 0x000010, "Wrong size on FAIFwBTNodeProperty");

// ScriptStruct AIFramework.AIFwBTNodePropertyFloat
// 0x0008 (0x0018 - 0x0010)
struct FAIFwBTNodePropertyFloat final : public FAIFwBTNodeProperty
{
public:
	float                                         DefaultValue;                                      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A3E[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAIFwBTNodePropertyFloat) == 0x000008, "Wrong alignment on FAIFwBTNodePropertyFloat");
static_assert(sizeof(FAIFwBTNodePropertyFloat) == 0x000018, "Wrong size on FAIFwBTNodePropertyFloat");
static_assert(offsetof(FAIFwBTNodePropertyFloat, DefaultValue) == 0x000010, "Member 'FAIFwBTNodePropertyFloat::DefaultValue' has a wrong offset!");

// ScriptStruct AIFramework.AIFwBTArgument
// 0x0040 (0x0040 - 0x0000)
struct FAIFwBTArgument final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAIFwBTParamType                              Type;                                              // 0x0010(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A3F[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	uint8                                         bUseValue : 1;                                     // 0x0014(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bUseBBKey : 1;                                     // 0x0014(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         BoolValue : 1;                                     // 0x0014(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A40[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         IntValue;                                          // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FloatValue;                                        // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 StringValue;                                       // 0x0020(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 BlackboardKey;                                     // 0x0030(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAIFwBTArgument) == 0x000008, "Wrong alignment on FAIFwBTArgument");
static_assert(sizeof(FAIFwBTArgument) == 0x000040, "Wrong size on FAIFwBTArgument");
static_assert(offsetof(FAIFwBTArgument, Name) == 0x000000, "Member 'FAIFwBTArgument::Name' has a wrong offset!");
static_assert(offsetof(FAIFwBTArgument, Type) == 0x000010, "Member 'FAIFwBTArgument::Type' has a wrong offset!");
static_assert(offsetof(FAIFwBTArgument, IntValue) == 0x000018, "Member 'FAIFwBTArgument::IntValue' has a wrong offset!");
static_assert(offsetof(FAIFwBTArgument, FloatValue) == 0x00001C, "Member 'FAIFwBTArgument::FloatValue' has a wrong offset!");
static_assert(offsetof(FAIFwBTArgument, StringValue) == 0x000020, "Member 'FAIFwBTArgument::StringValue' has a wrong offset!");
static_assert(offsetof(FAIFwBTArgument, BlackboardKey) == 0x000030, "Member 'FAIFwBTArgument::BlackboardKey' has a wrong offset!");

// ScriptStruct AIFramework.AIFwParameterizedBTRequest
// 0x0018 (0x0018 - 0x0000)
struct FAIFwParameterizedBTRequest final
{
public:
	class UAIFwBehaviorTree*                      Template;                                          // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIFwBTArgument>                Arguments;                                         // 0x0008(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAIFwParameterizedBTRequest) == 0x000008, "Wrong alignment on FAIFwParameterizedBTRequest");
static_assert(sizeof(FAIFwParameterizedBTRequest) == 0x000018, "Wrong size on FAIFwParameterizedBTRequest");
static_assert(offsetof(FAIFwParameterizedBTRequest, Template) == 0x000000, "Member 'FAIFwParameterizedBTRequest::Template' has a wrong offset!");
static_assert(offsetof(FAIFwParameterizedBTRequest, Arguments) == 0x000008, "Member 'FAIFwParameterizedBTRequest::Arguments' has a wrong offset!");

// ScriptStruct AIFramework.AIFwFactionRelationSettings
// 0x000C (0x000C - 0x0000)
struct FAIFwFactionRelationSettings final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Value;                                             // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAIFwFactionRelationSettings) == 0x000004, "Wrong alignment on FAIFwFactionRelationSettings");
static_assert(sizeof(FAIFwFactionRelationSettings) == 0x00000C, "Wrong size on FAIFwFactionRelationSettings");
static_assert(offsetof(FAIFwFactionRelationSettings, Name) == 0x000000, "Member 'FAIFwFactionRelationSettings::Name' has a wrong offset!");
static_assert(offsetof(FAIFwFactionRelationSettings, Value) == 0x000008, "Member 'FAIFwFactionRelationSettings::Value' has a wrong offset!");

// ScriptStruct AIFramework.AIFwFactionSettings
// 0x0018 (0x0018 - 0x0000)
struct FAIFwFactionSettings final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIFwFactionRelationSettings>   Relations;                                         // 0x0008(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAIFwFactionSettings) == 0x000008, "Wrong alignment on FAIFwFactionSettings");
static_assert(sizeof(FAIFwFactionSettings) == 0x000018, "Wrong size on FAIFwFactionSettings");
static_assert(offsetof(FAIFwFactionSettings, Name) == 0x000000, "Member 'FAIFwFactionSettings::Name' has a wrong offset!");
static_assert(offsetof(FAIFwFactionSettings, Relations) == 0x000008, "Member 'FAIFwFactionSettings::Relations' has a wrong offset!");

// ScriptStruct AIFramework.AIFwBlackboard
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FAIFwBlackboard final
{
public:
	uint8                                         Pad_1A41[0x18];                                    // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAIFwBlackboard) == 0x000008, "Wrong alignment on FAIFwBlackboard");
static_assert(sizeof(FAIFwBlackboard) == 0x000018, "Wrong size on FAIFwBlackboard");

// ScriptStruct AIFramework.AIFwBTNodePropertyEnumBase
// 0x0000 (0x0010 - 0x0010)
struct FAIFwBTNodePropertyEnumBase : public FAIFwBTNodeProperty
{
};
static_assert(alignof(FAIFwBTNodePropertyEnumBase) == 0x000008, "Wrong alignment on FAIFwBTNodePropertyEnumBase");
static_assert(sizeof(FAIFwBTNodePropertyEnumBase) == 0x000010, "Wrong size on FAIFwBTNodePropertyEnumBase");

// ScriptStruct AIFramework.AIFwBTNodePropertyString
// 0x0010 (0x0020 - 0x0010)
struct FAIFwBTNodePropertyString final : public FAIFwBTNodeProperty
{
public:
	class FString                                 DefaultValue;                                      // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAIFwBTNodePropertyString) == 0x000008, "Wrong alignment on FAIFwBTNodePropertyString");
static_assert(sizeof(FAIFwBTNodePropertyString) == 0x000020, "Wrong size on FAIFwBTNodePropertyString");
static_assert(offsetof(FAIFwBTNodePropertyString, DefaultValue) == 0x000010, "Member 'FAIFwBTNodePropertyString::DefaultValue' has a wrong offset!");

// ScriptStruct AIFramework.AIFwBTNodePropertyInt
// 0x0008 (0x0018 - 0x0010)
struct FAIFwBTNodePropertyInt final : public FAIFwBTNodeProperty
{
public:
	int32                                         DefaultValue;                                      // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A42[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAIFwBTNodePropertyInt) == 0x000008, "Wrong alignment on FAIFwBTNodePropertyInt");
static_assert(sizeof(FAIFwBTNodePropertyInt) == 0x000018, "Wrong size on FAIFwBTNodePropertyInt");
static_assert(offsetof(FAIFwBTNodePropertyInt, DefaultValue) == 0x000010, "Member 'FAIFwBTNodePropertyInt::DefaultValue' has a wrong offset!");

// ScriptStruct AIFramework.AIFwBTNodePropertyBool
// 0x0008 (0x0018 - 0x0010)
struct FAIFwBTNodePropertyBool final : public FAIFwBTNodeProperty
{
public:
	bool                                          DefaultValue;                                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A43[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAIFwBTNodePropertyBool) == 0x000008, "Wrong alignment on FAIFwBTNodePropertyBool");
static_assert(sizeof(FAIFwBTNodePropertyBool) == 0x000018, "Wrong size on FAIFwBTNodePropertyBool");
static_assert(offsetof(FAIFwBTNodePropertyBool, DefaultValue) == 0x000010, "Member 'FAIFwBTNodePropertyBool::DefaultValue' has a wrong offset!");

// ScriptStruct AIFramework.AIFwClothoidCurve
// 0x000C (0x000C - 0x0000)
struct FAIFwClothoidCurve final
{
public:
	float                                         InitialDirection;                                  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InitialCurvature;                                  // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CurvatureChangeRate;                               // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAIFwClothoidCurve) == 0x000004, "Wrong alignment on FAIFwClothoidCurve");
static_assert(sizeof(FAIFwClothoidCurve) == 0x00000C, "Wrong size on FAIFwClothoidCurve");
static_assert(offsetof(FAIFwClothoidCurve, InitialDirection) == 0x000000, "Member 'FAIFwClothoidCurve::InitialDirection' has a wrong offset!");
static_assert(offsetof(FAIFwClothoidCurve, InitialCurvature) == 0x000004, "Member 'FAIFwClothoidCurve::InitialCurvature' has a wrong offset!");
static_assert(offsetof(FAIFwClothoidCurve, CurvatureChangeRate) == 0x000008, "Member 'FAIFwClothoidCurve::CurvatureChangeRate' has a wrong offset!");

// ScriptStruct AIFramework.AIFwMultipleClothoidSegment
// 0x0038 (0x0038 - 0x0000)
struct FAIFwMultipleClothoidSegment final
{
public:
	struct FVector2D                              StartPosition;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIFwClothoidCurve                     Curve1;                                            // 0x0008(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIFwClothoidCurve                     Curve2;                                            // 0x0014(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FAIFwClothoidCurve                     Curve3;                                            // 0x0020(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         S1;                                                // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         S2;                                                // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Length;                                            // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAIFwMultipleClothoidSegment) == 0x000004, "Wrong alignment on FAIFwMultipleClothoidSegment");
static_assert(sizeof(FAIFwMultipleClothoidSegment) == 0x000038, "Wrong size on FAIFwMultipleClothoidSegment");
static_assert(offsetof(FAIFwMultipleClothoidSegment, StartPosition) == 0x000000, "Member 'FAIFwMultipleClothoidSegment::StartPosition' has a wrong offset!");
static_assert(offsetof(FAIFwMultipleClothoidSegment, Curve1) == 0x000008, "Member 'FAIFwMultipleClothoidSegment::Curve1' has a wrong offset!");
static_assert(offsetof(FAIFwMultipleClothoidSegment, Curve2) == 0x000014, "Member 'FAIFwMultipleClothoidSegment::Curve2' has a wrong offset!");
static_assert(offsetof(FAIFwMultipleClothoidSegment, Curve3) == 0x000020, "Member 'FAIFwMultipleClothoidSegment::Curve3' has a wrong offset!");
static_assert(offsetof(FAIFwMultipleClothoidSegment, S1) == 0x00002C, "Member 'FAIFwMultipleClothoidSegment::S1' has a wrong offset!");
static_assert(offsetof(FAIFwMultipleClothoidSegment, S2) == 0x000030, "Member 'FAIFwMultipleClothoidSegment::S2' has a wrong offset!");
static_assert(offsetof(FAIFwMultipleClothoidSegment, Length) == 0x000034, "Member 'FAIFwMultipleClothoidSegment::Length' has a wrong offset!");

// ScriptStruct AIFramework.AIFwClothoidSegment
// 0x0018 (0x0018 - 0x0000)
struct FAIFwClothoidSegment final
{
public:
	struct FVector2D                              StartPosition;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIFwClothoidCurve                     Curve;                                             // 0x0008(0x000C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                         Length;                                            // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAIFwClothoidSegment) == 0x000004, "Wrong alignment on FAIFwClothoidSegment");
static_assert(sizeof(FAIFwClothoidSegment) == 0x000018, "Wrong size on FAIFwClothoidSegment");
static_assert(offsetof(FAIFwClothoidSegment, StartPosition) == 0x000000, "Member 'FAIFwClothoidSegment::StartPosition' has a wrong offset!");
static_assert(offsetof(FAIFwClothoidSegment, Curve) == 0x000008, "Member 'FAIFwClothoidSegment::Curve' has a wrong offset!");
static_assert(offsetof(FAIFwClothoidSegment, Length) == 0x000014, "Member 'FAIFwClothoidSegment::Length' has a wrong offset!");

// ScriptStruct AIFramework.AIFwHTNTask
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FAIFwHTNTask final
{
public:
	uint8                                         Pad_1A44[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAIFwHTNTask) == 0x000008, "Wrong alignment on FAIFwHTNTask");
static_assert(sizeof(FAIFwHTNTask) == 0x000008, "Wrong size on FAIFwHTNTask");

// ScriptStruct AIFramework.AIFwHTNMethod
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FAIFwHTNMethod final
{
public:
	uint8                                         Pad_1A45[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAIFwHTNMethod) == 0x000008, "Wrong alignment on FAIFwHTNMethod");
static_assert(sizeof(FAIFwHTNMethod) == 0x000010, "Wrong size on FAIFwHTNMethod");

// ScriptStruct AIFramework.AIFwIMapLayoutCell
// 0x0028 (0x0028 - 0x0000)
struct FAIFwIMapLayoutCell final
{
public:
	uint64                                        NavNode;                                           // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         X;                                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Y;                                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Height;                                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Neighbors[0x4];                                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A46[0x4];                                     // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAIFwIMapLayoutCell) == 0x000008, "Wrong alignment on FAIFwIMapLayoutCell");
static_assert(sizeof(FAIFwIMapLayoutCell) == 0x000028, "Wrong size on FAIFwIMapLayoutCell");
static_assert(offsetof(FAIFwIMapLayoutCell, NavNode) == 0x000000, "Member 'FAIFwIMapLayoutCell::NavNode' has a wrong offset!");
static_assert(offsetof(FAIFwIMapLayoutCell, X) == 0x000008, "Member 'FAIFwIMapLayoutCell::X' has a wrong offset!");
static_assert(offsetof(FAIFwIMapLayoutCell, Y) == 0x00000C, "Member 'FAIFwIMapLayoutCell::Y' has a wrong offset!");
static_assert(offsetof(FAIFwIMapLayoutCell, Height) == 0x000010, "Member 'FAIFwIMapLayoutCell::Height' has a wrong offset!");
static_assert(offsetof(FAIFwIMapLayoutCell, Neighbors) == 0x000014, "Member 'FAIFwIMapLayoutCell::Neighbors' has a wrong offset!");

// ScriptStruct AIFramework.AIFwParameterizedHTNDomain
// 0x0018 (0x0018 - 0x0000)
struct FAIFwParameterizedHTNDomain final
{
public:
	class UAIFwHTNDomain*                         Domain;                                            // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAIFwBTArgument>                Arguments;                                         // 0x0008(0x0010)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAIFwParameterizedHTNDomain) == 0x000008, "Wrong alignment on FAIFwParameterizedHTNDomain");
static_assert(sizeof(FAIFwParameterizedHTNDomain) == 0x000018, "Wrong size on FAIFwParameterizedHTNDomain");
static_assert(offsetof(FAIFwParameterizedHTNDomain, Domain) == 0x000000, "Member 'FAIFwParameterizedHTNDomain::Domain' has a wrong offset!");
static_assert(offsetof(FAIFwParameterizedHTNDomain, Arguments) == 0x000008, "Member 'FAIFwParameterizedHTNDomain::Arguments' has a wrong offset!");

// ScriptStruct AIFramework.AIFwPerceivedItemActor
// 0x0008 (0x0008 - 0x0000)
struct alignas(0x08) FAIFwPerceivedItemActor final
{
public:
	uint8                                         Pad_1A47[0x8];                                     // 0x0000(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAIFwPerceivedItemActor) == 0x000008, "Wrong alignment on FAIFwPerceivedItemActor");
static_assert(sizeof(FAIFwPerceivedItemActor) == 0x000008, "Wrong size on FAIFwPerceivedItemActor");

// ScriptStruct AIFramework.AIFwPerceivedItemPoint
// 0x000C (0x000C - 0x0000)
struct alignas(0x04) FAIFwPerceivedItemPoint
{
public:
	uint8                                         Pad_1A48[0xC];                                     // 0x0000(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAIFwPerceivedItemPoint) == 0x000004, "Wrong alignment on FAIFwPerceivedItemPoint");
static_assert(sizeof(FAIFwPerceivedItemPoint) == 0x00000C, "Wrong size on FAIFwPerceivedItemPoint");

// ScriptStruct AIFramework.AIFwSmartObjectUserSettings
// 0x0008 (0x0008 - 0x0000)
struct FAIFwSmartObjectUserSettings final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAIFwSmartObjectUserSettings) == 0x000004, "Wrong alignment on FAIFwSmartObjectUserSettings");
static_assert(sizeof(FAIFwSmartObjectUserSettings) == 0x000008, "Wrong size on FAIFwSmartObjectUserSettings");
static_assert(offsetof(FAIFwSmartObjectUserSettings, Name) == 0x000000, "Member 'FAIFwSmartObjectUserSettings::Name' has a wrong offset!");

// ScriptStruct AIFramework.AIFwSmartObjectUserSelector
// 0x0004 (0x0004 - 0x0000)
struct alignas(0x04) FAIFwSmartObjectUserSelector final
{
public:
	uint8                                         bSupportsUser0 : 1;                                // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser1 : 1;                                // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser2 : 1;                                // 0x0000(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser3 : 1;                                // 0x0000(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser4 : 1;                                // 0x0000(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser5 : 1;                                // 0x0000(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser6 : 1;                                // 0x0000(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser7 : 1;                                // 0x0000(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser8 : 1;                                // 0x0001(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser9 : 1;                                // 0x0001(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser10 : 1;                               // 0x0001(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser11 : 1;                               // 0x0001(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser12 : 1;                               // 0x0001(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser13 : 1;                               // 0x0001(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser14 : 1;                               // 0x0001(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bSupportsUser15 : 1;                               // 0x0001(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A49[0x2];                                     // 0x0002(0x0002)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAIFwSmartObjectUserSelector) == 0x000004, "Wrong alignment on FAIFwSmartObjectUserSelector");
static_assert(sizeof(FAIFwSmartObjectUserSelector) == 0x000004, "Wrong size on FAIFwSmartObjectUserSelector");

// ScriptStruct AIFramework.AIFwSmartObjectEvent
// 0x0030 (0x0030 - 0x0000)
struct FAIFwSmartObjectEvent final
{
public:
	struct FAIFwSmartObjectUserSelector           SupportedUsers;                                    // 0x0000(0x0004)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A4A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Usage;                                             // 0x0008(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bFactionNeutral : 1;                               // 0x0018(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFactionFriendly : 1;                              // 0x0018(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bFactionHostile : 1;                               // 0x0018(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_1A4B[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIFwSmartObjectCondition*              Condition;                                         // 0x0020(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIFwSmartObjectAction*                 Action;                                            // 0x0028(0x0008)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FAIFwSmartObjectEvent) == 0x000008, "Wrong alignment on FAIFwSmartObjectEvent");
static_assert(sizeof(FAIFwSmartObjectEvent) == 0x000030, "Wrong size on FAIFwSmartObjectEvent");
static_assert(offsetof(FAIFwSmartObjectEvent, SupportedUsers) == 0x000000, "Member 'FAIFwSmartObjectEvent::SupportedUsers' has a wrong offset!");
static_assert(offsetof(FAIFwSmartObjectEvent, Usage) == 0x000008, "Member 'FAIFwSmartObjectEvent::Usage' has a wrong offset!");
static_assert(offsetof(FAIFwSmartObjectEvent, Condition) == 0x000020, "Member 'FAIFwSmartObjectEvent::Condition' has a wrong offset!");
static_assert(offsetof(FAIFwSmartObjectEvent, Action) == 0x000028, "Member 'FAIFwSmartObjectEvent::Action' has a wrong offset!");

// ScriptStruct AIFramework.AIFwTupleSpaceRef
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FAIFwTupleSpaceRef final
{
public:
	uint8                                         Pad_1A4C[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAIFwTupleSpaceRef) == 0x000008, "Wrong alignment on FAIFwTupleSpaceRef");
static_assert(sizeof(FAIFwTupleSpaceRef) == 0x000010, "Wrong size on FAIFwTupleSpaceRef");

}

