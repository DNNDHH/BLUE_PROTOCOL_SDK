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
	 * Class AIFramework.AIFwAIDirector
	 * Size -> 0x0010 (FullSize[0x0238] - InheritedSize[0x0228])
	 */
	class AAIFwAIDirector : public AActor
	{
	public:
		class UAIFwBlackboardComponent*                            BlackboardComponent;                                     // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAIFwHierarchyComponent*                             HierarchyComponent;                                      // 0x0230(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void ReceiveOnActorSpawned(class AActor* SpawnedActor);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwAITask_TeleportTo
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UAIFwAITask_TeleportTo : public UAITask
	{
	public:
		unsigned char                                              UnknownData_OM1F[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwNodeBasedAsset
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAIFwNodeBasedAsset : public UObject
	{
	public:
		int32_t                                                    DataType;                                                // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6C0[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBehaviorTree
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAIFwBehaviorTree : public UAIFwNodeBasedAsset
	{
	public:
		unsigned char                                              UnknownData_VJHF[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBlackboardBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIFwBlackboardBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetValueAsVectorArray(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, TArray<struct FVector> VectorArray);
		void SetValueAsVector(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const struct FVector& VectorValue);
		void SetValueAsString(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const class FString& StringValue);
		void SetValueAsObjectArray(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, TArray<class UObject*> ObjectArray);
		void SetValueAsObject(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, class UObject* ObjectValue);
		void SetValueAsName(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const class FName& NameValue);
		void SetValueAsInt(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, int32_t IntValue);
		void SetValueAsFloat(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, float FloatValue);
		void SetValueAsClass(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, class UClass* ClassValue);
		void SetValueAsBool(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, bool BoolValue);
		bool IsValidKey(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
		TArray<struct FVector> GetValueAsVectorArray(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
		struct FVector GetValueAsVector(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
		class FString GetValueAsString(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
		TArray<class UObject*> GetValueAsObjectArray(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
		class UObject* GetValueAsObject(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
		class FName GetValueAsName(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
		int32_t GetValueAsInt(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
		float GetValueAsFloat(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
		class UClass* GetValueAsClass(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
		bool GetValueAsBool(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName);
		void ClearValue(struct FAIFwBlackboard* Blackboard, const class FString& KeyName);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBlackboardComponent
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UAIFwBlackboardComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_O1RG[0x28];                                  // 0x00B8(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetValueAsVectorArray(const class FString& KeyName, TArray<struct FVector> VectorArray);
		void SetValueAsVector(const class FString& KeyName, const struct FVector& VectorValue);
		void SetValueAsString(const class FString& KeyName, const class FString& StringValue);
		void SetValueAsRotator(const class FString& KeyName, const struct FRotator& VectorValue);
		void SetValueAsObjectArray(const class FString& KeyName, TArray<class UObject*> ObjectArray);
		void SetValueAsObject(const class FString& KeyName, class UObject* ObjectValue);
		void SetValueAsName(const class FString& KeyName, const class FName& NameValue);
		void SetValueAsIntArray(const class FString& KeyName, TArray<int32_t> IntArray);
		void SetValueAsInt(const class FString& KeyName, int32_t IntValue);
		void SetValueAsFloat(const class FString& KeyName, float FloatValue);
		void SetValueAsEnum(const class FString& KeyName, unsigned char EnumValue);
		void SetValueAsClass(const class FString& KeyName, class UClass* ClassValue);
		void SetValueAsBool(const class FString& KeyName, bool BoolValue);
		bool IsValidKey(const class FString& KeyName);
		TArray<struct FVector> GetValueAsVectorArray(const class FString& KeyName);
		struct FVector GetValueAsVector(const class FString& KeyName);
		class FString GetValueAsString(const class FString& KeyName);
		struct FRotator GetValueAsRotator(const class FString& KeyName);
		struct FRotator GetValueAsRotation(const class FString& KeyName);
		TArray<class UObject*> GetValueAsObjectArray(const class FString& KeyName);
		class UObject* GetValueAsObject(const class FString& KeyName);
		class FName GetValueAsName(const class FString& KeyName);
		struct FVector GetValueAsLocation(const class FString& KeyName);
		TArray<int32_t> GetValueAsIntArray(const class FString& KeyName);
		int32_t GetValueAsInt(const class FString& KeyName);
		float GetValueAsFloat(const class FString& KeyName);
		unsigned char GetValueAsEnum(const class FString& KeyName);
		class UClass* GetValueAsClass(const class FString& KeyName);
		bool GetValueAsBool(const class FString& KeyName);
		void ClearValue(const class FString& KeyName);
		void BindToUE4Blackboard(const class FString& KeyName, class UBlackboardComponent* OtherBlackboard, const class FName& OtherKeyName);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIFwBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool RunAIFwBehaviorTree(class AActor* Target, class UAIFwBehaviorTree* BehaviorTree, bool bLooping);
		struct FAIFwMultipleClothoidSegment MultipleClothoidInterpRad(const struct FVector2D& StartPosition, float StartAngle, float StartCurvature, const struct FVector2D& EndPosition, float EndAngle, float EndCurvature);
		struct FAIFwMultipleClothoidSegment MultipleClothoidInterp(const struct FVector2D& StartPosition, float StartAngle, float StartCurvature, const struct FVector2D& EndPosition, float EndAngle, float EndCurvature);
		int32_t Hash32(const class FString& String);
		struct FVector2D GetMultipleClothoidLocationAtTime(const struct FAIFwMultipleClothoidSegment& Segment, float Time);
		float GetFactionRelation(class AActor* From, class AActor* To);
		struct FVector2D GetClothoidLocationAtTime(const struct FAIFwClothoidSegment& Segment, float Time);
		class UAIFwBlackboardComponent* GetAIFwBlackboard(class AActor* Target);
		class AAIFwAIDirector* GetAIDirector(class UObject* WorldContextObject);
		struct FAIFwClothoidSegment ClothoidInterpRad(const struct FVector2D& StartPosition, float StartAngle, const struct FVector2D& EndPosition, float EndAngle);
		struct FAIFwClothoidSegment ClothoidInterp(const struct FVector2D& StartPosition, float StartAngle, const struct FVector2D& EndPosition, float EndAngle);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwNodeBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAIFwNodeBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_5LCX[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTDecoratorNode
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAIFwBTDecoratorNode : public UAIFwNodeBase
	{
	public:
		unsigned char                                              UnknownData_WW36[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTFocus
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UAIFwBTFocus : public UAIFwBTDecoratorNode
	{
	public:
		class FString                                              BlackboardKey;                                           // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLX5[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EAIFwFocusPriority                                         FocusPriority;                                           // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ICSJ[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAIFwBTNode : public UAIFwNodeBase
	{
	public:
		unsigned char                                              UnknownData_48VT[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTInvokeFunction
	 * Size -> 0x0040 (FullSize[0x0080] - InheritedSize[0x0040])
	 */
	class UAIFwBTInvokeFunction : public UAIFwBTNode
	{
	public:
		struct FAIFwBTNodePropertyString                           ObjectKey;                                               // 0x0040(0x0020) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyString                           FunctionName;                                            // 0x0060(0x0020) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTMaxWalkSpeed
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UAIFwBTMaxWalkSpeed : public UAIFwBTDecoratorNode
	{
	public:
		struct FAIFwBTNodePropertyFloat                            MaxWalkSpeed;                                            // 0x0038(0x0018) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTMoveTo
	 * Size -> 0x00A8 (FullSize[0x00E8] - InheritedSize[0x0040])
	 */
	class UAIFwBTMoveTo : public UAIFwBTNode
	{
	public:
		unsigned char                                              UnknownData_ZGUJ[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIFwBTNodePropertyString                           BlackboardKey;                                           // 0x0048(0x0020) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyFloat                            AcceptableRadius;                                        // 0x0068(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		class UClass*                                              FilterClass;                                             // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyBool                             bAllowStrafe;                                            // 0x0088(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyBool                             bAllowPartialPath;                                       // 0x00A0(0x0018) Edit, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyBool                             bReachTestIncludesAgentRadius;                           // 0x00B8(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyBool                             bReachTestIncludesGoalRadius;                            // 0x00D0(0x0018) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTPrintString
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UAIFwBTPrintString : public UAIFwBTNode
	{
	public:
		struct FAIFwBTNodePropertyString                           String;                                                  // 0x0040(0x0020) Edit, NativeAccessSpecifierPublic
		bool                                                       bPrintToScreen;                                          // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPrintToLog;                                             // 0x0061(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVJO[0x2];                                   // 0x0062(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTRunAITask
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UAIFwBTRunAITask : public UAIFwBTNode
	{
	public:
		unsigned char                                              UnknownData_H6XR[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TaskClass;                                               // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyBool                             bNonBlocking;                                            // 0x0050(0x0018) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTRunHTNPlan
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAIFwBTRunHTNPlan : public UAIFwBTNode
	{
	public:
		class FString                                              TaskName;                                                // 0x0040(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTRunPerceptionTree
	 * Size -> 0x0048 (FullSize[0x0088] - InheritedSize[0x0040])
	 */
	class UAIFwBTRunPerceptionTree : public UAIFwBTNode
	{
	public:
		class UAIFwBehaviorTree*                                   PerceptionTree;                                          // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyString                           BlackboardKey;                                           // 0x0048(0x0020) Edit, Protected, NativeAccessSpecifierProtected
		EAIFwPTRunMode                                             RunMode;                                                 // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RQNX[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIFwBTNodePropertyInt                              MaxCount;                                                // 0x0070(0x0018) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTService_ReactiveSkill
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UAIFwBTService_ReactiveSkill : public UBTService
	{
	public:
		class FName                                                SkillTag;                                                // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnable : 1;                                             // 0x0078(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BFZK[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTService_RunPerceptionTree
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UAIFwBTService_RunPerceptionTree : public UBTService_BlackboardBase
	{
	public:
		class UAIFwBehaviorTree*                                   PerceptionTree;                                          // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClearBBValueWhenFailed;                                 // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2WOF[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTTask_RunHTNPlan
	 * Size -> 0x0010 (FullSize[0x0080] - InheritedSize[0x0070])
	 */
	class UAIFwBTTask_RunHTNPlan : public UBTTaskNode
	{
	public:
		class FString                                              TaskName;                                                // 0x0070(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTTask_RunPerceptionTree
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UAIFwBTTask_RunPerceptionTree : public UBTTask_BlackboardBase
	{
	public:
		class UAIFwBehaviorTree*                                   PerceptionTree;                                          // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTTask_UseSmartObject
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UAIFwBTTask_UseSmartObject : public UBTTask_BlackboardBase
	{
	public:
		class FString                                              Usage;                                                   // 0x0098(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTTeleportTo
	 * Size -> 0x0028 (FullSize[0x0068] - InheritedSize[0x0040])
	 */
	class UAIFwBTTeleportTo : public UAIFwBTNode
	{
	public:
		unsigned char                                              UnknownData_DSOQ[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIFwBTNodePropertyString                           BlackboardKey;                                           // 0x0048(0x0020) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwBTToggleReactiveSkill
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UAIFwBTToggleReactiveSkill : public UAIFwBTDecoratorNode
	{
	public:
		class FName                                                SkillTag;                                                // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnable;                                                 // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0CXB[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwEntityComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UAIFwEntityComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_XAB9[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwFactionComponent
	 * Size -> 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
	 */
	class UAIFwFactionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BL6I[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FactionNameString;                                       // 0x00C8(0x0010) Net, ZeroConstructor, RepNotify, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                FactionName;                                             // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BPCK[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnRep_FactionNameString();
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHierarchyComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UAIFwHierarchyComponent : public UActorComponent
	{
	public:
		class UAIFwHierarchyComponent*                             Parent;                                                  // 0x00B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UAIFwHierarchyComponent*>                     Children;                                                // 0x00C0(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		void SendMessageToSiblings(const class FName& Message, class UObject* MessageSource, bool bSuccess);
		void SendMessageToParent(const class FName& Message, class UObject* MessageSource, bool bSuccess);
		void SendMessageToChildren(const class FName& Message, class UObject* MessageSource, bool bSuccess, class AActor* IgnoreActor);
		bool Remove(class AActor* Actor);
		bool Add(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIFwHTNBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UAIFwHTNTempOp_SometimeBefore* HTNSometimeBefore(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB);
		class UAIFwHTNTempOp_SometimeAfter* HTNSometimeAfter(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB);
		class UAIFwHTNTempOp_Sometime* HTNSometime(class UAIFwHTNOperator* Operator);
		class UAIFwHTNOperator_Occur* HTNOccur(const class FString& TaskName);
		class UAIFwHTNOperator_Not* HTNNot(class UAIFwHTNOperator* Operator);
		class UAIFwHTNOperator_Apply* HTNApply(const class FString& TaskName, const class FString& MethodName);
		class UAIFwHTNTempOp_AlwaysBefore* HTNAlwaysBefore(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB);
		class UAIFwHTNTempOp_AlwaysAfter* HTNAlwaysAfter(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB);
		class UAIFwHTNTempOp_Always* HTNAlways(class UAIFwHTNOperator* Operator);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNDomain
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAIFwHTNDomain : public UAIFwNodeBasedAsset
	{
	public:
		unsigned char                                              UnknownData_V90P[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNNode
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAIFwHTNNode : public UAIFwNodeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNOperator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIFwHTNOperator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNOperator_Apply
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UAIFwHTNOperator_Apply : public UAIFwHTNOperator
	{
	public:
		unsigned char                                              UnknownData_Y3ZX[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNOperator_Not
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAIFwHTNOperator_Not : public UAIFwHTNOperator
	{
	public:
		unsigned char                                              UnknownData_VL86[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNOperator_Occur
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIFwHTNOperator_Occur : public UAIFwHTNOperator
	{
	public:
		unsigned char                                              UnknownData_LG0P[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNPlanningComponent
	 * Size -> 0x0108 (FullSize[0x01C0] - InheritedSize[0x00B8])
	 */
	class UAIFwHTNPlanningComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_I9GR[0x68];                                  // 0x00B8(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIFwHTNState*                                       State;                                                   // 0x0120(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UAIFwHTNDomain*>                              Domains;                                                 // 0x0128(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZZ94[0x1C];                                  // 0x0138(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxIterationCount;                                       // 0x0154(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    InitialOpenListSize;                                     // 0x0158(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FQ64[0x64];                                  // 0x015C(0x0064) MISSED OFFSET (PADDING)

	public:
		void SetName(const struct FAIFwHTNMethod& Method, const class FString& Name);
		bool IsValidTask(const struct FAIFwHTNTask& Task);
		bool IsValidMethod(const struct FAIFwHTNMethod& Method);
		struct FAIFwHTNTask FindTask(const class FString& Name);
		struct FAIFwHTNMethod FindMethodByName(const struct FAIFwHTNTask& Task, const class FString& Name);
		struct FAIFwHTNMethod FindMethod(const class FString& TaskName, const class FString& MethodName);
		void AppendDomain(class UAIFwHTNDomain* NewDomain, bool bOverrideCompound);
		void AddTrajectoryPreference(const class FString& Name, class UAIFwHTNTemporalModalOperator* TemporalOperator, bool bHardConstraint);
		void AddPreconditionPreference(const class FString& Name, const class FString& TaskName, const class FString& MethodName, class UAIFwHTNOperator* Operator, bool bHardConstraint);
		void AddMetricWeight(const class FString& PreferenceName, float Weight);
		void AddGoalPreference(const class FString& Name, class UAIFwHTNOperator* Operator, bool bHardConstraint);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNState
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIFwHTNState : public UObject
	{
	public:
		unsigned char                                              UnknownData_TJ7P[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetValueAsInt(const class FString& KeyName, int32_t IntValue);
		void SetValueAsFloat(const class FString& KeyName, float FloatValue);
		void SetValueAsEnum(const class FString& KeyName, unsigned char EnumValue);
		void SetValueAsBool(const class FString& KeyName, bool BoolValue);
		bool IsValidKey(const class FString& KeyName);
		int32_t GetValueAsInt(const class FString& KeyName);
		float GetValueAsFloat(const class FString& KeyName);
		unsigned char GetValueAsEnum(const class FString& KeyName);
		bool GetValueAsBool(const class FString& KeyName);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNTemporalModalOperator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIFwHTNTemporalModalOperator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNTempOp_Always
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAIFwHTNTempOp_Always : public UAIFwHTNTemporalModalOperator
	{
	public:
		class UAIFwHTNOperator*                                    Operator;                                                // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNTempOp_AlwaysAfter
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIFwHTNTempOp_AlwaysAfter : public UAIFwHTNTemporalModalOperator
	{
	public:
		class UAIFwHTNOperator*                                    OperatorA;                                               // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIFwHTNOperator*                                    OperatorB;                                               // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNTempOp_AlwaysBefore
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIFwHTNTempOp_AlwaysBefore : public UAIFwHTNTemporalModalOperator
	{
	public:
		class UAIFwHTNOperator*                                    OperatorA;                                               // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIFwHTNOperator*                                    OperatorB;                                               // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNTempOp_Sometime
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAIFwHTNTempOp_Sometime : public UAIFwHTNTemporalModalOperator
	{
	public:
		class UAIFwHTNOperator*                                    Operator;                                                // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNTempOp_SometimeAfter
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIFwHTNTempOp_SometimeAfter : public UAIFwHTNTemporalModalOperator
	{
	public:
		class UAIFwHTNOperator*                                    OperatorA;                                               // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIFwHTNOperator*                                    OperatorB;                                               // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwHTNTempOp_SometimeBefore
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UAIFwHTNTempOp_SometimeBefore : public UAIFwHTNTemporalModalOperator
	{
	public:
		class UAIFwHTNOperator*                                    OperatorA;                                               // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIFwHTNOperator*                                    OperatorB;                                               // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwInfluenceMapLayer
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UAIFwInfluenceMapLayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_DXEN[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIFwInfluenceMapLayout*                             Layout;                                                  // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QL48[0x80];                                  // 0x0038(0x0080) MISSED OFFSET (PADDING)

	public:
		void RegisterSource(class AActor* Actor, float Radius, float Value);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwInfluenceMapLayout
	 * Size -> 0x0088 (FullSize[0x02B0] - InheritedSize[0x0228])
	 */
	class AAIFwInfluenceMapLayout : public AActor
	{
	public:
		class UPrimitiveComponent*                                 RenderingComp;                                           // 0x0228(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableDrawing : 1;                                      // 0x0230(0x0001) BIT_FIELD Edit, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NFMM[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DrawDistance;                                            // 0x0234(0x0004) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ARecastNavMesh*                                      NavMesh;                                                 // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Origin;                                                  // 0x0240(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellSize;                                                // 0x024C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIFwIMapLayoutCell>                         Cells;                                                   // 0x0250(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFZN[0x50];                                  // 0x0260(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwInfluenceMapLayoutRenderingComponent
	 * Size -> 0x0008 (FullSize[0x0470] - InheritedSize[0x0468])
	 */
	class UAIFwInfluenceMapLayoutRenderingComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_RNMN[0x8];                                   // 0x0468(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwInfluenceMapManager
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UAIFwInfluenceMapManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_A3S2[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UAIFwInfluenceMapLayer*>         Layers;                                                  // 0x0038(0x0050) Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TIHH[0x50];                                  // 0x0088(0x0050) MISSED OFFSET (PADDING)

	public:
		class UAIFwInfluenceMapLayer* CreateOrGetLayer(class UObject* WorldContextObject, const class FString& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwNavigationSystem
	 * Size -> 0x0010 (FullSize[0x15F0] - InheritedSize[0x15E0])
	 */
	class UAIFwNavigationSystem : public UNavigationSystemV1
	{
	public:
		unsigned char                                              UnknownData_GVZS[0x10];                                  // 0x15E0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwNavVolume
	 * Size -> 0x0050 (FullSize[0x0480] - InheritedSize[0x0430])
	 */
	class AAIFwNavVolume : public ANavigationData
	{
	public:
		bool                                                       bDrawWallVoxels : 1;                                     // 0x0430(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawEmptyVoxels : 1;                                    // 0x0430(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLightDrawMode : 1;                                      // 0x0430(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoUpdateRenderTarget : 1;                             // 0x0430(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUGJ[0x3];                                   // 0x0431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VoxelSize;                                               // 0x0434(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultDrawDistance;                                     // 0x0438(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultMaxSearchNodes;                                   // 0x043C(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoFullyAsyncNavDataGathering : 1;                       // 0x0440(0x0001) BIT_FIELD Edit, Config, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EV66[0x3];                                   // 0x0441(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumEmptyVoxels;                                          // 0x0444(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumWallVoxels;                                           // 0x0448(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8NWY[0x24];                                  // 0x044C(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeuristicScale;                                          // 0x0470(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O60B[0xC];                                   // 0x0474(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwNavVolumeBoundsVolume
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class AAIFwNavVolumeBoundsVolume : public AVolume
	{
	public:
		struct FNavAgentSelector                                   SupportedAgents;                                         // 0x0260(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8K65[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwNavVolumeRenderingComponent
	 * Size -> 0x0018 (FullSize[0x0480] - InheritedSize[0x0468])
	 */
	class UAIFwNavVolumeRenderingComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_TEUD[0x8];                                   // 0x0468(0x0008) Fix Super Size
		unsigned char                                              UnknownData_WMDK[0x10];                                  // 0x0470(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwNavVolumeTestingActor
	 * Size -> 0x0008 (FullSize[0x0320] - InheritedSize[0x0318])
	 */
	class AAIFwNavVolumeTestingActor : public ANavigationTestingActor
	{
	public:
		bool                                                       bWantsStringPulling : 1;                                 // 0x0318(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsShortcutPath : 1;                                  // 0x0318(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMWL[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPerceptionComponent
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class UAIFwPerceptionComponent : public UActorComponent
	{
	public:
		TArray<struct FAIFwParameterizedBTRequest>                 PerceptionTrees;                                         // 0x00B8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K83B[0x18];                                  // 0x00C8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetSenseEnabled(const class FString& Tag, bool bEnabled);
		int32_t GetSensedActorsCount();
		TArray<class AActor*> GetSensedActors(const class FString& Tag);
		void ClearSensedActors();
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UAIFwPerceptionTreeInstanceBlueprintWrapper : public UObject
	{
	public:
		unsigned char                                              UnknownData_LHR3[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFinishedDelegate;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected

	public:
		class UAIFwPerceptionTreeInstanceBlueprintWrapper* RunPerceptionTree(class AActor* Target, class UAIFwBehaviorTree* Template);
		class UAIFwPerceptionTreeInstanceBlueprintWrapper* RunInstantPerceptionTree(class AActor* Target, class UAIFwBehaviorTree* Template);
		class UAIFwPerceptionTreeInstanceBlueprintWrapper* RunInstantParameterizedPerceptionTreeRandom(class AActor* Target, const struct FAIFwParameterizedBTRequest& Query, int32_t MaxCount);
		class UAIFwPerceptionTreeInstanceBlueprintWrapper* RunInstantParameterizedPerceptionTree(class AActor* Target, const struct FAIFwParameterizedBTRequest& Query, int32_t MaxCount);
		TArray<struct FVector> GetResultsAsLocations();
		TArray<class AActor*> GetResultsAsActors();
		int32_t GetResultCount();
		void AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature(class UAIFwPerceptionTreeInstanceBlueprintWrapper* QueryInstance);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTCriterionNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAIFwPTCriterionNode : public UAIFwNodeBase
	{
	public:
		EPTCriterionSlot                                           CriterionSlot;                                           // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8R9P[0xF];                                   // 0x0031(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTCriterionActorsOfClass
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAIFwPTCriterionActorsOfClass : public UAIFwPTCriterionNode
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTCriterionSquadMember
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAIFwPTCriterionSquadMember : public UAIFwPTCriterionNode
	{
	public:
		bool                                                       IgnoreSelf;                                              // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CCJ5[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTCriterionSquadMemberDestinations
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UAIFwPTCriterionSquadMemberDestinations : public UAIFwPTCriterionNode
	{
	public:
		bool                                                       IgnoreSelf;                                              // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0BLI[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTEvaluationNode
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAIFwPTEvaluationNode : public UAIFwNodeBase
	{
	public:
		bool                                                       Filter;                                                  // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Score;                                                   // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPTEvalOperation                                           AdditionalOperation;                                     // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9GSA[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AdditionalScale;                                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HREC[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTEvaluationNodeUseCriterion
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UAIFwPTEvaluationNodeUseCriterion : public UAIFwPTEvaluationNode
	{
	public:
		bool                                                       AllPath;                                                 // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPTEvalScoreType                                           ScoreType;                                               // 0x0049(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8XGJ[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTEvaluationInfluence
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UAIFwPTEvaluationInfluence : public UAIFwPTEvaluationNodeUseCriterion
	{
	public:
		class FString                                              LayerName;                                               // 0x0050(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinValue;                                                // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxValue;                                                // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTEvaluationNavMeshRaycast
	 * Size -> 0x0010 (FullSize[0x0060] - InheritedSize[0x0050])
	 */
	class UAIFwPTEvaluationNavMeshRaycast : public UAIFwPTEvaluationNodeUseCriterion
	{
	public:
		class UClass*                                              FilterClass;                                             // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Acceptance;                                              // 0x0058(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I676[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTEvaluationPathfinding
	 * Size -> 0x0020 (FullSize[0x0070] - InheritedSize[0x0050])
	 */
	class UAIFwPTEvaluationPathfinding : public UAIFwPTEvaluationNodeUseCriterion
	{
	public:
		EAIFwPTEvalPathfindingMode                                 Mode;                                                    // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O92V[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FilterClass;                                             // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       PathFromCriterion;                                       // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NZI8[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinValue;                                                // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxValue;                                                // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Acceptance;                                              // 0x006C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RKR5[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTEvaluationTrace
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UAIFwPTEvaluationTrace : public UAIFwPTEvaluationNodeUseCriterion
	{
	public:
		float                                                      Extent;                                                  // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       TraceFromCriterion;                                      // 0x0054(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9GTE[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ItemHeightOffset;                                        // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CriterionHeightOffset;                                   // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       Acceptance;                                              // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YUM2[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTGenerationNode
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UAIFwPTGenerationNode : public UAIFwNodeBase
	{
	public:
		unsigned char                                              UnknownData_FH0B[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTGenerationPointsAlongPath
	 * Size -> 0x0038 (FullSize[0x0078] - InheritedSize[0x0040])
	 */
	class UAIFwPTGenerationPointsAlongPath : public UAIFwPTGenerationNode
	{
	public:
		EPTCriterionSlot                                           PathStart;                                               // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPTCriterionSlot                                           PathGoal;                                                // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8NPM[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIFwBTNodePropertyFloat                            Offset;                                                  // 0x0048(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyFloat                            StepSize;                                                // 0x0060(0x0018) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTModificationNode
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAIFwPTModificationNode : public UAIFwNodeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTModificationProjectOnGeometry
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UAIFwPTModificationProjectOnGeometry : public UAIFwPTModificationNode
	{
	public:
		struct FAIFwBTNodePropertyFloat                            Extent;                                                  // 0x0030(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyFloat                            ProjectDown;                                             // 0x0048(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyFloat                            ProjectUp;                                               // 0x0060(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyFloat                            PostProjectionVerticalOffset;                            // 0x0078(0x0018) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTModificationProjectOnNavMesh
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UAIFwPTModificationProjectOnNavMesh : public UAIFwPTModificationNode
	{
	public:
		struct FAIFwBTNodePropertyFloat                            Extent;                                                  // 0x0030(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyFloat                            ProjectDown;                                             // 0x0048(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyFloat                            ProjectUp;                                               // 0x0060(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyFloat                            PostProjectionVerticalOffset;                            // 0x0078(0x0018) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTSenseFilterNode
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAIFwPTSenseFilterNode : public UAIFwNodeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTSenseNode
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UAIFwPTSenseNode : public UAIFwNodeBase
	{
	public:
		bool                                                       IsEnabledAtStart;                                        // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDetectHostile;                                         // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7S8B[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinHostileLevel;                                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDetectNeutral;                                         // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsDetectFriendly;                                        // 0x0039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGYL[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinFriendlyLevel;                                        // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAwareness;                                            // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackTime;                                              // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReleaseTime;                                             // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZ06[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      SenseTags;                                               // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwPTSenseSight
	 * Size -> 0x0048 (FullSize[0x00A8] - InheritedSize[0x0060])
	 */
	class UAIFwPTSenseSight : public UAIFwPTSenseNode
	{
	public:
		struct FAIFwBTNodePropertyFloat                            SightRange;                                              // 0x0060(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyFloat                            LoseSightRange;                                          // 0x0078(0x0018) Edit, Protected, NativeAccessSpecifierProtected
		struct FAIFwBTNodePropertyFloat                            VisionAngle;                                             // 0x0090(0x0018) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwReactiveComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UAIFwReactiveComponent : public UActorComponent
	{
	public:
		TArray<class UClass*>                                      SkillClasses;                                            // 0x00B8(0x0010) Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UAIFwReactiveSkill*>                          Skills;                                                  // 0x00C8(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected

	public:
		void AddSkill(class UClass* Skill);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwReactiveSkill
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UAIFwReactiveSkill : public UObject
	{
	public:
		unsigned char                                              UnknownData_8II8[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIFwReactiveComponent*                              OwnerComp;                                               // 0x0030(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AAIController*                                       OwnerAI;                                                 // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class FName>                                        SkillTags;                                               // 0x0040(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LXTL[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAutoActivate : 1;                                       // 0x0060(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_160K[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		void RunAITask(class UAITask* Task);
		class UAITask* NewAITask(class UClass* TaskClass, EAITaskPriority InPriority);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwReactiveSkill_Message
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UAIFwReactiveSkill_Message : public UAIFwReactiveSkill
	{
	public:
		class FName                                                Message;                                                 // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Delay;                                                   // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowMultipleRunning : 1;                               // 0x0074(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4TP5[0x1B];                                  // 0x0075(0x001B) MISSED OFFSET (PADDING)

	public:
		void ReceivePulse(class UObject* Sender, bool bSuccess);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwReactiveSkill_PerceptionTree
	 * Size -> 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
	 */
	class UAIFwReactiveSkill_PerceptionTree : public UAIFwReactiveSkill
	{
	public:
		class UAIFwBehaviorTree*                                   PerceptionTree;                                          // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Delay;                                                   // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowMultipleRunning : 1;                               // 0x0074(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IR63[0x33];                                  // 0x0075(0x0033) MISSED OFFSET (PADDING)

	public:
		void ReceiveOnPerceive();
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwReactiveSkill_SensedTarget
	 * Size -> 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
	 */
	class UAIFwReactiveSkill_SensedTarget : public UAIFwReactiveSkill
	{
	public:
		float                                                      Awareness;                                               // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Delay;                                                   // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowMultipleRunning : 1;                               // 0x0070(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T9GY[0x1F];                                  // 0x0071(0x001F) MISSED OFFSET (PADDING)

	public:
		void ReceiveOnSensed(class AActor* Target);
		void ReceiveOnLost(class AActor* Target);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwReactiveSkill_TakeDamage
	 * Size -> 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
	 */
	class UAIFwReactiveSkill_TakeDamage : public UAIFwReactiveSkill
	{
	public:
		float                                                      Delay;                                                   // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowMultipleRunning : 1;                               // 0x006C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2AMT[0x1B];                                  // 0x006D(0x001B) MISSED OFFSET (PADDING)

	public:
		void TakePointDamageImpl(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser);
		void TakeAnyDamageImpl(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser);
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwRuntimeSettings
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UAIFwRuntimeSettings : public UObject
	{
	public:
		struct FSoftClassPath                                      DefaultAIDirectorClass;                                  // 0x0028(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAIFwFactionSettings>                        Factions;                                                // 0x0040(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FAIFwSmartObjectUserSettings>                SmartObjectUsers;                                        // 0x0050(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		struct FNavAgentSelector                                   BaseNavMesh;                                             // 0x0060(0x0004) Edit, Config, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CellSize;                                                // 0x0064(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CellHeight;                                              // 0x0068(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZW90[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  InfluenceMapLayerMaterial;                               // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     InfluenceMapLayerMaterialName;                           // 0x0078(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnNavigationGenerationFinished(class ANavigationData* NavData);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwSensorySystem
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UAIFwSensorySystem : public UObject
	{
	public:
		unsigned char                                              UnknownData_E1Z3[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwSmartObjectAction
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIFwSmartObjectAction : public UObject
	{
	public:
		class UAIFwSmartObjectComponent*                           OwnerComp;                                               // 0x0028(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HWRG[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwSmartObjectAction_BehaviorTree
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	class UAIFwSmartObjectAction_BehaviorTree : public UAIFwSmartObjectAction
	{
	public:
		struct FAIFwParameterizedBTRequest                         BehaviorTree;                                            // 0x0040(0x0018) Edit, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwSmartObjectActionUE4
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class UAIFwSmartObjectActionUE4 : public UAIFwSmartObjectAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwSmartObjectComponent
	 * Size -> 0x0020 (FullSize[0x00D8] - InheritedSize[0x00B8])
	 */
	class UAIFwSmartObjectComponent : public UActorComponent
	{
	public:
		TArray<struct FAIFwSmartObjectEvent>                       Events;                                                  // 0x00B8(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bUseCapacity : 1;                                        // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RSET[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   Capacity;                                                // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_09DM[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (PADDING)

	public:
		bool Use(class AActor* User, const class FString& Usage, int32_t EventId);
		int32_t FindEvent(class AActor* User, const class FString& Usage);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwSmartObjectCondition
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UAIFwSmartObjectCondition : public UObject
	{
	public:
		class UAIFwSmartObjectComponent*                           OwnerComp;                                               // 0x0028(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N2EE[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwSmartObjectUserComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UAIFwSmartObjectUserComponent : public UActorComponent
	{
	public:
		struct FAIFwSmartObjectUserSelector                        UserType;                                                // 0x00B8(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PC61[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwStimuliSourceComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UAIFwStimuliSourceComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_MKS3[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bVisible : 1;                                            // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WKJ0[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetVisibility(bool bNewVisible);
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwSubsystem
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UAIFwSubsystem : public UTickableWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_7R25[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AIFramework.AIFwSystem
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UAIFwSystem : public UObject
	{
	public:
		unsigned char                                              UnknownData_BUNV[0x68];                                  // 0x0028(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIFwSensorySystem*                                  SensorySystem;                                           // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIFwInfluenceMapManager*                            InfluenceMapManager;                                     // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AAIFwAIDirector*                                     AIDirector;                                              // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5F6[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnEntityEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason);
		void OnEntityDestroyed(class AActor* Actor);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
