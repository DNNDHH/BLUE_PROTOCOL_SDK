#pragma once

 

// Package: AIFramework

#include "Basic.hpp"

#include "AIFramework_classes.hpp"
#include "AIFramework_parameters.hpp"


namespace SDK
{

// Function AIFramework.AIFwBlueprintLibrary.ClothoidInterp
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                        StartPosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartAngle                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        EndPosition                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   EndAngle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIFwClothoidSegment             ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAIFwClothoidSegment UAIFwBlueprintLibrary::ClothoidInterp(const struct FVector2D& StartPosition, float StartAngle, const struct FVector2D& EndPosition, float EndAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlueprintLibrary", "ClothoidInterp");

	Params::AIFwBlueprintLibrary_ClothoidInterp Parms{};

	Parms.StartPosition = std::move(StartPosition);
	Parms.StartAngle = StartAngle;
	Parms.EndPosition = std::move(EndPosition);
	Parms.EndAngle = EndAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlueprintLibrary.ClothoidInterpRad
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                        StartPosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartAngle                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        EndPosition                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   EndAngle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIFwClothoidSegment             ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAIFwClothoidSegment UAIFwBlueprintLibrary::ClothoidInterpRad(const struct FVector2D& StartPosition, float StartAngle, const struct FVector2D& EndPosition, float EndAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlueprintLibrary", "ClothoidInterpRad");

	Params::AIFwBlueprintLibrary_ClothoidInterpRad Parms{};

	Parms.StartPosition = std::move(StartPosition);
	Parms.StartAngle = StartAngle;
	Parms.EndPosition = std::move(EndPosition);
	Parms.EndAngle = EndAngle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlueprintLibrary.GetAIDirector
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AAIFwAIDirector*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AAIFwAIDirector* UAIFwBlueprintLibrary::GetAIDirector(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlueprintLibrary", "GetAIDirector");

	Params::AIFwBlueprintLibrary_GetAIDirector Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlueprintLibrary.GetAIFwBlackboard
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                           Target                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwBlackboardComponent*         ReturnValue                                            (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwBlackboardComponent* UAIFwBlueprintLibrary::GetAIFwBlackboard(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlueprintLibrary", "GetAIFwBlackboard");

	Params::AIFwBlueprintLibrary_GetAIFwBlackboard Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlueprintLibrary.GetClothoidLocationAtTime
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAIFwClothoidSegment             Segment                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                                   Time                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UAIFwBlueprintLibrary::GetClothoidLocationAtTime(const struct FAIFwClothoidSegment& Segment, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlueprintLibrary", "GetClothoidLocationAtTime");

	Params::AIFwBlueprintLibrary_GetClothoidLocationAtTime Parms{};

	Parms.Segment = std::move(Segment);
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlueprintLibrary.GetFactionRelation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           From                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           To                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIFwBlueprintLibrary::GetFactionRelation(class AActor* From, class AActor* To)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlueprintLibrary", "GetFactionRelation");

	Params::AIFwBlueprintLibrary_GetFactionRelation Parms{};

	Parms.From = From;
	Parms.To = To;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlueprintLibrary.GetMultipleClothoidLocationAtTime
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAIFwMultipleClothoidSegment     Segment                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                                   Time                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UAIFwBlueprintLibrary::GetMultipleClothoidLocationAtTime(const struct FAIFwMultipleClothoidSegment& Segment, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlueprintLibrary", "GetMultipleClothoidLocationAtTime");

	Params::AIFwBlueprintLibrary_GetMultipleClothoidLocationAtTime Parms{};

	Parms.Segment = std::move(Segment);
	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlueprintLibrary.Hash32
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           String                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIFwBlueprintLibrary::Hash32(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlueprintLibrary", "Hash32");

	Params::AIFwBlueprintLibrary_Hash32 Parms{};

	Parms.String = std::move(String);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlueprintLibrary.MultipleClothoidInterp
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                        StartPosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartAngle                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartCurvature                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        EndPosition                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   EndAngle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   EndCurvature                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIFwMultipleClothoidSegment     ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAIFwMultipleClothoidSegment UAIFwBlueprintLibrary::MultipleClothoidInterp(const struct FVector2D& StartPosition, float StartAngle, float StartCurvature, const struct FVector2D& EndPosition, float EndAngle, float EndCurvature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlueprintLibrary", "MultipleClothoidInterp");

	Params::AIFwBlueprintLibrary_MultipleClothoidInterp Parms{};

	Parms.StartPosition = std::move(StartPosition);
	Parms.StartAngle = StartAngle;
	Parms.StartCurvature = StartCurvature;
	Parms.EndPosition = std::move(EndPosition);
	Parms.EndAngle = EndAngle;
	Parms.EndCurvature = EndCurvature;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlueprintLibrary.MultipleClothoidInterpRad
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                        StartPosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartAngle                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartCurvature                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                        EndPosition                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   EndAngle                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   EndCurvature                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIFwMultipleClothoidSegment     ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAIFwMultipleClothoidSegment UAIFwBlueprintLibrary::MultipleClothoidInterpRad(const struct FVector2D& StartPosition, float StartAngle, float StartCurvature, const struct FVector2D& EndPosition, float EndAngle, float EndCurvature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlueprintLibrary", "MultipleClothoidInterpRad");

	Params::AIFwBlueprintLibrary_MultipleClothoidInterpRad Parms{};

	Parms.StartPosition = std::move(StartPosition);
	Parms.StartAngle = StartAngle;
	Parms.StartCurvature = StartCurvature;
	Parms.EndPosition = std::move(EndPosition);
	Parms.EndAngle = EndAngle;
	Parms.EndCurvature = EndCurvature;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlueprintLibrary.RunAIFwBehaviorTree
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Target                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwBehaviorTree*                BehaviorTree                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bLooping                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIFwBlueprintLibrary::RunAIFwBehaviorTree(class AActor* Target, class UAIFwBehaviorTree* BehaviorTree, bool bLooping)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlueprintLibrary", "RunAIFwBehaviorTree");

	Params::AIFwBlueprintLibrary_RunAIFwBehaviorTree Parms{};

	Parms.Target = Target;
	Parms.BehaviorTree = BehaviorTree;
	Parms.bLooping = bLooping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwAIDirector.ReceiveOnActorSpawned
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           SpawnedActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AAIFwAIDirector::ReceiveOnActorSpawned(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwAIDirector", "ReceiveOnActorSpawned");

	Params::AIFwAIDirector_ReceiveOnActorSpawned Parms{};

	Parms.SpawnedActor = SpawnedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIFramework.AIFwPerceptionComponent.ClearSensedActors
// (Final, Native, Public, BlueprintCallable)

void UAIFwPerceptionComponent::ClearSensedActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwPerceptionComponent", "ClearSensedActors");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwPerceptionComponent.SetSenseEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwPerceptionComponent::SetSenseEnabled(const class FString& Tag, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwPerceptionComponent", "SetSenseEnabled");

	Params::AIFwPerceptionComponent_SetSenseEnabled Parms{};

	Parms.Tag = std::move(Tag);
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwPerceptionComponent.GetSensedActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           Tag                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class AActor*>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UAIFwPerceptionComponent::GetSensedActors(const class FString& Tag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwPerceptionComponent", "GetSensedActors");

	Params::AIFwPerceptionComponent_GetSensedActors Parms{};

	Parms.Tag = std::move(Tag);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwPerceptionComponent.GetSensedActorsCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIFwPerceptionComponent::GetSensedActorsCount() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwPerceptionComponent", "GetSensedActorsCount");

	Params::AIFwPerceptionComponent_GetSensedActorsCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantParameterizedPerceptionTree
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           Target                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIFwParameterizedBTRequest      Query                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   MaxCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwPerceptionTreeInstanceBlueprintWrapper*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwPerceptionTreeInstanceBlueprintWrapper* UAIFwPerceptionTreeInstanceBlueprintWrapper::RunInstantParameterizedPerceptionTree(class AActor* Target, const struct FAIFwParameterizedBTRequest& Query, int32 MaxCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwPerceptionTreeInstanceBlueprintWrapper", "RunInstantParameterizedPerceptionTree");

	Params::AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTree Parms{};

	Parms.Target = Target;
	Parms.Query = std::move(Query);
	Parms.MaxCount = MaxCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantParameterizedPerceptionTreeRandom
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                           Target                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIFwParameterizedBTRequest      Query                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   MaxCount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwPerceptionTreeInstanceBlueprintWrapper*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwPerceptionTreeInstanceBlueprintWrapper* UAIFwPerceptionTreeInstanceBlueprintWrapper::RunInstantParameterizedPerceptionTreeRandom(class AActor* Target, const struct FAIFwParameterizedBTRequest& Query, int32 MaxCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwPerceptionTreeInstanceBlueprintWrapper", "RunInstantParameterizedPerceptionTreeRandom");

	Params::AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantParameterizedPerceptionTreeRandom Parms{};

	Parms.Target = Target;
	Parms.Query = std::move(Query);
	Parms.MaxCount = MaxCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunInstantPerceptionTree
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Target                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwBehaviorTree*                Template                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwPerceptionTreeInstanceBlueprintWrapper*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwPerceptionTreeInstanceBlueprintWrapper* UAIFwPerceptionTreeInstanceBlueprintWrapper::RunInstantPerceptionTree(class AActor* Target, class UAIFwBehaviorTree* Template)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwPerceptionTreeInstanceBlueprintWrapper", "RunInstantPerceptionTree");

	Params::AIFwPerceptionTreeInstanceBlueprintWrapper_RunInstantPerceptionTree Parms{};

	Parms.Target = Target;
	Parms.Template = Template;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.RunPerceptionTree
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Target                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwBehaviorTree*                Template                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwPerceptionTreeInstanceBlueprintWrapper*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwPerceptionTreeInstanceBlueprintWrapper* UAIFwPerceptionTreeInstanceBlueprintWrapper::RunPerceptionTree(class AActor* Target, class UAIFwBehaviorTree* Template)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwPerceptionTreeInstanceBlueprintWrapper", "RunPerceptionTree");

	Params::AIFwPerceptionTreeInstanceBlueprintWrapper_RunPerceptionTree Parms{};

	Parms.Target = Target;
	Parms.Template = Template;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// DelegateFunction AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UAIFwPerceptionTreeInstanceBlueprintWrapper*QueryInstance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwPerceptionTreeInstanceBlueprintWrapper::AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature(class UAIFwPerceptionTreeInstanceBlueprintWrapper* QueryInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwPerceptionTreeInstanceBlueprintWrapper", "AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature");

	Params::AIFwPerceptionTreeInstanceBlueprintWrapper_AIFwOnPerceptionTreeFinishedWrapper__DelegateSignature Parms{};

	Parms.QueryInstance = QueryInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIFwPerceptionTreeInstanceBlueprintWrapper::GetResultCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwPerceptionTreeInstanceBlueprintWrapper", "GetResultCount");

	Params::AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultCount Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultsAsActors
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class AActor*> UAIFwPerceptionTreeInstanceBlueprintWrapper::GetResultsAsActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwPerceptionTreeInstanceBlueprintWrapper", "GetResultsAsActors");

	Params::AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsActors Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwPerceptionTreeInstanceBlueprintWrapper.GetResultsAsLocations
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UAIFwPerceptionTreeInstanceBlueprintWrapper::GetResultsAsLocations()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwPerceptionTreeInstanceBlueprintWrapper", "GetResultsAsLocations");

	Params::AIFwPerceptionTreeInstanceBlueprintWrapper_GetResultsAsLocations Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.ClearValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardBlueprintLibrary::ClearValue(struct FAIFwBlackboard* Blackboard, const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "ClearValue");

	Params::AIFwBlackboardBlueprintLibrary_ClearValue Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Blackboard != nullptr)
		*Blackboard = std::move(Parms.Blackboard);
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIFwBlackboardBlueprintLibrary::GetValueAsBool(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "GetValueAsBool");

	Params::AIFwBlackboardBlueprintLibrary_GetValueAsBool Parms{};

	Parms.Blackboard = std::move(Blackboard);
	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UAIFwBlackboardBlueprintLibrary::GetValueAsClass(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "GetValueAsClass");

	Params::AIFwBlackboardBlueprintLibrary_GetValueAsClass Parms{};

	Parms.Blackboard = std::move(Blackboard);
	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIFwBlackboardBlueprintLibrary::GetValueAsFloat(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "GetValueAsFloat");

	Params::AIFwBlackboardBlueprintLibrary_GetValueAsFloat Parms{};

	Parms.Blackboard = std::move(Blackboard);
	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIFwBlackboardBlueprintLibrary::GetValueAsInt(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "GetValueAsInt");

	Params::AIFwBlackboardBlueprintLibrary_GetValueAsInt Parms{};

	Parms.Blackboard = std::move(Blackboard);
	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UAIFwBlackboardBlueprintLibrary::GetValueAsName(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "GetValueAsName");

	Params::AIFwBlackboardBlueprintLibrary_GetValueAsName Parms{};

	Parms.Blackboard = std::move(Blackboard);
	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAIFwBlackboardBlueprintLibrary::GetValueAsObject(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "GetValueAsObject");

	Params::AIFwBlackboardBlueprintLibrary_GetValueAsObject Parms{};

	Parms.Blackboard = std::move(Blackboard);
	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsObjectArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UAIFwBlackboardBlueprintLibrary::GetValueAsObjectArray(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "GetValueAsObjectArray");

	Params::AIFwBlackboardBlueprintLibrary_GetValueAsObjectArray Parms{};

	Parms.Blackboard = std::move(Blackboard);
	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIFwBlackboardBlueprintLibrary::GetValueAsString(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "GetValueAsString");

	Params::AIFwBlackboardBlueprintLibrary_GetValueAsString Parms{};

	Parms.Blackboard = std::move(Blackboard);
	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIFwBlackboardBlueprintLibrary::GetValueAsVector(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "GetValueAsVector");

	Params::AIFwBlackboardBlueprintLibrary_GetValueAsVector Parms{};

	Parms.Blackboard = std::move(Blackboard);
	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.GetValueAsVectorArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UAIFwBlackboardBlueprintLibrary::GetValueAsVectorArray(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "GetValueAsVectorArray");

	Params::AIFwBlackboardBlueprintLibrary_GetValueAsVectorArray Parms{};

	Parms.Blackboard = std::move(Blackboard);
	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.IsValidKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIFwBlackboardBlueprintLibrary::IsValidKey(const struct FAIFwBlackboard& Blackboard, const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "IsValidKey");

	Params::AIFwBlackboardBlueprintLibrary_IsValidKey Parms{};

	Parms.Blackboard = std::move(Blackboard);
	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsBool
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    BoolValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardBlueprintLibrary::SetValueAsBool(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, bool BoolValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "SetValueAsBool");

	Params::AIFwBlackboardBlueprintLibrary_SetValueAsBool Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.BoolValue = BoolValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Blackboard != nullptr)
		*Blackboard = std::move(Parms.Blackboard);
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsClass
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                           ClassValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardBlueprintLibrary::SetValueAsClass(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, class UClass* ClassValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "SetValueAsClass");

	Params::AIFwBlackboardBlueprintLibrary_SetValueAsClass Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.ClassValue = ClassValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Blackboard != nullptr)
		*Blackboard = std::move(Parms.Blackboard);
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   FloatValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardBlueprintLibrary::SetValueAsFloat(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, float FloatValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "SetValueAsFloat");

	Params::AIFwBlackboardBlueprintLibrary_SetValueAsFloat Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.FloatValue = FloatValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Blackboard != nullptr)
		*Blackboard = std::move(Parms.Blackboard);
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsInt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   IntValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardBlueprintLibrary::SetValueAsInt(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, int32 IntValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "SetValueAsInt");

	Params::AIFwBlackboardBlueprintLibrary_SetValueAsInt Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.IntValue = IntValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Blackboard != nullptr)
		*Blackboard = std::move(Parms.Blackboard);
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             NameValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardBlueprintLibrary::SetValueAsName(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, class FName NameValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "SetValueAsName");

	Params::AIFwBlackboardBlueprintLibrary_SetValueAsName Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.NameValue = NameValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Blackboard != nullptr)
		*Blackboard = std::move(Parms.Blackboard);
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          ObjectValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardBlueprintLibrary::SetValueAsObject(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, class UObject* ObjectValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "SetValueAsObject");

	Params::AIFwBlackboardBlueprintLibrary_SetValueAsObject Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.ObjectValue = ObjectValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Blackboard != nullptr)
		*Blackboard = std::move(Parms.Blackboard);
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsObjectArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>                  ObjectArray                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAIFwBlackboardBlueprintLibrary::SetValueAsObjectArray(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const TArray<class UObject*>& ObjectArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "SetValueAsObjectArray");

	Params::AIFwBlackboardBlueprintLibrary_SetValueAsObjectArray Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.ObjectArray = std::move(ObjectArray);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Blackboard != nullptr)
		*Blackboard = std::move(Parms.Blackboard);
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           StringValue                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardBlueprintLibrary::SetValueAsString(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const class FString& StringValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "SetValueAsString");

	Params::AIFwBlackboardBlueprintLibrary_SetValueAsString Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.StringValue = std::move(StringValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Blackboard != nullptr)
		*Blackboard = std::move(Parms.Blackboard);
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsVector
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          VectorValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardBlueprintLibrary::SetValueAsVector(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const struct FVector& VectorValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "SetValueAsVector");

	Params::AIFwBlackboardBlueprintLibrary_SetValueAsVector Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.VectorValue = std::move(VectorValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Blackboard != nullptr)
		*Blackboard = std::move(Parms.Blackboard);
}


// Function AIFramework.AIFwBlackboardBlueprintLibrary.SetValueAsVectorArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIFwBlackboard                  Blackboard                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  VectorArray                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAIFwBlackboardBlueprintLibrary::SetValueAsVectorArray(struct FAIFwBlackboard* Blackboard, const class FString& KeyName, const TArray<struct FVector>& VectorArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwBlackboardBlueprintLibrary", "SetValueAsVectorArray");

	Params::AIFwBlackboardBlueprintLibrary_SetValueAsVectorArray Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.VectorArray = std::move(VectorArray);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Blackboard != nullptr)
		*Blackboard = std::move(Parms.Blackboard);
}


// Function AIFramework.AIFwBlackboardComponent.BindToUE4Blackboard
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBlackboardComponent*             OtherBlackboard                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             OtherKeyName                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::BindToUE4Blackboard(const class FString& KeyName, class UBlackboardComponent* OtherBlackboard, const class FName& OtherKeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "BindToUE4Blackboard");

	Params::AIFwBlackboardComponent_BindToUE4Blackboard Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.OtherBlackboard = OtherBlackboard;
	Parms.OtherKeyName = OtherKeyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.ClearValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::ClearValue(const class FString& KeyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "ClearValue");

	Params::AIFwBlackboardComponent_ClearValue Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    BoolValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsBool(const class FString& KeyName, bool BoolValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsBool");

	Params::AIFwBlackboardComponent_SetValueAsBool Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.BoolValue = BoolValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                           ClassValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsClass(const class FString& KeyName, class UClass* ClassValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsClass");

	Params::AIFwBlackboardComponent_SetValueAsClass Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.ClassValue = ClassValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsEnum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                                   EnumValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsEnum(const class FString& KeyName, uint8 EnumValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsEnum");

	Params::AIFwBlackboardComponent_SetValueAsEnum Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.EnumValue = EnumValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   FloatValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsFloat(const class FString& KeyName, float FloatValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsFloat");

	Params::AIFwBlackboardComponent_SetValueAsFloat Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.FloatValue = FloatValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   IntValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsInt(const class FString& KeyName, int32 IntValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsInt");

	Params::AIFwBlackboardComponent_SetValueAsInt Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.IntValue = IntValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsIntArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                           IntArray                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsIntArray(const class FString& KeyName, const TArray<int32>& IntArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsIntArray");

	Params::AIFwBlackboardComponent_SetValueAsIntArray Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.IntArray = std::move(IntArray);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             NameValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsName(const class FString& KeyName, class FName NameValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsName");

	Params::AIFwBlackboardComponent_SetValueAsName Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.NameValue = NameValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          ObjectValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsObject(const class FString& KeyName, class UObject* ObjectValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsObject");

	Params::AIFwBlackboardComponent_SetValueAsObject Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.ObjectValue = ObjectValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsObjectArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>                  ObjectArray                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsObjectArray(const class FString& KeyName, const TArray<class UObject*>& ObjectArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsObjectArray");

	Params::AIFwBlackboardComponent_SetValueAsObjectArray Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.ObjectArray = std::move(ObjectArray);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         VectorValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsRotator(const class FString& KeyName, const struct FRotator& VectorValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsRotator");

	Params::AIFwBlackboardComponent_SetValueAsRotator Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.VectorValue = std::move(VectorValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           StringValue                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsString(const class FString& KeyName, const class FString& StringValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsString");

	Params::AIFwBlackboardComponent_SetValueAsString Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.StringValue = std::move(StringValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsVector
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          VectorValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsVector(const class FString& KeyName, const struct FVector& VectorValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsVector");

	Params::AIFwBlackboardComponent_SetValueAsVector Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.VectorValue = std::move(VectorValue);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.SetValueAsVectorArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  VectorArray                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAIFwBlackboardComponent::SetValueAsVectorArray(const class FString& KeyName, const TArray<struct FVector>& VectorArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "SetValueAsVectorArray");

	Params::AIFwBlackboardComponent_SetValueAsVectorArray Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.VectorArray = std::move(VectorArray);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIFwBlackboardComponent::GetValueAsBool(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsBool");

	Params::AIFwBlackboardComponent_GetValueAsBool Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UAIFwBlackboardComponent::GetValueAsClass(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsClass");

	Params::AIFwBlackboardComponent_GetValueAsClass Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsEnum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UAIFwBlackboardComponent::GetValueAsEnum(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsEnum");

	Params::AIFwBlackboardComponent_GetValueAsEnum Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIFwBlackboardComponent::GetValueAsFloat(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsFloat");

	Params::AIFwBlackboardComponent_GetValueAsFloat Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIFwBlackboardComponent::GetValueAsInt(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsInt");

	Params::AIFwBlackboardComponent_GetValueAsInt Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsIntArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> UAIFwBlackboardComponent::GetValueAsIntArray(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsIntArray");

	Params::AIFwBlackboardComponent_GetValueAsIntArray Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIFwBlackboardComponent::GetValueAsLocation(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsLocation");

	Params::AIFwBlackboardComponent_GetValueAsLocation Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UAIFwBlackboardComponent::GetValueAsName(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsName");

	Params::AIFwBlackboardComponent_GetValueAsName Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UAIFwBlackboardComponent::GetValueAsObject(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsObject");

	Params::AIFwBlackboardComponent_GetValueAsObject Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsObjectArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UAIFwBlackboardComponent::GetValueAsObjectArray(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsObjectArray");

	Params::AIFwBlackboardComponent_GetValueAsObjectArray Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UAIFwBlackboardComponent::GetValueAsRotation(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsRotation");

	Params::AIFwBlackboardComponent_GetValueAsRotation Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsRotator
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UAIFwBlackboardComponent::GetValueAsRotator(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsRotator");

	Params::AIFwBlackboardComponent_GetValueAsRotator Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAIFwBlackboardComponent::GetValueAsString(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsString");

	Params::AIFwBlackboardComponent_GetValueAsString Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIFwBlackboardComponent::GetValueAsVector(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsVector");

	Params::AIFwBlackboardComponent_GetValueAsVector Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.GetValueAsVectorArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UAIFwBlackboardComponent::GetValueAsVectorArray(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "GetValueAsVectorArray");

	Params::AIFwBlackboardComponent_GetValueAsVectorArray Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwBlackboardComponent.IsValidKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIFwBlackboardComponent::IsValidKey(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwBlackboardComponent", "IsValidKey");

	Params::AIFwBlackboardComponent_IsValidKey Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwFactionComponent.OnRep_FactionNameString
// (Final, Native, Protected)

void UAIFwFactionComponent::OnRep_FactionNameString()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwFactionComponent", "OnRep_FactionNameString");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHierarchyComponent.Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIFwHierarchyComponent::Add(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHierarchyComponent", "Add");

	Params::AIFwHierarchyComponent_Add Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHierarchyComponent.Remove
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIFwHierarchyComponent::Remove(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHierarchyComponent", "Remove");

	Params::AIFwHierarchyComponent_Remove Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHierarchyComponent.SendMessageToChildren
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             Message                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          MessageSource                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           IgnoreActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHierarchyComponent::SendMessageToChildren(class FName Message, class UObject* MessageSource, bool bSuccess, class AActor* IgnoreActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHierarchyComponent", "SendMessageToChildren");

	Params::AIFwHierarchyComponent_SendMessageToChildren Parms{};

	Parms.Message = Message;
	Parms.MessageSource = MessageSource;
	Parms.bSuccess = bSuccess;
	Parms.IgnoreActor = IgnoreActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHierarchyComponent.SendMessageToParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             Message                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          MessageSource                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHierarchyComponent::SendMessageToParent(class FName Message, class UObject* MessageSource, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHierarchyComponent", "SendMessageToParent");

	Params::AIFwHierarchyComponent_SendMessageToParent Parms{};

	Parms.Message = Message;
	Parms.MessageSource = MessageSource;
	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHierarchyComponent.SendMessageToSiblings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                             Message                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          MessageSource                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHierarchyComponent::SendMessageToSiblings(class FName Message, class UObject* MessageSource, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHierarchyComponent", "SendMessageToSiblings");

	Params::AIFwHierarchyComponent_SendMessageToSiblings Parms{};

	Parms.Message = Message;
	Parms.MessageSource = MessageSource;
	Parms.bSuccess = bSuccess;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlways
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIFwHTNOperator*                 Operator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNTempOp_Always*            ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwHTNTempOp_Always* UAIFwHTNBlueprintLibrary::HTNAlways(class UAIFwHTNOperator* Operator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNBlueprintLibrary", "HTNAlways");

	Params::AIFwHTNBlueprintLibrary_HTNAlways Parms{};

	Parms.Operator = Operator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlwaysAfter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIFwHTNOperator*                 OperatorA                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNOperator*                 OperatorB                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNTempOp_AlwaysAfter*       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwHTNTempOp_AlwaysAfter* UAIFwHTNBlueprintLibrary::HTNAlwaysAfter(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNBlueprintLibrary", "HTNAlwaysAfter");

	Params::AIFwHTNBlueprintLibrary_HTNAlwaysAfter Parms{};

	Parms.OperatorA = OperatorA;
	Parms.OperatorB = OperatorB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNBlueprintLibrary.HTNAlwaysBefore
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIFwHTNOperator*                 OperatorA                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNOperator*                 OperatorB                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNTempOp_AlwaysBefore*      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwHTNTempOp_AlwaysBefore* UAIFwHTNBlueprintLibrary::HTNAlwaysBefore(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNBlueprintLibrary", "HTNAlwaysBefore");

	Params::AIFwHTNBlueprintLibrary_HTNAlwaysBefore Parms{};

	Parms.OperatorA = OperatorA;
	Parms.OperatorB = OperatorB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNBlueprintLibrary.HTNApply
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                           TaskName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           MethodName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNOperator_Apply*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwHTNOperator_Apply* UAIFwHTNBlueprintLibrary::HTNApply(const class FString& TaskName, const class FString& MethodName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNBlueprintLibrary", "HTNApply");

	Params::AIFwHTNBlueprintLibrary_HTNApply Parms{};

	Parms.TaskName = std::move(TaskName);
	Parms.MethodName = std::move(MethodName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNBlueprintLibrary.HTNNot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIFwHTNOperator*                 Operator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNOperator_Not*             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwHTNOperator_Not* UAIFwHTNBlueprintLibrary::HTNNot(class UAIFwHTNOperator* Operator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNBlueprintLibrary", "HTNNot");

	Params::AIFwHTNBlueprintLibrary_HTNNot Parms{};

	Parms.Operator = Operator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNBlueprintLibrary.HTNOccur
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                           TaskName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNOperator_Occur*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwHTNOperator_Occur* UAIFwHTNBlueprintLibrary::HTNOccur(const class FString& TaskName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNBlueprintLibrary", "HTNOccur");

	Params::AIFwHTNBlueprintLibrary_HTNOccur Parms{};

	Parms.TaskName = std::move(TaskName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIFwHTNOperator*                 Operator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNTempOp_Sometime*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwHTNTempOp_Sometime* UAIFwHTNBlueprintLibrary::HTNSometime(class UAIFwHTNOperator* Operator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNBlueprintLibrary", "HTNSometime");

	Params::AIFwHTNBlueprintLibrary_HTNSometime Parms{};

	Parms.Operator = Operator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometimeAfter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIFwHTNOperator*                 OperatorA                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNOperator*                 OperatorB                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNTempOp_SometimeAfter*     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwHTNTempOp_SometimeAfter* UAIFwHTNBlueprintLibrary::HTNSometimeAfter(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNBlueprintLibrary", "HTNSometimeAfter");

	Params::AIFwHTNBlueprintLibrary_HTNSometimeAfter Parms{};

	Parms.OperatorA = OperatorA;
	Parms.OperatorB = OperatorB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNBlueprintLibrary.HTNSometimeBefore
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAIFwHTNOperator*                 OperatorA                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNOperator*                 OperatorB                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNTempOp_SometimeBefore*    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwHTNTempOp_SometimeBefore* UAIFwHTNBlueprintLibrary::HTNSometimeBefore(class UAIFwHTNOperator* OperatorA, class UAIFwHTNOperator* OperatorB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNBlueprintLibrary", "HTNSometimeBefore");

	Params::AIFwHTNBlueprintLibrary_HTNSometimeBefore Parms{};

	Parms.OperatorA = OperatorA;
	Parms.OperatorB = OperatorB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNPlanningComponent.FindMethodByName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIFwHTNTask                     Task                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                           Param_Name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIFwHTNMethod                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FAIFwHTNMethod UAIFwHTNPlanningComponent::FindMethodByName(const struct FAIFwHTNTask& Task, const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNPlanningComponent", "FindMethodByName");

	Params::AIFwHTNPlanningComponent_FindMethodByName Parms{};

	Parms.Task = std::move(Task);
	Parms.Param_Name = std::move(Param_Name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNPlanningComponent.IsValidMethod
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwHTNMethod                   Method                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIFwHTNPlanningComponent::IsValidMethod(const struct FAIFwHTNMethod& Method)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNPlanningComponent", "IsValidMethod");

	Params::AIFwHTNPlanningComponent_IsValidMethod Parms{};

	Parms.Method = std::move(Method);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNPlanningComponent.IsValidTask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAIFwHTNTask                     Task                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIFwHTNPlanningComponent::IsValidTask(const struct FAIFwHTNTask& Task)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNPlanningComponent", "IsValidTask");

	Params::AIFwHTNPlanningComponent_IsValidTask Parms{};

	Parms.Task = std::move(Task);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNPlanningComponent.SetName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAIFwHTNMethod                   Method                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class FString                           Param_Name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHTNPlanningComponent::SetName(const struct FAIFwHTNMethod& Method, const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwHTNPlanningComponent", "SetName");

	Params::AIFwHTNPlanningComponent_SetName Parms{};

	Parms.Method = std::move(Method);
	Parms.Param_Name = std::move(Param_Name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHTNPlanningComponent.AddGoalPreference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Param_Name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNOperator*                 Operator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bHardConstraint                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHTNPlanningComponent::AddGoalPreference(const class FString& Param_Name, class UAIFwHTNOperator* Operator, bool bHardConstraint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNPlanningComponent", "AddGoalPreference");

	Params::AIFwHTNPlanningComponent_AddGoalPreference Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Operator = Operator;
	Parms.bHardConstraint = bHardConstraint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHTNPlanningComponent.AddMetricWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           PreferenceName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Weight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHTNPlanningComponent::AddMetricWeight(const class FString& PreferenceName, float Weight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNPlanningComponent", "AddMetricWeight");

	Params::AIFwHTNPlanningComponent_AddMetricWeight Parms{};

	Parms.PreferenceName = std::move(PreferenceName);
	Parms.Weight = Weight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHTNPlanningComponent.AddPreconditionPreference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Param_Name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           TaskName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           MethodName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNOperator*                 Operator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bHardConstraint                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHTNPlanningComponent::AddPreconditionPreference(const class FString& Param_Name, const class FString& TaskName, const class FString& MethodName, class UAIFwHTNOperator* Operator, bool bHardConstraint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNPlanningComponent", "AddPreconditionPreference");

	Params::AIFwHTNPlanningComponent_AddPreconditionPreference Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.TaskName = std::move(TaskName);
	Parms.MethodName = std::move(MethodName);
	Parms.Operator = Operator;
	Parms.bHardConstraint = bHardConstraint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHTNPlanningComponent.AddTrajectoryPreference
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Param_Name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwHTNTemporalModalOperator*    TemporalOperator                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bHardConstraint                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHTNPlanningComponent::AddTrajectoryPreference(const class FString& Param_Name, class UAIFwHTNTemporalModalOperator* TemporalOperator, bool bHardConstraint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNPlanningComponent", "AddTrajectoryPreference");

	Params::AIFwHTNPlanningComponent_AddTrajectoryPreference Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.TemporalOperator = TemporalOperator;
	Parms.bHardConstraint = bHardConstraint;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHTNPlanningComponent.AppendDomain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAIFwHTNDomain*                   NewDomain                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bOverrideCompound                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHTNPlanningComponent::AppendDomain(class UAIFwHTNDomain* NewDomain, bool bOverrideCompound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNPlanningComponent", "AppendDomain");

	Params::AIFwHTNPlanningComponent_AppendDomain Parms{};

	Parms.NewDomain = NewDomain;
	Parms.bOverrideCompound = bOverrideCompound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHTNPlanningComponent.FindMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           TaskName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           MethodName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIFwHTNMethod                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FAIFwHTNMethod UAIFwHTNPlanningComponent::FindMethod(const class FString& TaskName, const class FString& MethodName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNPlanningComponent", "FindMethod");

	Params::AIFwHTNPlanningComponent_FindMethod Parms{};

	Parms.TaskName = std::move(TaskName);
	Parms.MethodName = std::move(MethodName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNPlanningComponent.FindTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           Param_Name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIFwHTNTask                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FAIFwHTNTask UAIFwHTNPlanningComponent::FindTask(const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNPlanningComponent", "FindTask");

	Params::AIFwHTNPlanningComponent_FindTask Parms{};

	Parms.Param_Name = std::move(Param_Name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNState.SetValueAsBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    BoolValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHTNState::SetValueAsBool(const class FString& KeyName, bool BoolValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNState", "SetValueAsBool");

	Params::AIFwHTNState_SetValueAsBool Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.BoolValue = BoolValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHTNState.SetValueAsEnum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                                   EnumValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHTNState::SetValueAsEnum(const class FString& KeyName, uint8 EnumValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNState", "SetValueAsEnum");

	Params::AIFwHTNState_SetValueAsEnum Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.EnumValue = EnumValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHTNState.SetValueAsFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   FloatValue                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHTNState::SetValueAsFloat(const class FString& KeyName, float FloatValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNState", "SetValueAsFloat");

	Params::AIFwHTNState_SetValueAsFloat Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.FloatValue = FloatValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHTNState.SetValueAsInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   IntValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwHTNState::SetValueAsInt(const class FString& KeyName, int32 IntValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNState", "SetValueAsInt");

	Params::AIFwHTNState_SetValueAsInt Parms{};

	Parms.KeyName = std::move(KeyName);
	Parms.IntValue = IntValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwHTNState.GetValueAsBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIFwHTNState::GetValueAsBool(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNState", "GetValueAsBool");

	Params::AIFwHTNState_GetValueAsBool Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNState.GetValueAsEnum
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 UAIFwHTNState::GetValueAsEnum(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNState", "GetValueAsEnum");

	Params::AIFwHTNState_GetValueAsEnum Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNState.GetValueAsFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIFwHTNState::GetValueAsFloat(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNState", "GetValueAsFloat");

	Params::AIFwHTNState_GetValueAsFloat Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNState.GetValueAsInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIFwHTNState::GetValueAsInt(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNState", "GetValueAsInt");

	Params::AIFwHTNState_GetValueAsInt Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwHTNState.IsValidKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                           KeyName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIFwHTNState::IsValidKey(const class FString& KeyName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwHTNState", "IsValidKey");

	Params::AIFwHTNState_IsValidKey Parms{};

	Parms.KeyName = std::move(KeyName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwInfluenceMapLayer.RegisterSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Radius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Value                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwInfluenceMapLayer::RegisterSource(class AActor* Actor, float Radius, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwInfluenceMapLayer", "RegisterSource");

	Params::AIFwInfluenceMapLayer_RegisterSource Parms{};

	Parms.Actor = Actor;
	Parms.Radius = Radius;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwInfluenceMapManager.CreateOrGetLayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Param_Name                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIFwInfluenceMapLayer*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIFwInfluenceMapLayer* UAIFwInfluenceMapManager::CreateOrGetLayer(class UObject* WorldContextObject, const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("AIFwInfluenceMapManager", "CreateOrGetLayer");

	Params::AIFwInfluenceMapManager_CreateOrGetLayer Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Param_Name = std::move(Param_Name);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwReactiveComponent.AddSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAIFwReactiveSkill>   Skill                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwReactiveComponent::AddSkill(TSubclassOf<class UAIFwReactiveSkill> Skill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwReactiveComponent", "AddSkill");

	Params::AIFwReactiveComponent_AddSkill Parms{};

	Parms.Skill = Skill;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwReactiveSkill.NewAITask
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TSubclassOf<class UAITask>              TaskClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EAITaskPriority                         InPriority                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask* UAIFwReactiveSkill::NewAITask(TSubclassOf<class UAITask> TaskClass, EAITaskPriority InPriority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwReactiveSkill", "NewAITask");

	Params::AIFwReactiveSkill_NewAITask Parms{};

	Parms.TaskClass = TaskClass;
	Parms.InPriority = InPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwReactiveSkill.RunAITask
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UAITask*                          Task                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwReactiveSkill::RunAITask(class UAITask* Task)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwReactiveSkill", "RunAITask");

	Params::AIFwReactiveSkill_RunAITask Parms{};

	Parms.Task = Task;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwReactiveSkill_Message.ReceivePulse
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          Sender                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwReactiveSkill_Message::ReceivePulse(class UObject* Sender, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwReactiveSkill_Message", "ReceivePulse");

	Params::AIFwReactiveSkill_Message_ReceivePulse Parms{};

	Parms.Sender = Sender;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIFramework.AIFwReactiveSkill_PerceptionTree.ReceiveOnPerceive
// (Event, Protected, BlueprintEvent)

void UAIFwReactiveSkill_PerceptionTree::ReceiveOnPerceive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwReactiveSkill_PerceptionTree", "ReceiveOnPerceive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AIFramework.AIFwReactiveSkill_SensedTarget.ReceiveOnLost
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwReactiveSkill_SensedTarget::ReceiveOnLost(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwReactiveSkill_SensedTarget", "ReceiveOnLost");

	Params::AIFwReactiveSkill_SensedTarget_ReceiveOnLost Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIFramework.AIFwReactiveSkill_SensedTarget.ReceiveOnSensed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                           Target                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwReactiveSkill_SensedTarget::ReceiveOnSensed(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwReactiveSkill_SensedTarget", "ReceiveOnSensed");

	Params::AIFwReactiveSkill_SensedTarget_ReceiveOnSensed Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIFramework.AIFwReactiveSkill_TakeDamage.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDamageType*                      DamageType                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                      InstigatedBy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwReactiveSkill_TakeDamage::ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwReactiveSkill_TakeDamage", "ReceiveAnyDamage");

	Params::AIFwReactiveSkill_TakeDamage_ReceiveAnyDamage Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIFramework.AIFwReactiveSkill_TakeDamage.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDamageType*                      DamageType                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          HitLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              HitComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             BoneName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ShotFromDirection                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                      InstigatedBy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwReactiveSkill_TakeDamage::ReceivePointDamage(float Damage, const class UDamageType* DamageType, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwReactiveSkill_TakeDamage", "ReceivePointDamage");

	Params::AIFwReactiveSkill_TakeDamage_ReceivePointDamage Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.ShotFromDirection = std::move(ShotFromDirection);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AIFramework.AIFwReactiveSkill_TakeDamage.TakeAnyDamageImpl
// (Final, Native, Private)
// Parameters:
// class AActor*                           DamagedActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDamageType*                      DamageType                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                      InstigatedBy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwReactiveSkill_TakeDamage::TakeAnyDamageImpl(class AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwReactiveSkill_TakeDamage", "TakeAnyDamageImpl");

	Params::AIFwReactiveSkill_TakeDamage_TakeAnyDamageImpl Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwReactiveSkill_TakeDamage.TakePointDamageImpl
// (Final, Native, Private, HasDefaults)
// Parameters:
// class AActor*                           DamagedActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Damage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AController*                      InstigatedBy                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          HitLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*              HitComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                             BoneName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          ShotFromDirection                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDamageType*                      DamageType                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           DamageCauser                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwReactiveSkill_TakeDamage::TakePointDamageImpl(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, const class UDamageType* DamageType, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwReactiveSkill_TakeDamage", "TakePointDamageImpl");

	Params::AIFwReactiveSkill_TakeDamage_TakePointDamageImpl Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.ShotFromDirection = std::move(ShotFromDirection);
	Parms.DamageType = DamageType;
	Parms.DamageCauser = DamageCauser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwRuntimeSettings.OnNavigationGenerationFinished
// (Final, Native, Public)
// Parameters:
// class ANavigationData*                  NavData                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwRuntimeSettings::OnNavigationGenerationFinished(class ANavigationData* NavData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwRuntimeSettings", "OnNavigationGenerationFinished");

	Params::AIFwRuntimeSettings_OnNavigationGenerationFinished Parms{};

	Parms.NavData = NavData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwSmartObjectComponent.FindEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           User                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Usage                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIFwSmartObjectComponent::FindEvent(class AActor* User, const class FString& Usage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwSmartObjectComponent", "FindEvent");

	Params::AIFwSmartObjectComponent_FindEvent Parms{};

	Parms.User = User;
	Parms.Usage = std::move(Usage);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwSmartObjectComponent.Use
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                           User                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           Usage                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   EventId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIFwSmartObjectComponent::Use(class AActor* User, const class FString& Usage, int32 EventId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwSmartObjectComponent", "Use");

	Params::AIFwSmartObjectComponent_Use Parms{};

	Parms.User = User;
	Parms.Usage = std::move(Usage);
	Parms.EventId = EventId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function AIFramework.AIFwStimuliSourceComponent.SetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                                    bNewVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwStimuliSourceComponent::SetVisibility(bool bNewVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwStimuliSourceComponent", "SetVisibility");

	Params::AIFwStimuliSourceComponent_SetVisibility Parms{};

	Parms.bNewVisible = bNewVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwSystem.OnEntityDestroyed
// (Final, Native, Public)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwSystem::OnEntityDestroyed(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwSystem", "OnEntityDestroyed");

	Params::AIFwSystem_OnEntityDestroyed Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function AIFramework.AIFwSystem.OnEntityEndPlay
// (Final, Native, Public)
// Parameters:
// class AActor*                           Actor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// EEndPlayReason                          EndPlayReason                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIFwSystem::OnEntityEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AIFwSystem", "OnEntityEndPlay");

	Params::AIFwSystem_OnEntityEndPlay Parms{};

	Parms.Actor = Actor;
	Parms.EndPlayReason = EndPlayReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}

