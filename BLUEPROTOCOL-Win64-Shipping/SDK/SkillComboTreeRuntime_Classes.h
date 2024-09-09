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
	 * Class SkillComboTreeRuntime.SCTActorDebuggerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USCTActorDebuggerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SkillComboTreeRuntime.SCTGraph
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class USCTGraph : public UObject
	{
	public:
		TArray<class USCTGraphNode*>                               RootNodes;                                               // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic
		TArray<class USCTGraphNode*>                               AllNodes;                                                // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic
		TArray<class USCTGraphEdge*>                               AllEdges;                                                // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic
		TArray<struct FSCTComboOnlySkill>                          ComboOnlySkills;                                         // 0x0058(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic
		TArray<class FName>                                        ComboOnlySkillNames;                                     // 0x0068(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SkillComboTreeRuntime.SCTGraphEdge
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class USCTGraphEdge : public UObject
	{
	public:
		class USCTGraph*                                           Graph;                                                   // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ActivationTags;                                          // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        DeactivationTags;                                        // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bAbsolute;                                               // 0x0050(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseProbability;                                         // 0x0051(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EACP[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSCTProbabilityRange                                ProbabilityRange;                                        // 0x0054(0x0008) Edit, DisableEditOnInstance, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98ZL[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USCTGraphNode*                                       StartNode;                                               // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USCTGraphNode*                                       EndNode;                                                 // 0x0068(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SkillComboTreeRuntime.SCTGraphNode
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class USCTGraphNode : public UObject
	{
	public:
		class USCTGraph*                                           Graph;                                                   // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USCTGraphNode*>                               ParentNodes;                                             // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class USCTGraphNode*>                               ChildrenNodes;                                           // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class USCTGraphNode*, class USCTGraphEdge*>           Edges;                                                   // 0x0050(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                NodeTitle;                                               // 0x00A0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEndPlanning;                                            // 0x00A8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckHitEnd;                                            // 0x00A9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B2ZI[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        BeforeStanceNames;                                       // 0x00B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic
		TArray<int32_t>                                            BeforeStanceIndexes;                                     // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    AfterStanceIndex;                                        // 0x00D0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5TRS[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
