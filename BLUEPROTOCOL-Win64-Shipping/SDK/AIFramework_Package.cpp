/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwAIDirector.ReceiveOnActorSpawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AAIFwAIDirector::ReceiveOnActorSpawned(class AActor* SpawnedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwAIDirector.ReceiveOnActorSpawned");
		
		AAIFwAIDirector_ReceiveOnActorSpawned_Params params {};
		params.SpawnedActor = SpawnedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIFwAIDirector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIFwAIDirector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwAIDirector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwAITask_TeleportTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwAITask_TeleportTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwAITask_TeleportTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwNodeBasedAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwNodeBasedAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwNodeBasedAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBehaviorTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBehaviorTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBehaviorTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsVectorArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             VectorArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardBlueprintLibrary::SetValueAsVectorArray(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, TArray<struct FVector> VectorArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsVectorArray");
		
		UAIFwBlackboardBlueprintLibrary_SetValueAsVectorArray_Params params {};
		params.KeyName = KeyName;
		params.VectorArray = VectorArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blackboard != nullptr)
			*Blackboard = params.Blackboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     VectorValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardBlueprintLibrary::SetValueAsVector(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const struct FVector& VectorValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsVector");
		
		UAIFwBlackboardBlueprintLibrary_SetValueAsVector_Params params {};
		params.KeyName = KeyName;
		params.VectorValue = VectorValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blackboard != nullptr)
			*Blackboard = params.Blackboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardBlueprintLibrary::SetValueAsString(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const class FString& StringValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsString");
		
		UAIFwBlackboardBlueprintLibrary_SetValueAsString_Params params {};
		params.KeyName = KeyName;
		params.StringValue = StringValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blackboard != nullptr)
			*Blackboard = params.Blackboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsObjectArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UObject*>                             ObjectArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardBlueprintLibrary::SetValueAsObjectArray(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, TArray<class UObject*> ObjectArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsObjectArray");
		
		UAIFwBlackboardBlueprintLibrary_SetValueAsObjectArray_Params params {};
		params.KeyName = KeyName;
		params.ObjectArray = ObjectArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blackboard != nullptr)
			*Blackboard = params.Blackboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ObjectValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardBlueprintLibrary::SetValueAsObject(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, class UObject* ObjectValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsObject");
		
		UAIFwBlackboardBlueprintLibrary_SetValueAsObject_Params params {};
		params.KeyName = KeyName;
		params.ObjectValue = ObjectValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blackboard != nullptr)
			*Blackboard = params.Blackboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NameValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardBlueprintLibrary::SetValueAsName(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const class FName& NameValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsName");
		
		UAIFwBlackboardBlueprintLibrary_SetValueAsName_Params params {};
		params.KeyName = KeyName;
		params.NameValue = NameValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blackboard != nullptr)
			*Blackboard = params.Blackboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IntValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardBlueprintLibrary::SetValueAsInt(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, int32_t IntValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsInt");
		
		UAIFwBlackboardBlueprintLibrary_SetValueAsInt_Params params {};
		params.KeyName = KeyName;
		params.IntValue = IntValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blackboard != nullptr)
			*Blackboard = params.Blackboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FloatValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardBlueprintLibrary::SetValueAsFloat(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, float FloatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsFloat");
		
		UAIFwBlackboardBlueprintLibrary_SetValueAsFloat_Params params {};
		params.KeyName = KeyName;
		params.FloatValue = FloatValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blackboard != nullptr)
			*Blackboard = params.Blackboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ClassValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardBlueprintLibrary::SetValueAsClass(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, class UClass* ClassValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsClass");
		
		UAIFwBlackboardBlueprintLibrary_SetValueAsClass_Params params {};
		params.KeyName = KeyName;
		params.ClassValue = ClassValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blackboard != nullptr)
			*Blackboard = params.Blackboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               BoolValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardBlueprintLibrary::SetValueAsBool(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, bool BoolValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsBool");
		
		UAIFwBlackboardBlueprintLibrary_SetValueAsBool_Params params {};
		params.KeyName = KeyName;
		params.BoolValue = BoolValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blackboard != nullptr)
			*Blackboard = params.Blackboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.IsValidKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIFwBlackboardBlueprintLibrary::IsValidKey(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.IsValidKey");
		
		UAIFwBlackboardBlueprintLibrary_IsValidKey_Params params {};
		params.Blackboard = Blackboard;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsVectorArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> UAIFwBlackboardBlueprintLibrary::GetValueAsVectorArray(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsVectorArray");
		
		UAIFwBlackboardBlueprintLibrary_GetValueAsVectorArray_Params params {};
		params.Blackboard = Blackboard;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UAIFwBlackboardBlueprintLibrary::GetValueAsVector(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsVector");
		
		UAIFwBlackboardBlueprintLibrary_GetValueAsVector_Params params {};
		params.Blackboard = Blackboard;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAIFwBlackboardBlueprintLibrary::GetValueAsString(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsString");
		
		UAIFwBlackboardBlueprintLibrary_GetValueAsString_Params params {};
		params.Blackboard = Blackboard;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsObjectArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UObject*> UAIFwBlackboardBlueprintLibrary::GetValueAsObjectArray(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsObjectArray");
		
		UAIFwBlackboardBlueprintLibrary_GetValueAsObjectArray_Params params {};
		params.Blackboard = Blackboard;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UAIFwBlackboardBlueprintLibrary::GetValueAsObject(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsObject");
		
		UAIFwBlackboardBlueprintLibrary_GetValueAsObject_Params params {};
		params.Blackboard = Blackboard;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UAIFwBlackboardBlueprintLibrary::GetValueAsName(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsName");
		
		UAIFwBlackboardBlueprintLibrary_GetValueAsName_Params params {};
		params.Blackboard = Blackboard;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAIFwBlackboardBlueprintLibrary::GetValueAsInt(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsInt");
		
		UAIFwBlackboardBlueprintLibrary_GetValueAsInt_Params params {};
		params.Blackboard = Blackboard;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAIFwBlackboardBlueprintLibrary::GetValueAsFloat(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsFloat");
		
		UAIFwBlackboardBlueprintLibrary_GetValueAsFloat_Params params {};
		params.Blackboard = Blackboard;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UAIFwBlackboardBlueprintLibrary::GetValueAsClass(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsClass");
		
		UAIFwBlackboardBlueprintLibrary_GetValueAsClass_Params params {};
		params.Blackboard = Blackboard;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIFwBlackboardBlueprintLibrary::GetValueAsBool(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsBool");
		
		UAIFwBlackboardBlueprintLibrary_GetValueAsBool_Params params {};
		params.Blackboard = Blackboard;
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardBlueprintLibrary.ClearValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwBlackboard                             Blackboard                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardBlueprintLibrary::ClearValue(struct FAIFwBlackboard* Blackboard, const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardBlueprintLibrary.ClearValue");
		
		UAIFwBlackboardBlueprintLibrary_ClearValue_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Blackboard != nullptr)
			*Blackboard = params.Blackboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBlackboardBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBlackboardBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBlackboardBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsVectorArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             VectorArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsVectorArray(const class FString& KeyName, TArray<struct FVector> VectorArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsVectorArray");
		
		UAIFwBlackboardComponent_SetValueAsVectorArray_Params params {};
		params.KeyName = KeyName;
		params.VectorArray = VectorArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     VectorValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsVector(const class FString& KeyName, const struct FVector& VectorValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsVector");
		
		UAIFwBlackboardComponent_SetValueAsVector_Params params {};
		params.KeyName = KeyName;
		params.VectorValue = VectorValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsString(const class FString& KeyName, const class FString& StringValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsString");
		
		UAIFwBlackboardComponent_SetValueAsString_Params params {};
		params.KeyName = KeyName;
		params.StringValue = StringValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    VectorValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsRotator(const class FString& KeyName, const struct FRotator& VectorValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsRotator");
		
		UAIFwBlackboardComponent_SetValueAsRotator_Params params {};
		params.KeyName = KeyName;
		params.VectorValue = VectorValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsObjectArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UObject*>                             ObjectArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsObjectArray(const class FString& KeyName, TArray<class UObject*> ObjectArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsObjectArray");
		
		UAIFwBlackboardComponent_SetValueAsObjectArray_Params params {};
		params.KeyName = KeyName;
		params.ObjectArray = ObjectArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ObjectValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsObject(const class FString& KeyName, class UObject* ObjectValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsObject");
		
		UAIFwBlackboardComponent_SetValueAsObject_Params params {};
		params.KeyName = KeyName;
		params.ObjectValue = ObjectValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        NameValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsName(const class FString& KeyName, const class FName& NameValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsName");
		
		UAIFwBlackboardComponent_SetValueAsName_Params params {};
		params.KeyName = KeyName;
		params.NameValue = NameValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsIntArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    IntArray                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsIntArray(const class FString& KeyName, TArray<int32_t> IntArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsIntArray");
		
		UAIFwBlackboardComponent_SetValueAsIntArray_Params params {};
		params.KeyName = KeyName;
		params.IntArray = IntArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IntValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsInt(const class FString& KeyName, int32_t IntValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsInt");
		
		UAIFwBlackboardComponent_SetValueAsInt_Params params {};
		params.KeyName = KeyName;
		params.IntValue = IntValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FloatValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsFloat(const class FString& KeyName, float FloatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsFloat");
		
		UAIFwBlackboardComponent_SetValueAsFloat_Params params {};
		params.KeyName = KeyName;
		params.FloatValue = FloatValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      EnumValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsEnum(const class FString& KeyName, unsigned char EnumValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsEnum");
		
		UAIFwBlackboardComponent_SetValueAsEnum_Params params {};
		params.KeyName = KeyName;
		params.EnumValue = EnumValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      ClassValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsClass(const class FString& KeyName, class UClass* ClassValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsClass");
		
		UAIFwBlackboardComponent_SetValueAsClass_Params params {};
		params.KeyName = KeyName;
		params.ClassValue = ClassValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.SetValueAsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               BoolValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::SetValueAsBool(const class FString& KeyName, bool BoolValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.SetValueAsBool");
		
		UAIFwBlackboardComponent_SetValueAsBool_Params params {};
		params.KeyName = KeyName;
		params.BoolValue = BoolValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.IsValidKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIFwBlackboardComponent::IsValidKey(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.IsValidKey");
		
		UAIFwBlackboardComponent_IsValidKey_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsVectorArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FVector> UAIFwBlackboardComponent::GetValueAsVectorArray(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsVectorArray");
		
		UAIFwBlackboardComponent_GetValueAsVectorArray_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UAIFwBlackboardComponent::GetValueAsVector(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsVector");
		
		UAIFwBlackboardComponent_GetValueAsVector_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UAIFwBlackboardComponent::GetValueAsString(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsString");
		
		UAIFwBlackboardComponent_GetValueAsString_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsRotator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator UAIFwBlackboardComponent::GetValueAsRotator(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsRotator");
		
		UAIFwBlackboardComponent_GetValueAsRotator_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator UAIFwBlackboardComponent::GetValueAsRotation(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsRotation");
		
		UAIFwBlackboardComponent_GetValueAsRotation_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsObjectArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UObject*> UAIFwBlackboardComponent::GetValueAsObjectArray(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsObjectArray");
		
		UAIFwBlackboardComponent_GetValueAsObjectArray_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UAIFwBlackboardComponent::GetValueAsObject(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsObject");
		
		UAIFwBlackboardComponent_GetValueAsObject_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName UAIFwBlackboardComponent::GetValueAsName(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsName");
		
		UAIFwBlackboardComponent_GetValueAsName_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UAIFwBlackboardComponent::GetValueAsLocation(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsLocation");
		
		UAIFwBlackboardComponent_GetValueAsLocation_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsIntArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<int32_t> UAIFwBlackboardComponent::GetValueAsIntArray(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsIntArray");
		
		UAIFwBlackboardComponent_GetValueAsIntArray_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAIFwBlackboardComponent::GetValueAsInt(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsInt");
		
		UAIFwBlackboardComponent_GetValueAsInt_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAIFwBlackboardComponent::GetValueAsFloat(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsFloat");
		
		UAIFwBlackboardComponent_GetValueAsFloat_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char UAIFwBlackboardComponent::GetValueAsEnum(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsEnum");
		
		UAIFwBlackboardComponent_GetValueAsEnum_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* UAIFwBlackboardComponent::GetValueAsClass(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsClass");
		
		UAIFwBlackboardComponent_GetValueAsClass_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.GetValueAsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIFwBlackboardComponent::GetValueAsBool(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.GetValueAsBool");
		
		UAIFwBlackboardComponent_GetValueAsBool_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.ClearValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::ClearValue(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.ClearValue");
		
		UAIFwBlackboardComponent_ClearValue_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlackboardComponent.BindToUE4Blackboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBlackboardComponent*                        OtherBlackboard                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        OtherKeyName                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwBlackboardComponent::BindToUE4Blackboard(const class FString& KeyName, class UBlackboardComponent* OtherBlackboard, const class FName& OtherKeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlackboardComponent.BindToUE4Blackboard");
		
		UAIFwBlackboardComponent_BindToUE4Blackboard_Params params {};
		params.KeyName = KeyName;
		params.OtherBlackboard = OtherBlackboard;
		params.OtherKeyName = OtherKeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBlackboardComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBlackboardComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBlackboardComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlueprintLibrary.RunAIFwBehaviorTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIFwBehaviorTree*                           BehaviorTree                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bLooping                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIFwBlueprintLibrary::RunAIFwBehaviorTree(class AActor* Target, class UAIFwBehaviorTree* BehaviorTree, bool bLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlueprintLibrary.RunAIFwBehaviorTree");
		
		UAIFwBlueprintLibrary_RunAIFwBehaviorTree_Params params {};
		params.Target = Target;
		params.BehaviorTree = BehaviorTree;
		params.bLooping = bLooping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlueprintLibrary.MultipleClothoidInterpRad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   StartPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartCurvature                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   EndPosition                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAngle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndCurvature                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAIFwMultipleClothoidSegment UAIFwBlueprintLibrary::MultipleClothoidInterpRad(const struct FVector2D& StartPosition, float StartAngle, float StartCurvature, const struct FVector2D& EndPosition, float EndAngle, float EndCurvature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlueprintLibrary.MultipleClothoidInterpRad");
		
		UAIFwBlueprintLibrary_MultipleClothoidInterpRad_Params params {};
		params.StartPosition = StartPosition;
		params.StartAngle = StartAngle;
		params.StartCurvature = StartCurvature;
		params.EndPosition = EndPosition;
		params.EndAngle = EndAngle;
		params.EndCurvature = EndCurvature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlueprintLibrary.MultipleClothoidInterp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   StartPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartCurvature                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   EndPosition                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAngle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndCurvature                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAIFwMultipleClothoidSegment UAIFwBlueprintLibrary::MultipleClothoidInterp(const struct FVector2D& StartPosition, float StartAngle, float StartCurvature, const struct FVector2D& EndPosition, float EndAngle, float EndCurvature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlueprintLibrary.MultipleClothoidInterp");
		
		UAIFwBlueprintLibrary_MultipleClothoidInterp_Params params {};
		params.StartPosition = StartPosition;
		params.StartAngle = StartAngle;
		params.StartCurvature = StartCurvature;
		params.EndPosition = EndPosition;
		params.EndAngle = EndAngle;
		params.EndCurvature = EndCurvature;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlueprintLibrary.Hash32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAIFwBlueprintLibrary::Hash32(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlueprintLibrary.Hash32");
		
		UAIFwBlueprintLibrary_Hash32_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlueprintLibrary.GetMultipleClothoidLocationAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwMultipleClothoidSegment                Segment                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UAIFwBlueprintLibrary::GetMultipleClothoidLocationAtTime(const struct FAIFwMultipleClothoidSegment& Segment, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlueprintLibrary.GetMultipleClothoidLocationAtTime");
		
		UAIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime_Params params {};
		params.Segment = Segment;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlueprintLibrary.GetFactionRelation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      From                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      To                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAIFwBlueprintLibrary::GetFactionRelation(class AActor* From, class AActor* To)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlueprintLibrary.GetFactionRelation");
		
		UAIFwBlueprintLibrary_GetFactionRelation_Params params {};
		params.From = From;
		params.To = To;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlueprintLibrary.GetClothoidLocationAtTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwClothoidSegment                        Segment                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UAIFwBlueprintLibrary::GetClothoidLocationAtTime(const struct FAIFwClothoidSegment& Segment, float Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlueprintLibrary.GetClothoidLocationAtTime");
		
		UAIFwBlueprintLibrary_GetClothoidLocationAtTime_Params params {};
		params.Segment = Segment;
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlueprintLibrary.GetAIFwBlackboard
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwBlackboardComponent* UAIFwBlueprintLibrary::GetAIFwBlackboard(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlueprintLibrary.GetAIFwBlackboard");
		
		UAIFwBlueprintLibrary_GetAIFwBlackboard_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlueprintLibrary.GetAIDirector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AAIFwAIDirector* UAIFwBlueprintLibrary::GetAIDirector(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlueprintLibrary.GetAIDirector");
		
		UAIFwBlueprintLibrary_GetAIDirector_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlueprintLibrary.ClothoidInterpRad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   StartPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   EndPosition                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAngle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAIFwClothoidSegment UAIFwBlueprintLibrary::ClothoidInterpRad(const struct FVector2D& StartPosition, float StartAngle, const struct FVector2D& EndPosition, float EndAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlueprintLibrary.ClothoidInterpRad");
		
		UAIFwBlueprintLibrary_ClothoidInterpRad_Params params {};
		params.StartPosition = StartPosition;
		params.StartAngle = StartAngle;
		params.EndPosition = EndPosition;
		params.EndAngle = EndAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwBlueprintLibrary.ClothoidInterp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   StartPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              StartAngle                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   EndPosition                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EndAngle                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAIFwClothoidSegment UAIFwBlueprintLibrary::ClothoidInterp(const struct FVector2D& StartPosition, float StartAngle, const struct FVector2D& EndPosition, float EndAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwBlueprintLibrary.ClothoidInterp");
		
		UAIFwBlueprintLibrary_ClothoidInterp_Params params {};
		params.StartPosition = StartPosition;
		params.StartAngle = StartAngle;
		params.EndPosition = EndPosition;
		params.EndAngle = EndAngle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwNodeBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwNodeBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwNodeBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTDecoratorNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTDecoratorNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTDecoratorNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTFocus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTFocus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTFocus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTInvokeFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTInvokeFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTInvokeFunction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTMaxWalkSpeed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTMaxWalkSpeed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTMaxWalkSpeed");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTMoveTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTMoveTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTMoveTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTPrintString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTPrintString::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTPrintString");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTRunAITask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTRunAITask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTRunAITask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTRunHTNPlan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTRunHTNPlan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTRunHTNPlan");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTRunPerceptionTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTRunPerceptionTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTRunPerceptionTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTService_ReactiveSkill.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTService_ReactiveSkill::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTService_ReactiveSkill");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTService_RunPerceptionTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTService_RunPerceptionTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTService_RunPerceptionTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTTask_RunHTNPlan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTTask_RunHTNPlan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTTask_RunHTNPlan");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTTask_RunPerceptionTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTTask_RunPerceptionTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTTask_RunPerceptionTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTTask_UseSmartObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTTask_UseSmartObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTTask_UseSmartObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTTeleportTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTTeleportTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTTeleportTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwBTToggleReactiveSkill.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwBTToggleReactiveSkill::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwBTToggleReactiveSkill");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwEntityComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwEntityComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwEntityComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwFactionComponent.OnRep_FactionNameString
	 * 		Flags  -> ()
	 */
	void UAIFwFactionComponent::OnRep_FactionNameString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwFactionComponent.OnRep_FactionNameString");
		
		UAIFwFactionComponent_OnRep_FactionNameString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwFactionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwFactionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwFactionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHierarchyComponent.SendMessageToSiblings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     MessageSource                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHierarchyComponent::SendMessageToSiblings(const class FName& Message, class UObject* MessageSource, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHierarchyComponent.SendMessageToSiblings");
		
		UAIFwHierarchyComponent_SendMessageToSiblings_Params params {};
		params.Message = Message;
		params.MessageSource = MessageSource;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHierarchyComponent.SendMessageToParent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     MessageSource                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHierarchyComponent::SendMessageToParent(const class FName& Message, class UObject* MessageSource, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHierarchyComponent.SendMessageToParent");
		
		UAIFwHierarchyComponent_SendMessageToParent_Params params {};
		params.Message = Message;
		params.MessageSource = MessageSource;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHierarchyComponent.SendMessageToChildren
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     MessageSource                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      IgnoreActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHierarchyComponent::SendMessageToChildren(const class FName& Message, class UObject* MessageSource, bool bSuccess, class AActor* IgnoreActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHierarchyComponent.SendMessageToChildren");
		
		UAIFwHierarchyComponent_SendMessageToChildren_Params params {};
		params.Message = Message;
		params.MessageSource = MessageSource;
		params.bSuccess = bSuccess;
		params.IgnoreActor = IgnoreActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHierarchyComponent.Remove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIFwHierarchyComponent::Remove(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHierarchyComponent.Remove");
		
		UAIFwHierarchyComponent_Remove_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHierarchyComponent.Add
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIFwHierarchyComponent::Add(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHierarchyComponent.Add");
		
		UAIFwHierarchyComponent_Add_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHierarchyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHierarchyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHierarchyComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometimeBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAIFwHTNOperator*                            OperatorA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIFwHTNOperator*                            OperatorB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwHTNTempOp_SometimeBefore* UAIFwHTNBlueprintLibrary::HTNSometimeBefore(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometimeBefore");
		
		UAIFwHTNBlueprintLibrary_HTNSometimeBefore_Params params {};
		params.OperatorA = OperatorA;
		params.OperatorB = OperatorB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometimeAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAIFwHTNOperator*                            OperatorA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIFwHTNOperator*                            OperatorB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwHTNTempOp_SometimeAfter* UAIFwHTNBlueprintLibrary::HTNSometimeAfter(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometimeAfter");
		
		UAIFwHTNBlueprintLibrary_HTNSometimeAfter_Params params {};
		params.OperatorA = OperatorA;
		params.OperatorB = OperatorB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAIFwHTNOperator*                            Operator                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwHTNTempOp_Sometime* UAIFwHTNBlueprintLibrary::HTNSometime(class UAIFwHTNOperator* Operator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometime");
		
		UAIFwHTNBlueprintLibrary_HTNSometime_Params params {};
		params.Operator = Operator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNBlueprintLibrary.HTNOccur
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TaskName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwHTNOperator_Occur* UAIFwHTNBlueprintLibrary::HTNOccur(const class FString& TaskName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNBlueprintLibrary.HTNOccur");
		
		UAIFwHTNBlueprintLibrary_HTNOccur_Params params {};
		params.TaskName = TaskName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNBlueprintLibrary.HTNNot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAIFwHTNOperator*                            Operator                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwHTNOperator_Not* UAIFwHTNBlueprintLibrary::HTNNot(class UAIFwHTNOperator* Operator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNBlueprintLibrary.HTNNot");
		
		UAIFwHTNBlueprintLibrary_HTNNot_Params params {};
		params.Operator = Operator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNBlueprintLibrary.HTNApply
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TaskName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MethodName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwHTNOperator_Apply* UAIFwHTNBlueprintLibrary::HTNApply(const class FString& TaskName, const class FString& MethodName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNBlueprintLibrary.HTNApply");
		
		UAIFwHTNBlueprintLibrary_HTNApply_Params params {};
		params.TaskName = TaskName;
		params.MethodName = MethodName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlwaysBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAIFwHTNOperator*                            OperatorA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIFwHTNOperator*                            OperatorB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwHTNTempOp_AlwaysBefore* UAIFwHTNBlueprintLibrary::HTNAlwaysBefore(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlwaysBefore");
		
		UAIFwHTNBlueprintLibrary_HTNAlwaysBefore_Params params {};
		params.OperatorA = OperatorA;
		params.OperatorB = OperatorB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlwaysAfter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAIFwHTNOperator*                            OperatorA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIFwHTNOperator*                            OperatorB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwHTNTempOp_AlwaysAfter* UAIFwHTNBlueprintLibrary::HTNAlwaysAfter(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlwaysAfter");
		
		UAIFwHTNBlueprintLibrary_HTNAlwaysAfter_Params params {};
		params.OperatorA = OperatorA;
		params.OperatorB = OperatorB;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlways
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAIFwHTNOperator*                            Operator                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwHTNTempOp_Always* UAIFwHTNBlueprintLibrary::HTNAlways(class UAIFwHTNOperator* Operator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlways");
		
		UAIFwHTNBlueprintLibrary_HTNAlways_Params params {};
		params.Operator = Operator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNDomain.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNDomain::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNDomain");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNOperator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNOperator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNOperator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNOperator_Apply.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNOperator_Apply::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNOperator_Apply");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNOperator_Not.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNOperator_Not::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNOperator_Not");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNOperator_Occur.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNOperator_Occur::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNOperator_Occur");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNPlanningComponent.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwHTNMethod                              Method                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHTNPlanningComponent::SetName(const struct FAIFwHTNMethod& Method, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNPlanningComponent.SetName");
		
		UAIFwHTNPlanningComponent_SetName_Params params {};
		params.Method = Method;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNPlanningComponent.IsValidTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwHTNTask                                Task                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAIFwHTNPlanningComponent::IsValidTask(const struct FAIFwHTNTask& Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNPlanningComponent.IsValidTask");
		
		UAIFwHTNPlanningComponent_IsValidTask_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNPlanningComponent.IsValidMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwHTNMethod                              Method                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UAIFwHTNPlanningComponent::IsValidMethod(const struct FAIFwHTNMethod& Method)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNPlanningComponent.IsValidMethod");
		
		UAIFwHTNPlanningComponent_IsValidMethod_Params params {};
		params.Method = Method;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNPlanningComponent.FindTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAIFwHTNTask UAIFwHTNPlanningComponent::FindTask(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNPlanningComponent.FindTask");
		
		UAIFwHTNPlanningComponent_FindTask_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNPlanningComponent.FindMethodByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAIFwHTNTask                                Task                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAIFwHTNMethod UAIFwHTNPlanningComponent::FindMethodByName(const struct FAIFwHTNTask& Task, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNPlanningComponent.FindMethodByName");
		
		UAIFwHTNPlanningComponent_FindMethodByName_Params params {};
		params.Task = Task;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNPlanningComponent.FindMethod
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TaskName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MethodName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FAIFwHTNMethod UAIFwHTNPlanningComponent::FindMethod(const class FString& TaskName, const class FString& MethodName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNPlanningComponent.FindMethod");
		
		UAIFwHTNPlanningComponent_FindMethod_Params params {};
		params.TaskName = TaskName;
		params.MethodName = MethodName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNPlanningComponent.AppendDomain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAIFwHTNDomain*                              NewDomain                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bOverrideCompound                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHTNPlanningComponent::AppendDomain(class UAIFwHTNDomain* NewDomain, bool bOverrideCompound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNPlanningComponent.AppendDomain");
		
		UAIFwHTNPlanningComponent_AppendDomain_Params params {};
		params.NewDomain = NewDomain;
		params.bOverrideCompound = bOverrideCompound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNPlanningComponent.AddTrajectoryPreference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIFwHTNTemporalModalOperator*               TemporalOperator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHardConstraint                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHTNPlanningComponent::AddTrajectoryPreference(const class FString& Name, class UAIFwHTNTemporalModalOperator* TemporalOperator, bool bHardConstraint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNPlanningComponent.AddTrajectoryPreference");
		
		UAIFwHTNPlanningComponent_AddTrajectoryPreference_Params params {};
		params.Name = Name;
		params.TemporalOperator = TemporalOperator;
		params.bHardConstraint = bHardConstraint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNPlanningComponent.AddPreconditionPreference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TaskName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      MethodName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIFwHTNOperator*                            Operator                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHardConstraint                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHTNPlanningComponent::AddPreconditionPreference(const class FString& Name, const class FString& TaskName, const class FString& MethodName, class UAIFwHTNOperator* Operator, bool bHardConstraint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNPlanningComponent.AddPreconditionPreference");
		
		UAIFwHTNPlanningComponent_AddPreconditionPreference_Params params {};
		params.Name = Name;
		params.TaskName = TaskName;
		params.MethodName = MethodName;
		params.Operator = Operator;
		params.bHardConstraint = bHardConstraint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNPlanningComponent.AddMetricWeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PreferenceName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Weight                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHTNPlanningComponent::AddMetricWeight(const class FString& PreferenceName, float Weight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNPlanningComponent.AddMetricWeight");
		
		UAIFwHTNPlanningComponent_AddMetricWeight_Params params {};
		params.PreferenceName = PreferenceName;
		params.Weight = Weight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNPlanningComponent.AddGoalPreference
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIFwHTNOperator*                            Operator                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHardConstraint                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHTNPlanningComponent::AddGoalPreference(const class FString& Name, class UAIFwHTNOperator* Operator, bool bHardConstraint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNPlanningComponent.AddGoalPreference");
		
		UAIFwHTNPlanningComponent_AddGoalPreference_Params params {};
		params.Name = Name;
		params.Operator = Operator;
		params.bHardConstraint = bHardConstraint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNPlanningComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNPlanningComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNPlanningComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNState.SetValueAsInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IntValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHTNState::SetValueAsInt(const class FString& KeyName, int32_t IntValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNState.SetValueAsInt");
		
		UAIFwHTNState_SetValueAsInt_Params params {};
		params.KeyName = KeyName;
		params.IntValue = IntValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNState.SetValueAsFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              FloatValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHTNState::SetValueAsFloat(const class FString& KeyName, float FloatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNState.SetValueAsFloat");
		
		UAIFwHTNState_SetValueAsFloat_Params params {};
		params.KeyName = KeyName;
		params.FloatValue = FloatValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNState.SetValueAsEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      EnumValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHTNState::SetValueAsEnum(const class FString& KeyName, unsigned char EnumValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNState.SetValueAsEnum");
		
		UAIFwHTNState_SetValueAsEnum_Params params {};
		params.KeyName = KeyName;
		params.EnumValue = EnumValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNState.SetValueAsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               BoolValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwHTNState::SetValueAsBool(const class FString& KeyName, bool BoolValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNState.SetValueAsBool");
		
		UAIFwHTNState_SetValueAsBool_Params params {};
		params.KeyName = KeyName;
		params.BoolValue = BoolValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNState.IsValidKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIFwHTNState::IsValidKey(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNState.IsValidKey");
		
		UAIFwHTNState_IsValidKey_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNState.GetValueAsInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAIFwHTNState::GetValueAsInt(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNState.GetValueAsInt");
		
		UAIFwHTNState_GetValueAsInt_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNState.GetValueAsFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UAIFwHTNState::GetValueAsFloat(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNState.GetValueAsFloat");
		
		UAIFwHTNState_GetValueAsFloat_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNState.GetValueAsEnum
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char UAIFwHTNState::GetValueAsEnum(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNState.GetValueAsEnum");
		
		UAIFwHTNState_GetValueAsEnum_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwHTNState.GetValueAsBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      KeyName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIFwHTNState::GetValueAsBool(const class FString& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwHTNState.GetValueAsBool");
		
		UAIFwHTNState_GetValueAsBool_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNTemporalModalOperator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNTemporalModalOperator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNTemporalModalOperator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNTempOp_Always.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNTempOp_Always::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNTempOp_Always");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNTempOp_AlwaysAfter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNTempOp_AlwaysAfter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNTempOp_AlwaysAfter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNTempOp_AlwaysBefore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNTempOp_AlwaysBefore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNTempOp_AlwaysBefore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNTempOp_Sometime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNTempOp_Sometime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNTempOp_Sometime");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNTempOp_SometimeAfter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNTempOp_SometimeAfter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNTempOp_SometimeAfter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwHTNTempOp_SometimeBefore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwHTNTempOp_SometimeBefore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwHTNTempOp_SometimeBefore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwInfluenceMapLayer.RegisterSource
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwInfluenceMapLayer::RegisterSource(class AActor* Actor, float Radius, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwInfluenceMapLayer.RegisterSource");
		
		UAIFwInfluenceMapLayer_RegisterSource_Params params {};
		params.Actor = Actor;
		params.Radius = Radius;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwInfluenceMapLayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwInfluenceMapLayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwInfluenceMapLayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIFwInfluenceMapLayout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIFwInfluenceMapLayout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwInfluenceMapLayout");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwInfluenceMapLayoutRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwInfluenceMapLayoutRenderingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwInfluenceMapLayoutRenderingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwInfluenceMapManager.CreateOrGetLayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwInfluenceMapLayer* UAIFwInfluenceMapManager::CreateOrGetLayer(class UObject* WorldContextObject, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwInfluenceMapManager.CreateOrGetLayer");
		
		UAIFwInfluenceMapManager_CreateOrGetLayer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwInfluenceMapManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwInfluenceMapManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwInfluenceMapManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwNavigationSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwNavigationSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwNavigationSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIFwNavVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIFwNavVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwNavVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIFwNavVolumeBoundsVolume.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIFwNavVolumeBoundsVolume::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwNavVolumeBoundsVolume");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwNavVolumeRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwNavVolumeRenderingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwNavVolumeRenderingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIFwNavVolumeTestingActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIFwNavVolumeTestingActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwNavVolumeTestingActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwPerceptionComponent.SetSenseEnabled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Tag                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwPerceptionComponent::SetSenseEnabled(const class FString& Tag, bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwPerceptionComponent.SetSenseEnabled");
		
		UAIFwPerceptionComponent_SetSenseEnabled_Params params {};
		params.Tag = Tag;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwPerceptionComponent.GetSensedActorsCount
	 * 		Flags  -> ()
	 */
	int32_t UAIFwPerceptionComponent::GetSensedActorsCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwPerceptionComponent.GetSensedActorsCount");
		
		UAIFwPerceptionComponent_GetSensedActorsCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwPerceptionComponent.GetSensedActors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Tag                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AActor*> UAIFwPerceptionComponent::GetSensedActors(const class FString& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwPerceptionComponent.GetSensedActors");
		
		UAIFwPerceptionComponent_GetSensedActors_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwPerceptionComponent.ClearSensedActors
	 * 		Flags  -> ()
	 */
	void UAIFwPerceptionComponent::ClearSensedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwPerceptionComponent.ClearSensedActors");
		
		UAIFwPerceptionComponent_ClearSensedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPerceptionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPerceptionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPerceptionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunPerceptionTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIFwBehaviorTree*                           Template                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwPerceptionTreeInstanceBlueprintWrapper* UAIFwPerceptionTreeInstanceBlueprintWrapper::RunPerceptionTree(class AActor* Target, class UAIFwBehaviorTree* Template)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunPerceptionTree");
		
		UAIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree_Params params {};
		params.Target = Target;
		params.Template = Template;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantPerceptionTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UAIFwBehaviorTree*                           Template                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwPerceptionTreeInstanceBlueprintWrapper* UAIFwPerceptionTreeInstanceBlueprintWrapper::RunInstantPerceptionTree(class AActor* Target, class UAIFwBehaviorTree* Template)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantPerceptionTree");
		
		UAIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree_Params params {};
		params.Target = Target;
		params.Template = Template;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantParameterizedPerceptionTreeRandom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIFwParameterizedBTRequest                 Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwPerceptionTreeInstanceBlueprintWrapper* UAIFwPerceptionTreeInstanceBlueprintWrapper::RunInstantParameterizedPerceptionTreeRandom(class AActor* Target, const struct FAIFwParameterizedBTRequest& Query, int32_t MaxCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantParameterizedPerceptionTreeRandom");
		
		UAIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom_Params params {};
		params.Target = Target;
		params.Query = Query;
		params.MaxCount = MaxCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantParameterizedPerceptionTree
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIFwParameterizedBTRequest                 Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaxCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAIFwPerceptionTreeInstanceBlueprintWrapper* UAIFwPerceptionTreeInstanceBlueprintWrapper::RunInstantParameterizedPerceptionTree(class AActor* Target, const struct FAIFwParameterizedBTRequest& Query, int32_t MaxCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantParameterizedPerceptionTree");
		
		UAIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree_Params params {};
		params.Target = Target;
		params.Query = Query;
		params.MaxCount = MaxCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultsAsLocations
	 * 		Flags  -> ()
	 */
	TArray<struct FVector> UAIFwPerceptionTreeInstanceBlueprintWrapper::GetResultsAsLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultsAsLocations");
		
		UAIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultsAsActors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> UAIFwPerceptionTreeInstanceBlueprintWrapper::GetResultsAsActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultsAsActors");
		
		UAIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultCount
	 * 		Flags  -> ()
	 */
	int32_t UAIFwPerceptionTreeInstanceBlueprintWrapper::GetResultCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultCount");
		
		UAIFwPerceptionTreeInstanceBlueprintWrapper_GetResultCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> DelegateFunction AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAIFwPerceptionTreeInstanceBlueprintWrapper* QueryInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwPerceptionTreeInstanceBlueprintWrapper::AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature(class UAIFwPerceptionTreeInstanceBlueprintWrapper* QueryInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature");
		
		UAIFwPerceptionTreeInstanceBlueprintWrapper_AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature_Params params {};
		params.QueryInstance = QueryInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPerceptionTreeInstanceBlueprintWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPerceptionTreeInstanceBlueprintWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTCriterionNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTCriterionNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTCriterionNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTCriterionActorsOfClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTCriterionActorsOfClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTCriterionActorsOfClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTCriterionSquadMember.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTCriterionSquadMember::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTCriterionSquadMember");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTCriterionSquadMemberDestinations.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTCriterionSquadMemberDestinations::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTCriterionSquadMemberDestinations");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTEvaluationNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTEvaluationNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTEvaluationNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTEvaluationNodeUseCriterion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTEvaluationNodeUseCriterion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTEvaluationNodeUseCriterion");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTEvaluationInfluence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTEvaluationInfluence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTEvaluationInfluence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTEvaluationNavMeshRaycast.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTEvaluationNavMeshRaycast::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTEvaluationNavMeshRaycast");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTEvaluationPathfinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTEvaluationPathfinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTEvaluationPathfinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTEvaluationTrace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTEvaluationTrace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTEvaluationTrace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTGenerationNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTGenerationNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTGenerationNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTGenerationPointsAlongPath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTGenerationPointsAlongPath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTGenerationPointsAlongPath");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTModificationNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTModificationNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTModificationNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTModificationProjectOnGeometry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTModificationProjectOnGeometry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTModificationProjectOnGeometry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTModificationProjectOnNavMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTModificationProjectOnNavMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTModificationProjectOnNavMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTSenseFilterNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTSenseFilterNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTSenseFilterNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTSenseNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTSenseNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTSenseNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwPTSenseSight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwPTSenseSight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwPTSenseSight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwReactiveComponent.AddSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Skill                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwReactiveComponent::AddSkill(class UClass* Skill)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwReactiveComponent.AddSkill");
		
		UAIFwReactiveComponent_AddSkill_Params params {};
		params.Skill = Skill;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwReactiveComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwReactiveComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwReactiveComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwReactiveSkill.RunAITask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAITask*                                     Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwReactiveSkill::RunAITask(class UAITask* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwReactiveSkill.RunAITask");
		
		UAIFwReactiveSkill_RunAITask_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwReactiveSkill.NewAITask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      TaskClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAITaskPriority                                    InPriority                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAITask* UAIFwReactiveSkill::NewAITask(class UClass* TaskClass, EAITaskPriority InPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwReactiveSkill.NewAITask");
		
		UAIFwReactiveSkill_NewAITask_Params params {};
		params.TaskClass = TaskClass;
		params.InPriority = InPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwReactiveSkill.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwReactiveSkill::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwReactiveSkill");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwReactiveSkill_Message.ReceivePulse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Sender                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwReactiveSkill_Message::ReceivePulse(class UObject* Sender, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwReactiveSkill_Message.ReceivePulse");
		
		UAIFwReactiveSkill_Message_ReceivePulse_Params params {};
		params.Sender = Sender;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwReactiveSkill_Message.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwReactiveSkill_Message::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwReactiveSkill_Message");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwReactiveSkill_PerceptionTree.ReceiveOnPerceive
	 * 		Flags  -> ()
	 */
	void UAIFwReactiveSkill_PerceptionTree::ReceiveOnPerceive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwReactiveSkill_PerceptionTree.ReceiveOnPerceive");
		
		UAIFwReactiveSkill_PerceptionTree_ReceiveOnPerceive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwReactiveSkill_PerceptionTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwReactiveSkill_PerceptionTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwReactiveSkill_PerceptionTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwReactiveSkill_SensedTarget.ReceiveOnSensed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwReactiveSkill_SensedTarget::ReceiveOnSensed(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwReactiveSkill_SensedTarget.ReceiveOnSensed");
		
		UAIFwReactiveSkill_SensedTarget_ReceiveOnSensed_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwReactiveSkill_SensedTarget.ReceiveOnLost
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwReactiveSkill_SensedTarget::ReceiveOnLost(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwReactiveSkill_SensedTarget.ReceiveOnLost");
		
		UAIFwReactiveSkill_SensedTarget_ReceiveOnLost_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwReactiveSkill_SensedTarget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwReactiveSkill_SensedTarget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwReactiveSkill_SensedTarget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwReactiveSkill_TakeDamage.TakePointDamageImpl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ShotFromDirection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwReactiveSkill_TakeDamage::TakePointDamageImpl(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class UDamageType* DamageType, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwReactiveSkill_TakeDamage.TakePointDamageImpl");
		
		UAIFwReactiveSkill_TakeDamage_TakePointDamageImpl_Params params {};
		params.DamagedActor = DamagedActor;
		params.Damage = Damage;
		params.InstigatedBy = InstigatedBy;
		params.HitLocation = HitLocation;
		params.HitComponent = HitComponent;
		params.BoneName = BoneName;
		params.ShotFromDirection = ShotFromDirection;
		params.DamageType = DamageType;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwReactiveSkill_TakeDamage.TakeAnyDamageImpl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwReactiveSkill_TakeDamage::TakeAnyDamageImpl(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwReactiveSkill_TakeDamage.TakeAnyDamageImpl");
		
		UAIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl_Params params {};
		params.DamagedActor = DamagedActor;
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwReactiveSkill_TakeDamage.ReceivePointDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ShotFromDirection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwReactiveSkill_TakeDamage::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, const class FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwReactiveSkill_TakeDamage.ReceivePointDamage");
		
		UAIFwReactiveSkill_TakeDamage_ReceivePointDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.HitLocation = HitLocation;
		params.HitComponent = HitComponent;
		params.BoneName = BoneName;
		params.ShotFromDirection = ShotFromDirection;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwReactiveSkill_TakeDamage.ReceiveAnyDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwReactiveSkill_TakeDamage::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwReactiveSkill_TakeDamage.ReceiveAnyDamage");
		
		UAIFwReactiveSkill_TakeDamage_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwReactiveSkill_TakeDamage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwReactiveSkill_TakeDamage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwReactiveSkill_TakeDamage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwRuntimeSettings.OnNavigationGenerationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ANavigationData*                             NavData                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwRuntimeSettings::OnNavigationGenerationFinished(class ANavigationData* NavData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwRuntimeSettings.OnNavigationGenerationFinished");
		
		UAIFwRuntimeSettings_OnNavigationGenerationFinished_Params params {};
		params.NavData = NavData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwRuntimeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwRuntimeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwRuntimeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwSensorySystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwSensorySystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwSensorySystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwSmartObjectAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwSmartObjectAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwSmartObjectAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwSmartObjectAction_BehaviorTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwSmartObjectAction_BehaviorTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwSmartObjectAction_BehaviorTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwSmartObjectActionUE4.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwSmartObjectActionUE4::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwSmartObjectActionUE4");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwSmartObjectComponent.Use
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Usage                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            EventId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAIFwSmartObjectComponent::Use(class AActor* User, const class FString& Usage, int32_t EventId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwSmartObjectComponent.Use");
		
		UAIFwSmartObjectComponent_Use_Params params {};
		params.User = User;
		params.Usage = Usage;
		params.EventId = EventId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwSmartObjectComponent.FindEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      User                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Usage                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UAIFwSmartObjectComponent::FindEvent(class AActor* User, const class FString& Usage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwSmartObjectComponent.FindEvent");
		
		UAIFwSmartObjectComponent_FindEvent_Params params {};
		params.User = User;
		params.Usage = Usage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwSmartObjectComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwSmartObjectComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwSmartObjectComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwSmartObjectCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwSmartObjectCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwSmartObjectCondition");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwSmartObjectUserComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwSmartObjectUserComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwSmartObjectUserComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwStimuliSourceComponent.SetVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNewVisible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwStimuliSourceComponent::SetVisibility(bool bNewVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwStimuliSourceComponent.SetVisibility");
		
		UAIFwStimuliSourceComponent_SetVisibility_Params params {};
		params.bNewVisible = bNewVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwStimuliSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwStimuliSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwStimuliSourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwSystem.OnEntityEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwSystem::OnEntityEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwSystem.OnEntityEndPlay");
		
		UAIFwSystem_OnEntityEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function AIFramework.AIFwSystem.OnEntityDestroyed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAIFwSystem::OnEntityDestroyed(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIFramework.AIFwSystem.OnEntityDestroyed");
		
		UAIFwSystem_OnEntityDestroyed_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIFwSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIFwSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIFramework.AIFwSystem");
		return ptr;
	}

}


