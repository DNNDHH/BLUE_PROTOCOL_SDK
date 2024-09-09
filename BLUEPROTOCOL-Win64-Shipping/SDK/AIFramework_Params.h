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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function AIFramework.AIFwAIDirector.ReceiveOnActorSpawned
	 */
	struct AAIFwAIDirector_ReceiveOnActorSpawned_Params
	{
	public:
		class AActor*                                              SpawnedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsVectorArray
	 */
	struct UAIFwBlackboardBlueprintLibrary_SetValueAsVectorArray_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     VectorArray;                                             // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsVector
	 */
	struct UAIFwBlackboardBlueprintLibrary_SetValueAsVector_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             VectorValue;                                             // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsString
	 */
	struct UAIFwBlackboardBlueprintLibrary_SetValueAsString_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StringValue;                                             // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsObjectArray
	 */
	struct UAIFwBlackboardBlueprintLibrary_SetValueAsObjectArray_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     ObjectArray;                                             // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsObject
	 */
	struct UAIFwBlackboardBlueprintLibrary_SetValueAsObject_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ObjectValue;                                             // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsName
	 */
	struct UAIFwBlackboardBlueprintLibrary_SetValueAsName_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NameValue;                                               // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsInt
	 */
	struct UAIFwBlackboardBlueprintLibrary_SetValueAsInt_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    IntValue;                                                // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsFloat
	 */
	struct UAIFwBlackboardBlueprintLibrary_SetValueAsFloat_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FloatValue;                                              // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsClass
	 */
	struct UAIFwBlackboardBlueprintLibrary_SetValueAsClass_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ClassValue;                                              // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsBool
	 */
	struct UAIFwBlackboardBlueprintLibrary_SetValueAsBool_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       BoolValue;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.IsValidKey
	 */
	struct UAIFwBlackboardBlueprintLibrary_IsValidKey_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsVectorArray
	 */
	struct UAIFwBlackboardBlueprintLibrary_GetValueAsVectorArray_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsVector
	 */
	struct UAIFwBlackboardBlueprintLibrary_GetValueAsVector_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsString
	 */
	struct UAIFwBlackboardBlueprintLibrary_GetValueAsString_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsObjectArray
	 */
	struct UAIFwBlackboardBlueprintLibrary_GetValueAsObjectArray_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsObject
	 */
	struct UAIFwBlackboardBlueprintLibrary_GetValueAsObject_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsName
	 */
	struct UAIFwBlackboardBlueprintLibrary_GetValueAsName_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsInt
	 */
	struct UAIFwBlackboardBlueprintLibrary_GetValueAsInt_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsFloat
	 */
	struct UAIFwBlackboardBlueprintLibrary_GetValueAsFloat_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsClass
	 */
	struct UAIFwBlackboardBlueprintLibrary_GetValueAsClass_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsBool
	 */
	struct UAIFwBlackboardBlueprintLibrary_GetValueAsBool_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardBlueprintLibrary.ClearValue
	 */
	struct UAIFwBlackboardBlueprintLibrary_ClearValue_Params
	{
	public:
		struct FAIFwBlackboard                                     Blackboard;                                              // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              KeyName;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsVectorArray
	 */
	struct UAIFwBlackboardComponent_SetValueAsVectorArray_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     VectorArray;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsVector
	 */
	struct UAIFwBlackboardComponent_SetValueAsVector_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             VectorValue;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsString
	 */
	struct UAIFwBlackboardComponent_SetValueAsString_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              StringValue;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsRotator
	 */
	struct UAIFwBlackboardComponent_SetValueAsRotator_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            VectorValue;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsObjectArray
	 */
	struct UAIFwBlackboardComponent_SetValueAsObjectArray_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     ObjectArray;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsObject
	 */
	struct UAIFwBlackboardComponent_SetValueAsObject_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ObjectValue;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsName
	 */
	struct UAIFwBlackboardComponent_SetValueAsName_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                NameValue;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsIntArray
	 */
	struct UAIFwBlackboardComponent_SetValueAsIntArray_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            IntArray;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsInt
	 */
	struct UAIFwBlackboardComponent_SetValueAsInt_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    IntValue;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsFloat
	 */
	struct UAIFwBlackboardComponent_SetValueAsFloat_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FloatValue;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsEnum
	 */
	struct UAIFwBlackboardComponent_SetValueAsEnum_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              EnumValue;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsClass
	 */
	struct UAIFwBlackboardComponent_SetValueAsClass_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ClassValue;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.SetValueAsBool
	 */
	struct UAIFwBlackboardComponent_SetValueAsBool_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       BoolValue;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.IsValidKey
	 */
	struct UAIFwBlackboardComponent_IsValidKey_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsVectorArray
	 */
	struct UAIFwBlackboardComponent_GetValueAsVectorArray_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsVector
	 */
	struct UAIFwBlackboardComponent_GetValueAsVector_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsString
	 */
	struct UAIFwBlackboardComponent_GetValueAsString_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsRotator
	 */
	struct UAIFwBlackboardComponent_GetValueAsRotator_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsRotation
	 */
	struct UAIFwBlackboardComponent_GetValueAsRotation_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsObjectArray
	 */
	struct UAIFwBlackboardComponent_GetValueAsObjectArray_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UObject*>                                     ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsObject
	 */
	struct UAIFwBlackboardComponent_GetValueAsObject_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsName
	 */
	struct UAIFwBlackboardComponent_GetValueAsName_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsLocation
	 */
	struct UAIFwBlackboardComponent_GetValueAsLocation_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsIntArray
	 */
	struct UAIFwBlackboardComponent_GetValueAsIntArray_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsInt
	 */
	struct UAIFwBlackboardComponent_GetValueAsInt_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsFloat
	 */
	struct UAIFwBlackboardComponent_GetValueAsFloat_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsEnum
	 */
	struct UAIFwBlackboardComponent_GetValueAsEnum_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsClass
	 */
	struct UAIFwBlackboardComponent_GetValueAsClass_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.GetValueAsBool
	 */
	struct UAIFwBlackboardComponent_GetValueAsBool_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.ClearValue
	 */
	struct UAIFwBlackboardComponent_ClearValue_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlackboardComponent.BindToUE4Blackboard
	 */
	struct UAIFwBlackboardComponent_BindToUE4Blackboard_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBlackboardComponent*                                OtherBlackboard;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                OtherKeyName;                                            // 0x0018(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlueprintLibrary.RunAIFwBehaviorTree
	 */
	struct UAIFwBlueprintLibrary_RunAIFwBehaviorTree_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwBehaviorTree*                                   BehaviorTree;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLooping;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlueprintLibrary.MultipleClothoidInterpRad
	 */
	struct UAIFwBlueprintLibrary_MultipleClothoidInterpRad_Params
	{
	public:
		struct FVector2D                                           StartPosition;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartAngle;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartCurvature;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           EndPosition;                                             // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndAngle;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndCurvature;                                            // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIFwMultipleClothoidSegment                        ReturnValue;                                             // 0x0020(0x0038)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlueprintLibrary.MultipleClothoidInterp
	 */
	struct UAIFwBlueprintLibrary_MultipleClothoidInterp_Params
	{
	public:
		struct FVector2D                                           StartPosition;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartAngle;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartCurvature;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           EndPosition;                                             // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndAngle;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndCurvature;                                            // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIFwMultipleClothoidSegment                        ReturnValue;                                             // 0x0020(0x0038)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlueprintLibrary.Hash32
	 */
	struct UAIFwBlueprintLibrary_Hash32_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlueprintLibrary.GetMultipleClothoidLocationAtTime
	 */
	struct UAIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime_Params
	{
	public:
		struct FAIFwMultipleClothoidSegment                        Segment;                                                 // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x003C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlueprintLibrary.GetFactionRelation
	 */
	struct UAIFwBlueprintLibrary_GetFactionRelation_Params
	{
	public:
		class AActor*                                              From;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              To;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlueprintLibrary.GetClothoidLocationAtTime
	 */
	struct UAIFwBlueprintLibrary_GetClothoidLocationAtTime_Params
	{
	public:
		struct FAIFwClothoidSegment                                Segment;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Time;                                                    // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x001C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlueprintLibrary.GetAIFwBlackboard
	 */
	struct UAIFwBlueprintLibrary_GetAIFwBlackboard_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwBlackboardComponent*                            ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlueprintLibrary.GetAIDirector
	 */
	struct UAIFwBlueprintLibrary_GetAIDirector_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AAIFwAIDirector*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlueprintLibrary.ClothoidInterpRad
	 */
	struct UAIFwBlueprintLibrary_ClothoidInterpRad_Params
	{
	public:
		struct FVector2D                                           StartPosition;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartAngle;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           EndPosition;                                             // 0x000C(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndAngle;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIFwClothoidSegment                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwBlueprintLibrary.ClothoidInterp
	 */
	struct UAIFwBlueprintLibrary_ClothoidInterp_Params
	{
	public:
		struct FVector2D                                           StartPosition;                                           // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartAngle;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           EndPosition;                                             // 0x000C(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndAngle;                                                // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIFwClothoidSegment                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwFactionComponent.OnRep_FactionNameString
	 */
	struct UAIFwFactionComponent_OnRep_FactionNameString_Params
	{	};

	/**
	 * Function AIFramework.AIFwHierarchyComponent.SendMessageToSiblings
	 */
	struct UAIFwHierarchyComponent_SendMessageToSiblings_Params
	{
	public:
		class FName                                                Message;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             MessageSource;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHierarchyComponent.SendMessageToParent
	 */
	struct UAIFwHierarchyComponent_SendMessageToParent_Params
	{
	public:
		class FName                                                Message;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             MessageSource;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHierarchyComponent.SendMessageToChildren
	 */
	struct UAIFwHierarchyComponent_SendMessageToChildren_Params
	{
	public:
		class FName                                                Message;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             MessageSource;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ARMA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              IgnoreActor;                                             // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHierarchyComponent.Remove
	 */
	struct UAIFwHierarchyComponent_Remove_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHierarchyComponent.Add
	 */
	struct UAIFwHierarchyComponent_Add_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometimeBefore
	 */
	struct UAIFwHTNBlueprintLibrary_HTNSometimeBefore_Params
	{
	public:
		class UAIFwHTNOperator*                                    OperatorA;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNOperator*                                    OperatorB;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNTempOp_SometimeBefore*                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometimeAfter
	 */
	struct UAIFwHTNBlueprintLibrary_HTNSometimeAfter_Params
	{
	public:
		class UAIFwHTNOperator*                                    OperatorA;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNOperator*                                    OperatorB;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNTempOp_SometimeAfter*                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometime
	 */
	struct UAIFwHTNBlueprintLibrary_HTNSometime_Params
	{
	public:
		class UAIFwHTNOperator*                                    Operator;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNTempOp_Sometime*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNBlueprintLibrary.HTNOccur
	 */
	struct UAIFwHTNBlueprintLibrary_HTNOccur_Params
	{
	public:
		class FString                                              TaskName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNOperator_Occur*                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNBlueprintLibrary.HTNNot
	 */
	struct UAIFwHTNBlueprintLibrary_HTNNot_Params
	{
	public:
		class UAIFwHTNOperator*                                    Operator;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNOperator_Not*                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNBlueprintLibrary.HTNApply
	 */
	struct UAIFwHTNBlueprintLibrary_HTNApply_Params
	{
	public:
		class FString                                              TaskName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MethodName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNOperator_Apply*                              ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlwaysBefore
	 */
	struct UAIFwHTNBlueprintLibrary_HTNAlwaysBefore_Params
	{
	public:
		class UAIFwHTNOperator*                                    OperatorA;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNOperator*                                    OperatorB;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNTempOp_AlwaysBefore*                         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlwaysAfter
	 */
	struct UAIFwHTNBlueprintLibrary_HTNAlwaysAfter_Params
	{
	public:
		class UAIFwHTNOperator*                                    OperatorA;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNOperator*                                    OperatorB;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNTempOp_AlwaysAfter*                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlways
	 */
	struct UAIFwHTNBlueprintLibrary_HTNAlways_Params
	{
	public:
		class UAIFwHTNOperator*                                    Operator;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNTempOp_Always*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNPlanningComponent.SetName
	 */
	struct UAIFwHTNPlanningComponent_SetName_Params
	{
	public:
		struct FAIFwHTNMethod                                      Method;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNPlanningComponent.IsValidTask
	 */
	struct UAIFwHTNPlanningComponent_IsValidTask_Params
	{
	public:
		struct FAIFwHTNTask                                        Task;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNPlanningComponent.IsValidMethod
	 */
	struct UAIFwHTNPlanningComponent_IsValidMethod_Params
	{
	public:
		struct FAIFwHTNMethod                                      Method;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNPlanningComponent.FindTask
	 */
	struct UAIFwHTNPlanningComponent_FindTask_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIFwHTNTask                                        ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNPlanningComponent.FindMethodByName
	 */
	struct UAIFwHTNPlanningComponent_FindMethodByName_Params
	{
	public:
		struct FAIFwHTNTask                                        Task;                                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIFwHTNMethod                                      ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNPlanningComponent.FindMethod
	 */
	struct UAIFwHTNPlanningComponent_FindMethod_Params
	{
	public:
		class FString                                              TaskName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MethodName;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIFwHTNMethod                                      ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNPlanningComponent.AppendDomain
	 */
	struct UAIFwHTNPlanningComponent_AppendDomain_Params
	{
	public:
		class UAIFwHTNDomain*                                      NewDomain;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOverrideCompound;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNPlanningComponent.AddTrajectoryPreference
	 */
	struct UAIFwHTNPlanningComponent_AddTrajectoryPreference_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNTemporalModalOperator*                       TemporalOperator;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHardConstraint;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNPlanningComponent.AddPreconditionPreference
	 */
	struct UAIFwHTNPlanningComponent_AddPreconditionPreference_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              TaskName;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              MethodName;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNOperator*                                    Operator;                                                // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHardConstraint;                                         // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNPlanningComponent.AddMetricWeight
	 */
	struct UAIFwHTNPlanningComponent_AddMetricWeight_Params
	{
	public:
		class FString                                              PreferenceName;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Weight;                                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNPlanningComponent.AddGoalPreference
	 */
	struct UAIFwHTNPlanningComponent_AddGoalPreference_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwHTNOperator*                                    Operator;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHardConstraint;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNState.SetValueAsInt
	 */
	struct UAIFwHTNState_SetValueAsInt_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    IntValue;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNState.SetValueAsFloat
	 */
	struct UAIFwHTNState_SetValueAsFloat_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FloatValue;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNState.SetValueAsEnum
	 */
	struct UAIFwHTNState_SetValueAsEnum_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              EnumValue;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNState.SetValueAsBool
	 */
	struct UAIFwHTNState_SetValueAsBool_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       BoolValue;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNState.IsValidKey
	 */
	struct UAIFwHTNState_IsValidKey_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNState.GetValueAsInt
	 */
	struct UAIFwHTNState_GetValueAsInt_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNState.GetValueAsFloat
	 */
	struct UAIFwHTNState_GetValueAsFloat_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNState.GetValueAsEnum
	 */
	struct UAIFwHTNState_GetValueAsEnum_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwHTNState.GetValueAsBool
	 */
	struct UAIFwHTNState_GetValueAsBool_Params
	{
	public:
		class FString                                              KeyName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwInfluenceMapLayer.RegisterSource
	 */
	struct UAIFwInfluenceMapLayer_RegisterSource_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwInfluenceMapManager.CreateOrGetLayer
	 */
	struct UAIFwInfluenceMapManager_CreateOrGetLayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwInfluenceMapLayer*                              ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwPerceptionComponent.SetSenseEnabled
	 */
	struct UAIFwPerceptionComponent_SetSenseEnabled_Params
	{
	public:
		class FString                                              Tag;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnabled;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwPerceptionComponent.GetSensedActorsCount
	 */
	struct UAIFwPerceptionComponent_GetSensedActorsCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwPerceptionComponent.GetSensedActors
	 */
	struct UAIFwPerceptionComponent_GetSensedActors_Params
	{
	public:
		class FString                                              Tag;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwPerceptionComponent.ClearSensedActors
	 */
	struct UAIFwPerceptionComponent_ClearSensedActors_Params
	{	};

	/**
	 * Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunPerceptionTree
	 */
	struct UAIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwBehaviorTree*                                   Template;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwPerceptionTreeInstanceBlueprintWrapper*         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantPerceptionTree
	 */
	struct UAIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwBehaviorTree*                                   Template;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIFwPerceptionTreeInstanceBlueprintWrapper*         ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantParameterizedPerceptionTreeRandom
	 */
	struct UAIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIFwParameterizedBTRequest                         Query;                                                   // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    MaxCount;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GHGO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAIFwPerceptionTreeInstanceBlueprintWrapper*         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantParameterizedPerceptionTree
	 */
	struct UAIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAIFwParameterizedBTRequest                         Query;                                                   // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    MaxCount;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G4C2[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAIFwPerceptionTreeInstanceBlueprintWrapper*         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultsAsLocations
	 */
	struct UAIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsLocations_Params
	{
	public:
		TArray<struct FVector>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultsAsActors
	 */
	struct UAIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultCount
	 */
	struct UAIFwPerceptionTreeInstanceBlueprintWrapper_GetResultCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature
	 */
	struct UAIFwPerceptionTreeInstanceBlueprintWrapper_AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature_Params
	{
	public:
		class UAIFwPerceptionTreeInstanceBlueprintWrapper*         QueryInstance;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwReactiveComponent.AddSkill
	 */
	struct UAIFwReactiveComponent_AddSkill_Params
	{
	public:
		class UClass*                                              Skill;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwReactiveSkill.RunAITask
	 */
	struct UAIFwReactiveSkill_RunAITask_Params
	{
	public:
		class UAITask*                                             Task;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwReactiveSkill.NewAITask
	 */
	struct UAIFwReactiveSkill_NewAITask_Params
	{
	public:
		class UClass*                                              TaskClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAITaskPriority                                            InPriority;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R1HL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAITask*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwReactiveSkill_Message.ReceivePulse
	 */
	struct UAIFwReactiveSkill_Message_ReceivePulse_Params
	{
	public:
		class UObject*                                             Sender;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwReactiveSkill_PerceptionTree.ReceiveOnPerceive
	 */
	struct UAIFwReactiveSkill_PerceptionTree_ReceiveOnPerceive_Params
	{	};

	/**
	 * Function AIFramework.AIFwReactiveSkill_SensedTarget.ReceiveOnSensed
	 */
	struct UAIFwReactiveSkill_SensedTarget_ReceiveOnSensed_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwReactiveSkill_SensedTarget.ReceiveOnLost
	 */
	struct UAIFwReactiveSkill_SensedTarget_ReceiveOnLost_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwReactiveSkill_TakeDamage.TakePointDamageImpl
	 */
	struct UAIFwReactiveSkill_TakeDamage_TakePointDamageImpl_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y97C[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EGUP[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0028(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ShotFromDirection;                                       // 0x0038(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I9KZ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0048(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwReactiveSkill_TakeDamage.TakeAnyDamageImpl
	 */
	struct UAIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl_Params
	{
	public:
		class AActor*                                              DamagedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K7W3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         InstigatedBy;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwReactiveSkill_TakeDamage.ReceivePointDamage
	 */
	struct UAIFwReactiveSkill_TakeDamage_ReceivePointDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X4BX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7DC6[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0020(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ShotFromDirection;                                       // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ICVU[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AController*                                         InstigatedBy;                                            // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwReactiveSkill_TakeDamage.ReceiveAnyDamage
	 */
	struct UAIFwReactiveSkill_TakeDamage_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1QQQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwRuntimeSettings.OnNavigationGenerationFinished
	 */
	struct UAIFwRuntimeSettings_OnNavigationGenerationFinished_Params
	{
	public:
		class ANavigationData*                                     NavData;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwSmartObjectComponent.Use
	 */
	struct UAIFwSmartObjectComponent_Use_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Usage;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    EventId;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwSmartObjectComponent.FindEvent
	 */
	struct UAIFwSmartObjectComponent_FindEvent_Params
	{
	public:
		class AActor*                                              User;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Usage;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwStimuliSourceComponent.SetVisibility
	 */
	struct UAIFwStimuliSourceComponent_SetVisibility_Params
	{
	public:
		bool                                                       bNewVisible;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwSystem.OnEntityEndPlay
	 */
	struct UAIFwSystem_OnEntityEndPlay_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EEndPlayReason                                             EndPlayReason;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function AIFramework.AIFwSystem.OnEntityDestroyed
	 */
	struct UAIFwSystem_OnEntityDestroyed_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
